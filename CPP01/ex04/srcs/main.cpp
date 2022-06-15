#include "Replace.hpp"

std::string	do_replace(std::string str, std::string before, std::string after)
{
	size_t	find = -1;
	size_t	pos = 0;

	while ((find = str.find(before, pos)) != std::string::npos)
	{
			if (before.empty())
				break ;
			str.erase(find, before.length());
			str.insert(find, after);
			pos = find + before.length();
	}
	return (str);
}

std::string	replace_nl(std::string str)
{
	size_t	find = -1;
	size_t	pos = 0;

	while (((find = str.find("\\n", pos)) != std::string::npos) && pos < str.length())
	{
			str.erase(find, 2);
			str.insert(find, "\n");
			pos = find++;
	}
	return (str);
}

int	main (int argc, char **argv)
{
	std::string	content;
	std::string	newContent;
	std::string	fileType = ".replace";
	std::string	newFileName;
	char c;

	if (argc != 4)
	{
		LOG("Arguments can only be:\n\t-> <Filename>\n\t-> <s1> (to be replaced)\n\t-> <s2> (to replace with)");
		exit(EXIT_FAILURE);
	}
	std::ifstream file;
	file.open(argv[1], std::ios::in);
	if (!file)
	{
		std::cerr << "Error - file could not be opened" << std::endl;
		exit(EXIT_FAILURE);
	}
	newFileName = argv[1] + fileType;
	std::fstream newFile;
	newFile.open(newFileName, std::ios::app);
	while (file.get(c))
		content += c;
	newContent = do_replace(content, replace_nl(argv[2]), replace_nl(argv[3]));
	newFile << newContent;
	newFile.close();
	file.close();
}

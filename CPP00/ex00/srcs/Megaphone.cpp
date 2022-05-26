#include <iostream>

int	main(int argc, char **argv) {

	int i;
	int j;

	if (argc > 1)
		for (i = 1; argv[i]; i++)
		{
			for (j = 0; argv[i][j]; j++)
				putchar(toupper(argv[i][j]));
			std::cout << " ";
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;

}

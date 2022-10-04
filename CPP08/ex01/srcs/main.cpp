#include "Span.hpp"

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;

	{
		Span test(100000);
		std::vector<int> checker;

		LOG(YELLOW << "Empty vector:" << RESET);
		LOG(BLUE << "size: " << RESET << test.getVector().size());
		LOG(BLUE << "capacity: " << RESET << test.getVector().capacity());
		try {
			for (int i = 1; i < 100000; i++) {
				if (i < test.getLimit())
					std::cout << GREEN;
				else
					std::cout << RED;
				LOG("Adding " << i);
				test.addNumber(i);
				std::cout << RESET;
		}
		}
		catch (Span::overLimitException &e) {
			LOG(e.what() << " Can't had more numbers" << RESET);
			return 0;
		}
		checker = test.getVector();
		LOG(YELLOW << "Not-empty vector(supposedly):" RESET);
		for (std::vector<int>::iterator it = checker.begin(); it != checker.end(); it++)
			std::cout << " " << *it;
		LOG("");
		try {
			LOG(YELLOW "Shortest Span is: " << RESET << test.shortestSpan());
			LOG(YELLOW "Longest Span is: " << RESET << test.longestSpan());
		}
		catch (Span::notEnoughNumsException& e) {
			LOG(e.what() << " Can't perform action" << RESET);
			return 0;
		}
	}
	{
		LOG("");
		LOG("");
		LOG("");
		Span				test2(10);
		std::vector<int>	vec(4, 50);
		int 				arr[4] = {1, 8, 6, 98};

		try {
			test2.addNumberRange(arr, arr + 4);
			test2.addNumberRange(vec.begin(), vec.end());
		}
			catch (Span::overLimitException &e) {
			LOG(e.what() << " Can't had more numbers" << RESET);
			return 0;
		}
		try {
			LOG(YELLOW "Shortest Span is: " << RESET << test2.shortestSpan());
			LOG(YELLOW "Longest Span is: " << RESET << test2.longestSpan());
		}
		catch (Span::notEnoughNumsException& e) {
			LOG(e.what() << " Can't perform action" << RESET);
		}
		std::vector<int> checker = test2.getVector();
		LOG(YELLOW << "Not-empty vector(supposedly):" RESET);
		for (std::vector<int>::iterator it = checker.begin(); it != checker.end(); it++)
			std::cout << " " << *it;
		LOG("");
		
	}
}
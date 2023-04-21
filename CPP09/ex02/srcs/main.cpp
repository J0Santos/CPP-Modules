#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	PmergeMe	pm;

	if (argc < 2) {
		std::cout << "Usage: ./PmergeMe [number] [number] ..." << std::endl;
		return (1);
	}
	while (argc-- > 1)
		pm.fillSTLs(std::string(argv[argc]));
	

	return (0);
}
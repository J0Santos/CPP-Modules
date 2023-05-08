#include "PmergeMe.hpp"
#include <iomanip>

int	main(int argc, char **argv) {
	PmergeMe	pm;
	int	i = argc - 1;

	if (argc < 2) {
		std::cout << "Usage: ./PmergeMe [number] [number] ..." << std::endl;
		return (1);
	}
	while (argc-- > 1) {
		pm.fillSTLs(std::string(argv[argc]));
	}
	LOG("Before merge:");
	pm.printSTLs();
	pm.sort();
	LOG("After merge:");
	pm.printSTLs();
	LOG("Time to merge " << i << " elements with vector:");
	LOG(std::setprecision(6) << std::fixed << pm.getVectorTime());
	LOG("Time to merge " << i << " elements with list:");
	LOG(std::setprecision(6) << std::fixed << pm.getListTime());
	return (0);
}
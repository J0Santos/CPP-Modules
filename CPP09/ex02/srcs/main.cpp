#include "PmergeMe.hpp"

int	main(int argc, char **argv) {
	PmergeMe	pm;
	int	i = argc - 1;

	if (argc < 2) {
		std::cout << "Usage: ./PmergeMe [number] [number] ..." << std::endl;
		return (1);
	}
	while (argc-- > 1)
		pm.fillSTLs(std::string(argv[argc]));
		LOG("Before merge:");
		pm.printSTLs();
		pm.sortVector();
		pm.sortList();
		LOG("Time to merge " << i << " elements with vector:");
		LOG(pm.getVectorTime());
		LOG("Time to merge " << i << " elements with list:");
		LOG(pm.getListTime());
	return (0);
}
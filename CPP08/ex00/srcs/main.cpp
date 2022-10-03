#include "easyFind.hpp"
#include <vector>
#include <deque>
#include <list>

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;
	LOG(YELLOW << "Testing vectors" << RESET);
	std::vector<int>	myVector;
	int					toFind = 1;

	for (int i = 0; i <= 5; i++)
		myVector.push_back(i);
	LOG("Vector content:");
	for (int i = 0; i <= 5; i++)
		LOG(myVector[i]);
	try {
		LOG(CYAN << "Look for " << toFind << RESET);
		easyFind(myVector, toFind);
		LOG("Finished looking");
	}
	catch (std::exception& e) {
		LOG(RED << "Vector exception: couldn't find " << toFind << RESET);
	}
	LOG("");
	LOG(YELLOW << "Testing deque" << RESET);
	std::deque<int>	myDeque;
	for (int i = 0; i <= 5; i++)
		myDeque.push_back(i);
	LOG("Deque content:");
	for (int i = 0; i <= 5; i++)
		LOG(myDeque[i]);
	try {
		LOG(CYAN << "Look for " << toFind << RESET);
		easyFind(myDeque, toFind);
		LOG("Finished looking");
	}
	catch (std::exception& e) {
		LOG(RED << "Deque exception: couldn't find " << toFind << RESET);
	}
	LOG("");
	LOG(YELLOW << "Testing list" << RESET);
	std::list<int>	myList;
	for (int i = 0; i <= 5; i++)
		myList.push_back(i);
	LOG("List content:");
	for (std::list<int>::iterator it = myList.begin(); it != myList.end(); it++)
		LOG(*it);
	try {
		LOG(CYAN << "Look for " << toFind << RESET);
		easyFind(myList, toFind);
		LOG("Finished looking");
	}
	catch (std::exception& e) {
		LOG(RED << "List exception: couldn't find " << toFind << RESET);
	}
}
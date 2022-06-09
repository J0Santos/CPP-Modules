#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <string>
#include <fstream>

# ifndef LOG
#  define LOG(x) std::cout << x << std::endl
# endif

std::string	do_replace(std::string str, std::string before, std::string after);

#endif

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define LOG(x) std::cout << x << std::endl

bool validKey(std::string key, int lineNumber);
bool validValue(std::string value, int lineNumber);

#endif /* UTILS_HPP */
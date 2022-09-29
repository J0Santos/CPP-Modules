#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

# include <stdint.h>
# include "Data.hpp"

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif /* FUNCTIONS_HPP */
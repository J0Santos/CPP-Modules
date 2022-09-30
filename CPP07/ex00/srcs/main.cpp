#include "whatever.hpp"
#include "Colors.hpp"

int	main( int argc, char** argv ) {

	(void)argc;
	(void)argv;

	LOG(GREEN << "Int" << RESET);
	{
		int a = 42;
		int b = 21;

		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		::swap(a, b);
		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		LOG("Min: " << YELLOW << ::min(a, b) << RESET);
		LOG("Max: " << YELLOW << ::max(a, b) << RESET);
	}
	LOG("\n");
	LOG(GREEN << "Float" << RESET);
	{
		float a = 42.0f;
		float b = 21.0f;

		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		swap(a, b);
		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		LOG("Min: " << YELLOW << min(a, b) << RESET);
		LOG("Max: " << YELLOW << max(a, b) << RESET);
	}
	LOG("\n");
	LOG(GREEN << "Double" << RESET);
	{
		double a = 42.00;
		double b = 21.00;

		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		swap(a, b);
		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		LOG("Min: " << YELLOW << min(a, b) << RESET);
		LOG("Max: " << YELLOW << max(a, b) << RESET);
	}
	LOG("\n");
	LOG(GREEN << "String" << RESET);
	{
		std::string a = "hello";
		std::string b = "goodbye";

		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		swap(a, b);
		LOG("a: " << YELLOW << a << RESET << " b: " << YELLOW << b << RESET);
		LOG("Min: " << YELLOW << ::min(a, b) << RESET);
		LOG("Max: " << YELLOW << ::max(a, b) << RESET);
	}
}
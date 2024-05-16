#include "Main.hpp"
#include <iostream>
#include <stacktrace>

// required to fix multiple definition errors
// will fix this eventually by making libavpp a compiled library
#include "../deps/libavpp/src/av/Util.cpp"

int main(const int argc, const char *const *const argv)
{
	try
	{
		Main(argc, argv);
	}
	catch (const std::exception &e)
	{
		std::cerr << "audioviz: " << e.what() << '\n'
				  << std::stacktrace::current() << '\n';
		return EXIT_FAILURE;
	}
}

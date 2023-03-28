
#include <BitcoinExchange.hpp>
#include <fstream>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "error : Usage ./btc input_file" << std::endl;
		return (EXIT_FAILURE);
	}
	try {
		BitcoinExchange	obj;
		obj.run(av[1]);
	} catch (std::exception& e) {
		std::cerr << "exception : " << e.what() << std::endl;
	}
}
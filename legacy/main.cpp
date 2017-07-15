#include "clientconfig.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	std::string address, port;

	readConfigFile(address, port);
	cout << "Address: " << address << "\n";
	cout << "Port: " << port;
	return 0;
}




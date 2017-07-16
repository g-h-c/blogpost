import std.core;
import clientconfig;

using namespace std;

int main()
{
	std::string address, port;

	readConfigFile(address, port);
	cout << "Address: " << address << "\n";
	cout << "Port: " << port;
	return 0;
}




import clientconfig;
import tinyxml2;
import std.core;

using namespace std;
using namespace tinyxml2;

void readConfigFile(string& address, string& port)
{
	tinyxml2::XMLDocument doc;
	XMLElement* configuration;
	XMLElement* node;
	
	doc.LoadFile("config.xml");
	configuration = doc.FirstChildElement("configuration");
	node = configuration->FirstChildElement("server");
	address = node->Attribute("address", 0);
	port = node->Attribute("port", 0);
}



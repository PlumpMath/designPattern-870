#pragma once
#include"iostream"
class Packet
{
public:
	std::string protocol;
	std::string source;
	std::string s_port;
	std::string destination;
	std::string d_port;


	Packet(std::string protocol, std::string source, std::string s_port, std::string destination, std::string d_port)
	{
		this->destination = destination;
		this->d_port = d_port;
		this->protocol = protocol;
		this->source = source;
		this->s_port = s_port;
	}

};

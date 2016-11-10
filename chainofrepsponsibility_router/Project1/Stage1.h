#pragma once
#include"AbstractStage.h"

class Stage1: public AbstractStage
{
public:
	Stage1(std::string protocol, std::string source, std::string s_port, std::string destination, std::string d_port)
	{
		this->destination = destination;
		this->d_port = d_port;
		this->protocol = protocol;
		this->source = source;
		this->s_port = s_port;
	}


	void setNextStage(AbstractStage *Nstate);
	virtual bool check(Packet *p);
};

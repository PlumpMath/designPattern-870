#pragma once
#include"iostream"
#include"Packet.h"

class AbstractStage
{
public:
	std::string protocol;
	std::string source;
	std::string s_port;
	std::string destination;
	std::string d_port;
	AbstractStage *Nstate;
	bool result;

	virtual void setNextStage(AbstractStage *Nstate);
	virtual bool check(Packet *p);

};

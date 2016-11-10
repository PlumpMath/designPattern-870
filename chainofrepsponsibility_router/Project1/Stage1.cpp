#include "Stage1.h"

void Stage1::setNextStage(AbstractStage * Nstate)
{
	this->Nstate = Nstate;
}

bool Stage1::check(Packet * p)
{
	if ((p->destination == destination) && (p->source == source) && (p->d_port == d_port) && (p->s_port == s_port) && (p->protocol == protocol))
	{
		return result;
	}
	else if (Nstate == NULL)
		return false;
	else
		Nstate->check(p);

}

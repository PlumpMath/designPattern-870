#include "Stage3.h"

void Stage3::setNextStage(AbstractStage * Nstate)
{
	this->Nstate = Nstate;
}

bool Stage3::check(Packet * p)
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


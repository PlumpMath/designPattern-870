#include"Driver.h"

void Driver::attach(AbstractPerson *p)
{
	vec.push_back(p);
	std::cout<<p->getName().c_str() << " is added to group\n";
}

void Driver::leave(AbstractPerson *p)
{
	auto it = std::find(vec.begin(), vec.end(), p);
	if (it == vec.end())
	{
		std::cout << "Cant leave \n";
	}
	else
	{
				vec.erase(it);
	}
	
}


void Driver::NotifyAll(std::string str)
{
	std::vector<AbstractPerson *>::iterator it;
	for (it = vec.begin(); it < vec.end(); it++)
	{
		(*it)->Display(str);
	}
}

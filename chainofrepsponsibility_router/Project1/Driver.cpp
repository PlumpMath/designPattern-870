#include"stdio.h"
#include"Stage1.h"
#include"Stage2.h"
#include"Stage3.h"
#include"Packet.h"

int main()
{
	Packet p("tcp","0.0.0.0","0","147.87.64.7","80");

	Stage1 s1("any", "123.123.1.1", "0", "147.87.0.0", "0");
	s1.result = false;
	Stage2 s2("tcp", "0.0.0.0", "0", "147.87.64.7", "80");
	s2.result = true;
	Stage3 s3("udp", "0.0.0.0", "0", "147.87.1.1", "53");
	s3.result = true;
	
	s1.setNextStage(&s2);
	s2.setNextStage(&s3);

	std::cout<<s1.check(&p);
	

	getchar();
	return 0;

}
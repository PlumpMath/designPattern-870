#include"MP.h"
#include"UP.h"
#include"otherFactorimpl.h"
#include"stdio.h"

class Driver
{
	abstractStates *astate;
	OtherFactor *ofactor;
public:
	void setState(abstractStates * astate)
	{
		this->astate = astate;
	}

	void setMainAndTax(OtherFactor *ofactor)
	{
		this->ofactor = ofactor;
	}

	void calTax()
	{
		astate->Cal_tax(ofactor);
	}
	
};


int main()
{
	MPStates mp;
	UPStates up;
	OtherFactorImpl oFImpl;
	oFImpl.setMaintainance(15);
	oFImpl.setStateTax(25);
	Driver d;
	d.setState(&mp);
	d.setMainAndTax(&oFImpl);
	d.calTax();
	oFImpl.setMaintainance(5);
	oFImpl.setStateTax(5);
	d.setState(&up);
	d.setMainAndTax(&oFImpl);
	d.calTax();

	getchar();

}
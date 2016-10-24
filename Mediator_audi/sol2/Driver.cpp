#include"Mediator.h"
#include"stdio.h"
#include"iostream"

int main()
{
	Mediator *mediator = new Mediator();
	EditBox *editBox = new EditBox(mediator);
	Slider *slider=new Slider(mediator);
	GraphBurn *graphBurn=new GraphBurn(mediator);
	Graphthrust *graphThrust=new Graphthrust(mediator);

	mediator->setEdit(editBox);
	mediator->setGroupBurn(graphBurn);
	mediator->setGroupThrust(graphThrust);
	mediator->setSlider(slider);

	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;
	
	editBox->setValue(20);
    std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;

	slider->setValue(10);
	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;

	graphBurn->setValue(30);
	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;

	graphThrust->setValue(40);
	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;
	
	
	getchar();
	return 0;
}
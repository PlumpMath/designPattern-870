#include"editBox.h"
#include"graphBurn.h"
#include"graphthrust.h"
#include"stdio.h"
#include"iostream"

int main()
{
	EditBox *editBox = new EditBox();
	Slider *slider=new Slider();
	GraphBurn *graphBurn=new GraphBurn();
	Graphthrust *graphThrust=new Graphthrust();


	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;

	editBox->setBurnGraph(graphBurn);
	editBox->setSlider(slider);
	editBox->setBurnThrust(graphThrust);
	editBox->setValue(20);
	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;

	slider->setEditBox(editBox);
	slider->setBurnGraph(graphBurn);
	slider->setBurnThrust(graphThrust);
	slider->setValue(10);

	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;


	graphBurn->setEditBox(editBox);
	graphBurn->setSlider(slider);
	graphBurn->setBurnThrust(graphThrust);
	graphBurn->setValue(30);

	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;
	
	graphThrust->setEditBox(editBox);
	graphThrust->setSlider(slider);
	graphThrust->setBurnGraph(graphBurn);
	graphThrust->setValue(40);

	std::cout << "\n\nEditBox value = " << editBox->getValue() << " Slider value = " << slider->getValue() << " GraphBurn value = " << graphBurn->getValue() << " Graphthrust value = " << graphThrust->getValue() << std::endl;
	
	
	getchar();
	return 0;
}
#pragma once
#include <string>
#include "WebLink.h"
using namespace std;

class Subject
{
public:
	Subject(string);
	void setLink(const WebLink *);
	const WebLink * getLink() const;
	void printText() const;
private:
	string text_;
	const WebLink * link_;
};

Subject::Subject(string text)
{
	text_ = text;
	link_ = NULL;
}

void Subject::setLink(const WebLink * link)
{
	link_ = link;
}

const WebLink * Subject::getLink() const
{
	return link_;
}

void Subject::printText() const
{
	std::cout << text_ << std::endl;

	if (link_ == NULL)
		std::cout << "No further information avaiable" << std::endl << std::endl;
	else
	{
		std::cout << "Further information here: ";
		link_->printWebLink();
		std::cout << std::endl << std::endl;
	}
}
#pragma once
#include <string>
#include <iostream>
using namespace std;

class WebLink
{
public:
	WebLink(string);
	void printWebLink() const;
private:
	const string address_;
};

WebLink::WebLink(string address) : address_(address)
{
}

void WebLink::printWebLink() const
{
	cout << address_;
}


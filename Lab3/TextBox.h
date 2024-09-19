#pragma once
#include <iostream>
#include <string>;
using namespace std;

class TextBox
{
private: 
	std::string TextValue;

public:
	TextBox() = default;
	explicit TextBox(std::string Val);
	std::string getVal();
	void setVal(std::string Val);
	~TextBox();
};


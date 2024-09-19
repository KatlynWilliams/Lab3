#include <iostream>
#include "TextBox.h";
using namespace std;

TextBox::TextBox(std::string value) {
	setVal(value);
	getVal();
}

void TextBox::setVal(std::string value) {
	TextValue = value;
}

std::string TextBox::getVal() {
	cout << TextValue << endl;
	return TextValue;
}

TextBox::~TextBox() {
	cout << "deconstructor called on " << TextValue << " from class TextBox" << endl;
}

int main() {
	TextBox TextBox1;
	TextBox1.setVal("Hello");
	TextBox1.getVal();
	TextBox TextBox2("World");
	TextBox1.~TextBox();
	TextBox2.~TextBox();
}

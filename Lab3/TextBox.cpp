
#include "TextBox.h";

TextBox::TextBox(std::string value) {
	setVal(value);
	getVal();
}

void TextBox::setVal(std::string value) {
	TextValue = value;
}

std::string TextBox::getVal() {
	return TextValue;
}

int main() {
	TextBox TextBox1;
	TextBox1.setVal("Hello");
	TextBox1.getVal();
	TextBox TextBox2("World");
}

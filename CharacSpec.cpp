#include<iostream>

int main(){
	
	char charac;
	std::cout << "Enter a character: ";
	std::cin >> charac;
	
	if(int(charac) >= 48 && int(charac) <= 57){
		std::cout << "ASCII range: Numeric. Value: " << int(charac);
	} else if (int(charac) >= 65 && int(charac) <= 90){
		std::cout << "ASCII range: Uppercase. Value: " << int(charac);
	} else if (int(charac) >= 97 && int(charac) <= 122){
		std::cout << "ASCII range: Lowercase. Value: " << int(charac);
	} else {
		std::cout << "ASCII range: Symbol or Special Character. Value: " << int(charac);
	}
	
}
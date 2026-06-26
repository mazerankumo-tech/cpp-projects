#include<iostream>

int main(){
	
	char input;
	std::cout << "Enter any key from your keyboard: ";
	std::cin >>  input;
	
	int ASCII_r = (int)input;
	
	if(ASCII_r >= 48 && ASCII_r <= 57){
		std::cout << "Under numeric characters: " << ASCII_r; 
	} else if(ASCII_r >= 65 && ASCII_r <= 90){
		std::cout << "Under uppercases characters: " << ASCII_r;
	} else if(ASCII_r >= 97 && ASCII_r <= 122){
		std::cout << "Under lowercases characters: " << ASCII_r;
	} else {
		std::cout << "Under Special\Punctuation characters: " << ASCII_r;
	}
	
}
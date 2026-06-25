#include <iostream>

int main(){
	std::string password;
	std::string name;
	std::cout << "PASSWORD VALIDATOR\n";
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "Enter your password: ";
	std::cin.ignore();
	std::cin >> password;
	
	bool isDigit = false;
	bool isUpper = false;
	bool isLower = false;
	
	bool isSpecial = false;
	
	
	for(int i = 0; i < password.length(); i++){
		bool hasDigit = (password[i] >= 48 && password[i] <= 57);
		bool hasUpper = (password[i] >= 65 && password[i] <= 90);
		bool hasLower = (password[i] >= 97 && password[i] <= 122);
		
		isDigit = isDigit || hasDigit;
		isUpper = isUpper || hasUpper;
		isLower = isLower || hasLower;
		
		if(!hasDigit && !hasUpper && !hasLower){
		 isSpecial = true;
		} 
	}
	if (isDigit && isUpper && isLower && isSpecial){
		std::cout << "Hello, " << name << "! Password Strength:  Strong.";
	} else {
		std::cout << "Password must contain digits, lowercases, uppercases and special characters.";
	}
}
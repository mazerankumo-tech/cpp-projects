#include <iostream>

void Vault(const double& currentBalance);
void Deposit(double& currentBalance, double amount);
void Withdraw(double& currentBalance, double amount);
bool AccVAL(std::string name, std::string password);
bool PinVAL(int pin);

int main(){
	static double currentBalance = 0;
	std::string name, password;
	int pin;
	char option;
	double amount;
	
	bool stop = false;
	while(!stop){
	  std::cout << "ATM MACHINE\n";
	  std::cout << "Enter your name: ";
	  std::getline(std::cin, name);
	  std::cout << "Enter password: ";
	  std::cin >> password;
	  
	  if(AccVAL(name, password)){
	  	std::cout << "Hello, " << name << std::endl;
	  	stop = true;
	  } else {
	  	std::cout << "Incorrect Input. Try Again.\n";
	  	std::cin.ignore();
	  }
    }
    
    stop = false;
    while(!stop){
    	std::cout << "Enter your 6-DIGIT PIN: ";
    	std::cin >> pin;
    	if(PinVAL(pin)){
    		std::cout << "Welcome, " << name << "!\n";
    		stop = true;
		} else {
			std::cout << "Incorrect PIN. Try Again.\n";
		}
	}
	
	do{
		std::cout << "1. Vault\n2. Deposit\n3. Withdraw\n4. Quit\n Option: ";
		std::cin >> option;
		
		switch(option){
			case '1':
				Vault(currentBalance);
				break;
			case '2':
				std::cout << "Enter amount: ";
				std::cin >> amount;
				Deposit(currentBalance, amount);
				std::cout << "Current Balance:  $" << currentBalance << '\n';
				break;
			case '3':
				std::cout << "Enter amount: ";
				std::cin >> amount;
				Withdraw(currentBalance, amount);
				std::cout << "Current Balance:  $" << currentBalance << '\n';
				break;
			case '4':
				std::cout << "Finished.\n";
				break;
			default:
				std::cout << "Invalid input.\n";
		}
	}while(option != '4');
	
	std::cout << "Finished.2";
}





void Vault(const double& currentBalance){
	std::cout << "Current Balance: $" << currentBalance << '\n';
}
void Deposit(double& currentBalance, double amount){
	if(amount < 0){
		std::cout << "Insufficient Amount.\n";
		return;
	}
	currentBalance += amount;
}
void Withdraw(double& currentBalance, double amount){
	if(amount < 0 || amount > currentBalance){
		std::cout << "Amount Error!\n";
		return;
	}
	currentBalance -= amount;
}
bool AccVAL(std::string name, std::string password){
	return name == "Adrian" && password == "123qwertyuiop";
}

bool PinVAL(int pin){
	return pin == 654321;
}
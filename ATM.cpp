#include <iostream>
#include <string>

bool AccVeri(std::string name, std::string password);
bool PinVeri(int pin);
static double CurrentBalance = 0;
void Vault();
double Deposit(double amount);
int Withdraw(int amount);

int main()
{
    std::string name, pass;
    int pin, amount;
    char option;

    while(true)
    {
       std::cout << "_____ATM-MACHINE_____\n";
       std::cout << "Name: ";
       std::getline(std::cin, name);
       
       std::cout << "Enter password: ";
       std::getline(std::cin, pass);

       if(!AccVeri(name, pass))
       {
         std::cout << "Incorrect input or Account does not exist. Try again.\n";
       } else {
           std::cout << "Welcome, " << name << "!\n";
           break;
        }
    }

    bool stop = false;
    while (!stop) 
    {
        std::cout << "1. Vault\n2. Deposit\n3. Withdraw\n4.Quit\nOption: ";
        std::cin >> option;
       switch(option)
       {
           case '1':
             Vault();
             break;
           case '2':
             std::cout << "Enter amount: ";
             std::cin >> amount;
             Deposit(amount);
             std::cout << "Current Balance: $" << CurrentBalance << std::endl;
             break;
           case '3':
             std::cout << "Enter amount: ";
             std::cin >> amount;
             Withdraw(amount);
             std::cout << "Current Balance: $" << CurrentBalance << std::endl;
             break;
           case '4':
             std::cout << "Finished.\n";
             stop = true;
             break;
           default:
             std::cout << "Invalid Option... Try Again.\n";  
        }
    }
    std::cout << "Good Bye";

    return 0;
}

void Vault()
{
    std::cout << "Current Balance: $" << CurrentBalance << std::endl;
    return;
}
double Deposit(double amount)
{
    if (amount < 0)
    {
        std::cout << "Amount cannot hold negative value.";
        return amount;
    }

    return CurrentBalance += amount;
}
int Withdraw(int amount)
{
    if (amount > CurrentBalance)
    {
        std::cout << "Current Balance is insufficent. Check Vault.";
    }

    if (amount % 100 != 0)
    {
        std::cout << "Value Cannot be processed.";
        return amount;
    }

    return CurrentBalance -= amount;
}

bool AccVeri(std::string name, std::string password)
{
    return name == "Adrian Roi Bellen" && password == "123qwertyuiop";
}

bool PinVeri(int pin)
{
    return pin == 654321;
}
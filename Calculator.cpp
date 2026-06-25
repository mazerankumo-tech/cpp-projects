#include <iostream>

template <typename T>
T add(T a, T b);
template <typename T>
T subtract(T a, T b);
template <typename T>
T multiply(T a, T b);
template <typename T>
T divide(T a, T b);


int main()
{

    std::cout << "_____MINI_CALCULATOR_____\n";
    double num1, num2, result;
    char operation, option;
    bool stop = false;
    while(!stop)
    {
        std::cout << "Enter First Number: ";
        std::cin >> num1;
        std::cout << "Enter Second Number: ";
        std::cin >> num2;

        std::cout << "OPERATION\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
        std::cout << "Choose Operation: ";
        std::cin >> operation;

        switch(operation)
        {
            case '1':
              result = add(num1, num2);
              std::cout << result;
              break;
            case '2':
              result = subtract(num1, num2);
              std::cout << result;
              break;
            case '3':
              result = multiply(num1, num2);
              std::cout << result;
              break;
            case '4':
              if (num2 == 0) {
                std::cout << "Error! Cannot Divide by zero.";
                break;
              }
              result = divide(num1, num2);
              std::cout << result;
              break;
            default:
              std::cout << "Invalid Operation.";
        }

        std::cout << "\nDo you want to calculate again?: (Any key = Yes)(0 = No): ";
        std::cin >> option;

        if(option == '0'){
            std::cout << "OK. BYE.";
            stop = true;
        } else {
            std::cout << "AND ANOTHER ONE\n";
        }
    }
    std::cout << "\nFINISHED.";

}
template <typename T>
T add(T a, T b)
{
    return a + b; 
}
template <typename T>
T subtract(T a, T b)
{
    return a - b;
}
template <typename T>
T multiply(T a, T b)
{
    return a * b;
}
template <typename T>
T divide(T a, T b)
{
    return a / b;
}
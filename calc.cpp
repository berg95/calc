#include <iostream>
#include <string>

int number()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  return num;
}

// function for user to choose operator
std::string getop()
{
  // initialize variable storing the operator, and variable storing check value.
  std::string op;
  int isValid = 1; // true by default

  // user input, with built in error hadling
  std::cout << "Enter an operator (+ - / *): ";
  std::cin >> op;

  // error handling
  if (op != "+" && op != "-" && op != "/" && op != "*")
  {
    isValid = 0; // sets to false
  }

  // loop runs until the input is valid
  while (isValid == 0)
  {
    std::cout << "Invalid operator, please enter a valid operator: ";
    std::cin >> op;
    if (op == "+" || op == "-" || op == "/" || op == "*")
      isValid = 1;
  }

  return op;
}

int main()
{
  // initialize loop, instead of goto statements
  bool doAgain = true;
  while (doAgain == true)
  {
    // define variables
    int num1, num2;
    int result = 0;

    // user shooses the first number
    num1 = number();

    // run getop() function to set op to operator of choice
    std::string op = getop();

    // user chooses the second number
    num2 = number();

    // distinguish operators and solve equation
    if (op == "+") // Addition
      result = num1 + num2;
    if (op == "/") // Division
      result = num1 / num2;
    if (op == "*") // Multiplication
      result = num1 * num2;
    if (op == "-") // Subtraction
      result = num1 - num2;
    
    std::cout << result << '\n'; // print result

    // Initialize choice variable
    std::string choice;
    std::cout << "Do you want to do another calculation? (Y,n) ";
    std::cin >> choice;

    // process choice
    if (choice == "n")
      doAgain = false;
  }
  // terminate function
  return 0;
}
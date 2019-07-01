#include <iostream>
#include <string>
using namespace std;

// function for user to choose operator
string getop()
{
  string op;
  cout << "Enter an operator (+ - / *): ";
  cin >> op;

  return op;
}

int main()
{
  // define variables
  int a, b;

  start: // restore point

  // user shooses the first number
  cout << "Enter a number: ";
  cin >> a;

  // run getop() function to set op to operator of choice
  string op = getop();

  // user chooses the second number
  cout << "Enter a second number: ";
  cin >> b;

  // distinguish operators and solve equation
  if (op == "+") // Addition
    cout << a + b << '\n';
  if (op == "/") // Division
    cout << a / b << '\n';
  if (op == "*")  // Multiplication
    cout << a * b << '\n';
  if (op == "-") // Subtraction
    cout << a - b << '\n';
  
  // Initialize choice variable
  string choice;
  cout << "Do you want to do another calculation? (Y,n) ";
  cin >> choice;

  // process choice
  if (choice == "n")
    goto end;
  else
    goto start;

  // terminate function
  end:
  return 0;
}
# include <iostream>
using namespace std;

int main() {

  char want;
  float num1, num2;

  cout << "Enter operator: +, -, *, / :  "; //
  cin >> want;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(want) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Something is wrong please check and try again..";
      break;
  }

  return 0;
}

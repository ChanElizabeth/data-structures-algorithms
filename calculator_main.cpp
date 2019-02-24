// the main function
#include <iostream>
#include "Calculator.h"

int main(){
  int op;
  long x;
  long y;

  cout << "Choose the operators: " << "\n" << "1. add" << "\n" << "2. substract"
  << "\n" << "3. div" << "\n" << "4. time" << "\n" << "5. mod" <<endl;
  cin >> op;

  cout << "Please enter two numbers: " <<endl;
  cin >> x >> y;

  switch(op)
  {
    case '1':
      CAL calculator;
      calculator.addition(x, y);

    case '2':
      calculator.substraction(x, y);

    case '3':
      calculator.divide(x, y);

    case '4':
      calculator.multiply(x, y);

    case '5':
      calculator.modulo(x, y);

  }
  return 0;
  }

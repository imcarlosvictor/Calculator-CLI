#include <iostream>

double add(double, double, double&);
double subtract(double, double, double&);
double multiply(double, double, double&);
double divide(double, double, double&);

int  main()
{
  bool program = true;
  double num1 = 0;
  double num2 = 0;
  char operation;;
  double answer = 0;

  do {
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator: ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Reset value for each new session
    answer = 0;

    if (operation == '+') {
      add(num1, num2, answer);
      std::cout << "Answer: " << answer << std::endl; 
    } else if (operation == '-') {
      subtract(num1, num2, answer);
      std::cout << "Answer: " << answer << std::endl; 
    } else if (operation == '*') {
      multiply(num1, num2, answer);
      std::cout << "Answer: " << answer << std::endl; 
    } else if (operation == '/') {
      divide(num1, num2, answer);
      std::cout << "Answer: " << answer << std::endl; 
    } else {
      std::cout << "Enter a valid operation" << std::endl; 
    }

    // Ask user if they want to go again
    char run;
    std::cout << "Keep going? (y/n): " << std::endl;
    std::cin >> run;

    if (run == 'y')
      continue;
    else
      break;
  } while (program);

  std::cout << "Ending Session..." << std::endl;
  return 0;
}

double add(double num1, double num2, double& ans) 
{
  ans = num1 + num2;
  return ans;
}

double subtract(double num1, double num2, double& ans) 
{
  ans = num1 - num2;
  return ans;
}

double multiply(double num1, double num2, double& ans)
{
  ans = num1 * num2;
  return ans;
}

double divide(double num1, double num2, double& ans)
{
  ans = num1 / num2;
  return ans;
}


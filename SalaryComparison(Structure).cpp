
#include <iostream>

using namespace std;

struct employee
{
  int empid;
  float salary;
  char name[50];

};

int
main ()
{
  employee E1;
  employee E2;
  cout << "Enter emp details :";
  cin >> E1.empid >> E1.salary >> E1.name;
  cin >> E2.empid >> E2.salary >> E2.name;
  if (E1.salary > E2.salary)
    {
      cout << "employee with higher salary :" << E1.name;
    }
  else
    {
      cout << "employee with higher salary :" << E2.name;
    }
  return 0;


}

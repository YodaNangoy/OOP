#include <iostream>

using namespace std;

class employee{
 private:
 int emp_num;
 float emp_comp;
 public:

  void entData(){
   cout << "Employee's Number : ";
   cin >> emp_num;
   cout << "Employee's Compen : " ;
   cin >> emp_comp;
  }

  void display(){
   cout << "Employee Number " << emp_num << endl;
   cout << "Enployee Compen " << emp_comp << endl;
  }
};

int main(){
 employee emp1, emp2, emp3;
 cout << "Data for Employee" << endl;
 emp1.entData();
 cout << "Data for Employee" << endl;
 emp2.entData();
 cout << "Data for Employee :" << endl;
 emp3.entData();
 cout << "Total Data :" << endl;
 emp1.display();
 emp2.display();
 emp3.display();
}
 #include <iostream>

using namespace std;
char used();

class tollBooth{
 private:
  unsigned int numCars;
  double amount;
 public:
  tollBooth(){
   numCars = 0;
   amount = 0;
  }
 
  void payCar(){
   numCars++;
   amount+=0.50;
  }
  
  void noPayCar(){
   numCars++;
  }
 
  void display() {
   cout << "Number Of Total Cars: " << numCars << endl;
   cout << "Total Amount: " << amount << endl;
  }
};

int main(){
 tollBooth booth;
 char under;
 under = used();
  
  while(under!='s'){
 
  switch(under){
   case('p'):
    cout << "Paid" << endl << endl;
    booth.payCar();
    under = used();
    break;
   case('n'):
    cout << "Not Paid" << endl << endl;
    booth.noPayCar();
    under = used();
    break;
   case('s'):
    cout << "Result" << endl << endl;
    break;
   default:
    cout << "Invalid Input" << endl;
  }
 }
 booth.display();
}

char used(){
 char a;
 cout << "Enter 'p' To Pay And Pass" << endl;
 cout << "Enter 'n' To Pass Without Paying" << endl;
 cout << "Press 's' To Show Result And Exit" << endl;
 cout << "Make Your Choice" << endl;
 cin>>a;
 return a;
}
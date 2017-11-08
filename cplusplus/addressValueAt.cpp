#include <iostream>

using namespace std;

int main(){
  cout << "Pointer : Demonstrate the use of & and * operator : " << endl;
  cout << "----------------------------------------------------" << endl;
  cout << endl;

  int m = 300;
  double fx = 300.600006;
  char cht = 'z';

  cout << "Using & operator : " << endl;
  cout << "-------------------" << endl;

  cout << "address of m = " << &m << endl;
  cout << "address of fx = " << &fx << endl;
  cout << "address of cht = " << &cht << endl;

  cout << endl;
  cout << "Using & and * operator : " << endl;
  cout << "-------------------------" << endl;
  cout << "value at address of m = " << *&m << endl;
  cout << "value at address of fx = " << *&fx << endl;
  cout << "value at address of cht = " << *&cht << endl;

  cout << endl;
  cout << "Using only pointer variable" << endl;
  int * ptr1 = &m;
  double * ptr2 = &fx;
  char * ptr3 = &cht;
  cout << "address of m = " << ptr1 << endl;
  cout << "address of fx = " << ptr2 << endl;
  cout << "address of cht = " << ptr3 << endl;
  
  cout << endl;
  cout << "Using only pointer operator" << endl;
  cout << "---------------------------" << endl;
  cout << "value at address of m = " << *ptr1 << endl;
  cout << "value at address of fx = " << *ptr2 << endl;
  cout << "value at address of cht = " << *ptr3 << endl;  

  return 0;
}

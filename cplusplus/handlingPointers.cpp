#include <iostream>

using namespace std;

int main(){
  int m = 29;

  cout << "Address of m : " << &m << endl;
  cout << "Value of m : " << m << endl;

  cout << endl;

  cout << "Now ab is assigned with the address of m " << endl;
  int * ab = &m;
  cout << "Address of pointer ab : " << ab << endl;
  cout << "Content of pointer ab : " << *ab << endl;

  cout << endl;

  cout << "The value of m is assigned to 34 now " << endl;
  m = 34;
  cout << "Address of pointer ab : " << ab << endl;
  cout << "Content of pointer ab : " << *ab << endl;

  cout << endl;

  cout << "The pointer variable ab is assigned with the value 7 now" << endl;
  *ab = 7;
  cout << "Address of m : " << ab << endl;
  cout << "Value of m : " << *ab << endl;

  return 0;
}

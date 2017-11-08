#include <iostream>
using namespace std;

int main(){
 cout << "pointer : show the basic declaration of pointer : " << endl;
 cout << "--------------------------------------------------" << endl;

 int m = 10;
 int n = 5;
 int o = 0;
 int * z = &m;

 cout << endl;
 cout << "Here is m=" << m << ", n and o are two integer variables and *z is an integer pointer" << endl;

 cout << "z stores the address of m = " << z << endl;
 cout << "*z stores the value of m = " << *z << endl;
 cout << "&m is the address of m =  " << &m << endl;
 cout << "&n stores the address of n = " << &n << endl;
 cout << "&o stores the address of o = " << &o << endl;
 cout << "&z stores the address of z = " << &z << endl;

 return 0;
}

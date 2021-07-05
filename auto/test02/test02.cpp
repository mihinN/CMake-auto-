#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;
int main (){

stringstream filename {"23456.txt"}; // combined varable into Stringstream 
int number = 0 ; 
string extention ; 

filename >> number >> extention;
cout << "number" << number << endl ; 
cout << "Extention" << extention << endl ; 
return 0 ; 

}
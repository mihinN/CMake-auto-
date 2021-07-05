#include <iostream>
#include <string>
using std::cout ; 
using std::endl ; 

int main (int argc , char const *argv[]){
	cout << "Got " << argc << " params \n";
	cout << "program :" << argv[0] << endl ; 

	for (int i = 1 ; i < argc ; ++i){
		cout << "param: " << argv[i] << endl ; 
	}
}
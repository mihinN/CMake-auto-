#include <iostream>
int main (){
	enum class rgb {red,green,blue};
	rgb colours = rgb::blue;
	switch (colours){
		case rgb::red: std::cout <<"You choosed red color" << std::endl;
		break ; 
		case rgb::green: std::cout << "You choosed green color" << std::endl;
		break ; 
		case rgb::blue: std::cout << "you choosed Blue color" << std::endl ; 
		break ; 
	}
	return 0 ; 
}
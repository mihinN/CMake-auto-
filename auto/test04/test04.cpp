#include <iostream>
#include <vector>

int main () {

std::vector <int> first_vector = {1,2,3,4,34,34,43};

std::cout << "This is the First vector :" << first_vector.front() << "\n this is the last one of the vector :" << first_vector.back();
first_vector.push_back(23);

}
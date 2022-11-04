#include <iostream>
#include <iomanip>
int main(){
	double numbers, sum_of_numbers = 0.0, amount_of_numbers = 0.0;
	while(std::cin>>numbers){
	sum_of_numbers = sum_of_numbers + numbers;
	amount_of_numbers++;
	}
	sum_of_numbers = sum_of_numbers/amount_of_numbers;
	std::cout<<std::fixed<<std::setprecision(2)<<sum_of_numbers<<std::endl;

	return 0;
}

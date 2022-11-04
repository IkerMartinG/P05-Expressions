/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Iker Martin Gamez
 * @date Nov 4th 2022
 * @brief Sum of three integer numbers
 *
 * 
 */
#include <iostream>
int main(){
	int first_number, second_number, third_number, sum;
	
	std::cin>>first_number>>second_number>>third_number;
	
	sum = first_number+second_number+third_number;

	std::cout<<sum<<std::endl;
	return 0;
}

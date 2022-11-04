#include <iostream>
int main(){

	int number_of_seconds, hours, minutes, seconds;
	std::cin>>number_of_seconds;
	minutes<60;
	seconds<60;
	//number_of_seconds = seconds + 60*minutes + 3600*hours;

	if(number_of_seconds>59){
		minutes++;
	}
	if(minutes<59){
		hours++;
	}

	return 0;
}

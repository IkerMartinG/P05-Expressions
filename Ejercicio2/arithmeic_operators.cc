#include <iostream>

int main (){

	int variable1 {};
	int variable2 {};
	std::cin>>variable1;
	std::cin>>variable2;
	
	std::cout<< variable1 << "+" << variable2 << "=" <<(variable1+variable2)<<std::endl;
	std::cout<< variable1 << "-" << variable2 << "=" <<(variable1-variable2)<<std::endl;
	std::cout<< variable1 << "*" << variable2 << "=" <<(variable1*variable2)<<std::endl;
	std::cout<< variable1 << "/" << variable2 << "=" <<(variable1/variable2)<<std::endl;
	std::cout<< variable1 << "%" << variable2 << "=" <<(variable1%variable2)<<std::endl;
	if (variable1>variable2){
		std::cout<<variable1<<">"<<variable2<<std::endl;
	}else if (variable1<variable2){
		std::cout<<variable1<<"<"<<variable2<<std::endl;
	}if(variable1==variable2){
		std::cout<<variable1<<"="<<variable2<<std::endl;
	}

	return 0;	

}

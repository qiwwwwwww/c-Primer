//chapter1
//exercise 1.9
#include <iostream>
// calculate the sum from 50 to 100 using while loop
// int main(){
// 	int val=50;
// 	int sum=0;
// 	while(val<=100){
// 		sum+=val;
// 		val++;
// 	}

// 	std::cout<<sum<<std::endl;

// 	return 0;

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.10

// }
// int main(){
// 	int val=10;
// 	int sum=0;
// 	while(val>=0){
// 		sum+=val;
// 		val--;
// 	}

// 	std::cout<<sum<<std::endl;

// 	return 0;

// }



///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.11



// int main(){
// 	int v1=0, v2=0;
// 	std::cin>>v1>>v2;

// 	while(v1!=v2){
// 		std::cout<<v1<<std::endl;
// 		v1++;
// 	}
// 		std::cout<<v2<<std::endl;
// 	return 0;

// }

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.12

// int main(){
// 	int sum=0;
// 	for(int i=-100; i<=100; ++i){
// 		sum+=i;
// 	}
// 	std::cout<<sum<<std::endl;
// 	return 0;

// }

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.13



// int main(){
// 	int v1=0, v2=0;
// 	std::cin>>v1>>v2;

// 	for(;v1!=v2;v1++){
// 		std::cout<<v1<<std::endl;
// 	}
// 		std::cout<<v2<<std::endl;
// 	return 0;

// }


///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.14
//advantage of for loop and while loop


///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.16
// int main(){
// 	int v1;
// 	int sum=0;
// 	while(std::cin>>v1){
// 		sum+=v1;
// 	}
// 	std::cout<<sum<<std::endl;
// }


///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.17
// int main(){
// 	int currVal=0, val=0;
// 	if(std::cin>>currVal){
// 		int cnt=1;
// 		while(std::cin>>val){
// 			if(val==currVal)
// 				++cnt;
// 			else{
// 				std::cout<<currVal<< " occurs "
// 				<<cnt<<" times"<< std::endl;
// 				currVal = val;
// 				cnt=1;
// 			}
// 		}
// 		std::cout<<currVal<< " occurs "
// 				<<cnt<<" times"<< std::endl;
// 	}
// 	return 0;
// }

///////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////
//exercise 1.19


int main(){
	int v1=0, v2=0;
	std::cin>>v1>>v2;
	if (v1<v2)
	{
		for(;v1!=v2;v1++){
		std::cout<<v1<<std::endl;
	}
		std::cout<<v2<<std::endl;
	}else{
	for(;v1!=v2;v1--){
		std::cout<<v1<<std::endl;
	}
		std::cout<<v2<<std::endl;

	}		
	return 0;

}
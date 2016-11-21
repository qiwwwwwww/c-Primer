#include <iostream>
#include "Sales_item.h"
////////////////////////////////////
/////////////////////////////////////
//exercise 1.20
// int main(){

// Sales_item book;

// while(std::cin>>book){
// 	std::cout<<book<<std::endl;
// }


// 	return 0;
// }

////////////////////////////////////
/////////////////////////////////////
//exercise 1.21

// int main(){

// Sales_item item1,item2;

// std::cin>>item1>>item2;
// 	if(item1.isbn()==item2.isbn()){
// 		std::cout<<item2+item1<<std::endl;
// 		return 0;
// 	}
// 	else{
// 		std::cerr<<"Data must be refer to same ISBN" << std::endl;
// 		return -1;
// 	}
// }

////////////////////////////////////
/////////////////////////////////////
//exercise 1.22
int main(){
	Sales_item total;
	if(std::cin>>total){
		Sales_item trans;
		while(std::cin>>trans){
			if(total.isbn()==trans.isbn())
				{
					total+=trans;
				}else{
					std::cout<<total<<std::endl;
					total=trans;
				}
		}
		std::cout<<total<<std::endl;
	}else{
		 std::cerr << "No data?!" << std::endl;
			return -1;
	}

		return 0;

}

////////////////////////////////////
/////////////////////////////////////
//exercise 1.23
// int main()
// {
//     Sales_item currItem, valItem;
//     if (std::cin >> currItem) {
//         int cnt = 1;
//         while (std::cin >> valItem) {
//             if (valItem.isbn() == currItem.isbn())
//                 ++cnt;
//             else {
//                 std::cout << currItem << " occurs " << cnt << " times "
//                           << std::endl;
//                 currItem = valItem;
//                 cnt = 1;
//             }
//         }

//         std::cout << currItem << " occurs " << cnt << " times " << std::endl;
//     }
//     return 0;
// }
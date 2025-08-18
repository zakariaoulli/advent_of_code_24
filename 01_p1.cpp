#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
int main(){
	std::vector<int> list1, list2;
	int num1 , num2;
	int sum=0;
	while(std::cin>>num1>>num2){
		list1.push_back(num1);
		list2.push_back(num2);
	}
	std::sort(list1.begin(),list1.end());
	std::sort(list2.begin(),list2.end());
	for (int i=0;i<list1.size();i++){
		sum+=std::abs(list1[i]-list2[i]);
	}
	std::cout<<sum<<std::endl;
	return 0;
}

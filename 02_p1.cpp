#include <bits/stdc++.h>


bool is_safe(const std::vector<int> &report){
	int difference=0;
	bool decreasing = true , increasing = true;
	for (int i=1;i<report.size();i++){
		difference=report[i]- report[i-1];
		if(difference==0 || std::abs(difference)>3){
			return false;
		}
		if(difference<0) increasing = false;
		if(difference>0) decreasing = false;
	}
	return decreasing || increasing;
}

int main(){
	std::string line;
	int total_safe=0;
	while(std::getline(std::cin,line)){
		std::istringstream iss(line);
		std::vector<int> report;
		int num;
		while(iss>>num){
			report.push_back(num);
		}

		if (is_safe(report)){
			total_safe++;
		}
		
	}
	std::cout<<"Total amout of safe reports: "<<total_safe<<std::endl;
}	

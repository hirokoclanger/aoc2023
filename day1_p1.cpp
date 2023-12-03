#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
int main() {
	std::ifstream file("day1input.txt");
	std::string line;
	int sum = 0;
	while(std::getline(file, line)){
		std::vector<int> values;	
		for(int i = 0; i < line.size(); i++){

			if(isnumber(line[i])){
				values.push_back(line[i] - '0');
	
			} 
		}
		if(values.size() > 1){
			sum += (values[0]*10) + values[values.size()-1];
		}
		else if(values.size() == 1){ 
			sum += (values[0] *10) + values[0]; 
		}
	}
	return 0;
}


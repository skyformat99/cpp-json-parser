// JSON file reader.
#include <fstream>
#include <iostream>
#include <sstream>
#include "json.hpp"

int main (int argc, char *argv[]){
	
	std::ifstream inputJSON;
	std::ofstream output;
	inputJSON.open("input.json");
	output.open("output.txt");
	if(inputJSON.good() == false){
		std::cout << "file not found" << std::endl;
	}
	else{
		std::cout << "file was found" << std::endl;
	}
	
}

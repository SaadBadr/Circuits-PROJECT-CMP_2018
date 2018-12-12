#include <iostream>
#include "Resistance.h"
#include "VoltageIndependentSource.h"
#include "Split.h"
#include "simpleNode.h"
#include <vector>
#include <string>
using namespace std;

int main(){
	Resistance R;
	VoltageIndependentSource V;
	vector<vector<string>> s(4);	
	s[0]= Split("0 1 V 5"," ");
	s[1]= Split("1 2 R 3"," ");
	s[2]= Split("2 0 R 4"," ");
	s[3]= Split("1 0 R 2.034"," ");

	int r = 0, v = 0 ;  //r : number of Resistances , v: number of Voltage ind. sources

	

	for(int i = 0 ; i < 4 ; i++){
	
							float v = (float) strtod((s[i].at(3)).c_str(),0);
							int a = (int) strtod((s[i].at(0)).c_str(),0);
							int b = (int) strtod((s[i].at(1)).c_str(),0);

		if(s[i].at(2) == "V"){
			V.addVIS(v,simpleNode(a,b));	
		}

		else if(s[i].at(2) == "R"){ 
			R.addResistance(v,simpleNode(a,b));	
		}

	}




	return 0;
}
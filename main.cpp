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
	int n;
	cout << "enter n" << endl;
	cin >> n;
	cin.ignore();
	vector<vector<string>> s(n);
	string* s1 = new string[n];
	
	for (int i = 0; i < n; i++) {
	
		getline(cin,s1[i]);
		s[i] = Split(s1[i], " ");

	}

	//s[0]= Split("0 1 V 5"," ");
	//s[1]= Split("1 2 R 3"," ");
	//s[2]= Split("2 0 R 4"," ");
	//s[3]= Split("1 0 R 2.034"," ");

	int r = 0, v = 0 ;  //r : number of Resistances , v: number of Voltage ind. sources

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < 4; j++) {
				cout << s[i].at(j);
			}
		cout<<endl<< "-------------" << endl;
	}
		
	for(int i = 0 ; i < n ; i++){
	
							float v = (float) strtod((s[i].at(3)).c_str(),0);
							int a = (int) strtod((s[i].at(0)).c_str(),0);
							int b = (int) strtod((s[i].at(1)).c_str(),0);

		if(s[i].at(2) == "V"){
			V.addVIS(v,simpleNode(a,b));
			cout << "Voltage "<<v<< " added between: " << a << "," << b<<endl;
		}

		else if(s[i].at(2) == "R"){ 
			R.addResistance(v,simpleNode(a,b));	
			cout << "Resistance "<<v<<" added between: " << a << "," << b<<endl;
		}

	}




	return 0;
}
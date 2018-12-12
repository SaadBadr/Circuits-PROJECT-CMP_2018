#pragma once
#include "simpleNode.h"
#include <vector>
using namespace std;

class VoltageIndependentSource
{
	vector<float> VIS; 
	vector<simpleNode> Nodes;
	float value;

public:
	VoltageIndependentSource();

	void addVIS(float value , simpleNode n);

	~VoltageIndependentSource(void);
};


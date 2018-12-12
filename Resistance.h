#pragma once
#include "simpleNode.h"
#include <vector>
using namespace std;

class Resistance
{
	vector<float> Resistances; 
	vector<simpleNode> Nodes;
	float value;

public:
	Resistance();

	void addResistance(float value , simpleNode n);

	~Resistance(void);
};


#include "Resistance.h"
Resistance::Resistance()
{
}

void Resistance::addResistance(float value , simpleNode n){

	Resistances.push_back(value);
	Nodes.push_back(n);

}

Resistance::~Resistance(void)
{
}

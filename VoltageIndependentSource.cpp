#include "VoltageIndependentSource.h"
VoltageIndependentSource::VoltageIndependentSource()
{
}
	


void VoltageIndependentSource::addVIS(float value , simpleNode n){

	VIS.push_back(value);
	Nodes.push_back(n);

}

VoltageIndependentSource::~VoltageIndependentSource(void)
{
}

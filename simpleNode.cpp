#include "simpleNode.h"


simpleNode::simpleNode(int a , int b )
{
	nodes[0] = a;
	nodes[1] = b;
}

int* simpleNode::getNodes(){return nodes;}

simpleNode::~simpleNode(void)
{
}

#include "stdafx.h"
#include "RestaurantVO.h"

using namespace std;

RestaurantVO::RestaurantVO()
{
public:

private:
	string restaurantName;
	list<int> evaluationList;
	list<int>::const_iterator evaluationConstIter;
	int totalEvaluation;
}


RestaurantVO::~RestaurantVO()
{
}

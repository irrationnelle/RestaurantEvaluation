// RestaurantEvaluation.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "RestaurantData.h"
#include "Evaluate.h"
#include "UserInterface.h"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{	
	UserInterface* u = UserInterface::GetInstance();
	list<RestaurantData*> restaurantList;
	list<RestaurantData*>::const_iterator restaurantConstIter;
	for (int i = 0; i < 5; i++)
	{
		u->select(restaurantList);
	}
	

	return 0;
}


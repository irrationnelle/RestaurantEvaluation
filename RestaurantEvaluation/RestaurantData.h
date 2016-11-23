#include "stdafx.h"
using namespace std;

#pragma once
class RestaurantData
{
public:
	RestaurantData();
	~RestaurantData();
	
	// restaurantName �� set, get
	void SetRestaurantName(std::string _restaurantName);
	string GetRestaurantName(void);


	// totalEvaluation �� set, get
	void SetTotalEvaluation(int _totalEvaluation);
	int GetTotalEvaluation(void);
	
private:
	string restaurantName;
	list<int> evaluationList;
	list<int>::const_iterator evaluationConstIter;
	int totalEvaluation;
};


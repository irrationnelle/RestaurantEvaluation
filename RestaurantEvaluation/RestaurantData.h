#include "stdafx.h"
using namespace std;

#pragma once
class RestaurantData
{
public:
	RestaurantData(string);
	RestaurantData(const RestaurantData& rhs);
	~RestaurantData();
	
	// restaurantName °ª set, get
	// void SetRestaurantName(std::string _restaurantName);
	string GetRestaurantName(void) const;


	// totalEvaluation °ª set, get
	void SetTotalEvaluation(int _totalEvaluation);
	int GetTotalEvaluation(void) const;

	void SetRegisterNum(int _registerNum);
	int GetRegisterNum();
	
private:
	int registerNum;
	string restaurantName;
	list<int> evaluationList;
	list<int>::const_iterator evaluationConstIter;
	int totalEvaluation;
};


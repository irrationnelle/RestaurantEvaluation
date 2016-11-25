#include "stdafx.h"
#include "RestaurantData.h"

using namespace std;

RestaurantData::RestaurantData(string _restaurantName) : restaurantName(_restaurantName) {};	
	string RestaurantData::GetRestaurantName(void) const
	{
		return restaurantName;
	}

	void RestaurantData::SetTotalEvaluation(int _totalEvaluation)
	{
		totalEvaluation = _totalEvaluation;
	}

	int RestaurantData::GetTotalEvaluation(void) const
	{
		return totalEvaluation;
	}

	void RestaurantData::SetRegisterNum(int _registerNum)
	{
		registerNum = _registerNum;
	}
	int RestaurantData::GetRegisterNum()
	{
		return registerNum;
	}
	
RestaurantData::~RestaurantData()
{
}

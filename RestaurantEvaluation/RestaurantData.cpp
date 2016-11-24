#include "stdafx.h"
#include "RestaurantData.h"

using namespace std;

RestaurantData::RestaurantData(std::string _restaurantName) restaurantName(_restaurantName) {};
	// void RestaurantData::SetRestaurantName(string _restaurantName)
	// {
	// 	restaurantName = _restaurantName;
	// }
	
	string RestaurantData::GetRestaurantName(void)
	{
		return restaurantName;
	}

	void RestaurantData::SetTotalEvaluation(int _totalEvaluation)
	{
		totalEvaluation = _totalEvaluation;
	}

	int RestaurantData::GetTotalEvaluation(void)
	{
		return totalEvaluation;
	}
	
RestaurantData::~RestaurantData()
{
}

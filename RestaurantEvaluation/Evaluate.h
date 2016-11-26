#include "stdafx.h"
#include "RestaurantData.h"

using namespace std;

#pragma once
class Evaluate
{
public:
	static Evaluate* GetInstance();
    RestaurantData* createRestaurant(string);
	
private:
    // RestaurantData::RestaurantData restaurantData = nullptr;
	// int selectNum;

    Evaluate();
    Evaluate(const Evaluate& other);
    ~Evaluate();

    static Evaluate* instance;

	RestaurantData* arrayRestaurant[10];

    list<RestaurantData*> restaurantList;
	list<RestaurantData*>::const_iterator restaurantIter;
};


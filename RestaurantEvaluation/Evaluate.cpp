
#include "stdafx.h"
#include "RestaurantData.h"
#include "Evaluate.h"

using namespace std;

Evaluate* Evaluate::instance = nullptr;

Evaluate* Evaluate::GetInstance()
{
    if(instance == nullptr)
    {
        instance = new Evaluate();
    }
    return instance;
}

RestaurantData* Evaluate::createRestaurant(string name)
{
    RestaurantData* restaurant = new RestaurantData(name);
    //Evaluate::restaurantList.push_back(restaurant);

	return restaurant;
}

Evaluate::Evaluate() {}
	
Evaluate::~Evaluate() {}
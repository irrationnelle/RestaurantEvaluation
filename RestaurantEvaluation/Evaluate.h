#include "stdafx.h"
#include "RestaurantData.h"

using namespace std;

#pragma once
class Evaluate
{
public:
	static Evaluate* GetInstance();
	
private:
    // RestaurantData::RestaurantData restaurantData = nullptr;
	// int selectNum;

    Evaluate();
    Evaluate(const Evaluate& other);
    ~Evaluate();

    static Evaluate* instance;
};


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
    
    Evaluate();
    Evaluate(const Evaluate& other);
    ~Evaluate();

    static Evaluate* instance;
};


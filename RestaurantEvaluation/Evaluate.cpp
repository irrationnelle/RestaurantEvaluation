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

Evaluate::Evaluate() {}
	
Evaluate::~Evaluate() {}
#include "stdafx.h"
#include "Evaluate.h"

#pragma once
class UserInterface
{
public:
	static UserInterface* GetInstance();
	void select(list<RestaurantData*>&);

private:
	UserInterface();
	UserInterface(const UserInterface& other);
	~UserInterface();
	static UserInterface* instance;
	Evaluate* ev = Evaluate::GetInstance();
};


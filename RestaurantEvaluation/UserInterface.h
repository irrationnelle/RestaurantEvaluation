#include "stdafx.h"
#include "Evaluate.h"

#pragma once
class UserInterface
{
public:
	static UserInterface* GetInstance();
	void select();

private:
	UserInterface();
	UserInterface(const UserInterface& other);
	~UserInterface();
	static UserInterface* instance;
	Evaluate* ev = Evaluate::GetInstance();
};


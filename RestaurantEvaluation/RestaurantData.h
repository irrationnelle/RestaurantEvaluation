#include "stdafx.h"
using namespace std;

#pragma once
class RestaurantData
{
public:
	RestaurantData(string);
	RestaurantData(const RestaurantData& rhs);
	~RestaurantData();
		
	string GetRestaurantName(void) const;
		
	void SetRegisterNum(int _registerNum);
	int GetRegisterNum();

	double GetAvgEvaluation();

	void SetScoreCount(int score);

	void GetEachScore(void);
	
private:
	int registerNum;
	string restaurantName;

	int countOne=0;
	int countTwo=0;
	int countThree=0;
	int countFour=0;
	int countFive=0;

	double countPeople = 0;

	double totalEvaluation;
	double avgEvaluation;
};


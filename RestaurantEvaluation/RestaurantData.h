#include "stdafx.h"
using namespace std;

#pragma once
class RestaurantData
{
public:
	RestaurantData(string);
	RestaurantData(const RestaurantData& rhs);
	~RestaurantData();
	
	// restaurantName °ª set, get
	// void SetRestaurantName(std::string _restaurantName);
	string GetRestaurantName(void) const;


	// totalEvaluation °ª set, get
	void SetTotalEvaluation(int _totalEvaluation);
	double GetTotalEvaluation(void) const;

	void SetRegisterNum(int _registerNum);
	int GetRegisterNum();

	void SetScoreCount(int score);

	double GetEachScore(void);
	
private:
	int registerNum;
	string restaurantName;

	int countOne=0;
	int countTwo=0;
	int countThree=0;
	int countFour=0;
	int countFive=0;

	double countPeople = 0;

	//list<int> evaluationList;
	//list<int>::const_iterator evaluationConstIter;
	double totalEvaluation;
};


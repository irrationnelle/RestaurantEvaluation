#include "stdafx.h"
#include "RestaurantData.h"

using namespace std;

RestaurantData::RestaurantData(string _restaurantName) : restaurantName(_restaurantName) {};	
	string RestaurantData::GetRestaurantName(void) const
	{
		return restaurantName;
	}

	void RestaurantData::SetTotalEvaluation(int _totalEvaluation)
	{
		totalEvaluation = _totalEvaluation;
	}

	double RestaurantData::GetTotalEvaluation(void) const
	{
		return totalEvaluation;
	}

	void RestaurantData::SetRegisterNum(int _registerNum)
	{
		registerNum = _registerNum;
	}
	int RestaurantData::GetRegisterNum()
	{
		return registerNum;
	}

	void RestaurantData::SetScoreCount(int score)
	{
		switch (score)
		{
		case 1:
			countOne++;
			break;
		case 2:
			countTwo++;
			break;
		case 3:
			countThree++;
			break;
		case 4:
			countFour++;
			break;
		case 5:
			countFive++;
			break;
		default:
			countThree++;
			break;
		}

		countPeople++;
	}

	double RestaurantData::GetEachScore()
	{
		totalEvaluation = (5 * countFive) + (4 * countFour) + (3 * countThree) + (2 * countTwo) + (1 * countOne);
		double avgEvaluation=0;

		if (countPeople == 0)
		{
			avgEvaluation = 3;
		}
		else
		{
			avgEvaluation = totalEvaluation / countPeople;
		}
		
		cout << "����(���ο�): " << avgEvaluation << "(" << countPeople << ")" << endl;
		cout << "5�� : " << countFive << "��" << endl;
		cout << "4�� : " << countFour << "��" << endl;
		cout << "3�� : " << countThree << "��" << endl;
		cout << "2�� : " << countTwo << "��" << endl;
		cout << "1�� : " << countOne << "��" << endl;

		return avgEvaluation;

		
	}
	
RestaurantData::~RestaurantData()
{
}

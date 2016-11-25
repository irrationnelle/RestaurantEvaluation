#include "stdafx.h"
#include "UserInterface.h"
#include "string"

using namespace std;

UserInterface* UserInterface::instance = nullptr;

UserInterface* UserInterface::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new UserInterface();
	}
	return instance;
}


void UserInterface::select(list<RestaurantData*>& list)
{
	cout << "음식점 추천 프로그램: \n" << endl;

	cout << "1. 음식점 등록" << endl;
	cout << "2. 만족도 입력" << endl;
	cout << "3. 음식점 추천" << endl;
	cout << "4. 음식점 추천(우수)\n" << endl;
	cout << "프로그램 종료: 0\n" << endl;
	cout << "선택: ";
	int num;
	cin >> num;

	list<RestaurantData*> restaurantList = list;
	list<RestaurantData*>::const_iterator restaurantConstIter;

	switch (num) {
		case 1:
			if (restaurantList.size() >= 10)
			{
				cout << "음식점은 10개까지 추가할 수 있습니다." << endl;
				break;
			}
			else
			{
				cout << "음식점 이름 입력: ";
				string name;
				cin >> name;
				RestaurantData* restaurant = ev->createRestaurant(name);
				restaurant->SetRegisterNum(restaurantList.size() + 1);
				restaurantList.push_back(restaurant);

				for (restaurantConstIter = restaurantList.begin(); restaurantConstIter != restaurantList.end(); ++restaurantConstIter)
				{
					cout << "등록된 음식점 리스트:" << endl;
					cout << *restaurantConstIter << endl;

					//restaurantConstIter = restaurantList.begin();
					//cout << restaurantConstIter->GetRegisterNum << endl;
				}


			}
			break;
		
		case 2:
			for (restaurantConstIter = restaurantList.begin(); restaurantConstIter != restaurantList.end(); ++restaurantConstIter) 
			{
				cout << "등록된 음식점 리스트:" <<endl;
				cout << *restaurantConstIter << endl;
			
				//restaurantConstIter = restaurantList.begin();
				//cout << restaurantConstIter->GetRegisterNum << endl;
			}
	}
}

UserInterface::UserInterface()
{

}


UserInterface::~UserInterface()
{
}

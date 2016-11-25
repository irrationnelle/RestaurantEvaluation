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
	cout << "������ ��õ ���α׷�: \n" << endl;

	cout << "1. ������ ���" << endl;
	cout << "2. ������ �Է�" << endl;
	cout << "3. ������ ��õ" << endl;
	cout << "4. ������ ��õ(���)\n" << endl;
	cout << "���α׷� ����: 0\n" << endl;
	cout << "����: ";
	int num;
	cin >> num;

	list<RestaurantData*> restaurantList = list;
	list<RestaurantData*>::const_iterator restaurantConstIter;

	switch (num) {
		case 1:
			if (restaurantList.size() >= 10)
			{
				cout << "�������� 10������ �߰��� �� �ֽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "������ �̸� �Է�: ";
				string name;
				cin >> name;
				RestaurantData* restaurant = ev->createRestaurant(name);
				restaurant->SetRegisterNum(restaurantList.size() + 1);
				restaurantList.push_back(restaurant);

				for (restaurantConstIter = restaurantList.begin(); restaurantConstIter != restaurantList.end(); ++restaurantConstIter)
				{
					cout << "��ϵ� ������ ����Ʈ:" << endl;
					cout << *restaurantConstIter << endl;

					//restaurantConstIter = restaurantList.begin();
					//cout << restaurantConstIter->GetRegisterNum << endl;
				}


			}
			break;
		
		case 2:
			for (restaurantConstIter = restaurantList.begin(); restaurantConstIter != restaurantList.end(); ++restaurantConstIter) 
			{
				cout << "��ϵ� ������ ����Ʈ:" <<endl;
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

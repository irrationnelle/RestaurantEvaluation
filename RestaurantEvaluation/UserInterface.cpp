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


void UserInterface::select()
{	
	int num = 0;
	int arryIdx = 0;
	RestaurantData* arrayRestaurant[10];

	srand((unsigned)time(NULL));
	int r = -1;

	do 
	{
		while (1)
		{
			cout << endl;
			cout << endl;
			cout << "음식점 추천 프로그램: \n" << endl;

			cout << "1. 음식점 등록" << endl;
			cout << "2. 만족도 입력" << endl;
			cout << "3. 음식점 추천" << endl;
			cout << "4. 음식점 추천(우수)\n" << endl;
			cout << "프로그램 종료: 0\n" << endl;
			cout << "선택: ";

			cin >> num;

			if (cin.fail())
			{
				cout << "문자는 입력할 수 없습니다!" << endl; // 에러 메시지 출력
				cin.clear(); // 오류스트림을 초기화
				cin.ignore(256, '\n'); // 입력버퍼를 비움	
			}
			else
			{
				break;
			}
		}
					
		switch (num)
		{
		case 1:
			if (arryIdx >= 10)
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
				restaurant->SetRegisterNum(arryIdx + 1);

				arrayRestaurant[arryIdx] = restaurant;
				arryIdx++;
			}
			break;

		case 2:
			cout << endl;
			cout << "음식점 목록: " << endl;
			cout << endl;
			for (int i = 0; i < (arryIdx); i++)
			{
				cout << i+1 << ". ";
				cout << arrayRestaurant[i]->GetRestaurantName() << endl;
			}
			cout << endl;
			
			int idx;
			while (1)
			{
				cout << "음식점 번호 입력: ";
				cin >> idx;
				
				if (cin.fail())
				{
					cout << endl;
					cout << "문자는 입력할 수 없습니다!" << endl; // 에러 메시지 출력
					cin.clear(); // 오류스트림을 초기화
					cin.ignore(256, '\n'); // 입력버퍼를 비움	
				}
				else if (idx > arryIdx || idx <= 0)
				{
					cout << endl;
					cout << "지정된 숫자를 입력해주세요!" << endl; // 에러 메시지 출력
				}
				else
				{
					break;
				}	
			}
			idx--;
			cout << endl;

			int score;
			while (1)
			{
				cout << "5. 매우 훌륭" << endl;
				cout << "4. 훌륭" << endl;
				cout << "3. 보통" << endl;
				cout << "2. 기대 이하" << endl;
				cout << "1. 추천 안함" << endl;
				cout << endl;

				cout << "평점을 선택하세요 : ";
				//int score;
				cin >> score;
				if (score <= 5 && score >= 1)
				{
					break;
				}
				else if(cin.fail())
				{
					cout << endl;
					cout << "문자는 입력할 수 없습니다!" << endl; // 에러 메시지 출력
					cin.clear(); // 오류스트림을 초기화
					cin.ignore(256, '\n'); // 입력버퍼를 비움	
				}
				else
				{
					cout << endl;
					cout << "지정된 숫자를 입력해주세요!" << endl; // 에러 메시지 출력
				}
			}
			
			

			arrayRestaurant[idx]->SetScoreCount(score);
			cout << endl;
			cout << "음식점 :" << arrayRestaurant[idx]->GetRestaurantName() << endl;
			cout << endl;
			
			arrayRestaurant[idx]->GetEachScore();
			cout << endl;
			break;

		case 3:
			if (arryIdx == 0)
			{
				cout << "등록된 음식점이 존재하지 않습니다. 음식점 등록부터 해주세요." << endl;
				break;
			}
			r = rand() % arryIdx;
			cout << endl;
			cout << "음식점 :" << arrayRestaurant[r]->GetRestaurantName() << endl;
			cout << endl;

			arrayRestaurant[r]->GetEachScore();
			cout << endl;
			
			break;

		case 4:
			while (1)
			{
				if (arryIdx == 0)
				{
					cout << "등록된 음식점이 존재하지 않습니다. 음식점 등록부터 해주세요." << endl;
					break;
				}
				r = rand() % arryIdx;


				if (arrayRestaurant[r]->GetEachScore() >= 3)
				{
					cout << endl;
					cout << "음식점 :" << arrayRestaurant[r]->GetRestaurantName() << endl;
					cout << endl;

					arrayRestaurant[r]->GetEachScore();
					cout << endl;

					break;
				}
				else
				{
					continue;
				}
			}
			break;
			
		case 0:
			cout << "프로그램을 종료합니다." << endl;
			return;

		default:
			cout << "지정된 번호만 입력해주세요." << endl;
			break;
		}
	} while (num != 0);

}

UserInterface::UserInterface()
{

}


UserInterface::~UserInterface()
{
}

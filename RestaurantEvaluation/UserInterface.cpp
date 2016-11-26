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
			cout << "������ ��õ ���α׷�: \n" << endl;

			cout << "1. ������ ���" << endl;
			cout << "2. ������ �Է�" << endl;
			cout << "3. ������ ��õ" << endl;
			cout << "4. ������ ��õ(���)\n" << endl;
			cout << "���α׷� ����: 0\n" << endl;
			cout << "����: ";

			cin >> num;

			if (cin.fail())
			{
				cout << "���ڴ� �Է��� �� �����ϴ�!" << endl; // ���� �޽��� ���
				cin.clear(); // ������Ʈ���� �ʱ�ȭ
				cin.ignore(256, '\n'); // �Է¹��۸� ���	
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
				cout << "�������� 10������ �߰��� �� �ֽ��ϴ�." << endl;
				break;
			}
			else
			{
				cout << "������ �̸� �Է�: ";
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
			cout << "������ ���: " << endl;
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
				cout << "������ ��ȣ �Է�: ";
				cin >> idx;
				
				if (cin.fail())
				{
					cout << endl;
					cout << "���ڴ� �Է��� �� �����ϴ�!" << endl; // ���� �޽��� ���
					cin.clear(); // ������Ʈ���� �ʱ�ȭ
					cin.ignore(256, '\n'); // �Է¹��۸� ���	
				}
				else if (idx > arryIdx || idx <= 0)
				{
					cout << endl;
					cout << "������ ���ڸ� �Է����ּ���!" << endl; // ���� �޽��� ���
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
				cout << "5. �ſ� �Ǹ�" << endl;
				cout << "4. �Ǹ�" << endl;
				cout << "3. ����" << endl;
				cout << "2. ��� ����" << endl;
				cout << "1. ��õ ����" << endl;
				cout << endl;

				cout << "������ �����ϼ��� : ";
				//int score;
				cin >> score;
				if (score <= 5 && score >= 1)
				{
					break;
				}
				else if(cin.fail())
				{
					cout << endl;
					cout << "���ڴ� �Է��� �� �����ϴ�!" << endl; // ���� �޽��� ���
					cin.clear(); // ������Ʈ���� �ʱ�ȭ
					cin.ignore(256, '\n'); // �Է¹��۸� ���	
				}
				else
				{
					cout << endl;
					cout << "������ ���ڸ� �Է����ּ���!" << endl; // ���� �޽��� ���
				}
			}
			
			

			arrayRestaurant[idx]->SetScoreCount(score);
			cout << endl;
			cout << "������ :" << arrayRestaurant[idx]->GetRestaurantName() << endl;
			cout << endl;
			
			arrayRestaurant[idx]->GetEachScore();
			cout << endl;
			break;

		case 3:
			if (arryIdx == 0)
			{
				cout << "��ϵ� �������� �������� �ʽ��ϴ�. ������ ��Ϻ��� ���ּ���." << endl;
				break;
			}
			r = rand() % arryIdx;
			cout << endl;
			cout << "������ :" << arrayRestaurant[r]->GetRestaurantName() << endl;
			cout << endl;

			arrayRestaurant[r]->GetEachScore();
			cout << endl;
			
			break;

		case 4:
			while (1)
			{
				if (arryIdx == 0)
				{
					cout << "��ϵ� �������� �������� �ʽ��ϴ�. ������ ��Ϻ��� ���ּ���." << endl;
					break;
				}
				r = rand() % arryIdx;


				if (arrayRestaurant[r]->GetEachScore() >= 3)
				{
					cout << endl;
					cout << "������ :" << arrayRestaurant[r]->GetRestaurantName() << endl;
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
			cout << "���α׷��� �����մϴ�." << endl;
			return;

		default:
			cout << "������ ��ȣ�� �Է����ּ���." << endl;
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

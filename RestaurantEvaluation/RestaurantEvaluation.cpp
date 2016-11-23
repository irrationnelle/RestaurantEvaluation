// RestaurantEvaluation.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "RestaurantData.h"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{			
	cout << "음식점 추천 프로그램: \n" << endl;
	
	cout << "1. 음식점 등록" << endl;
	cout << "2. 만족도 입력" << endl;
	cout << "3. 음식점 추천" << endl;
	cout << "4. 음식점 추천(우수)\n" << endl;
	cout << "프로그램 종료: q\n" << endl;
	cout << "선택: " << endl;
	int num;
	cin >> num;

	// 어떤 클래스의 함수에 인자로 num을 넘겨준다.

	cout << num << endl;

	return 0;
}


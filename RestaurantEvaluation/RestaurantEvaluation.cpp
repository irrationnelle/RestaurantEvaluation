// RestaurantEvaluation.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "RestaurantData.h"
#include "Evaluate.h"
#include "UserInterface.h"
#include "string"

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{	
	UserInterface* u = UserInterface::GetInstance();
	
	u->select();
		
	return 0;
}


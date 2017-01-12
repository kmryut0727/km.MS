// ConsoleApplication3.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define MS_data 30
#define B_data 100


int _tmain(int argc, _TCHAR* argv[])
{
int data[MS_data][MS_data] = {};
	srand((unsigned)time(NULL));

	for (int i = 0; i < MS_data; i++){
		for (int j = 0; j < MS_data; j++){
		}
	}


	for (int i = 0; i < B_data;){
		int ri = rand() % MS_data;
		int rj = rand() % MS_data;
		if (data[ri][rj] != 9){
			data[ri][rj] = 9;
			i++;
		}
	}
	
	for (int i = 0; i < MS_data; i++){
		for (int j = 0; j < MS_data; j++){
			if (data[i][j] == 9){
				data[i][j + 1] = 1; //右を1
				data[i + 1][j] = 1; //下を1
				data[i + 1][j + 1] = 1; //右下を1
			}
			if (data[i + 1][j] == 9){
				data[i][j] == 1;
			}
			printf("%2d", data[i][j]);
		}
		printf("\n");
	}

	return 0;
}


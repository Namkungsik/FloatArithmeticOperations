#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#pragma warning ( disable : 4996 )

void main(void)
{
	int nNum = 0, nTry = 0;
	int nRandom = 0;
	srand((unsigned)time(NULL));

	nRandom = rand() % 10 + 1;

	printf("정답을 입력하세요\n");
	scanf("%d", &nNum);


	if (nRandom == nNum)
	{
		//printf("정답입니다\n");
	}
	else if (nRandom < nNum && (nNum - nRandom) == 1)
	{
		printf("입력한 수는 %d\n", nNum);
		printf(";;\n");
	}
	else if (nRandom < nNum && !((nNum - nRandom) == 1))
	{
		printf("입력한 수는 %d\n", nNum);
		printf("%d보다 작습니다.\n", nNum);
	}
	else if (nRandom > nNum && (nRandom - nNum) == 1)
	{
		printf("입력한 수는 %d\n", nNum);
		printf(";;\n");
	}
	else if (nRandom > nNum && !((nRandom - nNum) == 1))
	{
		printf("입력한 수는 %d\n", nNum);
		printf("%d보다 큽니다.\n", nNum);
	}
}
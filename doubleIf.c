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

	printf("������ �Է��ϼ���\n");
	scanf("%d", &nNum);


	if (nRandom == nNum)
	{
		//printf("�����Դϴ�\n");
	}
	else if (nRandom < nNum && (nNum - nRandom) == 1)
	{
		printf("�Է��� ���� %d\n", nNum);
		printf(";;\n");
	}
	else if (nRandom < nNum && !((nNum - nRandom) == 1))
	{
		printf("�Է��� ���� %d\n", nNum);
		printf("%d���� �۽��ϴ�.\n", nNum);
	}
	else if (nRandom > nNum && (nRandom - nNum) == 1)
	{
		printf("�Է��� ���� %d\n", nNum);
		printf(";;\n");
	}
	else if (nRandom > nNum && !((nRandom - nNum) == 1))
	{
		printf("�Է��� ���� %d\n", nNum);
		printf("%d���� Ů�ϴ�.\n", nNum);
	}
}
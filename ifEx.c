#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

#pragma warning ( disable : 4996 )

void main(void)
{
	// if
	float fnum1 = 0.0f;
	float fnum2 = 0.0f;
	char ch;

	printf("계산식을 입력해 주세요 : ");
	scanf("%f %c %f", &fnum1, &ch, &fnum2);

	if (ch == '+')
	{
		printf("결과 값은 %.3f 입니다", fnum1 + fnum2);
	}
	else if (ch == '-')
	{
		printf("결과 값은 %.3f 입니다", fnum1 - fnum2);
	}
	else if (ch == '*')
	{
		printf("결과 값은 %.3f 입니다", fnum1 * fnum2);
	}
	else if (ch == '/')
	{
		printf("결과 값은 %.3f 입니다", fnum1 / fnum2);
	}

	// Switch
	switch (ch)
	{
	case '+':
		printf("결과 값은 %.3f 입니다", fnum1 + fnum2);
		break;
	case '-':
		printf("결과 값은 %.3f 입니다", fnum1 - fnum2);
		break;
	case '*':
		printf("결과 값은 %.3f 입니다", fnum1 * fnum2);
		break;
	case '/':
		printf("결과 값은 %.3f 입니다", fnum1 / fnum2);
		break;
	}
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _CRT_SECURE_NO_WARNINGS

int func1(int x, int y);
int func2(int x, int y);
int func3(int x, int y);
void MessageT();
void MessageF();

int main()
{
	int x, y;
	int ans = 0;
	int Shiftvalue = 10, Range = 90;
	srand(time(NULL));
	int formula_choose = rand() % 3;

	while (1)
	{
		int Computer_ans;
		x = Shiftvalue + rand() % Range;
		y = Shiftvalue + rand() % Range;
	
		if (formula_choose == 0)
		{
			Computer_ans = func1(x, y);
			scanf_s("%d", &ans);

			if (ans == -1)
			{
				exit(0);
			}
			else
			{
				if (ans == Computer_ans)
				{
					MessageT();
				}
				else
				{
					MessageF();
				}
			}
		}

		else if (formula_choose == 1)
		{
			Computer_ans = func2(x, y);
			scanf_s("%d", &ans);

			if (ans == -1)
			{
				exit(0);
			}
			else
			{
				if (ans == Computer_ans)
				{
					MessageT();
				}
				else
				{
					MessageF();
				}
			}
		}
		else if (formula_choose == 2)
		{
			Computer_ans = func3(x, y);
			scanf_s("%d", &ans);

			if (ans == -1)
			{
				exit(0);
			}
			else
			{
				if (ans == Computer_ans)
				{
					MessageT();
				}
				else
				{
					MessageF();
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}

int func1(int x, int y)
{	
	int Computer_ans;
	printf("What is %d+7-%d ? (input -1 to exit)\n", x, y);
	Computer_ans = x + 7 - y;
	printf("%d\n", Computer_ans);

	return Computer_ans;
}

int func2(int x, int y)
{
	int Computer_ans;
	printf("What is (%d+5)*%d/%d ? (input -1 to exit)\n", x, x, y);
	Computer_ans = (x + 5) * x / y;
	printf("%d\n", Computer_ans);

	return Computer_ans;
}

int func3(int x, int y)
{
	int Computer_ans;
	printf("What is (3*%d)+(%d*%d/4)-5 ? (input -1 to exit)\n", x, y, y);
	Computer_ans = (3 * x) + (y * y / 4) - 5;
	printf("%d\n", Computer_ans);

	return Computer_ans;
}

void MessageT()
{
	int message = rand() % 3;
	if (message == 0)
	{
		printf("Exellent!\n");
	}
	else if (message == 1)
	{
		printf("Very good!\n");
	}
	else
	{
		printf("Nice work!\n");
	}
}

void MessageF()
{
	int message = rand()% 3;
	if (message == 0)
	{
		printf("No. Please try again.\n");
	}
	else if (message == 1)
	{
		printf("Wrong. Try once again.\n");
	}
	else
	{
		printf("Don't give up!\n");
	}
}
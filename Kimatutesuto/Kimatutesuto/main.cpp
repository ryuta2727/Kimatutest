#include<stdio.h>
#include<iostream>
//��P��
/*
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111
*/

//��Q��
/*
10000001 = 129
10111111 = 383
*/

//��R��
/*
char   1�o�C�g
int    4�o�C�g
float  4�o�C�g
double 8�o�C�g
*/

//��S��
/*
char*   4�o�C�g
int*    4�o�C�g
float*  4�o�C�g
double* 4�o�C�g
*/

//��T��
//�����@�A
/*
int main()
{
	int num = 5;
	int judge;
	num = num % 3;

	if (num == 0)
	{
		//�@
		judge = 1;
		std::cout << judge;
	}
	else if (num == 2)
	{
		//�A
		judge = 2;
		std::cout << judge;
	}
	else
	{
		//�B
		judge = 3;
		std::cout << judge;
	}
}
*/

//��U��
/*
int main()
{
	int num, num2;
	std::cout << "���l��2���͂��ĉ�����";
	std::cin >> num >> num2;
	if (num % 2 == 1)
	{
		std::cout << num + num2;
	}
	if (num % 2 == 0)
	{
		std::cout << num - num2;
	}
}
*/

//��V��
/*
int main()
{
	while (true)
	{
		int num, num2;
		std::cout << "���l��2���͂��ĉ�����";
		std::cin >> num >> num2;
		if ()
		{
			break;
		}
		if (num % 2 == 1)
		{
			std::cout << num + num2;
		}
		if (num % 2 == 0)
		{
			std::cout << num - num2;
		}
	}
}
*/
//��W��
/*
class Point
{
public:
	Point() { Clear(); }

	void Clear()
	{
		x = 0;
		y = 0;
		z = 0;
	}
public:
	int x, y, z;
};

int main()
{
	Point point;
	Point nextPoint;

	nextPoint.x = 100;
	nextPoint.y = 30;

	while (1)
	{
		if (point.x < nextPoint.x)
		{
			point.x++;
		}
		else if (point.x > nextPoint.x)
		{
			point.x--;
		}

		if (point.y < nextPoint.y)
		{
			point.y++;
		}
		else if (point.y > nextPoint.y)
		{
			point.y--;
		}
		printf("pointX = %d\n", point.x);
		printf("pointY = %d\n", point.y);

		if (point.x == nextPoint.x &&
			point.y == nextPoint.y)
		{
			break;
		}
	}
}
*/
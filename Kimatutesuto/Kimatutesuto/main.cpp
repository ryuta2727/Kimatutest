#include<stdio.h>
#include<iostream>
//第１問
/*
00101100 + 01010101 = 10000001
10110000 + 00001111 = 10111111
*/

//第２問
/*
10000001 = 129
10111111 = 383
*/

//第３問
/*
char   1バイト
int    4バイト
float  4バイト
double 8バイト
*/

//第４問
/*
char*   4バイト
int*    4バイト
float*  4バイト
double* 4バイト
*/

//第５問
//答え　②
/*
int main()
{
	int num = 5;
	int judge;
	num = num % 3;

	if (num == 0)
	{
		//①
		judge = 1;
		std::cout << judge;
	}
	else if (num == 2)
	{
		//②
		judge = 2;
		std::cout << judge;
	}
	else
	{
		//③
		judge = 3;
		std::cout << judge;
	}
}
*/

//第６問
/*
int main()
{
	int num, num2;
	std::cout << "数値を2つ入力して下さい";
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

//第７問
/*
int main()
{
	while (true)
	{
		int num, num2;
		std::cout << "数値を2つ入力して下さい";
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
//第８問
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
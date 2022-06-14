#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std; 
class Square
{
public:
	void squareLen()
	{
		int iSqrLength;
		//printing
		printf("Enter length for Square: ");
		scanf("%d", &iSqrLength);
		printf("Length of Square is: %d\n", iSqrLength);
		printf("Area of Square is: %d\n", iSqrLength * iSqrLength);
		printf("Volume of Cube is: %d\n", iSqrLength * iSqrLength * iSqrLength);
	}

};
class Rectangle :public Square
{
public:
	void rectangleLen()
	{
		int iRecLength, iBreadth, iHeight;
		printf("Enter lenght for Rectangle: ");
		scanf("%d", &iRecLength);
		printf("Enter breadth for Rectangle: ");
		scanf("%d", &iBreadth);
		printf("Enter height for Rectangle: ");
		scanf("%d", &iHeight);
		printf("Length of Rectangle is: %d\n", iRecLength);
		printf("Area of Rectangle is: %d\n", iRecLength * iBreadth);
		printf("Volume of Rectangle is: %d\n/", iRecLength * iBreadth * iHeight);
	}
};
int main()
{
	Rectangle r;
	//int t;
	char cChar;
	printf("Enter 's' for Square, Enter 'r' for Rectangle: ");
	scanf("%c", &cChar);
	if (cChar == 's' || cChar == 'S')
	{
		r.squareLen();
	}
	else if (cChar == 'r' || cChar == 'R')
	{
		r.rectangleLen();
	}
	else
	{
		printf("Invalid input!");
	}
	return 0;
}

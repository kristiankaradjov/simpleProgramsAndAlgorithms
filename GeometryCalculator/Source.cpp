#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>
using namespace std;

int main()
{
    double radius;
	cout<<"Enter  radius to find the perimeter and area of a circle:  ";

	cin>>radius;
	double areaCircle = M_PI*radius*radius;
	double perimeterCircle = 2*M_PI*radius;
	cout<<"The perimeter of the circle is "<<perimeterCircle<<",and the area of the circle is "<<areaCircle<<endl;
	double sideSquare;
	cout<<"Enter one side to find the perimeter and area of a square: ";

	cin>>sideSquare;
	double perimeterSquare = 4*sideSquare;
	double areaSqare = sideSquare*sideSquare;
    cout<<"The perimeter of the square is "<<perimeterSquare<<", and the area is "<<areaSqare<<endl;
	double rectangleLenght;double rectangleWidth;
	cout<<"Enter the lenght  to find the perimeter and area of a rectangle: ";

	cin>>rectangleLenght;
	cout<<"Now enter the width: ";

	cin>>rectangleWidth;
	double rectanglePerimeter = 2*(rectangleLenght+rectangleWidth);
	double rectangleArea = rectangleLenght*rectangleWidth;
	cout<<"The perimeter of the rectangle is "<<rectanglePerimeter<<", and the area is "<<rectangleArea<<endl;
	double  sideATriangle;double sideBTriangle;
	cout<<"Enter the two sides of  triangle to find his area and perimeter: ";

	cin>>sideATriangle;cin>>sideBTriangle;
	double areaTriangle = (sideATriangle*sideBTriangle)/2;
	double areaPerimeter = sideATriangle + sideBTriangle + sqrt((sideATriangle*sideATriangle) + (sideBTriangle*sideBTriangle));
	cout<<"The area of the right triangle is "<<areaTriangle<<", and the perimeter is "<<areaPerimeter<<endl;
    return 0;
}

//
//  main.cpp
//  SecondLabRepetition
//
//  Created by Mateusz Kot on 29/10/2019.
//  Copyright © 2019 Mateusz Kot. All rights reserved.
//


#include <iostream>
#include <cmath>

using namespace std;


class Shape
{
public:
    double x,h,pi,r;
public:
    virtual ~Shape() {}
    virtual double area() = 0;
};

class Square: public Shape
{
public:
    double area()
    {
        x = 2;
        return x*x;
    }
};

class Rectangle: public Shape
{
public:
    double area()
    {
        x = 2;
        h = 4;
        return x*h;
    }
    
};

class Triangle: public Shape
{
public:
    double area()
    {
        x = 2;
        h = 4;
        return (x*h)/2;
    }
    
};

class Circle: public Shape
{
public:
    double area()
    {
        pi = 3;
        r = 4;
        return pi*pow(2,r);
    }
};
int main()
{
    Shape * sq = new Square;
    Shape * rec = new Rectangle;
    Shape * tr = new Triangle;
    Shape * ci = new Circle;
    
    cout << " The area of the square is equal to: " << sq -> area() << endl;
    cout << " The area of the rectangle is equal to: " << rec -> area() << endl;
    cout << " The area of the triangle is equal to: " << tr -> area() << endl;
    cout << " The are of the circle is equal to: " << ci -> area() << endl;

    delete sq;
    delete rec;
    delete tr;
    delete ci;
        
    return 0;
}


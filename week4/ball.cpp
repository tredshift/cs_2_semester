#include "ball.hpp"
#include <iostream>
#include <cmath>
using namespace std;

void Ball::push(double v, double alpha)
{
	vx += v * cos(alpha);
	vy += v * sin(alpha);
}

Ball::Ball(Point initialPos)
{
	position = initialPos;
}

void Ball::fly(double t)
{
	position.y += vy * t - 0.5*g*t*t;
	position.x += vx * t;
}
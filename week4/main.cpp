#include "ball.hpp"
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	Ball ball(Point{-3, 5});

	ball.push(10, 45);
	for (double t = 0; t < 25; t += 0.1)
	{
		ball.fly(t);
		cout << "Pos x:" << ball.position.x << endl;
		cout << "Pos y:" << ball.position.y << endl;
		cout << "\n";
		this_thread::sleep_for(chrono::milliseconds(100));
	}
}
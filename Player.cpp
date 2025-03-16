/*
 * Player.cpp
 *
 *  Created on: Jun 3, 2022
 *      Author: cosmo
 */

#include "Player.h"
#include "util.h"

Player::Player()
{
	cout << "Default PLayer Class Called" << endl;
}

void Player::display() //draw player (arrow keys) car
{
	DrawSquare(xI, yI, 50, colors[YELLOW]);
}

void Player::display2() //draw player (keyboard inputs) car
{
	DrawSquare(x2, y2, 50, colors[MEDIUM_PURPLE]);
}

void Player::Controls(int key) //controls for player to use the arrow keys
{
	cout << "Controls from Player Class Called" << endl;
	if (key == GLUT_KEY_LEFT)
		{
		xI -= 50;
		if (xI < 50)
			{
				xI = 1000;
			}
		}
		else if (key == GLUT_KEY_RIGHT)
				{
					xI += 50;
					if (xI > 1000)
						{
							xI = 50;
						}
				}

		else if (key == GLUT_KEY_UP)
		{
			yI += 50;
			if (yI > 1000)
				{
					yI = 50;
				}
		}

		else if (key == GLUT_KEY_DOWN)
		{
			yI -= 50;
			if (yI < 50)
				{
					yI = 1000;
				}
		}
}

void Player::Controls2(int key) //controls for player with keyboard inputs
{
	cout << "Controls from Player Class Called" << endl;
	if (key == 'd' || key == 'D')
		{
		x2 -= 50;
		if (x2 < 50)
			{
				x2 = 1000;
			}
		}
		else if (key == 'g' || key == 'G')
				{
					x2 += 50;
					if (x2 > 1000)
						{
							x2 = 50;
						}
				}

		else if (key == 'r' || key == 'R')
		{
			y2 += 50;
			if (y2 > 1000)
				{
					y2 = 50;
				}
		}

		else if (key == 'f' || key == 'F')
		{
			y2 -= 50;
			if (y2 < 50)
				{
					y2 = 1000;
				}
		}
}

void Player::ChangeControlsPlayer1(int key, int &xI, int &yI)
{
	char up, down, left, right;
	cin >> up;
	cin >> down;
	cin >> left;
	cin >> right;
	cout << "Controls from Player Class Called" << endl;
		if (key == left || key == left)
			{
			xI -= 50;
			if (xI < 50)
				{
					xI = 1000;
				}
			}
			else if (key == right || key == right)
					{
						xI += 50;
						if (xI > 1000)
							{
								xI = 50;
							}
					}

			else if (key == up || key == up)
			{
				yI += 50;
				if (yI > 1000)
					{
						yI = 50;
					}
			}

			else if (key == down || key == down)
			{
				yI -= 50;
				if (yI < 50)
					{
						yI = 1000;
					}
			}
}


Player::~Player()
{
	cout << "Player Class Destructor Called" << endl;
}

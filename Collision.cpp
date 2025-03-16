/*
 * Collision.cpp
 *
 *  Created on: Jun 4, 2022
 *      Author: cosmo
 */

#include "Collision.h"
#include "util.h"

Collision::Collision()
{

}

Collision::~Collision()
{

}

void Collision::collide_lvl1 (int& xI, int& yI, int& score, int &x2, int &y2)
{
	//BUILDING 1 COLLISION Part1
	if (xI >= 100 && xI < 200)
	{
		if (yI == 500)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 950)
		{
			yI += 50;
			score -= 1;
		}
		else
			cout << "no collision" << endl;
	}
	//BUILDING 1 COLLISION Part2
	if ( yI >= 500 && yI < 1000)
		{
			if (xI == 100)
			{
				xI -= 50;
				score -= 1;
			}
			if ((xI <= 150)&&(xI > 100))
			{
				xI += 50;
				score -= 1;
			}
		}
	//BUILDING 1 COLLISION Part3
	if (xI >= 200 && xI < 350)
	{
		if (yI == 850)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 900)
		{
			yI += 50;
			score -= 1;
		}
	}

	//BUILDING 2 COLLISION Part1
	if (xI >= 900 && xI < 950)
	{
		if (yI == 450)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 850)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDING 2 COLLISION Part2
	if (yI >= 450 && yI <= 850)
	{
		if (xI == 900)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 950)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 3 COLLSION Part1
	if (xI >= 300 && xI <= 650)
	{
		if (yI == 400)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 450)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDIONG 3 COLLISION Part2
	if (yI >= 150 && yI <= 350)
	{
		if (xI == 550)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 600)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 1 COLLISION Part1 p2
		if (x2 >= 100 && x2 < 200)
		{
			if (y2 == 500)
			{
				y2 -= 50;
				score -= 1;
			}
			else if (y2 == 950)
			{
				y2 += 50;
				score -= 1;
			}
			else
				cout << "no collision" << endl;
		}
		//BUILDING 1 COLLISION Part2 p2
		if ( y2 >= 500 && y2 < 1000)
			{
				if (x2 == 100)
				{
					x2 -= 50;
					score -= 1;
				}
				if ((x2 <= 150)&&(x2 > 100))
				{
					x2 += 50;
					score -= 1;
				}
			}
		//BUILDING 1 COLLISION Part3 p2
		if (x2 >= 200 && x2 < 350)
		{
			if (y2 == 850)
			{
				y2 -= 50;
				score -= 1;
			}
			else if (y2 == 900)
			{
				y2 += 50;
				score -= 1;
			}
		}

		//BUILDING 2 COLLISION Part1 p2
		if (x2 >= 900 && x2 < 950)
		{
			if (y2 == 450)
			{
				y2 -= 50;
				score -= 1;
			}
			else if (y2 == 850)
			{
				y2 += 50;
				score -= 1;
			}
		}
		//BUILDING 2 COLLISION Part2 p2
		if (y2 >= 450 && y2 <= 850)
		{
			if (x2 == 900)
			{
				x2 -= 50;
				score -= 1;
			}
			else if (x2 == 950)
			{
				x2 += 50;
				score -= 1;
			}
		}

		//BUILDING 3 COLLSION Part1 p2
		if (x2 >= 300 && x2 <= 650)
		{
			if (y2 == 400)
			{
				y2 -= 50;
				score -= 1;
			}
			else if (y2 == 450)
			{
				y2 += 50;
				score -= 1;
			}
		}
		//BUILDIONG 3 COLLISION Part2 p2
		if (y2 >= 150 && y2 <= 350)
		{
			if (x2 == 550)
			{
				x2 -= 50;
				score -= 1;
			}
			else if (x2 == 600)
			{
				x2 += 50;
				score -= 1;
			}
		}
}

void Collision::collide_lvl2 (int& xI, int& yI, int& score, int &x2, int &y2)
{
	//BUILDING 1 COLLISION Part1
	if (xI >= 100 && xI < 200)
	{
		if (yI == 500)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 950)
		{
			yI += 50;
			score -= 1;
		}
		else
			cout << "no collision" << endl;
	}
	//BUILDING 1 COLLISION Part2
	if ( yI >= 500 && yI < 1000)
		{
			if (xI == 100)
			{
				xI -= 50;
				score -= 1;
			}
			if ((xI <= 150)&&(xI > 100))
			{
				xI += 50;
				score -= 1;
			}
		}
	//BUILDING 1 COLLISION Part3
	if (xI >= 200 && xI < 350)
	{
		if (yI == 850)
		{
			yI -= 50;
			score -= 1;

		}
		else if (yI == 900)
		{
			yI += 50;
			score -= 1;

		}
	}

	//BUILDING 2 COLLISION Part1
	if (xI >= 900 && xI < 950)
	{
		if (yI == 450)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 850)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDING 2 COLLISION Part2
	if (yI >= 450 && yI <= 850)
	{
		if (xI == 900)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 950)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 3 COLLSION Part1
	if (xI >= 300 && xI <= 650)
	{
		if (yI == 400)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 450)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDIONG 3 COLLISION Part2
	if (yI >= 150 && yI <= 350)
	{
		if (xI == 550)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 600)
		{
			xI += 50;
			score -= 1;
		}
	}
	//BUILDING 4 COLLISION Part1
	if (xI >= 400 && xI <= 450)
	{
		if (yI == 700)
		{
			yI += 50;
			score -= 1;
		}
		else if (yI == 450)
		{
			yI -= 50;
			score -= 1;
		}
	}
	//BUILDING 4 COLLISION Part2
	if (yI >= 500 && yI <= 700)
	{
		if(xI == 400)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 450)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 1 COLLISION Part1 p2
			if (x2 >= 100 && x2 < 200)
			{
				if (y2 == 500)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 950)
				{
					y2 += 50;
					score -= 1;
				}
				else
					cout << "no collision" << endl;
			}
			//BUILDING 1 COLLISION Part2 p2
			if ( y2 >= 500 && y2 < 1000)
				{
					if (x2 == 100)
					{
						x2 -= 50;
						score -= 1;
					}
					if ((x2 <= 150)&&(x2 > 100))
					{
						x2 += 50;
						score -= 1;
					}
				}
			//BUILDING 1 COLLISION Part3 p2
			if (x2 >= 200 && x2 < 350)
			{
				if (y2 == 850)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 900)
				{
					y2 += 50;
					score -= 1;
				}
			}

			//BUILDING 2 COLLISION Part1 p2
			if (x2 >= 900 && x2 < 950)
			{
				if (y2 == 450)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 850)
				{
					y2 += 50;
					score -= 1;
				}
			}
			//BUILDING 2 COLLISION Part2 p2
			if (y2 >= 450 && y2 <= 850)
			{
				if (x2 == 900)
				{
					x2 -= 50;
					score -= 1;
				}
				else if (x2 == 950)
				{
					x2 += 50;
					score -= 1;
				}
			}

			//BUILDING 3 COLLSION Part1 p2
			if (x2 >= 300 && x2 <= 650)
			{
				if (y2 == 400)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 450)
				{
					y2 += 50;
					score -= 1;
				}
			}
			//BUILDIONG 3 COLLISION Part2 p2
			if (y2 >= 150 && y2 <= 350)
			{
				if (x2 == 550)
				{
					x2 -= 50;
					score -= 1;
				}
				else if (x2 == 600)
				{
					x2 += 50;
					score -= 1;
				}
			}
			//BUILDING 4 COLLISION Part1 p2
				if (x2 >= 400 && x2 <= 450)
				{
					if (y2 == 700)
					{
						y2 += 50;
						score -= 1;
					}
					else if (y2 == 450)
					{
						y2 -= 50;
						score -= 1;
					}
				}

				//BUILDING 4 COLLISION Part2 p2
				if (y2 >= 500 && y2 <= 700)
				{
					if(x2 == 400)
					{
						x2 -= 50;
						score -= 1;
					}
					else if (x2 == 450)
					{
						x2 += 50;
						score -= 1;
					}
				}
}

void Collision::collide_lvl3 (int& xI, int& yI, int& score, int &x2, int &y2)
{
	//BUILDING 1 COLLISION Part1
	if (xI >= 100 && xI < 200)
	{
		if (yI == 500)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 950)
		{
			yI += 50;
			score -= 1;
		}
		else
			cout << "no collision" << endl;
	}
	//BUILDING 1 COLLISION Part2
	if ( yI >= 500 && yI < 1000)
		{
			if (xI == 100)
			{
				xI -= 50;
				score -= 1;
			}
			if ((xI <= 150)&&(xI > 100))
			{
				xI += 50;
				score -= 1;
			}
		}
	//BUILDING 1 COLLISION Part3
	if (xI >= 200 && xI < 350)
	{
		if (yI == 850)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 900)
		{
			yI += 50;
			score -= 1;
		}
	}

	//BUILDING 2 COLLISION Part1
	if (xI >= 900 && xI < 950)
	{
		if (yI == 450)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 850)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDING 2 COLLISION Part2
	if (yI >= 450 && yI <= 850)
	{
		if (xI == 900)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 950)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 3 COLLSION Part1
	if (xI >= 300 && xI <= 650)
	{
		if (yI == 400)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 450)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDIONG 3 COLLISION Part2
	if (yI >= 150 && yI <= 350)
	{
		if (xI == 550)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 600)
		{
			xI += 50;
			score -= 1;
		}
	}
	//BUILDING 4 COLLISION Part1
	if (xI >= 400 && xI <= 450)
	{
		if (yI == 700)
		{
			yI += 50;
			score -= 1;
		}
		else if (yI == 450)
		{
			yI -= 50;
			score -= 1;
		}
	}
	//BUILDING 4 COLLISION Part2
	if (yI >= 500 && yI <= 700)
	{
		if(xI == 400)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 450)
		{
			xI += 50;
			score -= 1;
		}
	}
	//BUILDING 5 COLLISION Part1
	if (xI >= 500 && xI <= 650)
	{
		if (yI == 800)
		{
			yI -= 50;
			score -= 1;
		}
		else if (yI == 850)
		{
			yI += 50;
			score -= 1;
		}
	}
	//BUILDING 5 COLLISION Part2
	if (yI >= 800 && yI <= 950)
	{
		if (xI == 600)
		{
			xI -= 50;
			score -= 1;
		}
		else if (xI == 650)
		{
			xI += 50;
			score -= 1;
		}
	}

	//BUILDING 1 COLLISION Part1 p2
			if (x2 >= 100 && x2 < 200)
			{
				if (y2 == 500)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 950)
				{
					y2 += 50;
					score -= 1;
				}
				else
					cout << "no collision" << endl;
			}
			//BUILDING 1 COLLISION Part2 p2
			if ( y2 >= 500 && y2 < 1000)
				{
					if (x2 == 100)
					{
						x2 -= 50;
						score -= 1;
					}
					if ((x2 <= 150)&&(x2 > 100))
					{
						x2 += 50;
						score -= 1;
					}
				}
			//BUILDING 1 COLLISION Part3 p2
			if (x2 >= 200 && x2 < 350)
			{
				if (y2 == 850)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 900)
				{
					y2 += 50;
					score -= 1;
				}
			}

			//BUILDING 2 COLLISION Part1 p2
			if (x2 >= 900 && x2 < 950)
			{
				if (y2 == 450)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 850)
				{
					y2 += 50;
					score -= 1;
				}
			}
			//BUILDING 2 COLLISION Part2 p2
			if (y2 >= 450 && y2 <= 850)
			{
				if (x2 == 900)
				{
					x2 -= 50;
					score += 5;
				}
				else if (x2 == 950)
				{
					x2 += 50;
					score += 5;
				}
			}

			//BUILDING 3 COLLSION Part1 p2
			if (x2 >= 300 && x2 <= 650)
			{
				if (y2 == 400)
				{
					y2 -= 50;
					score -= 1;
				}
				else if (y2 == 450)
				{
					y2 += 50;
					score -= 1;
				}
			}
			//BUILDIONG 3 COLLISION Part2 p2
			if (y2 >= 150 && y2 <= 350)
			{
				if (x2 == 550)
				{
					x2 -= 50;
					score -= 1;
				}
				else if (x2 == 600)
				{
					x2 += 50;
					score -= 1;
				}
			}
			//BUILDING 4 COLLISION Part1 p2
				if (x2 >= 400 && x2 <= 450)
				{
					if (y2 == 700)
					{
						y2 += 50;
						score -= 1;
					}
					else if (y2 == 450)
					{
						y2 -= 50;
						score -= 1;
					}
				}

				//BUILDING 4 COLLISION Part2 p2
				if (y2 >= 500 && y2 <= 700)
				{
					if(x2 == 400)
					{
						x2 -= 50;
						score -= 1;
					}
					else if (x2 == 450)
					{
						x2 += 50;
						score -= 1;
					}
				}
				//BUILDING 5 COLLISION Part1 p2
					if (x2 >= 500 && x2 <= 650)
					{
						if (y2 == 800)
						{
							y2 -= 50;
							score -= 1;
						}
						else if (y2 == 850)
						{
							y2 += 50;
							score -= 1;
						}
					}
					//BUILDING 5 COLLISION Part2 p2
					if (y2 >= 800 && y2 <= 950)
					{
						if (x2 == 600)
						{
							x2 -= 50;
							score -= 1;
						}
						else if (x2 == 650)
						{
							x2 += 50;
							score -= 1;
						}
					}
}

void Collision::collide_lvl1b(int &xB, int &yB, bool &bullet_flag, int &xB2, int &yB2, int &xI, int &yI, int &x2, int &y2, bool &bullet_flag2)
{
	//BUILDING 1 COLLISION Part1
		if (xB >= 100 && xB < 200)
		{
			if (yB == 500)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (yB == 950)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else
				cout << "no collision" << endl;
		}
		//BUILDING 1 COLLISION Part2
		if ( yB >= 500 && yB < 1000)
			{
				if (xB == 100)
				{
					xB = xI + 25;
					yB = yI + 25;
					bullet_flag = false;
				}
				if ((xB <= 150)&&(xB > 100))
				{
					xB = xI + 25;
					yB = yI + 25;
					bullet_flag = false;
				}
			}
		//BUILDING 1 COLLISION Part3
		if (xB >= 200 && xB < 350)
		{
			if (yB == 850)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (yB == 900)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}

		//BUILDING 2 COLLISION Part1
		if (xB >= 900 && xB < 950)
		{
			if (yB == 450)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (yB == 850)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}
		//BUILDING 2 COLLISION Part2
		if (yB >= 450 && yB <= 850)
		{
			if (xB == 900)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (xB == 950)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}

		//BUILDING 3 COLLSION Part1
		if (xB >= 300 && xB <= 650)
		{
			if (yB == 400)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (yB == 450)
			{
				bullet_flag = false;
			}
		}
		//BUILDIONG 3 COLLISION Part2
		if (yB >= 150 && yB <= 350)
		{
			if (xB == 550)
			{
				bullet_flag = false;
			}
			else if (xB == 600)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}

		//BUILDING 1 COLLISION Part1 p2
			if (xB2 >= 100 && xB2 < 200)
			{
				if (yB2 == 500)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (yB2 == 950)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else
					cout << "no collision" << endl;
			}
			//BUILDING 1 COLLISION Part2 p2
			if ( yB2 >= 500 && yB2 < 1000)
				{
					if (xB2 == 100)
					{
						bullet_flag2 = false;
						xB2 = x2 + 25;
						yB2 = y2 + 25;
					}
					if ((xB2 <= 150)&&(xB2 > 100))
					{
						bullet_flag2 = false;
						xB2 = x2 + 25;
						yB2 = y2 + 25;
					}
				}
			//BUILDING 1 COLLISION Part3 p2
			if (xB2 >= 200 && xB2 < 350)
			{
				if (yB2 == 850)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (yB2 == 900)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}

			//BUILDING 2 COLLISION Part1 p2
			if (xB2 >= 900 && xB2 < 950)
			{
				if (yB2 == 450)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (yB2 == 850)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}
			//BUILDING 2 COLLISION Part2 p2
			if (yB2 >= 450 && yB2 <= 850)
			{
				if (xB2 == 900)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (xB2 == 950)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}

			//BUILDING 3 COLLSION Part1 p2
			if (xB2 >= 300 && xB2 <= 650)
			{
				if (yB2 == 400)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (yB2 == 450)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}
			//BUILDIONG 3 COLLISION Part2 p2
			if (yB2 >= 150 && yB2 <= 350)
			{
				if (xB2 == 550)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (xB2 == 600)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}
}

void Collision::collide_lvl2b(int &xB, int &yB, bool &bullet_flag, int &xB2, int &yB2, int &xI, int &yI, int &x2, int &y2, bool &bullet_flag2)
{
	//BUILDING 4 COLLISION Part1
		if (xB >= 400 && xB <= 450)
		{
			if (yB == 700)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (yB == 450)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}
		//BUILDING 4 COLLISION Part2
		if (yB >= 500 && yB <= 700)
		{
			if(xB == 400)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
			else if (xB == 450)
			{
				xB = xI + 25;
				yB = yI + 25;
				bullet_flag = false;
			}
		}
		//BUILDING 4 COLLISION Part1 p2
			if (xB2 >= 400 && xB2 <= 450)
			{
				if (yB2 == 700)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (yB2 == 450)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}

			//BUILDING 4 COLLISION Part2 p2
			if (yB2 >= 500 && yB2 <= 700)
			{
				if(xB2 == 400)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
				else if (xB2 == 450)
				{
					bullet_flag2 = false;
					xB2 = x2 + 25;
					yB2 = y2 + 25;
				}
			}

}
void Collision::collide_lvl3b(int &xB, int &yB, bool &bullet_flag, int &xB2, int &yB2, int &xI, int &yI, int &x2, int &y2, bool &bullet_flag2)
{
	//BUILDING 5 COLLISION Part1
	if (xB >= 500 && xB <= 650)
	{
		if (yB == 800)
		{
			xB = xI + 25;
			yB = yI + 25;
			bullet_flag = false;
		}
		else if (yB == 850)
		{
			xB = xI + 25;
			yB = yI + 25;
			bullet_flag = false;
		}
	}
	//BUILDING 5 COLLISION Part2
	if (yB >= 800 && yB <= 950)
	{
		if (xB == 600)
		{
			xB -= 50;
		}
		else if (xB == 650)
		{
			xB += 50;
		}
	}
	//BUILDING 5 COLLISION Part1 p2
		if (xB2 >= 500 && xB2 <= 650)
		{
			if (yB2 == 800)
			{
				bullet_flag2 = false;
				xB2 = x2 + 25;
				yB2 = y2 + 25;
			}
			else if (yB2 == 850)
			{
				bullet_flag2 = false;
				xB2 = x2 + 25;
				yB2 = y2 + 25;
			}
		}
	//BUILDING 5 COLLISION Part2 p2
		if (yB2 >= 800 && yB2 <= 950)
		{
			if (xB2 == 600)
			{
				bullet_flag2 = false;
				xB2 = x2 + 25;
				yB2 = y2 + 25;
			}
			else if (xB2 == 650)
			{
				bullet_flag2 = false;
				xB2 = x2 + 25;
				yB2 = y2 + 25;
			}
		}
}

void Collision::npc1_collision(int &xB, int &yB, bool &bullet_flag, int &npc1_x, int &npc1_y, int &score )
{
	if (xB == npc1_x && yB == npc1_y+25)
	{
		score += 1;
		bullet_flag = false;
		xB = 5000;
		yB = 5000;
	}
}

void Collision::npc2_collision(int &xB, int &yB, bool &bullet_flag, int &npc2_x, int &npc2_y, int &score )
{
	if (xB == npc2_x && yB == npc2_y+25)
	{
		score += 1;
		bullet_flag = false;
		xB = 5000;
		yB = 5000;
	}
}

void Collision::npc3_collision(int &xB, int &yB, bool &bullet_flag, int &npc3_x, int &npc3_y, int &score )
{
	if (xB == npc3_x && yB == npc3_y+25)
	{
		score += 1;
		bullet_flag = false;
		xB = 5000;
		yB = 5000;
	}
}

void Collision::part1_pvp_collide(int &xB, int &yB, bool &bullet_flag, int &x2, int &y2, int &score)
{
	if (xB == x2 && yB == y2 + 25)
	{
		score += 1;
		bullet_flag = false;
		xB = yB = 5000;
	}
}

void Collision::part2_pvp_collide(int& xB2, int & yB2, bool & bullet_flag2, int & xI, int & yI, int & scorep2)
{
	if (xB2 == xI && yB2 == yI + 25)
	{
		scorep2 += 1;
		bullet_flag2 = false;
		xB2 = yB2 = 5000;
	}
}

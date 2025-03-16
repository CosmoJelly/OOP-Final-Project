/*
 * NPC.cpp
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#include "NPC.h"
#include "util.h"

NPC::NPC()
{
	cout << "NPC Class Constructor Called" << endl;
}

NPC::~NPC()
{
	cout << "NPC Class Deconstructor Called" << endl;
}

void NPC::npc_lvl1()
{
	DrawSquare(npc1_x, npc1_y, 50, colors[MAGENTA]);
}

void NPC::npc_lvl2()
{
	DrawSquare(npc1_x, npc1_y, 50, colors[MAGENTA]);
	DrawSquare(npc2_x, npc2_y, 50, colors[MAGENTA]);
}

void NPC::npc_lvl3()
{
	DrawSquare(npc1_x, npc1_y, 50, colors[MAGENTA]);
	DrawSquare(npc2_x, npc2_y, 50, colors[MAGENTA]);
	DrawSquare(npc3_x, npc3_y, 50, colors[MAGENTA]);
}

void NPC::move_lvl1()
{
		if (npc1_y > 50 && !f)
		{
			npc1_y -= 50;
			cout << "going down";
			if(npc1_y <= 50)
			{
				f = true;
			}
		}
		else if (npc1_y < 300 && f)
		{
			cout << "go up";
			npc1_y += 50;
			if (npc1_y >= 300)
			{
				f = false;
			}
		}
}

void NPC::move_lvl2()
{
	if (npc2_x > 500 && f)
			{
				npc2_x -= 50;
				cout << "going left";
				if(npc2_x <= 500)
				{
					f = false;
				}
			}
			else if (npc2_x < 850 && !f)
			{
				cout << "go right";
				npc2_x += 50;
				if (npc2_x >= 850)
				{
					f = true;
				}
			}
}

void NPC::move_lvl3()
{
	if (npc3_x > 200 && f)
				{
					npc3_x -= 50;
					cout << "going left";
					if(npc3_x <= 200)
					{
						f = false;
					}
				}
				else if (npc3_x < 850 && !f)
				{
					cout << "go right";
					npc3_x += 50;
					if (npc3_x >= 850)
					{
						f = true;
					}
				}
}

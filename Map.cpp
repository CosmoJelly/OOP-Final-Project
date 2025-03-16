/*
 * Map.cpp
 *
 *  Created on: Jun 2, 2022
 *      Author: cosmo
 */
#include<iostream>
#include "Map.h"
#include "util.h"



using namespace std;

Map::Map()
{
	DrawRectangle(0, 0, 1100, 1120, colors[DARK_GRAY]); //Draw the background colour for the program
}

Map::~Map()
{
	cout << "Map Class Destructor Called" << endl;
}

void Map::lvl1()
{
	cout << "Level 1 Called" << endl;
	DrawRectangle(0, 0, 1100, 1120, colors[WHITE]); //Draw the background colour for the program
	int increment = 50; //Main grid algorithm
		for (int i = 0; i < 21; i++)
		{
			int thickness = 5;
			DrawLine(increment, 47, increment, 1053, thickness, colors[BLACK]);
			DrawLine(50, increment, 1050, increment, thickness, colors[BLACK]);
			increment += 50;
		}
		//BUILDING 1
		DrawRectangle(150, 850, 200, 100, colors[BLACK]);
		DrawRectangle(100, 500, 100, 500, colors[BLACK]);

		//BUILDING 2
		DrawRectangle(900, 450, 100, 450, colors[BLACK]);

		//BUILDING 3
		DrawRectangle(300, 400, 400, 100, colors[BLACK]);
		DrawRectangle(550, 150, 100, 300, colors[BLACK]);

	glutPostRedisplay();
}

void Map::lvl2()
{
	cout << "Level 2 Called" << endl;
	DrawRectangle(0, 0, 1100, 1120, colors[DARK_GRAY]); //Draw the background colour for the program
	int increment = 50; //Main grid algorithm
		for (int i = 0; i < 21; i++)
		{
			int thickness = 5;
			DrawLine(increment, 47, increment, 1053, thickness, colors[BLACK]);
			DrawLine(50, increment, 1050, increment, thickness, colors[BLACK]);
			increment += 50;
		}
	//BUILDING 1
	DrawRectangle(150, 850, 200, 100, colors[BLACK]);
	DrawRectangle(100, 500, 100, 500, colors[BLACK]);

	//BUILDING 2
	DrawRectangle(900, 450, 100, 450, colors[BLACK]);

	//BUILDING 3
	DrawRectangle(300, 400, 400, 100, colors[BLACK]);
	DrawRectangle(550, 150, 100, 300, colors[BLACK]);

	//BUILDING 4
	DrawRectangle(400, 450, 100, 300, colors[BLACK]);



	glutPostRedisplay();
}

void Map::lvl3()
{
	cout << "Level 3 Called" << endl;
	DrawRectangle(0, 0, 1100, 1120, colors[DARK_GRAY]); //Draw the background colour for the program
	int increment = 50; //Main grid algorithm
		for (int i = 0; i < 21; i++)
		{
			int thickness = 5;
			DrawLine(increment, 47, increment, 1053, thickness, colors[BLACK]);
			DrawLine(50, increment, 1050, increment, thickness, colors[BLACK]);
			increment += 50;
		}
	//BUILDING 1
	DrawRectangle(150, 850, 200, 100, colors[BLACK]);
	DrawRectangle(100, 500, 100, 500, colors[BLACK]);

	//BUILDING 2
	DrawRectangle(900, 450, 100, 450, colors[BLACK]);

	//BUILDING 3
	DrawRectangle(300, 400, 400, 100, colors[BLACK]);
	DrawRectangle(550, 150, 100, 300, colors[BLACK]);

	//BUILDING 4
	DrawRectangle(400, 450, 100, 300, colors[BLACK]);

	//BUILDING 5
	DrawRectangle(500, 800, 200, 100, colors[BLACK]);
	DrawRectangle(600, 800, 100, 200, colors[BLACK]);

	glutPostRedisplay();
}

void Map::End()
{
	DrawRectangle(0, 0, 1100, 1120, colors[BLACK]); //Draw the background colour for the program
	DrawString(400, 560, "CREDITS", colors[WHITE]);
	DrawString(350, 500, "Created By Waleed Nouman", colors[WHITE]);
	DrawString(200, 440, "Special Thanks To You The Player for Testing Our Pre-Alpha Demo of Combat", colors[WHITE]);
	DrawString(50, 50, "PRO TIP: Press The P Button To Return To The Main Menu", colors[WHITE]);
}

void Map::Score(int& score)
{
	DrawString(50, 1075, "Score P1 = "+to_string(score), colors[BLACK]); //display score in the window to let player see their score
}

void Map::Score2(int& scorep2)
{
	DrawString(850, 1075, "Score P2 = "+to_string(scorep2), colors[BLACK]); //display score in the window to let player see their score
}

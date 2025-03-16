/*
 * MainMenu.cpp
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#include "MainMenu.h"
#include "util.h"

MainMenu::MainMenu()
{
	cout << "MainMenu Class Constructor Called" << endl;
}

MainMenu::~MainMenu()
{
	cout << "MainMenu Class Desctructor Called" << endl;
}

void MainMenu::Menu() //function to call menu in the beginning
{
	DrawRectangle(600, 700, 600, 200, colors[RED]);
	DrawString(650, 790, "Press B To Start The Game", colors[BLACK]);
	DrawRectangle(0, 300, 500, 200, colors[PURPLE]);
	DrawString(50, 390, "Press X To Display The Highscores", colors[BLACK]);
	DrawRectangle(700, 300, 600, 200, colors[CYAN]);
	DrawString(750, 390, "Press S To Access Settings", colors[BLACK]);
	DrawString(50, 50, "PRO TIP: Press The Esc Button To Return To The Desktop", colors[WHITE]);

}

void MainMenu::Highscores() //function to show highscores (NOTE: Add File Handeling)
{
	DrawRectangle(200, 700, 500, 200, colors[PURPLE]);
	DrawString(250, 790, "SCORE = 0", colors[BLACK]);
}

void MainMenu::Settings() //function to show possible settings that the user can change (NOTE: Add Settings)
{
	DrawRectangle(200, 700, 700, 200, colors[PURPLE]);
	DrawString(250, 790, "Press C To Change The Controls For PLayer 1", colors[BLACK]);
	DrawString(50, 50, "PRO TIP: Press The Esc Button To Return To The Desktop", colors[WHITE]);
}

void MainMenu::Choice() //function to choose PvE or PvP
{
	DrawRectangle(200, 700, 700, 200, colors[PURPLE]);
	DrawString(250, 790, "(1) PVE", colors[BLACK]);
	DrawRectangle(500, 700, 700, 200, colors[MISTY_ROSE]);
	DrawString(550, 790, "(2) PVP", colors[BLACK]);
	DrawString(50, 50, "PRO TIP: Press The Esc Button To Return To The Desktop", colors[WHITE]);
}

void MainMenu::Change()
{
	DrawRectangle(300, 700, 700, 200, colors[PURPLE]);
	DrawString(350, 790, "Enter the Up, Down, Left and Right Keys Respectively", colors[BLACK]);
}

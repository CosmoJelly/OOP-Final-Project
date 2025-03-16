/*
 * MainMenu.h
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#ifndef MAINMENU_H_
#define MAINMENU_H_

#include "util.h"

class MainMenu {
public:
	MainMenu();
	virtual ~MainMenu();
	void Menu();
	void Settings();
	void Highscores();
	void Choice();
	void Change();
};

#endif /* MAINMENU_H_ */

/*
 * Player.h
 *
 *  Created on: Jun 3, 2022
 *      Author: cosmo
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "util.h"

class Player {
public:
	int xI = 50;
	int yI = 50;
	int x2 = 850;
	int y2 = 200;
	Player();
	virtual ~Player();
	void Controls(int);
	void display();
	void display2();
	void Controls2(int);
	void ChangeControlsPlayer1(int key, int &xI, int &yI);
	};

#endif /* PLAYER_H_ */

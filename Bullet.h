/*
 * Bullet.h
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#ifndef BULLET_H_
#define BULLET_H_

#include "util.h"

class Bullet {
public:
	int xB = xI;
	int yB = yI;
	int yI = 75;
	int xI = 75;
	int x2 = 850;
	int y2 = 200;
	int xB2 = x2;
	int yB2 = y2;
	Bullet();
	virtual ~Bullet();
	void DrawBullet(int &xI, int &yI);
	void DrawBullet2(int &, int &);
};

#endif /* BULLET_H_ */

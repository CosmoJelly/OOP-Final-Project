/*
 * Bullet.cpp
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#include "Bullet.h"
#include "util.h"

Bullet::Bullet()
{

}

Bullet::~Bullet()
{

}

void Bullet::DrawBullet(int &xI, int &yI)
{
	DrawCircle(xB, yB, 5, colors[BLACK]);
}

void Bullet::DrawBullet2(int &x2, int &y2)
{
	DrawCircle(xB2, yB2, 5, colors[RED]);
}

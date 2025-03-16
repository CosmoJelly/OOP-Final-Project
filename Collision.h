/*
 * Collision.h
 *
 *  Created on: Jun 4, 2022
 *      Author: cosmo
 */

#ifndef COLLISION_H_
#define COLLISION_H_

#include "util.h"

class Collision{
public:
	Collision();
	void collide_lvl1(int &xI ,int &yI, int &score, int &x2, int &y2);
	void collide_lvl2(int &xI ,int &yI, int &score, int &x2, int &y2);
	void collide_lvl3(int &xI ,int &yI, int &score, int &x2, int &y2);
	void collide_lvl1b(int &, int &, bool&, int &, int &, int &, int &, int &, int &, bool &);
	void collide_lvl2b(int &, int &, bool&, int &, int &, int &, int &, int &, int &, bool &);
	void collide_lvl3b(int &, int &, bool&, int &, int &, int &, int &, int &, int &, bool &);
	void npc1_collision(int &, int &, bool&, int &, int &, int &);
	void npc2_collision(int &, int &, bool&, int &, int &, int &);
	void npc3_collision(int &, int &, bool&, int &, int &, int &);
	void part1_pvp_collide(int &, int &, bool&, int &, int &, int &);
	void part2_pvp_collide(int &, int &, bool&, int &, int &, int &);
	virtual ~Collision();
};

#endif /* COLLISION_H_ */



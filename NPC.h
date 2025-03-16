/*
 * NPC.h
 *
 *  Created on: Jun 7, 2022
 *      Author: cosmo
 */

#ifndef NPC_H_
#define NPC_H_

#include "util.h"

class NPC {

public:
	int npc1_x = 950;
	int npc1_y = 50;
	int npc2_x = 550;
	int npc2_y = 550;
	int npc3_x = 250;
	int npc3_y = 750;
	bool f = true;
	NPC();
	virtual ~NPC();
	void npc_lvl1();
	void npc_lvl2();
	void npc_lvl3();
	void move_lvl1();
	void move_lvl2();
	void move_lvl3();
};

#endif /* NPC_H_ */

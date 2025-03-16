/*
 * Map.h
 *
 *  Created on: Jun 2, 2022
 *      Author: cosmo
 */

#ifndef MAP_H_
#define MAP_H_

#include "util.h"


class Map {
public:
	Map();
	virtual ~Map();
	void lvl1();
	void lvl2();
	void lvl3();
	void End();
	void Score(int& score);
	void Score2(int& scorep2);
};

#endif /* MAP_H_ */

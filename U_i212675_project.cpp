//============================================================================
// Name        : .cpp
// Author      : FAST CS Department
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game...
//============================================================================

#ifndef RushHour_CPP_
#define RushHour_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt

#include "Map.h"
#include "Player.h"
#include "Collision.h"
#include "MainMenu.h"
#include "NPC.h"
#include "Bullet.h"

using namespace std;

// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

int xI = 50, yI = 50; //main way to track our player 1 car
int x2 = 850, y2 = 200; //main way to track our player 2 car
int score = 0; //main way to track the player score
bool in_menu = false; //way to see if player is still in the menu selection stage and not start running bots until true
bool pvp, pve = false; //way to see what mode of play we are going to play
bool change_p1 = false; //way to see if we change controls of player 1
bool bullet_flag = false; //way to see if the bullet from player 1 has been fired
bool bullet_flag2 = false; //way to see if the bullet from player 3 has been fired
int scorep2 = 0; //track the score of player 2

//declaring objects that we are using for the levels and the vehicles
static Map a;
static Player b;
Collision c;
MainMenu d;
static NPC e;
Bullet f;
/*
 * Main Canvas drawing function.
 * */

void menu()
{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
						0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	in_menu = true;

	d.Menu(); //calling function to show menu with options at users's request from MainMenu Class

	glutSwapBuffers();
}

void highscore()
{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
						0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	in_menu = true; //way to check if player is still in the menu so the bots do not start moving on their own accord

	d.Highscores(); //calling function to see player's highscores at users's request from MainMenu Class

	glutSwapBuffers();
}

void settings()
{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
							0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	in_menu = true; //way to check if player is still in the menu so the bots do not start moving on their own accord

	d.Settings(); //calling function to see settings at users's request from MainMenu Class

	glutSwapBuffers();
}

void choice()
{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
							0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	d.Choice(); //calling function to choose what mode to play at users's request from MainMenu Class

	glutSwapBuffers();
}

void change()
{
	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
								0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

	d.Change(); //calling function to change player controls at users's request from MainMenu Class

	change_p1 = true; //way to see if the controls of player 1 have been changed

	glutSwapBuffers();
}

void GameDisplay()/**/{
	// set the background color using function glClearColor.
	// to change the background play with the red, green and blue values below.
	// Note that r, g and b values must be in the range [0,1] where 0 means dim rid and 1 means pure red and so on.

	in_menu = false; //way to check if player is still in the menu so the bots do not start moving on their own accord

	glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear(GL_COLOR_BUFFER_BIT); //Update the colors

if (pve == true) //condition to see if we are in Player vs Bot Mode
{
	if (score < 10) //conditions to see what level we deserve to enter
	{
		glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
					0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
		glClear(GL_COLOR_BUFFER_BIT); //Update the colors

		c.collide_lvl1(b.xI,b.yI, score, b.x2, b.y2); //collision for players against obstacles from Collision Class
		c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		a.lvl1(); //display level 1 from Map Class
		e.npc_lvl1(); //display bot from NPC Class
		c.npc1_collision(f.xB, f.yB, bullet_flag, e.npc1_x, e.npc1_y, score); //collision of bots against the bullet from player from Collision Class
		b.display(); //display player 1
		a.Score(score); //display score of player
	}
	else if (score >=10 && score < 20) //conditions to see what level we deserve to enter
	{
		glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
					0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
		glClear(GL_COLOR_BUFFER_BIT); //Update the colors

		c.collide_lvl2(b.xI,b.yI, score, b.x2, b.y2); //collision for players against obstacles from Collision Class
		c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		c.collide_lvl2b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		a.lvl2(); //display level 2 from Map Class
		e.npc_lvl2(); //display bot from NPC Class
		c.npc1_collision(f.xB, f.yB, bullet_flag, e.npc1_x, e.npc1_y, score); //collision of bots against the bullet from player from Collision Class
		c.npc2_collision(f.xB, f.yB, bullet_flag, e.npc2_x, e.npc2_y, score); //collision of bots against the bullet from player from Collision Class
		b.display(); //display player 1
		a.Score(score); //display score of player
	}
	else if (score >= 20 && score <30) //conditions to see what level we deserve to enter
	{
		glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
					0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
		glClear(GL_COLOR_BUFFER_BIT); //Update the colors

		c.collide_lvl3(b.xI,b.yI, score, b.x2, b.y2); //collision for players against obstacles from Collision Class
		c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		c.collide_lvl2b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		c.collide_lvl3b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
		a.lvl3(); //display level 3 from Map Class
		e.npc_lvl3(); //display bot from NPC Class
		c.npc1_collision(f.xB, f.yB, bullet_flag, e.npc1_x, e.npc1_y, score); //collision of bots against the bullet from player from Collision Class
		c.npc2_collision(f.xB, f.yB, bullet_flag, e.npc2_x, e.npc2_y, score); //collision of bots against the bullet from player from Collision Class
		c.npc3_collision(f.xB, f.yB, bullet_flag, e.npc3_x, e.npc3_y, score); //collision of bots against the bullet from player from Collision Class
		b.display(); //display player 1
		a.Score(score);
	}
	else
	{
		for(int i=0 ; i<2000;i++) //make shift timer to display end screen
		{
			a.End(); //end screen to show if player wins against bots
		}
		score = 0; //setting score to zero so game can be played again
	}
}

else if (pvp == true) //condition to see if we are in Player vs Player Mode
{
	//conditions to see what level we deserve to enter
		if (score < 10)
		{
			glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
						0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
			glClear(GL_COLOR_BUFFER_BIT); //Update the colors

			c.collide_lvl1(b.xI,b.yI, score, b.x2, b.y2); //collision for players against obstacles from Collision Class
			c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2); //collision for bullets against obstacles from Collision Class
			a.lvl1(); //displaying level 1 from Map Class
			b.display(); //displaying player 1 from Player Class
			b.display2(); //displaying player 2 from Player Class
			c.part1_pvp_collide(f.xB, f.yB, bullet_flag, b.x2, b.y2, score); //collision of bullets against player 2 from player 1 from Collision Class
			c.part2_pvp_collide(f.xB2, f.yB2, bullet_flag2, b.xI, b.yI, scorep2); //collision of bullets against player 1 from player 2 from Collision Class
			a.Score(score); //display score for player 1 from Map Class
			a.Score2(scorep2); //display score for player 2 from Map Class
//		}
//		else if (score >=10 && score < 20)
//		{
//			glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
//						0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
//			glClear(GL_COLOR_BUFFER_BIT); //Update the colors
//
//			c.collide_lvl2(b.xI,b.yI, score, b.x2, b.y2);
//			c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2);
//			c.collide_lvl2b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2);
//			a.lvl2();
//			b.display();
//			b.display2();
//			a.Score(score);
//		}
//		else if (score >= 20 && score <30)
//		{
//			glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
//						0.0/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
//			glClear(GL_COLOR_BUFFER_BIT); //Update the colors
//
//			c.collide_lvl3(b.xI,b.yI, score, b.x2, b.y2);
//			c.collide_lvl1b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2);
//			c.collide_lvl2b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2);
//			c.collide_lvl3b(f.xB, f.yB, bullet_flag, f.xB2, f.yB2, b.xI, b.yI, b.x2, b.y2, bullet_flag2);
//			a.lvl3();
//			b.display();
//			b.display2();
//			a.Score(score);
		}
		else
		{
			for(int i=0 ; i<2000;i++) //make shift timer to display end screen
			{
				a.End(); //end screen to be shown after victory or defeat
			}
			score = 0; //setting score to zero so game can be played again
		}
}

	if (bullet_flag == true) //condition to draw player 1's bullet
	{
		f.DrawBullet(b.xI, b.yI); //drawing bullet using function from Bullet Class and giving it the player 1 coords from Player Class
	}

	if (bullet_flag2 == true) //condition to draw player 2's bullet
	{
		f.DrawBullet2(b.x2, b.y2); //drawing bullet using function from Bullet Class and giving it the player 2 coords from Player Class
	}

	glutSwapBuffers(); // do not modify this line..
}

void bullet_collision()
{

}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */
void NonPrintableKeys(int key, int x, int y)
{
	b.Controls(key); //calling controls for player 1 from Player Class

	glutPostRedisplay();
}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y)
{
	b.Controls2(key); //calling controls for player 2 from PLayer Class

	if (key == 27) //making a game exit key
	{
		exit(1);
	}

	if (key == 'B' || key == 'b') //choice in the menu for option selection
	{
		glutDisplayFunc(choice);
	}

	if (key == '1') //choice in the menu for game mode selection
	{
		pve = true;
		glutDisplayFunc(GameDisplay);
	}

	if (key == '2') //choice in the menu for game mode selection
	{
		pvp = true;
		glutDisplayFunc(GameDisplay);
	}

	if (key == 'x' || key == 'X') //choice in the menu for highscore viewing
	{
		glutDisplayFunc(highscore);
	}

	if (key == 'p' || key == 'P') //choice in the menu for going back to menu
	{
		glutDisplayFunc(menu);
	}
	if (key == 's' || key == 'S') //choice in the menu for settings selection
	{
		glutDisplayFunc(settings);
	}

	if (key == 'c' || key == 'C') //choice in the menu for control change selection
	{
		glutDisplayFunc(change);
	}

	if (key == '.') //key for firing player 1's bullet
	{
		bullet_flag = true; //bullet flag to display bullet on screen
	}

	if (key == 'z' || key == 'Z') //key for firing player 2's bullet
	{
		bullet_flag2 = true; //bullet flag to display bullet on screen
	}

	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m)
{
	// implement your functionality here
	//drawing first player bullet
	if (bullet_flag == true) //player 1 bullet movement code
	{
		f.DrawBullet(b.xI, b.yI); //drawing bullet
		f.xB += 10; //incrementing the bullet spawned for player 1

		if (f.xB > 1100) //condition for out of bounds bullets
		{
			f.xB = b.xI + 50; //setting bullet location as the location of player 1's x axis
			f.yB = b.yI + 25; //setting bullet location as the location of player 1's y axis
			bullet_flag = false; //destroying bullet display

		}
	}

	if (bullet_flag2 == true) //player 2 bullet movement code
	{
		f.DrawBullet2(b.x2, b.y2); //drawing bullet
		f.xB2 -= 10; //incrementing the bullet spawned for player 2

		if (f.xB2 < 50) //condition for out of bounds bullets
		{
			f.xB2 = b.x2; //setting bullet location as the location of player 2's x axis
			f.yB2 = b.y2 + 25; //setting bullet location as the location of player 2's y axis
			bullet_flag2 = false; //destroying bullet display
		}
	}
	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(10, Timer, 0);
}

void Timer_Bots(int k) //timer function for bot movement
{
	if (score < 10) //movement conditions for the bots through each level
	{
		e.move_lvl1(); //function calling bot movement from the NPC Class
	}
	else if (score >= 10 && score < 20) //movement conditions for the bots through each level
	{
		e.move_lvl1(); //function calling bot movement from the NPC Class
		e.move_lvl2(); //function calling bot movement from the NPC Class
	}
	else if (score >= 20 && score < 30) //movement conditions for the bots through each level
	{
		e.move_lvl1(); //function calling bot movement from the NPC Class
		e.move_lvl2(); //function calling bot movement from the NPC Class
		e.move_lvl3(); //function calling bot movement from the NPC Class
	}
	glutTimerFunc(200, Timer_Bots, 0);

}
/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
//void MousePressedAndMoved(int x, int y) {
	//cout << x << " " << y << endl;
	//glutPostRedisplay();
//}
//void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	//glutPostRedisplay();
//}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
//void MouseClicked(int button, int state, int x, int y) {
//
//	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
//			{
//		cout << GLUT_DOWN << " " << GLUT_UP << endl;
//
//	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
//			{
//			cout<<"Right Button Pressed"<<endl;
//
//	}
//	glutPostRedisplay();
//}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[])
{

	int width = 1100, height = 1120; // i have set my window size to be 1100 x 1120

	//main_menu();

	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("end my suffering by Waleed Nouman"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...

	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.

	glutDisplayFunc(menu); // tell library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000, Timer, 0); //timer function for bullet of players
	glutTimerFunc(1000, Timer_Bots, 0); //timer function for bot movements


	//glutMouseFunc(MouseClicked);
	//glutPassiveMotionFunc(MouseMoved); // Mouse
	//glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* RushHour_CPP_ */

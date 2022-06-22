# include "iGraphics.h"
/*
function iDraw() is called again and again by the system.
*/

double counter = 0, increse = 10, circleYaxis = 20, circleXaxis=500;


void ipointIncrese(){

	increse += 1;

		
}


void iDraw()
{
	//place your drawing codes here
	iClear();

	//iSetColor(255, 255, 255);

	//iShowBMP(0, 0, "img/home.bmp");

	//iShowBMP(150, 300, "img/newGame.bmp");
	//iShowBMP(150, 00, "img/a.bmp");
	//iShowBMP(155, 250, "img/setting.bmp");
	//iShowBMP(150, 200, "img/highScore.bmp");
	//iShowBMP(160, 150, "img/exit.bmp");

	iSetColor(255, 255, 0);
	iPoint(0, 0, increse);
	iFilledCircle(circleXaxis, circleYaxis, 10);

	if (circleXaxis == 0 && circleYaxis == 0){
	
		circleXaxis = 500;
		circleYaxis = 20;
	}

	//void iText(GLdouble x, GLdouble y, char *str, void* font = GLUT_BITMAP_8_BY_13)

}
/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{


printf("%d: %d %d\n",counter++,  mx, my);
}
/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		

		
		//xCo = 10;
		//iSetColor(255, 0, 0);

		//iRectangle(10, 20, 100, 200);

	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}
/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}
/*
function iSpecialKeyboard() is called whenver user hits special keys likefunction
keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11,
GLUT_KEY_F12, GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN,
GLUT_KEY_PAGE UP, GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END,
GLUT_KEY_INSERT */
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_UP)
	{
		if (circleYaxis<=500)
		circleYaxis += 20;
		//exit(0);
	}

	if (key == GLUT_KEY_DOWN)
	{

		circleYaxis -= 20;
		//exit(0);
	}


	if (key == GLUT_KEY_LEFT)
	{

		circleXaxis -= 20;
		//exit(0);
	}

	if (key == GLUT_KEY_RIGHT)
	{

		circleXaxis += 20;
		//exit(0);
	}


	//place your codes for other keys here
}
int main()
{
	//place your own initialization codes here.

//	iSetTimer(100, ipointIncrese);
	iInitialize(1000, 600, "demooo");
	return 0;
}
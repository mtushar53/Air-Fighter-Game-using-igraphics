#include<stdio.h>
#include "iGraphics.h"
#define screenwidth 1100
#define screenheight 650
int cx1, cy1;
int bx1, by1, bx2, by2, bx3, by3, bx4, by4, bx5, by5, bx6, by6, bx7, by7, bx8, by8, bx9, by9, bx10, by10;
int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, flag, flag1 = 0, mycount;
int cx6, cy6, cx7, cy7, cx8, cy8, cx9, cy9, cx10, cy10, cx11, cy11, cx12, cy12, cx13, cy13, cx14, cy14, cx15, cy15;
int ex1, ey1, ex2, ey2, ex3, ey3, ex4, ey4, ex5, ey5, ex6, ey6, ex7, ey7, ex8, ey8, ex9, ey9, ex10, ey10;
int e1bx1, e1by1, e1bx2, e1by2, e1bx3, e1by3, e1bx4, e1by4, e1bx5, e1by5;
int e2bx1, e2by1, e2bx2, e2by2, e2bx3, e2by3, e2bx4, e2by4, e2bx5, e2by5;
int e3bx1, e3by1, e3bx2, e3by2, e3bx3, e3by3, e3bx4, e3by4, e3bx5, e3by5;
int e4bx1, e4by1, e4bx2, e4by2, e4bx3, e4by3, e4bx4, e4by4, e4bx5, e4by5;
int e5bx1, e5by1, e5bx2, e5by2, e5bx3, e5by3, e5bx4, e5by4, e5bx5, e5by5;
int e6bx1, e6by1, e6bx2, e6by2, e6bx3, e6by3, e6bx4, e6by4, e6bx5, e6by5;

int e1count, e2count, e3count, e4count, e5count, e6count;

int level, score = 0,life=5;
char ch1[10],ch2[5];
bool musicOn = true;

void iDraw()
{
	iClear();
	if (level == 0)
	{
		iShowBMP(0, 0, "first.bmp");
		iSetColor(0, 0, 0);
		iText(500, 600, "AIR FIGHTER", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(500, 100, "Press S to Continue", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (level == 1)
	{

		iShowBMP(0, 0, "second.bmp");
		iText(100, 250, "Play", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100, 200, "Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100, 150, "About", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(100, 100, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);

	}
	if (level == 2)
	{
		iSetColor(0, 255, 0);
		iText(15, 330, "About:Air Fighter game devoloped by Md Tushar", GLUT_BITMAP_9_BY_15);
		iText(150, 100, "Press S to Continue", GLUT_BITMAP_TIMES_ROMAN_24);
	}


	if (level == 3)
	{
		iSetColor(255, 0, 0);
		//iShowBMP(0, 0, "s3.bmp");
		iText(200, 200, "Game Over", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (level == 4)
	{
		iShowBMP(cx1, cy1, "blust.bmp");
		cx1 = 500;
		cy1 = 5;

	}
	if (level == 5)
	{
		iSetColor(78, 98, 34);
		iFilledRectangle(0, 0, screenwidth, screenheight);
		iSetColor(0, 0, 0);
		iLine(screenwidth - 253, 4, screenwidth-3, 4);
		iLine(screenwidth - 253, 5, screenwidth-3, 5);
		iLine(screenwidth - 253, 6, screenwidth-3, 6);
		iLine(screenwidth - 253, screenheight - 4, screenwidth-3, screenheight - 4);
		iLine(screenwidth - 253, screenheight - 5, screenwidth-3, screenheight - 5);
		iLine(screenwidth - 253, screenheight - 6, screenwidth-3, screenheight - 6);
		iLine(screenwidth - 253, 4, screenwidth - 253, screenheight - 4);
		iLine(screenwidth - 252, 4, screenwidth - 252, screenheight - 4);
		iLine(screenwidth - 251, 4, screenwidth - 251, screenheight - 4);
		iLine(screenwidth - 3, 2, screenwidth-3, screenheight-4);
		iLine(screenwidth - 4, 3, screenwidth-4, screenheight-5);
		iLine(screenwidth - 5, 4, screenwidth-5, screenheight-6);

		iLine(3, 4, screenwidth - 260, 4);
		iLine(3, 5, screenwidth - 260, 5);
		iLine(3, 6, screenwidth - 260, 6);

		iLine(3, 4, 3, screenheight-4);
		iLine(4, 4, 4, screenheight-4);
		iLine(5, 4, 5, screenheight-4);

		iLine(3, screenheight-4, screenwidth - 260,screenheight-4);
		iLine(3, screenheight-5, screenwidth - 260, screenheight - 5);
		iLine(3, screenheight-6, screenwidth - 260, screenheight - 6);

		iLine(screenwidth - 260, 4, screenwidth - 260, screenheight-4);
		iLine(screenwidth - 259, 4, screenwidth - 259, screenheight-4);
		iLine(screenwidth - 258, 4, screenwidth - 258, screenheight-4);

		iSetColor(0, 0, 0);
		iText(screenwidth-210, 500, "YOUR SCORE: ",GLUT_BITMAP_HELVETICA_18);
		_itoa_s(score, ch1, 10);
		iText(screenwidth-50, 500, ch1,GLUT_BITMAP_HELVETICA_18);
		iText(screenwidth - 210, 450, "LIFE: ",GLUT_BITMAP_HELVETICA_18);
		_itoa_s(life, ch2, 5);
		iText(screenwidth - 100, 450, ch2, GLUT_BITMAP_HELVETICA_18);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx1, by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx2, by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx3, by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx4, by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx5, by5, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx6, by6, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx7, by7, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx8, by8, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx9, by9, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(bx10, by10, 2, 5);
		

		//for 1st enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e1bx1, e1by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e1bx2, e1by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e1bx3, e1by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e1bx4, e1by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e1bx5, e1by5, 2, 5);

		//For 2nd enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e2bx1, e2by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e2bx2, e2by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e2bx3, e2by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e2bx4, e2by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e2bx5, e2by5, 2, 5);

		//For 3rd enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e3bx1, e3by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e3bx2, e3by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e3bx3, e3by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e3bx4, e3by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e3bx5, e3by5, 2, 5);

		//For 4th enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e4bx1, e4by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e4bx2, e4by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e4bx3, e4by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e4bx4, e4by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e4bx5, e4by5, 2, 5);

		//For 5th enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e5bx1, e5by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e5bx2, e5by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e5bx3, e5by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e5bx4, e5by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e5bx5, e5by5, 2, 5);

		//For 6th enemy Bullet
		iSetColor(255, 0, 0);
		iFilledRectangle(e6bx1, e6by1, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e6bx2, e6by2, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e6bx3, e6by3, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e6bx4, e6by4, 2, 5);
		iSetColor(255, 0, 0);
		iFilledRectangle(e6bx5, e6by5, 2, 5);



		iShowBMP(cx6, cy6, "enemy.bmp");
		iShowBMP(cx7, cy7, "enemy.bmp");
		iShowBMP(cx8, cy8, "enemy.bmp");
		iShowBMP(cx9, cy9, "enemy.bmp");
		iShowBMP(cx10, cy10, "enemy.bmp");
		iShowBMP(cx11, cy11, "enemy.bmp");
		
		iShowBMP(cx1, cy1, "air.bmp");
	}

}
void iMouseMove(int mx, int my)
{
	//place your codes here
}
/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)

{

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
		if ((mx >= 100 && mx <= 150) && (my >= 100 && my <= 150)){
			if (level == 1){
				exit(1);
			}
		}
		if ((mx >= 100 && mx <= 150) && (my >= 150 && my < 200)){
			level = 2;
		}
		if ((mx >= 100 && mx <= 150) && (my >= 250 && my < 300)){
			level = 5;
		}
	}

}
void iKeyboard(unsigned char key)
{
	if (key == 'f' || key == 'F')
	{
		if (musicOn)
		{
			musicOn = false;
			PlaySound(0, 0, 0);
		}
	}
	if (key == 's' || key == 'S')
	{
		level = 1;
	}

	if (key == 'b' || key == 'B')
	{
		i1 = 1;
		i2 = 1;
		i3 = 1;
		i4 = 1;
		i5 = 1;
		i6 = 1;
		i7 = 1;
		i8 = 1;
		i9 = 1;
		i10 = 1;


		if (flag<11)
			flag += 1;
		else if (flag == 11)
			flag = 1;
	}

}
void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_RIGHT)
	{
		if (cx1 < 792)
		{
			cx1 += 7;
			if (by1 == cy1)
			{
				bx1 += 7;
			}
			if (by2 == cy1)
			{
				bx2 += 7;
			}
			if (by3 == cy1)
			{
				bx3 += 7;
			}
			if (by4 == cy1)
			{
				bx4 += 7;
			}
			if (by5 == cy1)
			{
				bx5 += 7;
			}
			if (by6 == cy1)
			{
				bx6 += 7;
			}
			if (by7 == cy1)
			{
				bx7 += 7;
			}
			if (by8 == cy1)
			{
				bx8 += 7;
			}
			if (by9 == cy1)
			{
				bx9 += 7;
			}
			if (by10 == cy1)
			{
				bx10 += 7;
			}
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		if (cx1>5)
		{
			cx1 -= 7;
			if (by1 == cy1)
			{
				bx1 -= 7;
			}
			if (by2 == cy1)
			{
				bx2 -= 7;
			}
			if (by3 == cy1)
			{
				bx3 -= 7;
			}
			if (by4 == cy1)
			{
				bx4 -= 7;
			}
			if (by5 == cy1)
			{
				bx5 -= 7;
			}
			if (by6 == cy1)
			{
				bx6 -= 7;
			}
			if (by7 == cy1)
			{
				bx7 -= 7;
			}
			if (by8 == cy1)
			{
				bx8 -= 7;
			}
			if (by9 == cy1)
			{
				bx9 -= 7;
			}
			if (by10 == cy1)
			{
				bx10 -= 7;
			}
			
		}
	}
	if (key == GLUT_KEY_DOWN)
	{
		if (cy1>10)
		{
			cy1 -= 7;
			by1 -= 7;
			by2 -= 7;
			by3 -= 7;
			by4 -= 7;
			by5 -= 7;
			by6 -= 7;
			by7 -= 7;
			by8 -= 7;
			by9 -= 7;
			by10 -= 7;
			

		}
	}
	if (key == GLUT_KEY_UP)
	{
		if (cy1<600)
		{
			cy1 += 7;
			by1 += 7;
			by2 += 7;
			by3 += 7;
			by4 += 7;
			by5 += 7;
			by6 += 7;
			by7 += 7;
			by8 += 7;
			by9 += 7;
			by10 += 7;
		
		}
	}
}

void shoot()
{
	if (flag >= 1)
	{
		if (flag == 1 && i1 == 0)
		{
			by1 = cy1;
			bx1 = cx1 + 26;
			i1 = 0;
		}
		if (i1 == 1)
		{
			by1 += 20;
			if (by1 >= 655)
			{

				i1 = 0;
			}
		}
	}
	if (flag >= 2)
	{
		if (flag == 2 && i2 == 0)
		{
			by2 = cy1;
			bx2 = cx1 + 26;
			i2 = 0;
		}
		if (i2 == 1)
		{
			by2 += 18;
			if (by2 >= 655)
			{
				i2 = 0;
			}
		}
	}
	if (flag >= 3)
	{
		if (flag == 3 && i3 == 0)
		{
			by3 = cy1;
			bx3 = cx1 + 26;
			i3 = 0;
		}
		if (i3 == 1)
		{
			by3 += 16;
			if (by3 >= 655)
			{
				i3 = 0;
			}
		}
	}
	if (flag >= 4)
	{
		if (flag == 4 && i4 == 0)
		{
			by4 = cy1;
			bx4 = cx1 + 26;
			i4 = 0;
		}
		if (i4 == 1)
		{
			by4 += 15;
			if (by4 >= 655)
			{
				i4 = 0;
			}
		}
	}
	if (flag >= 5)
	{
		if (flag == 5 && i5 == 0)
		{
			by5 = cy1;
			bx5 = cx1 + 26;
			i5 = 0;
		}
		if (i5 == 1)
		{
			by5 += 14;
			if (by5 >= 655)
			{
				i5 = 0;
			}
		}
	}
	if (flag >= 6)
	{
		if (flag == 6 && i6 == 0)
		{
			by6 = cy1;
			bx6 = cx1 + 26;
			i6 = 0;
		}
		if (i6 == 1)
		{
			by6 += 13;
			if (by6 >= 655)
			{
				i6 = 0;
			}
		}
	}
	if (flag >= 7)
	{
		if (flag == 7 && i7 == 0)
		{
			by7 = cy1;
			bx7 = cx1 + 26;
			i7 = 0;
		}
		if (i7 == 1)
		{
			by7 += 12;
			if (by7 >= 655)
			{
				i7 = 0;
			}
		}
	}
	if (flag >= 8)
	{
		if (flag == 8 && i8 == 0)
		{
			by8 = cy1;
			bx8 = cx1 + 26;
			i8 = 0;
		}
		if (i8 == 1)
		{
			by8 += 11;
			if (by8 >= 655)
			{
				i8 = 0;
			}
		}
	}
	if (flag >= 9)
	{
		if (flag == 9 && i9 == 0)
		{
			by9 = cy1;
			bx9 = cx1 + 26;
			i9 = 0;
		}
		if (i9 == 1)
		{
			by9 += 11;
			if (by9 >= 655)
			{
				i9 = 0;
			}
		}
	}
	if (flag >= 10)
	{
		if (flag == 10 && i10 == 0)
		{
			by10 = cy1;
			bx10 = cx1 + 26;
			i10 = 0;
		}
		if (i10 == 1)
		{
			by10 += 11;
			if (by10 >= 655)
			{
				i10 = 0;
			}
		}
	}
	
}

void eshoot()
{

	if (flag1 <= 5)
		flag1++;
	else
		flag1 = 1;

	if (flag1 == 1)
	{
		if (cy6 <= 650)
			e1by1 -= 20;
		if (cy7<=650)
			e2by1 -= 20;
		if (cy8<=650)
			e3by1 -= 20;
		if (cy9<=650)
			e4by1 -= 20;
		if (cy10<=650)
			e5by1 -= 20;
		if (cy11<=650)
			e6by1 -= 20;

	}
	if (flag1 == 2)
	{
		if (cy6 <= 650)
			e1by2 -= 15;
		if (cy7 <= 650)
			e2by2 -= 15;
		if (cy8 <= 650)
			e3by2 -= 15;
		if (cy9 <= 650)
			e4by2 -= 15;
		if (cy10 <= 650)
			e5by2 -= 15;
		if (cy11 <= 650)
			e6by2 -= 15;
		
	}
	if (flag1 == 3)
	{
		if (cy6 <= 650)
			e1by3 -= 10;
		if (cy7 <= 650)
			e2by3 -= 10;
		if (cy8 <= 650)
			e3by3 -= 10;
		if (cy9 <= 650)
			e4by3 -= 10;
		if (cy10 <= 650)
			e5by3 -= 10;
		if (cy11 <= 650)
			e6by3 -= 10;
		
	}

	if (flag1 == 4)
	{
		if (cy6 <= 650)
			e1by4 -= 5;
		if (cy7 <= 650)
			e2by4 -= 5;
		if (cy8 <= 650)
			e3by4 -= 5;
		if (cy9 <= 650)
			e4by4 -= 5;
		if (cy10 <= 650)
			e5by4 -= 5;
		if (cy11 <= 650)
			e6by4 -= 5;
		
	}
	if (flag1 == 5)
	{
		if (cy6 <= 650)
			e1by5 -= 2;
		if (cy7 <= 650)
			e2by5 -= 2;
		if (cy8 <= 650)
			e3by5 -= 2;
		if (cy9 <= 650)
			e4by5 -= 2;
		if (cy10 <= 650)
			e5by5 -= 2;
		if (cy11 <= 650)
			e6by5 -= 2;
		
	}

}



void enemy()
{
	if (ex1 == 0)
	{
		if (ey1 == 0)
		{
			cx6 += 3;	cy6 -= 2;
			e1bx1 += 0;	e1by1 -= 2;
			e1bx2 += 1;	e1by2 -= 2;
			e1bx3 += 1;	e1by3 -= 2;
			e1bx4 += 1;	e1by4 -= 2;
			e1bx5 += 2;	e1by5 -= 2;

			if (cx6>780)
			{
				ey1 = 1;
			}
		}
		if (ey1 == 1)
		{
			cx6 -= 2;		cy6 -= 1;
			e1bx1 -= 0;	e1by1 -= 1;
			e1bx2 -= 1;	e1by2 -= 1;
			e1bx3 -= 1;	e1by3 -= 1;
			e1bx4 -= 1;	e1by4 -= 1;
			e1bx5 -= 2;	e1by5 -= 1;


			if (cx6<30)
			{
				ey1 = 0;
			}
		}
		if (cy6<=0)
		{
			ex1 = 1;
		}
	}
	if (ex1 == 1)
	{
		cx6 = 0;	cy6 = 660;
		e1bx1 = cx6 + 25;   e1by1 = cy6;
		e1bx2 = cx6 + 25;   e1by2 = cy6;
		e1bx3 = cx6 + 25;   e1by3 = cy6;
		e1bx4 = cx6 + 25;   e1by4 = cy6;
		e1bx5 = cx6 + 25;   e1by5 = cy6;

		ex1 = 0;
	}
	if (ex2 == 0)
	{
		if (ey2 == 0)
		{
			cx7 -= 3;	cy7 -= 1;
			e2bx1 -= 0;   e2by1 -= 1;
			e2bx2 -= 1;   e2by2 -= 1;
			e2bx3 -= 1;   e2by3 -= 1;
			e2bx4 -= 1;   e2by4 -= 1;
			e2bx5 -= 2;   e2by5 -= 1;

			if (cx7<100)
			{
				ey2 = 1;
			}
		}
		if (ey2 == 1)
		{
			cx7 += 1;	cy7 -= 2;
			e2bx1 += 0;   e2by1 -= 2;
			e2bx2 += 0;   e2by2 -= 2;
			e2bx3 += 0;   e2by3 -= 2;
			e2bx4 += 0;   e2by4 -= 2;
			e2bx5 += 0;   e2by5 -= 2;

			if (cx7>400)
			{
				ey2 = 0;
			}
		}
		if (cy7<0)
		{
			ex2 = 1;
		}
	}
	if (ex2 == 1)
	{
		cx7 = 750;	cy7 = 660;
		e2bx1 = cx7 + 25;   e2by1 = cy7;
		e2bx2 = cx7 + 25;   e2by2 = cy7;
		e2bx3 = cx7 + 25;   e2by3 = cy7;
		e2bx4 = cx7 + 25;   e2by4 = cy7;
		e2bx5 = cx7 + 25;   e2by5 = cy7;


		ex2 = 0;
	}
	if (ex3 == 0)
	{
		if (ey3 == 0)
		{
			cx8 -= 2;	cy8 -= 1;
			e3bx1 -= 0;   e3by1 -= 1;
			e3bx2 -= 0;   e3by2 -= 1;
			e3bx3 -= 0;   e3by3 -= 1;
			e3bx4 -= 0;   e3by4 -= 1;
			e3bx5 -= 0;   e3by5 -= 1;


			if (cx8 <= 0)
			{
				ey3 = 1;
			}
		}
		if (ey3 == 1)
		{
			cx8 += 3;	cy8 -= 1;
			e3bx1 += 1;   e3by1 -= 1;
			e3bx2 += 1;   e3by2 -= 1;
			e3bx3 += 1;   e3by3 -= 1;
			e3bx4 += 1;   e3by4 -= 1;
			e3bx5 += 1;   e3by5 -= 1;


			if (cx8>=600)
			{
				ey3 = 0;
			}
		}
		if (cy8<0)
		{
			ex3 = 1;
		}
	}
	if (ex3 == 1)
	{
		cx8 = 200;	cy8 = 660;
		e3bx1 = cx8 + 25;   e3by1 = cy8;
		e3bx2 = cx8 + 25;   e3by2 = cy8;
		e3bx3 = cx8 + 25;   e3by3 = cy8;
		e3bx4 = cx8 + 25;   e3by4 = cy8;
		e3bx5 = cx8 + 25;   e3by5 = cy8;

		ex3 = 0;
	}
	if (ex4 == 0)
	{
		if (ey4 == 0)
		{
			cx9 -= 1;	cy9 -= 3;
			e4bx1 -= 1;   e4by1 -= 1;
			e4bx2 -= 1;   e4by2 -= 1;
			e4bx3 -= 1;   e4by3 -= 1;
			e4bx4 -= 1;   e4by4 -= 1;
			e4bx5 -= 1;   e4by5 -= 1;


			if (cx9<=0)
			{
				ey4 = 1;
			}
		}
		if (ey4 == 1)
		{
			cy9 -= 2;	cx9 += 3;
			e4bx1 += 1;   e4by1 -= 1;
			e4bx2 += 1;   e4by2 -= 1;
			e4bx3 += 1;   e4by3 -= 1;
			e4bx4 += 1;   e4by4 -= 1;
			e4bx5 += 1;   e4by5 -= 1;

			if (cx9>=700)
			{
				ey4 = 0;
			}
		}
		if (cy9<=0)
		{
			ex4 = 1;
		}
	}
	if (ex4 == 1)
	{
		cx9 = 600;	cy9 = 660;
		e4bx1 = cx9 + 25;   e4by1 = cy9;
		e4bx2 = cx9 + 25;   e4by2 = cy9;
		e4bx3 = cx9 + 25;   e4by3 = cy9;
		e4bx4 = cx9 + 25;   e4by4 = cy9;
		e4bx5 = cx9 + 25;   e4by5 = cy9;


		ex4 = 0;
	}
	if (ex5 == 0)
	{
		if (ey5 == 0)
		{
			cx10 += 2;	  cy10 -= 2;
			e5bx1 += 0;   e5by1 -= 1;
			e5bx2 += 1;   e5by2 -= 1;
			e5bx3 += 0;   e5by3 -= 1;
			e5bx4 += 1;   e5by4 -= 1;
			e5bx5 += 1;   e5by5 -= 1;


			if (cx10>=750)
			{
				ey5 = 1;
			}
		}
		if (ey5 == 1)
		{
			cy10 -= 3;	cx10 -= 2;
			e5bx1 -= 1;   e5by1 -= 1;
			e5bx2 -= 1;   e5by2 -= 1;
			e5bx3 -= 1;   e5by3 -= 1;
			e5bx4 -= 1;   e5by4 -= 1;
			e5bx5 -= 1;   e5by5 -= 1;


			if (cx10<30)
			{
				ey5 = 0;
			}
		}
		if (cy10<0)
		{
			ex5 = 1;
		}
	}
	if (ex5 == 1)
	{
		cx10 = 400;	cy10 = 660;
		e5bx1 = cx10 + 25;   e5by1 = cy10;
		e5bx2 = cx10 + 25;   e5by2 = cy10;
		e5bx3 = cx10 + 25;   e5by3 = cy10;
		e5bx4 = cx10 + 25;   e5by4 = cy10;
		e5bx5 = cx10 + 25;   e5by5 = cy10;


		ex5 = 0;
	}
	if (ex6 == 0)
	{
		if (ey6 == 0)
		{
			cx11 -= 1;	cy11 -= 1;
			e6bx1 -= 1;   e6by1 -= 1;
			e6bx2 -= 1;   e6by2 -= 1;
			e6bx3 -= 1;   e6by3 -= 1;
			e6bx4 -= 1;   e6by4 -= 1;
			e6bx5 -= 1;   e6by5 -= 1;


			if (cx11<100)
			{
				ey6 = 1;
			}
		}
		if (ey6 == 1)
		{
			cy11 -= 1;	cx11 += 1;
			e6bx1 += 1;   e6by1 -= 1;
			e6bx2 += 1;   e6by2 -= 1;
			e6bx3 += 1;   e6by3 -= 1;
			e6bx4 += 1;   e6by4 -= 1;
			e6bx5 += 1;   e6by5 -= 1;

			if (cx11>300)
			{
				ey6 = 0;
			}
		}
		if (cy11<0)
		{
			ex6 = 1;
		}
	}
	if (ex6 == 1)
	{
		cx11 = 700;	cy11 = 660;
		e6bx1 = cx11 + 25;   e6by1 = cy11;
		e6bx2 = cx11 + 25;   e6by2 = cy11;
		e6bx3 = cx11 + 25;   e6by3 = cy11;
		e6bx4 = cx11 + 25;   e6by4 = cy11;
		e6bx5 = cx11 + 25;   e6by5 = cy11;

		ex6 = 0;
	}
	
}

void vanis()
{
	if (bx1 >= cx6 && bx1 + 2 <= cx6 + 52 && by1 + 5 >= cy6 && by1 + 5 <= cy1 + 66)
	{
		e1count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx2 >= cx6 && bx2 + 2 <= cx6 + 52 && by2 + 5 >= cy6 && by2 + 5 <= cy6 + 66)
	{
		e1count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx3 >= cx6 && bx3 + 2 <= cx6 + 52 && by3 + 5 >= cy6 && by3 + 5 <= cy6 + 66)
	{
		e1count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx4 >= cx6 && bx4 + 2 <= cx6 + 52 && by4 + 5 >= cy6 && by4 + 5 <= cy6 + 66)
	{
		e1count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx5 >= cx6 && bx5 + 2 <= cx6 + 52 && by5 + 5 >= cy6 && by5 + 5 <= cy6 + 66)
	{
		e1count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx6 >= cx6 && bx6 + 2 <= cx6 + 52 && by6 + 5 >= cy6 && by6 + 5 <= cy6 + 66)
	{
		e1count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx7 >= cx6 && bx7 + 2 <= cx6 + 52 && by7 + 5 >= cy6 && by7 + 5 <= cy6 + 66)
	{
		e1count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx8 >= cx6 && bx8 + 2 <= cx6 + 52 && by8 + 5 >= cy6 && by8 + 5 <= cy6 + 66)
	{
		e1count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx9 >= cx6 && bx9 + 2 <= cx6 + 52 && by9 + 5 >= cy6 && by9 + 5 <= cy6 + 66)
	{
		e1count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	if (bx10 >= cx6 && bx10 + 2 <= cx6 + 52 && by10 + 5 >= cy6 && by10 + 5 <= cy6 + 66)
	{
		e1count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e1count == 3)
		{
			score += 5;
			cx6 = 0;
			cy6 = 650;
			e1count = 0;
		}
	}
	
	//For second enemy
	if (bx1 >= cx7 && bx1 + 2 <= cx7 + 52 && by1 + 5 >= cy7 && by1 + 5 <= cy7 + 66)
	{
		e2count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx2 >= cx7 && bx2 + 2 <= cx7 + 52 && by2 + 5 >= cy7 && by2 + 5 <= cy7 + 66)
	{
		e2count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}

	if (bx3 >= cx7 && bx3 + 2 <= cx7 + 52 && by3 + 5 >= cy7 && by3 + 5 <= cy7 + 66)
	{
		e2count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx4 >= cx7 && bx4 + 2 <= cx7 + 52 && by4 + 5 >= cy7 && by4 + 5 <= cy7 + 66)
	{
		e2count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx5 >= cx7 && bx5 + 2 <= cx7 + 52 && by5 + 5 >= cy7 && by5 + 5 <= cy7 + 66)
	{
		e2count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx6 >= cx7 && bx6 + 2 <= cx7 + 52 && by6 + 5 >= cy7 && by6 + 5 <= cy7 + 66)
	{
		e2count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx7 >= cx7 && bx7 + 2 <= cx7 + 52 && by7 + 5 >= cy7 && by7 + 5 <= cy7 + 66)
	{
		e2count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx8 >= cx7 && bx8 + 2 <= cx7 + 52 && by8 + 5 >= cy7 && by8 + 5 <= cy7 + 66)
	{
		e2count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx9 >= cx7 && bx9 + 2 <= cx7 + 52 && by9 + 5 >= cy7 && by9 + 5 <= cy7 + 66)
	{
		e2count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	if (bx10 >= cx7 && bx10 + 2 <= cx7 + 52 && by10 + 5 >= cy7 && by10 + 5 <= cy7 + 66)
	{
		e2count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e2count == 3)
		{
			score += 5;
			cx7 = 950;
			cy7 = 670;
			e2count = 0;
		}
	}
	


	//For 3rd enemy
	if (bx1 >= cx8 && bx1 + 2 <= cx8 + 52 && by1 + 5 >= cy8 && by1 + 5 <= cy8 + 66)
	{
		e3count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx2 >= cx8 && bx2 + 2 <= cx8 + 52 && by2 + 5 >= cy8 && by2 + 5 <= cy8 + 66)
	{
		e3count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx3 >= cx8 && bx3 + 2 <= cx8 + 52 && by3 + 5 >= cy8 && by3 + 5 <= cy8 + 66)
	{
		e3count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx4 >= cx8 && bx4 + 2 <= cx8 + 52 && by4 + 5 >= cy8 && by4 + 5 <= cy8 + 66)
	{
		e3count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx5 >= cx8 && bx5 + 2 <= cx8 + 52 && by5 + 5 >= cy8 && by5 + 5 <= cy8 + 66)
	{
		e3count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx6 >= cx8 && bx6 + 2 <= cx8 + 52 && by6 + 5 >= cy8 && by6 + 5 <= cy8 + 66)
	{
		e3count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx7 >= cx8 && bx7 + 2 <= cx8 + 52 && by7 + 5 >= cy8 && by7 + 5 <= cy8 + 66)
	{
		e3count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx8 >= cx8 && bx8 + 2 <= cx8 + 52 && by8 + 5 >= cy8 && by8 + 5 <= cy8 + 66)
	{
		e3count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx9 >= cx8 && bx9 + 2 <= cx8 + 52 && by9 + 5 >= cy8 && by9 + 5 <= cy8 + 66)
	{
		e3count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	if (bx10 >= cx8 && bx10 + 2 <= cx8 + 52 && by10 + 5 >= cy8 && by10 + 5 <= cy8 + 66)
	{
		e3count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e3count == 3)
		{
			score += 5;
			cx8 = 500;
			cy8 = 690;
			e3count = 0;
		}
	}
	
	//For 4th enemy
	if (bx1 >= cx9 && bx1 + 2 <= cx9 + 52 && by1 + 5 >= cy9 && by1 + 5 <= cy9 + 66)
	{
		e4count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx2 >= cx9 && bx2 + 2 <= cx9 + 52 && by2 + 5 >= cy9 && by2 + 5 <= cy9 + 66)
	{
		e4count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx3 >= cx9 && bx3 + 2 <= cx9 + 52 && by3 + 5 >= cy9 && by3 + 5 <= cy9 + 66)
	{
		e4count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx4 >= cx9 && bx4 + 2 <= cx9 + 52 && by4 + 5 >= cy9 && by4 + 5 <= cy9 + 66)
	{
		e4count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx5 >= cx9 && bx5 + 2 <= cx9 + 52 && by5 + 5 >= cy9 && by5 + 5 <= cy9 + 66)
	{
		e4count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx6 >= cx9 && bx6 + 2 <= cx9 + 52 && by6 + 5 >= cy9 && by6 + 5 <= cy9 + 66)
	{
		e4count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx7 >= cx9 && bx7 + 2 <= cx9 + 52 && by7 + 5 >= cy9 && by7 + 5 <= cy9 + 66)
	{
		e4count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx8 >= cx9 && bx8 + 2 <= cx9 + 52 && by8 + 5 >= cy9 && by8 + 5 <= cy9 + 66)
	{
		e4count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx9 >= cx9 && bx9 + 2 <= cx9 + 52 && by9 + 5 >= cy9 && by9 + 5 <= cy9 + 66)
	{
		e4count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	if (bx10 >= cx9 && bx10 + 2 <= cx9 + 52 && by10 + 5 >= cy9 && by10 + 5 <= cy9 + 66)
	{
		e4count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e4count == 3)
		{
			score += 5;
			cx9 = 870;
			cy9 = 1500;
			e4count = 0;
		}
	}
	
	//For 5th enemy
	if (bx1 >= cx10 && bx1 + 2 <= cx10 + 52 && by1 + 5 >= cy10 && by1 + 5 <= cy10 + 66)
	{
		e5count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx2 >= cx10 && bx2 + 2 <= cx10 + 52 && by2 + 5 >= cy10 && by2 + 5 <= cy10 + 66)
	{
		e5count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx3 >= cx10 && bx3 + 2 <= cx10 + 52 && by3 + 5 >= cy10 && by3 + 5 <= cy10 + 66)
	{
		e5count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx4 >= cx10 && bx4 + 2 <= cx10 + 52 && by4 + 5 >= cy10 && by4 + 5 <= cy10 + 66)
	{
		e5count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx5 >= cx10 && bx5 + 2 <= cx10 + 52 && by5 + 5 >= cy10 && by5 + 5 <= cy10 + 66)
	{
		e5count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx6 >= cx10 && bx6 + 2 <= cx10 + 52 && by6 + 5 >= cy10 && by6 + 5 <= cy10 + 66)
	{
		e5count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx7 >= cx10 && bx7 + 2 <= cx10 + 52 && by7 + 5 >= cy10 && by7 + 5 <= cy10 + 66)
	{
		e5count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx8 >= cx10 && bx8 + 2 <= cx10 + 52 && by8 + 5 >= cy10 && by8 + 5 <= cy10 + 66)
	{
		e5count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx9 >= cx10 && bx9 + 2 <= cx10 + 52 && by9 + 5 >= cy10 && by9 + 5 <= cy10 + 66)
	{
		e5count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	if (bx10 >= cx10 && bx10 + 2 <= cx10 + 52 && by10 + 5 >= cy10 && by10 + 5 <= cy10 + 66)
	{
		e5count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e5count == 3)
		{
			score += 5;
			cx10 = 620;
			cy10 = 750;
			e5count = 0;
		}
	}
	
	//For 6th enemy
	if (bx1 >= cx11 && bx1 + 2 <= cx11 + 52 && by1 + 5 >= cy11 && by1 + 5 <= cy11 + 66)
	{
		e6count++;
		bx1 = cx1 + 25;
		by1 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx2 >= cx11 && bx2 + 2 <= cx11 + 52 && by2 + 5 >= cy11 && by2 + 5 <= cy11 + 66)
	{
		e6count++;
		bx2 = cx1 + 25;
		by2 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx3 >= cx11 && bx3 + 2 <= cx11 + 52 && by3 + 5 >= cy11 && by3 + 5 <= cy11 + 66)
	{
		e6count++;
		bx3 = cx1 + 25;
		by3 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx4 >= cx11 && bx4 + 2 <= cx11 + 52 && by4 + 5 >= cy11 && by4 + 5 <= cy11 + 66)
	{
		e6count++;
		bx4 = cx1 + 25;
		by4 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx5 >= cx11 && bx5 + 2 <= cx11 + 52 && by5 + 5 >= cy11 && by5 + 5 <= cy11 + 66)
	{
		e6count++;
		bx5 = cx1 + 25;
		by5 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx6 >= cx11 && bx6 + 2 <= cx11 + 52 && by6 + 5 >= cy11 && by6 + 5 <= cy11 + 66)
	{
		e6count++;
		bx6 = cx1 + 25;
		by6 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx7 >= cx11 && bx7 + 2 <= cx11 + 52 && by7 + 5 >= cy11 && by7 + 5 <= cy11 + 66)
	{
		e6count++;
		bx7 = cx1 + 25;
		by7 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx8 >= cx11 && bx8 + 2 <= cx11 + 52 && by8 + 5 >= cy11 && by8 + 5 <= cy11 + 66)
	{
		e6count++;
		bx8 = cx1 + 25;
		by8 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx9 >= cx11 && bx9 + 2 <= cx11 + 52 && by9 + 5 >= cy11 && by9 + 5 <= cy11 + 66)
	{
		e6count++;
		bx9 = cx1 + 25;
		by9 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	if (bx10 >= cx11 && bx10 + 2 <= cx11 + 52 && by10 + 5 >= cy11 && by10 + 5 <= cy11 + 66)
	{
		e6count++;
		bx10 = cx1 + 25;
		by10 = cy1;
		if (e6count == 3)
		{
			score += 5;
			cx11 = 770;
			cy11 = 900;
			e6count = 0;
		}
	}
	
	//For 7th enemy
	
	
	printf("%d\n", score);
}

void minedead()
{
	if (e1bx1 >= cx1 && e1bx1 + 2 <= cx1 + 52 && e1by1 <= cy1 + 66 && e1by1 >= cy1)
	{
		mycount++;
		e1bx1 = cx6 + 25;
		e1by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e1bx2 >= cx1 && e1bx2 + 2 <= cx1 + 52 && e1by1 <= cy1 + 66 && e1by1 >= cy1)
	{
		mycount++;
		e1bx2 = cx6 + 25;
		e1by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e1bx3 >= cx1 && e1bx3 + 2 <= cx1 + 52 && e1by3 <= cy1 + 66 && e1by3 >= cy1)
	{
		mycount++;
		e1bx3 = cx6 + 25;
		e1by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e1bx4 >= cx1 && e1bx4 + 2 <= cx1 + 52 && e1by4 <= cy1 + 66 && e1by4 >= cy1)
	{
		mycount++;
		e1bx4 = cx6 + 25;
		e1by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e1bx5 >= cx1 && e1bx5 + 2 <= cx1 + 52 && e1by5 <= cy1 + 66 && e1by5 >= cy1)
	{
		mycount++;
		e1bx5 = cx6 + 25;
		e1by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e2bx1 >= cx1 && e2bx1 + 2 <= cx1 + 52 && e2by1 <= cy1 + 66 && e2by1 >= cy1)
	{
		mycount++;
		e2bx1 = cx6 + 25;
		e2by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e2bx2 >= cx1 && e2bx2 + 2 <= cx1 + 52 && e2by2 <= cy1 + 66 && e2by2 >= cy1)
	{
		mycount++;
		e2bx2 = cx6 + 25;
		e2by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e2bx3 >= cx1 && e2bx3 + 2 <= cx1 + 52 && e2by3 <= cy1 + 66 && e2by3 >= cy1)
	{
		mycount++;
		e2bx3 = cx6 + 25;
		e2by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e2bx4 >= cx1 && e2bx4 + 2 <= cx1 + 52 && e2by4 <= cy1 + 66 && e2by4 >= cy1)
	{
		mycount++;
		e2bx4 = cx6 + 25;
		e2by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e2bx5 >= cx1 && e2bx5 + 2 <= cx1 + 52 && e2by5 <= cy1 + 66 && e2by5 >= cy1)
	{
		mycount++;
		e2bx5 = cx6 + 25;
		e2by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e3bx1 >= cx1 && e3bx1 + 2 <= cx1 + 52 && e3by1 <= cy1 + 66 && e3by1 >= cy1)
	{
		mycount++;
		e3bx1 = cx6 + 25;
		e3by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e3bx2 >= cx1 && e3bx2 + 2 <= cx1 + 52 && e3by2 <= cy1 + 66 && e3by2 >= cy1)
	{
		mycount++;
		e3bx2 = cx6 + 25;
		e3by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e3bx3 >= cx1 && e3bx3 + 2 <= cx1 + 52 && e3by3 <= cy1 + 66 && e3by3 >= cy1)
	{
		mycount++;
		e3bx3 = cx6 + 25;
		e3by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e3bx4 >= cx1 && e3bx4 + 2 <= cx1 + 52 && e3by4 <= cy1 + 66 && e3by4 >= cy1)
	{
		mycount++;
		e3bx4 = cx6 + 25;
		e3by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e3bx5 >= cx1 && e3bx5 + 2 <= cx1 + 52 && e3by5 <= cy1 + 66 && e3by5 >= cy1)
	{
		mycount++;
		e3bx5 = cx6 + 25;
		e3by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e4bx1 >= cx1 && e4bx1 + 2 <= cx1 + 52 && e4by1 <= cy1 + 66 && e4by1 >= cy1)
	{
		mycount++;
		e4bx1 = cx6 + 25;
		e4by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e4bx2 >= cx1 && e4bx2 + 2 <= cx1 + 52 && e4by2 <= cy1 + 66 && e4by2 >= cy1)
	{
		mycount++;
		e4bx2 = cx6 + 25;
		e4by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e4bx3 >= cx1 && e4bx3 + 2 <= cx1 + 52 && e4by3 <= cy1 + 66 && e4by3 >= cy1)
	{
		mycount++;
		e4bx3 = cx6 + 25;
		e4by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e4bx4 >= cx1 && e4bx4 + 2 <= cx1 + 52 && e4by4 <= cy1 + 66 && e4by4 >= cy1)
	{
		mycount++;
		e4bx4 = cx6 + 25;
		e4by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e4bx5 >= cx1 && e4bx5 + 2 <= cx1 + 52 && e4by5 <= cy1 + 66 && e4by5 >= cy1)
	{
		mycount++;
		e4bx5 = cx6 + 25;
		e4by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e5bx1 >= cx1 && e5bx1 + 2 <= cx1 + 52 && e5by1 <= cy1 + 66 && e5by1 >= cy1)
	{
		mycount++;
		e5bx1 = cx6 + 25;
		e5by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e5bx2 >= cx1 && e5bx2 + 2 <= cx1 + 52 && e5by2 <= cy1 + 66 && e5by2 >= cy1)
	{
		mycount++;
		e5bx2 = cx6 + 25;
		e5by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e5bx3 >= cx1 && e5bx3 + 2 <= cx1 + 52 && e5by3 <= cy1 + 66 && e5by3 >= cy1)
	{
		mycount++;
		e5bx3 = cx6 + 25;
		e5by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e5bx4 >= cx1 && e5bx4 + 2 <= cx1 + 52 && e5by4 <= cy1 + 66 && e5by4 >= cy1)
	{
		mycount++;
		e5bx4 = cx6 + 25;
		e5by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e5bx5 >= cx1 && e5bx5 + 2 <= cx1 + 52 && e5by5 <= cy1 + 66 && e5by5 >= cy1)
	{
		mycount++;
		e5bx5 = cx6 + 25;
		e5by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e6bx1 >= cx1 && e6bx1 + 2 <= cx1 + 52 && e6by1 <= cy1 + 66 && e6by1 >= cy1)
	{
		mycount++;
		e6bx1 = cx6 + 25;
		e6by1 = cy6;

		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e6bx2 >= cx1 && e6bx2 + 2 <= cx1 + 52 && e6by2 <= cy1 + 66 && e6by2 >= cy1)
	{
		mycount++;
		e6bx2 = cx6 + 25;
		e6by2 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e6bx3 >= cx1 && e6bx3 + 2 <= cx1 + 52 && e6by3 <= cy1 + 66 && e6by3 >= cy1)
	{
		mycount++;
		e6bx3 = cx6 + 25;
		e6by3 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e6bx4 >= cx1 && e6bx4 + 2 <= cx1 + 52 && e6by4 <= cy1 + 66 && e6by4 >= cy1)
	{
		mycount++;
		e6bx4 = cx6 + 25;
		e6by4 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	if (e6bx5 >= cx1 && e6bx5 + 2 <= cx1 + 52 && e6by5 <= cy1 + 66 && e6by5 >= cy1)
	{
		mycount++;
		e6bx5 = cx6 + 25;
		e6by5 = cy6;
		if (mycount == 3)
		{
			life--;
			cx1 = 500;
			cy1 = 5;
			mycount = 0;
		}
	}
	printf("%d\n", life);
	if (life == 0)
	{
		level = 3;
	}
	
}

void myinit()
{
	level = 0; mycount = 0;
	//For my Firing
	flag = 0;	i1 = 0;	i2 = 0;	i3 = 0;	i4 = 0;	i5 = 0;	i6 = 0;	i7 = 0;	i8 = 0;	i9 = 0;	i10 = 0;
	//For enemy movement
	ex1 = 0;	ey1 = 0;
	ex2 = 0;	ey2 = 0;
	ex3 = 0;	ey3 = 0;
	ex4 = 0;	ey4 = 0;
	ex5 = 0;	ey5 = 0;
	ex6 = 0;	ey6 = 0;

	cx1 = 400;	cy1 = 5;			//For my plane position
	//For my Bullet position
	bx1 = cx1 + 25;		by1 = cy1;
	bx2 = cx1 + 25;		by2 = cy1;
	bx3 = cx1 + 25;		by3 = cy1;
	bx4 = cx1 + 25;		by4 = cy1;
	bx5 = cx1 + 25;		by5 = cy1;
	bx6 = cx1 + 25;		by6 = cy1;
	bx7 = cx1 + 25;		by7 = cy1;
	bx8 = cx1 + 25;		by8 = cy1;
	bx9 = cx1 + 25;		by9 = cy1;
	bx10 = cx1 + 25;	by10 = cy1;
	

	//For enemy position
	cx6 = 0;		cy6 = 660;
	cx7 = 750;	cy7 = 660;
	cx8 = 200;	cy8 = 660;
	cx9 = 600;	cy9 = 660;
	cx10 = 400;	cy10 = 660;
	cx11 = 700;	cy11 = 660;
	
	//For 1st enemy bullet position
	e1bx1 = cx6 + 25;   e1by1 = cy6;
	e1bx2 = cx6 + 25;   e1by2 = cy6;
	e1bx3 = cx6 + 25;   e1by3 = cy6;
	e1bx4 = cx6 + 25;   e1by4 = cy6;
	e1bx5 = cx6 + 25;   e1by5 = cy6;

	//For 2nd enemy bullet position
	e2bx1 = cx7 + 25;   e2by1 = cy7;
	e2bx2 = cx7 + 25;   e2by2 = cy7;
	e2bx3 = cx7 + 25;   e2by3 = cy7;
	e2bx4 = cx7 + 25;   e2by4 = cy7;
	e2bx5 = cx7 + 25;   e2by5 = cy7;

	//For 3rd enemy bullet position
	e3bx1 = cx8 + 25;   e3by1 = cy8;
	e3bx2 = cx8 + 25;   e3by2 = cy8;
	e3bx3 = cx8 + 25;   e3by3 = cy8;
	e3bx4 = cx8 + 25;   e3by4 = cy8;
	e3bx5 = cx8 + 25;   e3by5 = cy8;

	//For 4th enemy bullet position
	e4bx1 = cx9 + 25;   e4by1 = cy9;
	e4bx2 = cx9 + 25;   e4by2 = cy9;
	e4bx3 = cx9 + 25;   e4by3 = cy9;
	e4bx4 = cx9 + 25;   e4by4 = cy9;
	e4bx5 = cx9 + 25;   e4by5 = cy9;

	//For 5th enemy bullet position
	e5bx1 = cx10 + 25;   e5by1 = cy10;
	e5bx2 = cx10 + 25;   e5by2 = cy10;
	e5bx3 = cx10 + 25;   e5by3 = cy10;
	e5bx4 = cx10 + 25;   e5by4 = cy10;
	e5bx5 = cx10 + 25;   e5by5 = cy10;

	//For 6th enemy bullet position
	e6bx1 = cx11 + 25;   e6by1 = cy11;
	e6bx2 = cx11 + 25;   e6by2 = cy11;
	e6bx3 = cx11 + 25;   e6by3 = cy11;
	e6bx4 = cx11 + 25;   e6by4 = cy11;
	e6bx5 = cx11 + 25;   e6by5 = cy11;

	e1count = 0;
	e2count = 0;
	e3count = 0;
	e4count = 0;
	e5count = 0;
	e6count = 0;

}
int main()
{
	
	if (musicOn)
	{
		PlaySound("music\\mp3.wav", NULL, SND_LOOP | SND_ASYNC);
	}
	iSetTimer(1, shoot);
	iSetTimer(1, eshoot);

	iSetTimer(25, enemy);
	iSetTimer(1, vanis);
	iSetTimer(25, minedead);
	myinit();

	iInitialize(screenwidth, screenheight, "Air Fighter");
	return 0;
}

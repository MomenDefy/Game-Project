#include <iostream>
#include <conio.h>
using namespace std;

void FillMatrxiByMyBackGround(char X[][3000])
{
	for (int r = 0; r < 3000; r++)
	{
		for (int c = 0; c < 3000; c++)
		{
			X[r][c] = ' ';
		}
	}

	for (int c = 0; c < 3000; c++)
	{
		X[0][c] = '|';
		X[3000][c] = '|';
	}

	for (int r = 0; r < 3000; r++)
	{
		X[r][0] = '~';
		X[r][74] = '~';
	}

	int c;
	for (c = 15; c < 20; c++)
	{
		X[10][c] = 205;
	}
	X[10][c] = 187;
	int r;
	for (r = 11; r < 12; r++)
	{
		X[r][c] = 186;
	}
	X[r][c] = 200;
	c++;
	for (int k = 0; k < 3; k++)
	{
		X[r][c] = 205;
		c++;
	}

}
void DispToscreen(char X[][3000])
{
	system("cls");
	for (int r = 0; r < 3000; r++)
	{
		for (int c = 0; c < 3000; c++)
		{
			cout << X[r][c];
		}
	}
}
void WaveEnd1(int& Waveend)
{
	if (Waveend == 1) {
	
	}
}
void WaveEnd2(int& Waveend)
{
	if (Waveend == 2) {

	}
}
void WaveEnd3(int& Waveend)
{
	if (Waveend == 3) {

	}
}
void WaveEnd4(int& Waveend)
{
	if (Waveend == 4) {

	}
}
void WaveEnd5(int& Waveend)
{
	if (Waveend == 5) {

	}
}
void MoveZombie1(int& RE1, int& CE1, int& dirE1)
{
	if (dirE1 == 1)
	{
		if (CE1 < 70)
			CE1++;
		else
			dirE1 = -1;
	}
	else
	{
		if (CE1 > 2)
			CE1--;
		else
			dirE1 = 1;

	}
}
void MoveSkeleton2(int& RE1, int& CE1, int& dirE1)
{
	if (dirE1 == 1)
	{
		if (CE1 < 70)
			CE1++;
		else
			dirE1 = -1;
	}
	else
	{
		if (CE1 > 2)
			CE1--;
		else
			dirE1 = 1;

	}
}
void MoveNecromancer3(int& RE1, int& CE1, int& dirE1)
{
	if (dirE1 == 1)
	{
		if (CE1 < 70)
			CE1++;
		else
			dirE1 = -1;
	}
	else
	{
		if (CE1 > 2)
			CE1--;
		else
			dirE1 = 1;

	}
}
void MoveUndeadOrc4(int& RE1, int& CE1, int& dirE1)
{
	if (dirE1 == 1)
	{
		if (CE1 < 70)
			CE1++;
		else
			dirE1 = -1;
	}
	else
	{
		if (CE1 > 2)
			CE1--;
		else
			dirE1 = 1;

	}
}
void MoveDragon5(int& RE1, int& CE1, int& dirE1)
{
	if (dirE1 == 1)
	{
		if (CE1 < 70)
			CE1++;
		else
			dirE1 = -1;
	}
	else
	{
		if (CE1 > 2)
			CE1--;
		else
			dirE1 = 1;

	}
}
void DrawZombie1(char X[][3000], int RE1, int CE1)
{
	X[RE1][CE1] = 1;
	X[RE1 + 1][CE1] = '|';
	X[RE1 + 1][CE1 - 1] = '/';
	X[RE1 + 1][CE1 + 1] = '\\';
	X[RE1 + 2][CE1] = '|';
	X[RE1 + 3][CE1 - 2] = '/';
	X[RE1 + 3][CE1 + 2] = '\\';
}
void DrawSkeleton2(char X[][3000], int RE1, int CE1)
{
	X[RE1][CE1] = 1;
	X[RE1 + 1][CE1] = '|';
	X[RE1 + 1][CE1 - 1] = '/';
	X[RE1 + 1][CE1 + 1] = '\\';
	X[RE1 + 2][CE1] = '|';
	X[RE1 + 3][CE1 - 2] = '/';
	X[RE1 + 3][CE1 + 2] = '\\';
}
void DrawNecromancer3(char X[][3000], int RE1, int CE1)
{
	X[RE1][CE1] = 1;
	X[RE1 + 1][CE1] = '|';
	X[RE1 + 1][CE1 - 1] = '/';
	X[RE1 + 1][CE1 + 1] = '\\';
	X[RE1 + 2][CE1] = '|';
	X[RE1 + 3][CE1 - 2] = '/';
	X[RE1 + 3][CE1 + 2] = '\\';
}
void DrawUndeadOrc4(char X[][3000], int RE1, int CE1)
{
	X[RE1][CE1] = 1;
	X[RE1 + 1][CE1] = '|';
	X[RE1 + 1][CE1 - 1] = '/';
	X[RE1 + 1][CE1 + 1] = '\\';
	X[RE1 + 2][CE1] = '|';
	X[RE1 + 3][CE1 - 2] = '/';
	X[RE1 + 3][CE1 + 2] = '\\';
}
void DrawDragon5(char X[][3000], int RE1, int CE1)
{
	X[RE1][CE1] = 1;
	X[RE1 + 1][CE1] = '|';
	X[RE1 + 1][CE1 - 1] = '/';
	X[RE1 + 1][CE1 + 1] = '\\';
	X[RE1 + 2][CE1] = '|';
	X[RE1 + 3][CE1 - 2] = '/';
	X[RE1 + 3][CE1 + 2] = '\\';
}

void DrawHero(char X[][3000], int RH, int CH)
{
	X[RH][CH] = '>';
}

void MoveHero(int& RH, int& CH, char ch)
{
	if (ch == 'd')
	{
		CH++;
	}
	if (ch == 'a')
	{
		CH--;
	}
	if (ch == 'w')
	{
		RH--;
	}
	if (ch == 's')
	{
		RH++;
	}

}
int main()
{
	char X[3000][3000];
	int RE1 = 6;
	int CE1 = 12;
	int dirE1 = 1;

	int RH = 5;
	int CH = 10;

	while (1)
	{
		while (!_kbhit())
		{
			FillMatrxiByMyBackGround(X);
			MoveZombie1(RE1, CE1, dirE1);
			DrawZombie1(X, RE1, CE1);

			DrawHero(X, RH, CH);
			DispToscreen(X);
		}

		char ch = _getch();
		MoveHero(RH, CH, ch);
	}
}

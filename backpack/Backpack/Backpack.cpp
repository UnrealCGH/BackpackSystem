// Backpack.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<string>


using namespace std;
int main();
void DisplayMenu();
void Backpack1();
void Backpack2();
void Backpack3();
void backtoMenu();
void backpackInput();


//just some test and try
//union
//struct backPackNode
//enum backpackSerialNumber
//{
//	backpack1 = 1,
//	backpack2 = 2,
//	backpack3 = 3
//};
//backpackSerialNumber bagSerialnumber = backpack1;


int main()
{
	int itemNumber;
	string allinput;
	DisplayMenu();
	while (1)//controller the menu
	{
		getline(cin, allinput);
		for (int i = 0; allinput[i] != '\0'; i++)
		{
			if (allinput.length() == 1)
			{
				if (allinput[i] >= '1' && allinput[i] <= '3')
				{
					switch (allinput[i])
					{
					case '1':
						system("cls");
						allinput = ' ';
						Backpack1();
						break;
					case '2':
						system("cls");
						allinput = ' ';
						Backpack2();
						break;
					case '3':
						system("cls");
						allinput = ' ';
						Backpack3();
						break;
					default:
						cout << "not has the backpack;\n";
						break;
					}
				}
				else
				{
					cout << "not has the backpack;\n";
					allinput = ' ';
				}
			}
			allinput = ' ';
			cout << "not has the backpack;\n";
		}
	}
	//program pause wait a char before the program stop; 
	getchar();
	system("pause");
	return 0;
}

void DisplayMenu()
//the main memu
{
	cout << "The Backpack Menu:\n";
	cout << "Please choose the view item:\nBackpack1: please enter 1\nBackpack2: please enter 2\nBackpack3: please enter 3\n";
	cout << "Only one backpack can be read at a time!\n";
}

void Backpack1()
{
	cout << "this is backpack1\n";
	cout << "press B key to back to Menu.\n";
	backpackInput();
	backtoMenu();
}
void Backpack2()
{
	cout << "this is backpack2\n";
	cout << "press B key to back to Menu.\n";
	backpackInput();
	backtoMenu();
}
void Backpack3()
{
	cout << "this is backpack3\n";
	cout << "press B key to back to Menu.\n";
	backpackInput();
	backtoMenu();
}


void backtoMenu()
{
	cout << "press B key to back to Menu.\n";
	string backtoMenu;
	for (bool stay = false; stay = !stay;)
	{
		getline(cin, backtoMenu);
		for (int i = 0; backtoMenu[i] != '\0'; i++)
			if (backtoMenu[i] != 'B') stay = false;//have B  end this function
	}
	system("cls");
	DisplayMenu();
}

void backpackInput()
{
	string input;
	for (bool stay = false; stay = !stay;)//(!stay)==true after this statement execute;
	{
		getline(cin, input);
		for (int i = 0; input[i] != '\0'; i++)
			if (input[i] != 'B')
			{
				cout << "has not B\n";
				stay = false;//have not B will execute loop
			}
	}
	//system("cls");
}
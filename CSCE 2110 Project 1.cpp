// CSCE 2110 Project 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "list.h"


using namespace std;

int main()
{
	ifstream fileName;
	string fName;

	linkedList totalSet;
	linkedList roommateA;
	linkedList roommateB;

	string roommateAName;
	string roommateBName;

	//cout << "Input the file name (and extension) of the file you want to use.\n";
	//cin >> fName;
	fName = "move1.txt";

	fileName.open(fName);

	if (fileName.is_open())
	{
		string line;
		int lineNum = 1;
		while (getline(fileName, line))
		{
			//cout << line << endl;
			stringstream ss(line);
			
			string temp;
			if (lineNum == 1)
			{
				while (ss.good())
				{
					getline(ss, temp, ',');
					totalSet.newNode(temp);
				}
			}
			else if (lineNum == 2)
			{
				getline(ss, temp, ':');
				roommateAName = temp;
				
				while (ss.good())
				{
					getline(ss, temp, ',');
					roommateA.newNode(temp);
				}
			}
			else if (lineNum == 3)
			{
				getline(ss, temp, ':');
				roommateBName = temp;

				while (ss.good())
				{
					getline(ss, temp, ',');
					roommateB.newNode(temp);
				}
			}
			
			lineNum++;
		}
	}
	
	cout << "{ ";
	totalSet.printList();
	cout << "}" << endl << roommateAName << ":{ ";
	roommateA.printList();
	cout << "}" << endl << roommateBName << ":{ ";
	roommateB.printList(); 
	cout << "}" << endl;

	cout << "\n\n\n\n\n";
}


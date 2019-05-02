#pragma once
#include "student.h"
#include <fstream>
#include <vector>
using namespace std;

void OutputVector(vector<Student> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		a[i].OutputStudent();
		cout << endl;
	}
}

//seacrh of the best student by mean

void best(vector<Student> group) 
{
	Student best;
	for (int i = 0; i < group.size(); i++)
	{
		if (group[i].Mean() > best.Mean())
			best = group[i];
	}
	cout << endl << "Tne best student: ";
	best.OutputStudent();
	cout << endl;
}

//seacrh of the worst student by mean

void worst(vector<Student> group)
{
	Student worst;
	worst = group[0];
	for (int i = 0; i < group.size(); i++)
	{
		if (group[i].Mean() < worst.Mean())
			worst = group[i];
	}
	cout << endl << "Tne worst student: ";
	worst.OutputStudent();
	cout << endl;
}

//average point of the group

void groupMean(vector<Student> group)
{
	float sum_means = 0;
	for (int i = 0; i < group.size(); i++)
	{
		sum_means += group[i].Mean();
	}
	cout << "Group mean: " << sum_means / group.size() << endl;
}

//student search by name & surname

void find(vector<Student> group)
{

		string line;
		string name;
		cin.ignore();
		getline(cin, name);
		for (int i = 0; i < group.size(); i++)
		{
			line = group[i].getName();
			if (line == name)
			{
				cout << "Student found: "<<endl;
				group[i].OutputStudent();
				cout << "Mean: " << group[i].Mean() << endl;
			}
		}
		cout << endl;
	
}

void Menu(vector<Student> group)
{
	while (1)
	{
		int choice;
		cout << "Choose an operation:" << endl
			<< "Output a list of students - press 1" << endl
			<< "Count a mean of a group - press 2" << endl
			<< "Output the best student - press 3" << endl
			<< "Output the worst student - press 4" << endl
			<< "Find a student - press 5" << endl
			<< "Exit - press 0" << endl;
		cin >> choice;
		if (choice == 0)
			break;
		switch (choice)
		{
		case 1: {
			OutputVector(group); break;
		}
		case 2: {
			groupMean(group); break;
		}
		case 3: {
			best(group); break;
		}
		case 4: {
			worst(group); break;
		}
		case 5: {
			find(group);
			break;
		}
		default:{
			cout << "Wrong choice.";
			break;
		}
		}
		
		cout << endl
			<< "Press 1 to continue" << endl
			<< "Press 0 to exit" << endl;
		cin >> choice;
		if (choice == 1)
			system("cls");
		else if (choice == 0)
			break;
		else
		{
			cout << "Wrong choice."; break;
		}
	}
}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int calc;
	int discr;
	int progr;
public:
	Student() { name = "none"; calc = 0; discr = 0; progr = 0; }
	Student(string n, int c, int d, int p) { n = name; c = calc; d = discr; p = progr;}
	Student(const Student&S) { name = S.name; calc = S.calc; discr = S.discr; progr = S.progr; }
	void InputStudent(istream&in);
	void OutputStudent();
	float Mean();
	string getName() { return name; }
};

void Student::InputStudent(istream&in)
{
	string first, last;
	in >> first >> last;
	name = first + " " + last;
	in >> calc;
	in >> discr;
	in >> progr;
}
void Student::OutputStudent()
{
	cout << name << endl
		<< "Calculus: " << calc << endl
		<< "Discrete Math: " << discr << endl
		<< "Programming: " << progr << endl;
}
float Student::Mean()
{
	float m;
	m = (calc + discr + progr) / 3.;
	return m;
}
#include "student.h"
#include "funcDef.h"

using namespace std;


int main()
{
	ifstream in("data.txt");
	Student stemp;
	string line;
	vector<Student> group;

	while (getline(in, line))
	{
		stemp.InputStudent(in);
		group.push_back(stemp);
	}
	Menu(group);

	system("pause");
	return 0;
}

/*
		OUTPUT SAMPLE:

Choose an operation :
Output a list of students - press 1
Count a mean of a group - press 2
Output the best student - press 3
Output the worst student - press 4
Find a student - press 5
Exit - press 0
	1
	Bezpaliuk Andrii
	Calculus : 4
	Discrete Math : 3
	Programming : 4

	Bekhta Ivan
	Calculus : 3
	Discrete Math : 3
	Programming : 3

	Bodnar Oleh
	Calculus : 4
	Discrete Math : 4
	Programming : 3

	.......

	Press 1 to continue
	Press 0 to exit

	-||-

	2
	Group mean: 3.44086

	3
	Tne best student: Lyskovets Anatolii
	Calculus: 5
	Discrete Math: 5
	Programming: 5

	4
	Tne worst student: Shlapakova Viktoria
	Calculus: 2
	Discrete Math: 2
	Programming: 2

	5
	Kozak Marta <- you are requested to input

	Student found:
	Kozak Marta
	Calculus: 4
	Discrete Math: 5
	Programming: 5
	Mean: 4.66667

	*/
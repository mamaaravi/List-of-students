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

	/*find(group);
	best(group);
	worst(group);
	groupMean(group);
	cout << "Number of students: " << group.size() << endl;*/
	Menu(group);
	system("pause");
	return 0;
}
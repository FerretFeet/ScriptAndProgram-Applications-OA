#include <iostream>

#include <string>

#include "roster.h"

using namespace std;

int main() {
	// Copied from task req and filled my info last item
	vector<string> studentData ={ 
		"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Brandon,West,bwest89@wgu.edu,25,4,21,7,SOFTWARE"
	};

	// F1
	cout << "Scripting and Programming - Applications" << endl
		<< "Made with C++" << endl
		<< "Student ID : 005662260" << endl
		<< "Brandon West" << endl;

	//F2
	Roster classRoster;

	//F3
	classRoster.addStringArr(studentData);

	//F4
	cout << "Print All" << endl;
	classRoster.printAll();
	classRoster.printInvalidEmails();
	for (int i = 0; i < classRoster.classRosterArray.size(); ++i) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.printAll();
	classRoster.remove("A3");
	

	return 0;
}
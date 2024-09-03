#pragma once

#include "student.h"
#include <vector>;

using namespace std;

class Roster {
public:
	vector<Student*> classRosterArray;

	Student parseString(string csvString);
	void addStringArr(vector<string> studentArr);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
	void remove(string studentID);
	void print(int index);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);
private:

};
#pragma once

#include "degree.h"
using namespace std;

class Student {
private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3];
	DegreeProgram degreeProgram;
public:
	Student(string studentID, string firstName, string lastName,
		string emailAddress, int age, int daysInCourse[3],
		DegreeProgram degreeProgram) ;

	//getters
	string getStudentID() ;
	string getFirstName() ;
	string getLastName() ;
	string getEmailAddress() ;
	int getAge() ;
	int getDaysInCourse(int idx) ;

	DegreeProgram getDegreeProgram() ;

	//setters
	void setStudentID(string newID) ;
	void setFirstName(string newFirstName) ;
	void setLastName(string newLastName) ;
	void setEmailAddress(string newEmailAddress) ;
	void setAge(int newAge) ;
	void setDaysInCourse(int newDays[3]) ;
	void setDegreeProgram(DegreeProgram newDegree) ;

	//prints
	void printStudentID() ;
	void printFirstName() ;
	void printLastName() ;
	void printEmailAddress() ;
	void printAge() ;
	void printDaysInCourse() ;
	void printDegreeProgram() ;
	void printAll() ;

};


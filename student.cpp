#include <iostream>

#include <string>

#include "student.h"

using namespace std;

//Constructor
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[3], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse[0] = daysInCourse[0];
	this->daysInCourse[1] = daysInCourse[1];
	this->daysInCourse[2] = daysInCourse[2];
	this->degreeProgram = degreeProgram;
	cout << "Student successfully created" << endl;
}


//Getters
string Student::getStudentID() {
	return this->studentID;
}
string Student::getFirstName()
{
	return this->firstName;
}
string Student::getLastName() {
	return this->lastName;
}
string Student::getEmailAddress() {
	return this->emailAddress;
}
int Student::getAge() {
	return this->age;
}
int Student::getDaysInCourse(int idx) {
	return this->daysInCourse[idx];
}



DegreeProgram Student::getDegreeProgram() {
	return this->degreeProgram;
}

//Setters  

void Student::setStudentID(string newID) {
	this->studentID = newID;
}
void Student::setFirstName(string newFirstName) {
	this->firstName = newFirstName;
}
void Student::setLastName(string newLastName) {
	this->lastName = newLastName;
}
void Student::setEmailAddress(string newEmailAddress) {
	this->emailAddress = newEmailAddress;
}
void Student::setAge(int newAge) {
	this->age = newAge;
}
//void Student::setDaysInCourse(int
//	newDays[3]) {
//	for (int i = 0; i < 3; ++i) {
//		this->daysInCourse[i] = newDays[i];
//	}
//}
//void Student::setDegreeProgram(DegreeProgram newDegree) {
//	this->degreeProgram = newDegree;
//}
//
////Prints
//void Student::printStudentID() {
//	cout << this->studentID << flush;
//}
//void Student::printFirstName() {
//	cout << "First Name : " << this->firstName << flush;
//}
//void Student::printLastName() {
//	cout << "Last Name: " << this->lastName << flush;
//}
//void Student::printEmailAddress() {
//	cout << this->emailAddress << flush;
//}
//void Student::printAge() {
//	cout << "Age: " << this->age << flush;
//}
//void Student::printDaysInCourse() {
//	//first element extracted from for loop for text formatting.
//	cout << "daysInCourse: {" << this->daysInCourse[0] << flush;
//	for (int i = 1; i < 3; ++i) {
//		cout << ", " << this->daysInCourse[i] << flush;
//	}
//	cout << "}" << flush;
//}
//
//void Student::printDegreeProgram() {
//	cout << "Degree Program: " << this->degreeProgram << flush;
//}
//void Student::printAll() {
//	this->printStudentID();
//	cout << '\t' << flush;
//	this->printFirstName();
//	cout << '\t' << flush;
//	this->printLastName();
//	cout << '\t' << flush;
//	this->printEmailAddress();
//	cout << '\t' << flush;
//	this->printAge();
//	cout << '\t' << flush;
//	this->printDaysInCourse();
//	cout << '\t' << flush;
//	this->printDegreeProgram();
//}

void Student::setDaysInCourse(int
	newDays[3]) {
	for (int i = 0; i < 3; ++i) {
		this->daysInCourse[i] = newDays[i];
	}
}
void Student::setDegreeProgram(DegreeProgram newDegree) {
	this->degreeProgram = newDegree;
}

//Prints
void Student::printStudentID() {
	cout << this->studentID << flush;
}
void Student::printFirstName() {
	cout << this->firstName << flush;
}
void Student::printLastName() {
	cout << this->lastName << flush;
}
void Student::printEmailAddress() {
	cout << this->emailAddress << flush;
}
void Student::printAge() {
	cout << this->age << flush;
}

void Student::printDaysInCourse() {
	//first element extracted from for loop for text formatting.
	cout << "{" << this->daysInCourse[0];
	for (int i = 1; i < 3; ++i) {
		cout << ", " << this->daysInCourse[i];
	}
	cout << "}" << flush;
}
void Student::printDegreeProgram() {
	cout << this->degreeProgram << flush;
}

void Student::printAll() {
	this->printStudentID();
	this->printFirstName();
	this->printLastName();
	this->printEmailAddress();
	this->printAge();
	this->printDaysInCourse();
	this->printDegreeProgram();
}

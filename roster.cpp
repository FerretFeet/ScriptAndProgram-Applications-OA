#include <iostream>

#include <string>

#include "roster.h"
#include <map>

using namespace std;

//vector<Student*>Roster::parseString(string csvString) {
//	while (bool i = true) {
//		if (strchr(csvString))
//	}
//}
Student Roster::parseString(string csvString) {
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int age;
	int daysInCourse[3]{};
	DegreeProgram degreeProgram;
	// i < number of steps
	string tempString = csvString;
	int j = 0;

	for (int i = 0; i < 9; ++i) {
		string tempVal;
		std::size_t splitPos = tempString.find(',');
		if (splitPos == string::npos) {
			cout << "Error: not enough values in list to create Student." << endl;
		}
		tempVal = tempString.substr(0, splitPos);
		tempString = tempString.erase(0, splitPos + 1);

		switch (i) {
		case 0:

			studentID = tempVal;
			break;
		case 1:

			firstName = tempVal;
			break;
		case 2:

			lastName = tempVal;
			break;
		case 3:

			emailAddress = tempVal;
			break;
		case 4:
			age = stoi(tempVal);
			break;
		case 5: 

		case 6:

		case 7:
			cout << tempVal << endl;

			daysInCourse[j] = stoi(tempVal);
			cout << "daysincourse j " << daysInCourse[j] << endl;
			++j;



			break;
		case 8:
			cout << tempVal << endl;

			map<string, DegreeProgram> stringMap;
			stringMap.insert(pair<string, DegreeProgram>("SECURITY", DegreeProgram::SECURITY));
			stringMap.insert(pair<string, DegreeProgram>("NETWORK", DegreeProgram::NETWORK));
			stringMap.insert(pair<string, DegreeProgram>("SOFTWARE", DegreeProgram::SOFTWARE));

	/*		stringMap["SECURITY"] = DegreeProgram::SECURITY;
			stringMap["NETWORK"] = DegreeProgram::NETWORK;
			stringMap["SOFTWARE"] = DegreeProgram::SOFTWARE;*/
			auto search = stringMap.find(tempVal);
			if (search != stringMap.end()) {
				degreeProgram = search->second;

				cout << "second" << search->second << "first" << search->first << endl;
			}
			cout << degreeProgram << " 'TESTTEST'" << endl;
			cout << DegreeProgram::NETWORK << endl;
			cout << DegreeProgram::SECURITY << endl;
			break;
		}
	}
	cout << studentID << firstName << lastName << emailAddress << age << ' ' << daysInCourse[1] << ' ' << daysInCourse[2] << ' ' << degreeProgram << endl;
	Student student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
	student.printAll();
	return student;
};;


void Roster::addStringArr(vector<string> studentArr) {
	for (int i = 0; i < studentArr.size(); ++i) {
		Student tempStudent = this->parseString(studentArr[i]);
		Student* newStudent = &tempStudent;
		this->classRosterArray.push_back(newStudent);
		cout << "new Student: " << newStudent;
	}
}

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram) {
	int daysInCourse[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	Student student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeProgram);
	Student* studentPtr = &student;
	classRosterArray.push_back(studentPtr);
}



void Roster::remove(string studentID) {
	for (int i = 0; i < this->classRosterArray.size(); ++i) {
		Student* tempStudent = classRosterArray[i];
		if (tempStudent->getStudentID() == studentID) {
			classRosterArray.erase(classRosterArray.begin()+i-1);
			return;
		}
	}
	cout << "StudentID not found." << endl;
}
void Roster::print(int index) {
	Student* selStudent = this->classRosterArray[index];
	selStudent->printStudentID();
	cout << '\t' << "First Name: ";
	selStudent->printFirstName();
	cout << '\t' << "Last Name: ";
	selStudent->getLastName();
	cout << '\t' << "Age: ";
	selStudent->printAge();
	cout << '\t' << "daysInCourse: ";
	selStudent->printDaysInCourse();
	cout << '\t' << "Degree Program: ";
	selStudent->printDegreeProgram();
	cout << endl;
}
void Roster::printAll() {
	for (int i = 0; i < this->classRosterArray.size(); ++i) {
		this->print(i);
	}
}

void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < this->classRosterArray.size(); ++i) {
		Student* tempStudent = classRosterArray[i];
		if (tempStudent->getStudentID() == studentID) {
			int avg = tempStudent->getDaysInCourse(0) + tempStudent->getDaysInCourse(1) + tempStudent->getDaysInCourse(2);
			avg = avg / 3;
			cout << "Student ID: " << studentID << " average daysInCourse is " << avg << "." << endl;
			return;
		}
	}
}

void Roster::printInvalidEmails() {
	vector<string*> invalidEmails;
	for (int i = 0; i < this->classRosterArray.size(); ++i) {
		string tempEmail = classRosterArray[i]->getEmailAddress();
		if(tempEmail.find(' ') != string::npos &&
			tempEmail.find('.') == string::npos &&
			tempEmail.find('@') == string::npos) {
			invalidEmails.push_back(&tempEmail);
			}
	}
	cout << &invalidEmails << endl;

}


void Roster::printByDegreeProgram(DegreeProgram degreeProgram) {
	for (int i = 0; i < this->classRosterArray.size(); ++i) {
		if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
			print(i);
		}
	}
}
#include <string>
#include <iostream>
#include <limits>
#include <ctype.h>
#include <typeinfo>
#include "student.h"
#include "teacher.h"
using namespace std;

person::person()
{
	Name="?";
	Age=0;
	Classroom=0;
}

person::person(string studName,int studAge, int Classroom)
{
	Name=studName;
	Age=studAge;
	Classroom=Classroom;
}

string person::getName()
{
	return Name;
}

int person::getAge()
{
	return Age;
}

int person::getClassroom()
{
	return Classroom;
}

void person::setName()
{
	string newName;
	bool looper = false;

	while(looper == false){

		cin >> newName;

			for (int i = 0; i<newName.size(); i++) {

				if(!(isalpha(newName[i]))){
					cout<<"Invalid input"<<endl;
				}
				else{
					looper=true;
				}

			}
	}
	Name=newName;

}

void person::setAge()
{
	int newAge;
	while(!(cin >> newAge)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	cout << "You entered: " << newAge << endl;	
	Age = newAge;
}

void person::setClassroom(int z)
{
	Classroom = z;
}

void person::printResult()
{
	cout<<"Classroom: "<<Classroom<<endl;
	cout<<"Name: "<<Name<<endl;
	cout<<"Age: "<<Age<<endl;

}

person::~person() {

}

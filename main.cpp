#include <iostream>
#include <stdio.h>
#include <limits>
#include <string>
#include "student.h"
#include "teacher.h"
#include "person.h"

using namespace std;
student *arrayOfStudents(int numofstudent,int z, int numofclassroom);
teacher *arrayOfTeachers(int z);
int numofclassroom;
teacher *tea = new teacher[numofclassroom];
int numofstudent;
int *numofstud= new int [numofclassroom];

int main()
{
	
	cout<<"Select number of classes (numerical)"<<endl;
	while(!(cin >> numofclassroom)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: ";
	}
	cout << endl;
	cout << "You entered: " << numofclassroom << endl;
	cout << endl;	
	cout << endl;

	
	teacher *teachersArray;
	student *studentsArray;
	
	for (int z=0; z < numofclassroom; z++){
		cout<<"CLASSROOM "<< z+1 <<endl; 
		cout << endl;
		teachersArray = arrayOfTeachers(z);
		cout<<"Select number of students (numerical)"<<endl;
		while(!(cin >> numofstud[z])){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input.  Try again: ";
		}
		cout << "You entered: " << numofstud[z] << endl;
		studentsArray = arrayOfStudents(numofstud[z],z, numofclassroom);
	}


	for(int y=0; y< numofclassroom; y++){
		cout<<"Teacher "<< y+1<<endl;
		teachersArray->printResult();
		for(int i=0; i< numofstud[y];i++){
			cout<<"Student "<<i+1<<endl;
			studentsArray[i].printResult();
			cout<<endl;
		}
	}
	
	delete [] studentsArray;
	delete [] teachersArray;
	return 0;
}


student *arrayOfStudents(int numofstudent,int z, int numofclassroom){
	cout << endl; 
	student *ptr; //creating pointers
	ptr = new student[numofstudent]; //making array in heap memory

	for(int i=0;i<numofstudent;i++){

		cout << "Name of student: " << i+1 << endl;

		ptr[i].setName();

		cout << "Age of student: " << i+1 << endl;

		ptr[i].setAge();
		 //prompting user for n amount of numbers and creating array
		ptr[i].setClassroom(z);
	}
	return ptr;
}

teacher *arrayOfTeachers(int z){
	cout << "Name of teacher: "<< endl;

	tea[z].setName();
	cout << endl; 
	cout << "Age of teacher: " << endl;
	tea[z].setAge();//prompting user for n amount of numbers and creating array
	tea[z].setClassroom(z);
	return tea;
}
	



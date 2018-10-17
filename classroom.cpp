#include <iostream>
#include <stdio.h>
#include <limits>
#include <string>
#include "student.h"
#include "teacher.h"
#include "person.h"
#include "classroom.h"
using namespace std;

classroom::classroom(){ //setting all variables to default values
	numofclassroom=0;
	number=0;
}

int classroom::checknum(int number) //checks if input is valid (numerical)
{
	while(!(number)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input.  Try again: "; //if input is not valid, asks user agin
	}
	cout << endl;
	cout << "You entered: " << number << endl; //if input is valid, prints out what user inputted
	return number; //returns valid value
}


int classroom::setdata(){
	cout<<"Select number of classes (numerical)"<<endl;
	int numofclassroom;
	int number;
	numofclassroom=classroom.checknum(cin>>number); //checks if input form number of classes is valid
	cout << endl;	
	cout << endl;

	teacher *teachersArray;
	student *studentsArray;
		
	for (int z=0; z < numofclassroom; z++){ //takes in values of teacher and student for the classroom
		cout<<"CLASSROOM "<< z+1 <<endl; 
		cout << endl;
		teachersArray = arrayOfTeachers(z); //taking details of techer
		cout<<"Select number of students (numerical)"<<endl;
		numofstud[z]=classroom.checknum(cin>>number); //checks if input is valid
		studentsArray = arrayOfStudents(numofstud[z],z, numofclassroom); //taking details of student
	}

	for(int y=0; y< numofclassroom; y++){ //cycles through every classroom
		cout<<"Teacher "<< y+1<<endl;
		teachersArray->printResult(); //prints data of techer
		for(int i=0; i< numofstud[y];i++){ //cycles thourgh every student in the classroom
			cout<<"Student "<<i+1<<endl;
			studentsArray[i].printResult(); //prints data of student
			cout<<endl;
		}
	}
	delete [] studentsArray;
	delete [] teachersArray;
	return 0;
}

teacher *arrayOfTeachers(int z){
	teacher *tea = new teacher[numofclassroom]; //makes array holding how make teachers there are
	cout << "Name of teacher: "<< endl;
	tea[z].setName(); 
	cout << endl; 
	cout << "Age of teacher: " << endl;
	tea[z].setAge();
	tea[z].setClassroom(z);
	return tea;
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



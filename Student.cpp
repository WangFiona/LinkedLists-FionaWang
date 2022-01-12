#include <iostream>
#include "Student.h"
#include <cstring>

using namespace std;

Student::Student(char* newName){//, int newGPA){
  //GPA=newGPA;
  name = new char[20];
  strcpy(name, newName);
}

/*void Student::setGPA(int newGPA){
  GPA=newGPA;
}

int Student::getGPA(){
  return GPA;
  }*/

char* Student::getName(){
  return name;
}

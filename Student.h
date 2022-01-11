#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:
  Student(char* newName);
  //int GPA;
  char* name;
  //void setGPA(int newGPA);
  //int getGPA();
  char* getName();
};
#endif

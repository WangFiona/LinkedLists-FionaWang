#ifndef NODE_H
#define NODE_H
#include "Student.h"
#include <iostream>

using namespace std;

/*
 * Author: Fiona Wang
 * Date: Jan. 3, 2022
 */

class Node{
 public:
  Node(Student* newStudent);
  ~Node();
  void setStudent(Student* newStudent);
  Student* getStudent();
  void setNext(Node* newNode);
  Node* getNext();

 private:
  Student* value;
  Node* next;
};
#endif

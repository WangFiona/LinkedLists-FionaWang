#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

/*
 */

class Node{
 public:
  Node();
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

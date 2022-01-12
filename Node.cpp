#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

/*
 * Author: Fiona Wang
 * Date: January 11, 2022
 */

Node::Node(Student* newStudent) {
  value=newStudent;
  next=NULL;
}

Node::~Node() {
  delete &value;
  next=NULL;
}

void Node::setStudent(Student* newStudent){
  value = newStudent;
}

char* Node::getStudent(){
  return value->getName();
}

void Node::setNext(Node* newNode){
  next=newNode;
}

Node* Node::getNext(){
  return next;
}

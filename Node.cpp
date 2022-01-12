#include <iostream>
#include "Node.h"
#include "Student.h"
#include <cstring>

using namespace std;

/*
 * Author: Fiona Wang
 * Date: January 11, 2022
 * This is the node cpp file
 */

//Creating and setting node variables
Node::Node(Student* newStudent) {
  value=newStudent;
  next=NULL;
}

//Node destructor
Node::~Node() {
  delete &value;
  next=NULL;
}

//Function for setting student information
void Node::setStudent(Student* newStudent){
  value = newStudent;
}

//Function for getting student information
char* Node::getStudent(){
  return value->getName();
}

//Function for setting new nodes
void Node::setNext(Node* newNode){
  next=newNode;
}

//Function for getting the nodes
Node* Node::getNext(){
  return next;
}

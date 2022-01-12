#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

/*
 * Author: Fiona Wang
 * Date: January 11,2022
 */

int main(){
  Node* head = NULL;
  char* name = new char[20];
  strcpy(name, "Helen");
  Student* student1 = new Student(name);
  strcpy(name, "Angie");
  Student* student2 = new Student(name);

  head = new Node(student1);
  head->setStudent(student1);

  head->setNext(new Node(student2));
  head->getNext()->setStudent(student2);

  cout << "Student Names:" << endl;
  cout << head->getStudent() << endl;
  cout << head->getNext()->getStudent() << endl;
  
  return 0;
}

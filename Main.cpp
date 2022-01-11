#include <iostream>
#include "Node.h"
#include "Student.h"

using namespace std;

void add(Student* newStudent, Node* &head);
void print(Node* next);

int main(){
  Node* head = NULL;
  char* name = new char[20];
  strcpy(name, "Helen");
  Student* student1 = new Student(name);
  strcpy(name, "Angie");
  Student* student2 = new Student(name);
  
  return 0;
}

void add(Student* newStudent, Node* &head){
  Node* current = head;
  if(current==NULL){
    head = new Node();
    head->setStudent(newStudent);
  }
  else {
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    current->setNext(new Node());
    current->getNext()->setNext(newStudent);
  }
}

void print(Node* head){
  if(head != NULL){
    cout << head->getStudent() << " ";
    print(next->getNext());
  }
}

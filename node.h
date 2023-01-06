/*
Name: Nathan Zhou
Date: 1/6/23

Node class for linked lists including pointer to a Student class.
 */


#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstring>
#include "student.h"

class Node {
 public:
  Node();
  Node(Student*); //constructor
  Node* getNext(); //get next Node pointer
  Student* getStudent(); //get Student pointer
  void setNext(Node*); //set the next pointer
  ~Node(); //destructor
 private:
  Student* student;
  Node* next = NULL;
};

#endif

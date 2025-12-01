#include <iostream>
using namespace std;

class node
{

public:
  int data;
  node *next;

  node(int value)
  {
    data = value;

    next = NULL;
  }
};

class Stack
{

public:
  node *top;
  int size;

  Stack()
  {
    top = NULL;
    size = 0;
  }

  //--------push-------

  void push(int value)
  {

    node *temp = new node(value);
    if (temp == NULL)
    {
      cout << "Stack is overflow" << endl;
      return;
    }
    else
    {
      temp->next = top;
      temp = top;
      size++;
    }
  };

  //--------pop---------

  void pop()
  {
    if (top == NULL)
    {
      cout << "Stack is underflow" << endl;
      return;
    }
    else
    {
      node *temp = top;
      top = top->next;
      delete temp;
    }
  };

  //-------peek----------

  int peek()
  {

    if (top == NULL)
    {
      cout << "Stack is Empty" << endl;
      return -1;
    }
    else
    {
      return top->data;
    }
  };

  //---------is empty----

  bool isempty()
  {

    return top == NULL;
  }
};

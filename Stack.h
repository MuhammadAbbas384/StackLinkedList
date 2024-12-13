#pragma once
#include"Node.h"
class Stack {
private:
    Node* topElement;

public:
    Stack() 
    {
        topElement = NULL;
    }

    void push(int val);
    int pop();
    bool isEmpty();
    void display();
};
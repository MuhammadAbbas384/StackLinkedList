#pragma once
#include"Stack.h"

void Stack::push(int val) 
{
    Node* newNode = new Node(val);
    if (isEmpty()) 
    {
        topElement = newNode;
    }
    else 
    {
        newNode->setNext(topElement);
        topElement = newNode;
    }
    cout << "Pushed: " << val << endl;
}

int Stack::pop() 
{
    if (isEmpty()) 
    {
        cout << "Stack is empty! Cannot pop." << endl;
        return -1; 
    }
    Node* temp = topElement;
    int poppedValue = temp->getValue();

    topElement = topElement->getNext();
    delete temp;

    cout << "Popped: " << poppedValue << endl;
    return poppedValue;
}

bool Stack::isEmpty() 
{
    return topElement == NULL;
}

void Stack::display() 
{
    if (isEmpty()) 
    {
        cout << "Stack is empty!" << endl;
        return;
    }

    Node* current = topElement;
    cout << "Stack elements: " << endl;
    while (current != NULL) 
    {
        cout << current->getValue() << " ";
        current = current->getNext();
    }
    cout << endl;
}
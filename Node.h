#pragma once
#include<iostream>
using namespace std;

class Node 
{
private:
    int value;
    Node* next;

public:
    Node() 
    {
        value = 0;
        next = NULL;
    }

    Node(int val) 
    {
        value = val;
        next = NULL;
    }

    void setValue(int val) 
    { 
        value = val; 
    }
    void setNext(Node* link) 
    { 
        next = link; 
    }
    int getValue() 
    { 
        return value; 
    }
    Node* getNext() 
    { 
        return next; 
    }
};
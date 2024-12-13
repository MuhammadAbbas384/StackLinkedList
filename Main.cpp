#include"Stack.h"
using namespace std;
int main() 
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();

    stack.pop();
    stack.display();

    stack.pop();
    stack.pop();
    stack.pop(); 

    return 0;
}
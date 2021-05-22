//
//  main.cpp
//  Stack_array_implementation
//
//  Created by Devang Papinwar on 19/02/21.
//

#include <iostream>
using namespace std;

int size=0;

struct Person
{
    int stack[10];
    int top;
};

void display(Person* node)
{
    for(int i = size-1 ; i >= 0 ; i-- )
    {
        cout << endl << " Data : " << node->stack[i] << endl ;
        cout << " _________";
        cout << endl;
    }
}

void push(Person* node)
{
    int data;
    cout << "Enter the Data :";
    cin >> data;
    node->top = size;
    node->stack[node->top] = data;
    size++;
}

void pop(Person* node)
{
    node->stack[node->top] = 0;
    size--;
    node->top = size;
}

void peep(Person* node)
{
    cout << " Peep : " << node->top ;
}

int main(int argc, const char * argv[])
{
    struct Person* node = (struct Person*) malloc(sizeof(struct Person));
    push(node);
    push(node);
    push(node);
    push(node);
    pop(node);
    display(node);
}

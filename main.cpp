//
//  main.cpp
//  Stack_list_implementation
//
//  Created by Devang Papinwar on 19/02/21.
//

#include <iostream>
using namespace std;

struct Person
{
    char data;
    Person* next;
    
};

void display(Person* top)
{
    struct Person* node = top;
    if(node == NULL)
    {
        cout << " Stack UnderFlow ";
    }
    cout << "\nDisplaying Information : " << endl ;
    while(node != NULL)
    {
        cout << "Data " << " : " << node->data << endl;
        node = node->next;
    }
    cout << endl;
}

void push(Person** top)
{
    struct Person* new_node = (struct Person*) malloc(sizeof(struct Person));
    struct Person* node = (struct Person*) malloc(sizeof(struct Person));
    cout << endl << "Enter Data : ";
    cin >> new_node->data;
    if(*top == NULL)
    {
        *top = new_node;
        cout << "Pushed-" << new_node->data;
        new_node->next = NULL;
    }
    else
    {
        node = *top;
        new_node->next = node;
        *top = new_node;
        cout << "Pushed" << new_node->data;
    }
}

void pop(Person** top)
{
    struct Person* node = (struct Person*) malloc(sizeof(struct Person));
    if(*top == NULL)
    {
        cout << "Stack UnderFlow";
    }
    else
    {
        node = (*top)->next;
        (*top)->next = NULL;
        *top = node;
    }
}

void peep(Person* top)
{
    cout << endl << "Peep : "<<top->data;
}

int main(int argc, const char * argv[])
{
    Person* top = new Person();
    top=NULL;
    
    push(&top);
    push(&top);
    push(&top);
    push(&top);
    pop(&top);
    pop(&top);
    peep(top);
    display(top);
}

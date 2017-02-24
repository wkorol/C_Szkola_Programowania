#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
};

struct Node * head;
struct Node * head, *temp;
void Insert(int data);
void Print();
void Reverse();


int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    Reverse();
    Print();
    
    return 0;
}







void Insert (int x) {
    
    struct Node * new_node = (struct Node*) malloc(sizeof(struct Node));
    
    new_node->data = x;
    new_node->next=NULL;
    
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}








void Reverse() {
    struct Node * next, *prev, *current;
    current = head;
    prev = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void Print() {
    struct Node * temp = head;
    printf("List is ");
    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

struct Node * head, *temp;
void Insert(int data);
void Print();
void Delete(int n);

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    int n;
    Print();
    printf("Enter a position\n");
    scanf("%d", &n);
    Delete(n);
    Print();
    
    return 0;
}

void Delete(int n)
{
    struct Node * temp1 = head;
    if(n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i<n-2; i++) {
        temp1 = temp1->next;
    }
    
    //temp1 points to (n-1)th Node
    struct Node* temp2 = temp1->next; //nth Node
    temp1->next = temp2->next; //(n+1)th Node
    free(temp2); //delete temp2
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

void Print() {
    struct Node * temp = head;
    printf("List is ");
    while (temp!= NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
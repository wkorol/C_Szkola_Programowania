//
//  main.c
//  listy youtube
//
//  Created by Wiktor Korol on 20.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void Insert(int x);
void Print();

struct Node * head;

int main(int argc, const char * argv[]) {
   
    head = NULL; //empty list
    printf("How many numbers\n");
    int i,n,x;
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        printf("Enter the number\n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
    
}

void Insert (int x) {
    
    struct Node * temp = (struct Node*) malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    if(head != NULL)
        temp->next = head;
    head = temp;
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
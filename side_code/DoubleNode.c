#include <stdlib.h>
#include <stdio.h>

struct Node
{
    struct Node* next;
    double n;
};

struct Node* newNode(int n, struct Node* next)
{
    struct Node* ret = malloc(sizeof(struct Node));
    ret->n = n;
    //ret->next = malloc(sizeof(struct Node));
    ret->next = next;
    return ret;
}

void printNode(struct Node* toPrint)
{
    if(toPrint != NULL)
    {
        printf("[%f] -> ", toPrint->n);
        printNode(toPrint->next);
    }
    else
    {
        printf("(NULL)\n");
    }
}

int main()
{
    //make a node
    struct Node* temp = newNode(5, NULL);
    temp = newNode(10, temp);
    printNode(temp);
}

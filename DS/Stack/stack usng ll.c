#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

void print(struct node **top)
{
    struct node *current = *top;
    while(current != '\0')
    {
        printf("%d ", current -> data);
        current = current -> next;
    }
}

void push(struct node **top, int data)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = *top;
    *top = temp;
}

void pop(struct node **top)
{
    struct node *temp = *top;
    temp = temp -> next;
    *top = temp;
}

int main()
{
    struct node *top = '\0';

    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);
    push(&top, 5);
    push(&top, 6);
    printf("Stack: ");
    print(&top);
    printf("\n");

    pop(&top);
    pop(&top);
    printf("Stack after pop elements: ");
    print(&top);
    printf("\n");
}

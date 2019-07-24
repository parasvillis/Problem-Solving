#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

void print(struct node **head)
{
    struct node *traverse = *head;
    while(traverse != '\0') {
        printf("%d ", traverse -> data);
        traverse = traverse -> next;
    }
}

void add_at_begin(struct node **head, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> next = *head;
    *head = new_node;
}

int length(struct node **head)
{
    int count = 0;
    struct node *len = *head;
    while(len != '\0') {
        count++;
        len = len -> next;
    }
    //printf("count: %d\n", count);
    return count;
}

void mid_element(struct node **head, int len)
{
    //struct node *n = *head;
    int l = len - 1;
    int mid = l/2;
    struct node *traverse = *head;
    int i = 0;
    for(i = 0; i < mid; i++) {
        traverse = traverse -> next;
    }
    printf("len: %d\n", len);
    if(len%2 == 0) {
        printf("Middle element of linked list is: %d", traverse -> data);
        traverse = traverse -> next;
        printf(" %d", traverse -> data);
    }
    else {
        printf("Middle element of linked list is: %d", traverse -> data);
    }
}

int main()
{
    struct node *head = '\0';
    add_at_begin(&head, 1);
    add_at_begin(&head, 2);
    add_at_begin(&head, 3);
    add_at_begin(&head, 4);
    add_at_begin(&head, 5);
    add_at_begin(&head, 6);
    printf("LL after insertion at begin: ");
    print(&head);
    printf("\n");

    int l = length(&head);
    mid_element(&head, l);
}


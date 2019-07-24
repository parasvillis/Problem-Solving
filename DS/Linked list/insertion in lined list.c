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

void add_at_last(struct node **head, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    struct node *traverse = *head;
    while(traverse -> next != '\0') {
        traverse = traverse -> next;
    }
    new_node -> data = data;
    traverse -> next = new_node;
    new_node -> next = '\0';
}

void add_at_mid(struct node **head, int data, int index)
{
    int i = 0;
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    struct node *traverse = *head;
    while(i < index-1 && traverse -> next != '\0') {
        traverse = traverse -> next;
        i++;
    }
    new_node -> data = data;
    new_node -> next = traverse -> next;
    traverse -> next = new_node;
}

int main()
{
    struct node *head = '\0';
    add_at_begin(&head, 1);
    add_at_begin(&head, 2);
    add_at_begin(&head, 3);
    add_at_begin(&head, 4);
    printf("LL after insertion at begin: ");
    print(&head);
    printf("\n");

    add_at_last(&head, 10);
    add_at_last(&head, 20);
    add_at_last(&head, 30);
    add_at_last(&head, 40);
    printf("LL after insertion at last: ");
    print(&head);
    printf("\n");

    add_at_mid(&head, 100, 2);
    printf("LL after insertion after place 2: ");
    print(&head);
    printf("\n");
}

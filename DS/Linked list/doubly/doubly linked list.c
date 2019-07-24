#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    struct node *previous;
};

void print(struct node **head)
{
    struct node *traverse = *head;
    while(traverse != '\0') {
        printf("%d ", traverse -> data);
        traverse = traverse -> next;
    }
}

int length(struct node **head)
{
    int count = 0;
    struct node *traverse = *head;
    while(traverse != '\0') {
        traverse = traverse -> next;
        count++;
    }
    printf("length: %d", count);
    printf("\n");
    return count;
}

void add_at_begin(struct node **head, struct node **previous, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> next = *head;
    new_node -> previous = '\0';
    *head = new_node;
}

void add_at_last(struct node **head, struct node **previous, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    struct node *traverse = *head;
    while(traverse -> next != '\0') {
        traverse = traverse -> next;
    }
    new_node -> data = data;
    traverse -> next = new_node;
    new_node -> next = '\0';
    new_node -> previous = traverse;
}

void add_at_mid(struct node **head, struct node **previous, int index, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    struct node *traverse = *head;
    struct node *join = *head;
    int i = 0, j = 0;
    for(i = 0; i < index-1; i++) {
        traverse = traverse -> next;
    }

    for(j = 0; j < index; j++) {
        join = join -> next;
    }
    new_node -> data = data;
    new_node -> previous = traverse;
    traverse -> next = new_node;
    new_node -> next = join;
    join -> previous = new_node;
}

void delete_at_begin(struct node **head)
{
    struct node *d = *head;
    d = d -> next;
    *head = d;
    d -> previous = '\0';
}

void delete_at_last(struct node **head)
{
    struct node *traverse = *head;
    int len = length(&traverse);
    int i = 0;
    for(i = 0; i < len-2; i++) {
        traverse = traverse -> next;
    }
    traverse -> next = '\0';
}

void delete_at_mid(struct node **head, struct node **previous, int index)
{
    struct node *traverse = *head;
    struct node *join = *head;
    int i = 0, j = 0;
    for(i = 0; i < index-1; i++) {
        traverse = traverse -> next;
    }
    for(j = 0; j < index; j++) {
        join = join -> next;
    }
    traverse -> next = join -> next;
    join = join -> next;
    join -> previous = traverse;


}

int main()
{
    struct node *head = '\0';
    struct node *previous = '\0';
    add_at_begin(&head, &previous, 1);
    add_at_begin(&head, &previous, 2);
    add_at_begin(&head, &previous, 3);
    add_at_begin(&head, &previous, 4);

    printf("After Insertion at beginning: ");
    print(&head);
    printf("\n");

    add_at_last(&head, &previous, 10);
    add_at_last(&head, &previous, 20);
    add_at_last(&head, &previous, 30);

    printf("After Insertion at end: ");
    print(&head);
    printf("\n");

    add_at_mid(&head, &previous, 3, 999);
    printf("After Insertion at mid: ");
    print(&head);
    printf("\n\n");


    delete_at_begin(&head);
    printf("After deletion at beginning: ");
    print(&head);
    printf("\n");

    delete_at_last(&head);
    printf("After deletion at last: ");
    print(&head);
    printf("\n");

    delete_at_mid(&head, &previous, 2);
    printf("After deletion at mid: ");
    print(&head);
    printf("\n");


}

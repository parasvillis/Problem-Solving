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

int length(struct node **head)
{
    int len = 0;
    struct node *traverse = *head;
    while(traverse -> next != '\0') {
        traverse = traverse -> next;
        len++;
    }
    return len;
}

void add_at_begin(struct node **head, int data)
{
    struct node *new_node = (struct node*) malloc(sizeof(struct node));
    new_node -> data = data;
    new_node -> next = *head;
    *head = new_node;
}

void delete_at_begin(struct node **head)
{
    struct node *temp = *head;
    temp = temp -> next;
    *head = temp;
}

void delete_at_last(struct node **head, int l)
{
    struct node *traverse = *head;
    int i = 0;
    while(i < l-1 && traverse -> next != '\0') {
        traverse = traverse -> next;
        i++;
    }
    traverse -> next = '\0';
}

void delete_at_mid(struct node **head, int index)
{
    int i = 0, j = 0;
    struct node *join = *head;
    struct node *traverse = *head;
    while(j < index-2 && traverse -> next != '\0') {
        traverse = traverse -> next;
        j++;
    }
    while(i < index-1 && traverse -> next != '\0') {
        join = join -> next;
        i++;
    }
    traverse -> next = join -> next;
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
    printf("LL: ");
    print(&head);
    printf("\n");

    int l = length(&head);
    delete_at_begin(&head);
    delete_at_begin(&head);
    printf("LL after deletion at begin: ");
    print(&head);
    printf("\n");

    delete_at_last(&head, l);                                     ///calculate length after each deletion.
    printf("LL after deletion at last: ");
    print(&head);
    printf("\n");

    delete_at_mid(&head, 3);
    printf("LL after deletion at place 2: ");
    print(&head);
    printf("\n");
}


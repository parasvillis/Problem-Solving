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

void reverse(struct node **head, int len)
{
    //printf("\nrev len: %d\n ", len);
    struct node *reserve = *head;
    struct node *traverse = *head;
    int i = 0;
    for(i = 0; i < len; i++) {
        traverse = traverse -> next;
    }
    printf("%d ", traverse -> data);
    if(len != 0) {
        len--;
        reverse(&reserve, len);
    }
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

    int l = length(&head);
    reverse(&head, l-1);
}

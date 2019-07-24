#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

void print(struct node **head)
{
    struct node *current = *head;
    while(current != '\0')
    {
        printf("%d ", current -> data);
        current = current -> next;
    }
}

void add_at_begin(struct node **head, int data)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = *head;
    *head = temp;
}

void add_at_mid(struct node **head, int data, int location)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    struct node *current = *head;
    int count = 0;
    while(count < location-1 && current -> next != '\0')
    {
        printf("count is %d \n", count);
        current = current -> next;
        count++;
    }
    temp -> data = data;
    temp -> next = current -> next;
    current -> next = temp;
}

void add_at_last(struct node **head, int data)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    struct node *traverse = *head;
    temp -> next = '\0';
    while(traverse -> next != '\0')
    {
        traverse = traverse -> next;
    }
    if(traverse -> next == '\0')
    {
        temp -> data = data;
        traverse -> next = temp;
    }
}
/*
struct node* del_from_begin(struct node **head)
{
    if(*head == NULL)
    {
        return NULL;
    }
    else
    {
        struct node *current = *head;
        head = head->next;
        free(current);
        //current = current -> next;
        printf("current data: %d\n", current -> data);
        return current;
    }
}
*/
   /// navdeepchauhan281998@gmail.com

void del_from_mid(struct node **head, int location)
{
    struct node *current = *head;
    int count = 0, c = 0;
    while(count < location-1 && current -> next != '\0')
    {
        current = current -> next;
        count++;
    }
    struct node *join = *head;
    while(c < location && current -> next != '\0')
    {
        join = join -> next;
        c++;
    }
    current -> next = join -> next;
}

void del_from_end(struct node **head)
{
    struct node *traverse = *head;
    int count = 0, len = 0;
    while(traverse -> next != '\0')
    {
        traverse = traverse -> next;
        len++;
    }
    struct node *current = *head;
    //printf("len: %d\n", len);
    //printf("traverse next: %d\n", traverse -> data);
    while(count < len-1 && current -> next != '\0')
    {
        count++;
        current = current -> next;
    }
    //printf("current next: %d\n", current -> data);
    current -> next = '\0';

}

void update_at_start(struct node **head, int data)
{
    struct node *current = *head;
    current -> data = data;
}

void update_in_mid(struct node **head, int data, int loc)
{
    int count = 0;
    struct node *current = *head;
    while(count < loc && current -> next != '\0')
    {
        current = current -> next;
        count++;
    }
    current -> data = data;
}

void update_in_end(struct node **head, int data)
{
    struct node *current = *head;
    while(current -> next != '\0')
    {
        current = current -> next;
    }
    current -> data = data;
}

int main()
{
    struct node *head = '\0';
    add_at_begin(&head, 4);
    add_at_begin(&head, 2);
    add_at_begin(&head, 1);
    add_at_last(&head, 20);
    add_at_last(&head, 30);
    add_at_last(&head, 40);
    add_at_mid(&head, 3, 2);
    printf("List before deletion: ");
    print(&head);
    printf("\n");
    //struct node* tempN=del_from_begin(&head);
    //struct node temp = *head;
    //printf("in main: %d \n",temp.data);
    del_from_mid(&head, 3);
    del_from_end(&head);
    printf("List before updation: ");
    print(&head);
    printf("\n");
    update_at_start(&head, 789);
    update_in_mid(&head, 123, 1);
    update_in_end(&head, 456);
    //struct node temp = *head;
    //printf("in main: %d \n",temp.data);
    print(&head);
}





/*struct node *del = *head;
    struct node *traverse = *head;
    int c = 3;
    while(c != 0)
    {
        traverse = traverse -> next;
        c--;
        printf("in loop: %d \n",traverse -> data);
    }
    del -> next = '\0';
    //head = traverse;
    printf("Head: %d\n", traverse->data);
    */

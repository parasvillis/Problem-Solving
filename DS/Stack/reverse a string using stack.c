#include<stdio.h>
struct node
{
    char data;
    struct node *next;
};

void print(struct node **top)
{
    struct node *current = *top;
    while(current != '\0')
    {
        printf("%c", current -> data);
        current = current -> next;
    }
}

void push(struct node **top, char data)
{
    struct node *temp = (struct node*) malloc(sizeof(struct node));
    temp -> data = data;
    temp -> next = *top;
    *top = temp;
}

/*void pop(struct node **top)
{
    struct node *temp = *top;
    temp = temp -> next;
    *top = temp;
}
*/
int main()
{
    struct node *top = '\0';

    int len;
    printf("Enter the length of the string: ");
    scanf("%d", &len);
    int i;
    char ar[len+1];
    printf("Enter string: ");
    for(i = 0; i < len+1; i++) {
        scanf("%c", &ar[i]);
    }

    /*printf("String: ");
    int j = 0;
    for(i = 0; i < len+1; i++) {
    //while(ar[j] != '\0') {
        printf("%c", ar[i]);
        //j++;
    }
    printf("\n");
*/
    for(i = 0; i < len+1; i++) {
        push(&top, ar[i]);
    }

    printf("Stack: ");
    print(&top);
    printf("\n");

    /*pop(&top);
    pop(&top);
    printf("Stack after pop elements: ");
    print(&top);
    printf("\n");*/
}


#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n, i;
    scanf("%d",&n);
    struct node *h = (struct node*) malloc(sizeof(struct node));
    struct node *n1 = h;
    if(n == 0) {
        printf("Linked list cannot be created due to invalid input(zero length)");
        main();
    }
    else {
        for(i = 0; i < n; i++) {
            n1 -> data = i;
            if(i < (n-1)) {
                n1 -> next = (struct node*) malloc(sizeof(struct node));
            }
            else {
                n1 -> next = '\0';
            }
            n1 = n1 -> next;

                        ///OR

            //n1 -> next = (i < (n - 1)) ? (struct node*) malloc(sizeof(struct node)) : '\0';
            //n1 = n1 -> next;
        }

        struct node *traverse = h;
        while(traverse != '\0') {
            printf("%d ", traverse -> data);
            traverse = traverse -> next;
        }
    }
}

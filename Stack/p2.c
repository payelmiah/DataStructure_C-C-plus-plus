#include<stdio.h>
#include<stdlib.h>
push();
pop();
display();
typedef struct stack
{
    int a;
    char s[20];
    struct stack *next,*prev;
} stack;
stack *top=NULL;
stack *temp=NULL;
stack *tail=NULL;
int p;
int push()
{
    int an;
    char s[20];
    stack *n=(stack*)malloc(sizeof(stack));
    printf("Enter your name:");
    scanf(" %[^\n]",n->s);
    printf("Enter your value:");
    scanf("%d",&n->a);
    n->next=NULL;
    n->prev=NULL;
    temp=top;
    if(top==NULL)
    {
        top=n;
        tail=n;
        printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                push();
                break;
            case 2:
                menu();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }

    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->prev=temp;
        n->next=NULL;
        tail=n;
        printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                push();
                break;
            case 2:
                menu();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }

    }

}
int pop()
{
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty\n\n");
        printf("1.menu\t2.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }
    }
    else
    {
       printf("Pop element:%s\n",tail->s);
        printf("Pop element:%d\n\n",tail->a);
         printf("1.menu\t2.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }
    }

}
int last()
{
    int count=0;
    temp=top;
    stack *tem=tail;
    if(temp==NULL)
    {
        printf("Stack is empty\n\n");
         printf("1.menu\t2.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }
    }
    else{
        while(tem!=NULL)
        {
            count++;
             printf("Stack values %d:%s\n",count,tem->s);
            printf("Stack values %d:%d\n\n",count,tem->a);
            tem=tem->prev;
        }
         printf("1.menu\t2.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }
    }
}
int first()
{
    int count=0;
    temp=top;
    while(temp!=NULL)
    {
        count++;
        printf("Stack values %d:%s\n",count,temp->s);
        printf("Stack values %d:%d\n\n",count,temp->a);
        temp=temp->next;
    }
     printf("1.menu\t2.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
                break;
            case 2:
                exit(0);
                break;
            default:
                printf("Your option is wrong please try again\n\n");
                menu();
            }
}
int display()
{
    printf("1.Display last in first\n2.Display first in last\n3.Menu\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        last();
        break;
    case 2:
        first();
        break;
    case 3:
        menu();
        break;
    default:
        printf("Invalid number\n\n");
        break;
    }


}
int menu()
{
    int serial;
     printf("\n");
    printf("                                             1.PUSH\t3.DISPLAY\n\n                                             2.POP\t4.EXIT\n\n");
    scanf("%d",&p);
    switch(p)
    {
        case 1:

            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid number please try again\n\n");
    }
}
int main()
{

    printf("                                        |_______STACK_using_DOUBLY_____|\n\n");
    menu();


}

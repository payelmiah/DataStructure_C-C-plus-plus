#include<stdio.h>
#include<stdlib.h>
push();
pop();
display();
int top=-1,a[100],p;
int push()
{
    int n;
    if(top>=100)
    {
        printf("Stack overflow\n");
        printf("\n1.menu\t2.exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
            break;
        case 2:
            exit(0);
        default:
            printf("Invalid number\n\n");
        }
    }
    else
    {
        printf("Enter your data\n");
        scanf("%d",&n);
        a[++top]=n;
        printf("Successful\n\n");
        printf("1.Add more\t2.menu\t 3.exit\n\n");
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
        default:
            printf("Invalid number\n\n");
        }
    }

}
int pop()
{

    if(top==-1)
    {
        printf("Stack is empty\n");
        printf("\n1.menu\t2.exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
            break;
        case 2:
            exit(0);
        default:
            printf("Invalid number\n\n");
        }
    }
    else
    {
        printf("Pop element :%d",a[top]);
        top--;
    }
    printf("\n1.menu\t2.exit\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        menu();
        break;
    case 2:
        exit(0);
    default:
        printf("Invalid number\n\n");
    }
}
int display()
{
    int i;
    if(top>=0)
    {
        printf("Showing Stack all data\n");
        for(i=top; i>=0; i--)
        {
            printf("%d\n",a[i]);
        }
        printf("\n1.menu\t2.exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
            break;
        case 2:
            exit(0);
        default:
            printf("Invalid number\n\n");
        }

    }
    else
    {
        printf("stack is empty\n");
        printf("\n1.menu\t2.exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
            break;
        case 2:
            exit(0);
        default:
            printf("Invalid number\n\n");
        }
    }
}
int menu()
{
    int p,n;
    printf("                                             1->Push  \t2->Pop\n\n                                            3->Display\t4->Exit\n\n");
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
        printf("Invalid number\n\n");
        break;
    }

}
int main()
{
    printf("                                            |------S_T_A_C_K-----| \n\n");
    menu();

}

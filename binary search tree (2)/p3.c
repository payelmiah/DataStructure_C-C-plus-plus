#include<stdio.h>
#include<stdlib.h>
add();
Delete();
search();
display();
typedef struct node
{
    int a;
    char s[20];
    struct node *next,*prev;
} node;
node *head=NULL;
node *prev=NULL;
node *list=NULL;
node *temp=NULL;
node *tail=NULL;
int p;
int add()
{
    printf("\n");
    printf("     1.Add at first position\n\n");
    printf("     2.Add at last position\n\n");
    printf("     3.Add at nth position\n\n");
    printf("     4.Menu\n\n");
    printf("Add now:");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
    {
        node *n=(node*)malloc(sizeof(node));
        printf("Enter your name:");
        scanf(" %[^\n]",n->s);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        n->next=NULL;
        if(head!=NULL)
        {
            list=head;
            list->prev=n;
            n->next=list;
            head=n;
            n->prev=NULL;
            printf("Successful add first position\n\n");
            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
            head=n;
            n->prev=NULL;
            tail=n;
            printf("\n");
            printf("Successful add first position\n\n");
            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
    case 2:
    {
        node *n=(node*)malloc(sizeof(node));
        printf("Enter your name:");
        scanf(" %[^\n]",n->s);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        n->next=NULL;
        //list=head;
        if(head==NULL)
        {

            head=n;
            n->prev=NULL;
            n->next=NULL;
            tail=n;
            printf("Successful add last position\n\n");
            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
            list=head;
            while(list->next!=NULL)
            {
                list=list->next;
            }
            //tail=list;
            list->next=n;
            n->prev=tail;
            n->next=NULL;
            tail=n;
            printf("Successful add last position\n\n");
            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
    case 3:
    {
        int pos;
        node *n=(node*)malloc(sizeof(node));
        printf("Enter your position\n\n");
        scanf("%d",&pos);
        printf("Enter your name:");
        scanf(" %[^\n]",n->s);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        n->next=NULL;
        list=head;
        if(pos==1)
        {
            n->next=head;
            head=n;
            n->next=NULL;
            n->prev=NULL;
            tail=n;

            printf("Successful add nth position\n\n");
            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
            pos=pos-2;
            while(pos!=0 && list->next!=NULL)
            {
                if(list->next==NULL)
                {
                    list->next=n;
                    n->prev=list;
                    n->next=NULL;
                    tail=n;
                    printf("Successful add nth position\n\n");

                    printf("1.Add more\t2.menu\t3.exit\n\n");
                    scanf("%d",&p);
                    switch(p)
                    {
                    case 1:
                        add();
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
                list=list->next;
                pos--;
            }
            n->next=list->next;
            n->prev=list;
            list->next=n;
            list->next->prev=n;
            //list->prev=tail;
            //tail=list;
            printf("Successful add nth position\n\n");

            printf("1.Add more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                add();
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
    case 4:
    {
        menu();
        break;
    }
    default:
    {
        printf("Invalid number\n\n");
        break;
    }
    }
}
int Delete()
{
    int pos;
    printf("       1.Delete by position\n       2.Delete by data\n       3.menu\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
    {
        printf("Enter your position:");
        scanf("%d",&pos);
        list=head;
        if(head==NULL)
        {
            printf("No data available please add data at first\n\n");
            printf("1.menu \t 2.exit\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
            case 2:
                exit(0);
            default:
                printf("Invalid number please try again\n");
                menu();
            }
        }
        if(pos==1)
        {
            list=head;
            head=list->next;
            //head->next->prev=NULL;
            free(list);
            printf("Delete successful\n\n");
            printf("1.Add delete\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                Delete();
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
            pos=pos-2;
            while(pos!=0 && list->next!=NULL)
            {
                list=list->next;
                pos--;
            }
            temp=list->next;
            list->next=temp->next;
            temp->next->prev=list;
            free(temp);
            printf("Delete Successful\n\n");
            printf("1.Add delete\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                Delete();
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
    case 2:
    {
        int g;
        printf("Enter your roll number\n\n");
        scanf("%d",&g);
        list=head;
        if(list==NULL)
        {
            printf("No data available\n\n");
            printf("1.menu \t 2.exit\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
            case 2:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }

        }
        /*if(list->a!=g)
        {
            printf("Your number isn't match\n\n");
            printf("1.menu \t 2.exit\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                menu();
            case 2:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }*/
        if(list->a==g)
        {
            list=head;
            head=list->next;
            free(list);
            printf("Delete successful\n\n");
            printf("1.Delete more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                Delete();
                break;
            case 2:
                menu();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid number\n\n");
                menu();
            }

        }
        else
        {

            while(list->next->a!=g && list->next!=NULL)
            {
                list=list->next;
            }
            temp=list->next;
            list->next=temp->next;
            temp->next->prev=list;
            free(temp);
            printf("Delete successful\n\n");
            printf("1.Delete more\t2.menu\t3.exit\n\n");
            scanf("%d",&p);
            switch(p)
            {
            case 1:
                Delete();
                break;
            case 2:
                menu();
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid number\n\n");
                menu();
            }


        }
    }

    }
}
int searchpos()
{
    int pos;
    printf("Enter your position\n");
    scanf("%d",&pos);
    list=head;
    if(list==NULL)
    {
        printf("No data available\n\n");
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
            printf("Invalid number\n\n");
            menu();
        }
    }
    if(pos==1)
    {
        printf("Name:%s\n",list->s);
        printf("Roll:%d\n\n",list->a);
        printf("1.Search more\t2.menu\t.3exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            search();
            break;
        case 2:
            menu();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid number please try again\n\n");
            break;
        }
    }
    else
    {
        //pos=pos-2;
        while(pos!=0 && list->next!=NULL)
        {
            list=list->next;
            pos--;
        }
        printf("Name:%s\n",list->s);
        printf("Roll:%d\n\n",list->a);
        printf("1.Search more\t2.menu\t.3exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            search();
            break;
        case 2:
            menu();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid number please try again\n\n");
            break;
        }

    }
}
int searchval()
{
    printf("Enter your value\n");
    scanf("%d",&p);
    list=head;
    if(list==NULL)
    {
        printf("No data available\n\n");
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
            printf("Invalid number\n\n");
            menu();
        }
    }
    if(list->a==p)
    {
        printf("Name:%s\n",list->s);
        printf("Roll:%d\n\n",list->a);
        printf("1.Search more\t2.menu\t.3exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            search();
            break;
        case 2:
            menu();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid number please try again\n\n");
            break;
        }
    }
    else
    {

        while(list->a!=p)
        {
            list=list->next;
        }

        printf("Name:%s\n",list->s);
        printf("Roll:%d\n\n",list->a);
        printf("1.Search more\t2.menu\t.3exit\n\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            search();
            break;
        case 2:
            menu();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid number please try again\n\n");
            break;
        }


    }
}
int search()
{
    printf("      1.Search by position\n      2.Search by value\n      3.menu\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        searchpos();
        break;
    case 2:
        searchval();
        break;
    case 3:
        menu();
        break;
    default:
        printf("Invalid number please try again\n\n");
        break;
    }
}

int first()
{
    int count=0;
    list=head;
    if(head==NULL)
    {
        printf("No data available\n\n");
        printf("1.menu \t 2.exit\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
        case 2:
            exit(0);
        default:
            printf("It's invalid number please try again\n");
        }
    }
    while(list!=NULL)
    {
        count++;
        printf("Position:%d\n",count);
        printf("Name:%s\n",list->s);
        printf("Roll:%d\n\n",list->a);
        list=list->next;
    }
    printf("1.menu \t 2.exit\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        menu();
    case 2:
        exit(0);
    default:
        printf("It's invalid number please try again\n");
    }
}
int last()
{
    int count=0;
    list=head;
    if(list==NULL)
    {
        printf("No data available\n\n");
        printf("1.menu \t 2.exit\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
            menu();
        case 2:
            exit(0);
        default:
            printf("It's invalid number please try again\n");
        }
    }
    temp=tail;
    while(temp!=NULL)
    {
        count++;
        printf("Position:%d\n",count);
        printf("Name:%s\n",temp->s);
        printf("Roll:%d\n\n",temp->a);
        temp=temp->prev;
    }
    printf("1.menu \t 2.exit\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        menu();
    case 2:
        exit(0);
    default:
        printf("It's invalid number please try again\n");
    }
}
int display()
{
    printf("\n");
    printf("1.Display first to last\n\n2.Display last to first\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        first();
        break;
    case 2:
        last();
        break;
    default:
        printf("Invalid number please try again\n\n");
        menu();
    }
}
int menu()
{
    printf("                                             Doubly Linked List\n");
    printf("                                 |-------------------------------------------|\n\n");
    printf("                                       1.Add\t          2.Delete\n\n                                                5.Exit\n\n                                       3.Search\t          4.Display\n\n");
    printf("Chose your option:");
    scanf("%d",&p);
    switch(p)
    {
    case 1:
        add();
        break;
    case 2:
        Delete();
        break;
    case 3:
        search();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("Your option is wrong please try again\n\n");
        menu();
    }
}
int main()
{
    menu();
    return 0;
}

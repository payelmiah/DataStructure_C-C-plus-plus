#include<stdio.h>
#include<stdlib.h>
add();
Delete();
search();
display();
typedef struct node
{
    int a;
    char s[30];
    struct node *next;
} node;
node *head=NULL;
node *list=NULL;
node *temp=NULL;
int u,i;
int add()
{
    int p;
    printf("\n");
    printf("1.Add at first position\n\n");
    printf("2.Add at last position \n\n");
    printf("3.Add at nth position\n\n");
    scanf("%d",&p);
    switch(p)
    {
    case 1:         //Add at first position...........||
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        printf("Enter Your Name:");
        scanf(" %[^\n]",&n->s[i]);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        list=head;
        if(head==NULL)
        {
            n->next=head;
            head=n;
            n->next=NULL;
            printf("successful add first position\n\n");
            printf("1.you can more add \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                add();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }
        n->next=head;
        head=n;
        printf("successful add first position\n\n");
        printf("1.you can more add \t 2.menu \t 3.exit\n");
        scanf("%d",&u);
        switch(u)
        {
        case 1:
            add();
        case 2:
            menu();
        case 3:
            exit(0);
        default:
            printf("It's invalid number please try again\n");
            menu();
        }
    }
    case 2:                        //Add at last position.................||
    {
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        printf("Enter Your Name:");
        scanf(" %[^\n]",&n->s[i]);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        node *list=head;
        if(list==NULL)
        {
            head=n;
            printf("successful add last position\n\n");
            printf("1.you can more add \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                add();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }
        else
        {
            while(list->next!=NULL)
            {
                list=list->next;
            }
            list->next=n;
            n->next=NULL;
            printf("successful add last position\n\n");
            printf("1.you can more add \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                add();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }

    }
    case 3:                     //Add at nth position................|||
    {
        printf("enter your position:\n");
        scanf("%d",&p);
        node *n=(node*)malloc(sizeof(node));
        n->next=NULL;
        printf("Enter Your Name:");
        scanf(" %[^\n]",&n->s[i]);
        printf("Enter your roll:");
        scanf("%d",&n->a);
        node *list=head;
        //first position delete....//
        if(head==NULL)
        {
            n->next=head;
            head=n;
            printf("Successful add nth position\n\n");
            printf("1.you can more add \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                add();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }
        else
        {

            p=p-2;
            while(p!=0 && list->next!=NULL)
            {
                list=list->next;
                p--;
            }
            n->next=list->next;
            list->next=n;
            printf("Successful add nth position\n\n");
            printf("1.you can more add \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                add();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }
    }
    }
}
int search()

{
    //search function........////
    int p;
    node *list=head;
    printf("Enter your roll:");
    scanf("%d",&p);
    if(list==NULL)
    {
        printf("There is no available data\n\n");
        printf("1.menu \t 2.exit\n");
        scanf("%d",&u);
        switch(u)
        {
        case 1:
            menu();
        case 2:
            exit(0);
        default:
            printf("It's invalid number please try again\n\n");
            menu();
        }
    }
    /* else if(list->a!=p)
     {
         printf("The number isn't match\n\n");
         printf("1.menu \t 2.exit\n");
         scanf("%d",&u);
         switch(u)
         {
         case 1:
             menu();
         case 2:
             exit(0);
         default:
             printf("It's invalid number please try again\n\n");
             menu();
         }

     }*/
    else
    {
        printf("%s\n",list->s);
        printf("%d\n",list->a);

        printf("1.You can search more data \t 2.menu \t 3.exit\n");
        scanf("%d",&u);
        switch(u)
        {
        case 1:
            search();
        case 2:
            menu();
        case 3:
            exit(0);
        default:
            printf("It's invalid number please try again\n\n");
            menu();
        }
    }
    list=list->next;
}
int Delete()
{
    int p,x;
    printf("1.Delete by position \t 2.Delete by data\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    {
        printf("Enter the position:\n");
        scanf("%d",&p);
        switch(p)
        {
        case 1:
        {
            list=head;
            if(head==NULL)
            {
                printf("No data available please add data at first\n\n");
                printf("1.menu \t 2.exit\n");
                scanf("%d",&u);
                switch(u)
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
            if(p==1)
            {

                head=head->next;
                free(list);
                printf("Delete successful\n\n");
                printf("1.you can delete more data \t 2.menu \t 3.exit\n");
                scanf("%d",&u);
                switch(u)
                {
                case 1:
                    Delete();
                case 2:
                    menu();
                case 3:
                    exit(0);
                default:
                    printf("It's invalid number please try again\n");
                    menu();
                }
            }
            else
            {
                p=p-2;
                while(p!=0 && list->next!=NULL)
                {
                    list=list->next;
                    p--;
                }
                temp=temp->next;
                list->next=temp->next;
                free(temp);
                printf("delete successful\n\n");
                printf("1.you can delete more data \t 2.menu \t 3.exit\n");
                scanf("%d",&u);
                switch(u)
                {
                case 1:
                    Delete();
                case 2:
                    menu();
                case 3:
                    exit(0);
                default:
                    printf("It's invalid number please try again\n");
                    menu();
                }
            }
        }

        }
    }
    case 2:
    {
        int g,an;
        printf("Enter your data\n");
        scanf("%d",&g);
        list=head;
        if(list==NULL)
        {
            printf("There is no data\n\n");
            printf("1.menu \t 2.exit\n");
            scanf("%d",&u);
            switch(u)
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
        if(list->a==g)
        {
            head=list->next;
            free(list);
            printf("successful delete data\n\n");
            printf("1.You can delete more data \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                Delete();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                Delete();
            }
        }
        else
        {
            while(list->next->a!=g && list!=NULL)
            {
                list=list->next;
            }
            temp=list->next;
            list->next=temp->next;
            free(temp);
            printf("successful delete data\n\n");
            printf("1.you can delete more data \t 2.menu \t 3.exit\n");
            scanf("%d",&u);
            switch(u)
            {
            case 1:
                Delete();
            case 2:
                menu();
            case 3:
                exit(0);
            default:
                printf("It's invalid number please try again\n");
                menu();
            }
        }
    }
    default:
    {
        printf("It's invalid number please try again\n");
        Delete();
    }
    }
}
int display()
{

    if(head==NULL)
    {
        printf("No data available\n\n");
        printf("1.menu \t 2.exit\n");
        scanf("%d",&u);
        switch(u)
        {
        case 1:
            menu();
        case 2:
            exit(0);
        default:
            printf("It's invalid number please try again\n");
        }
    }
    int count=0;
    list=head;
    while(list!=NULL)
    {
        count++;
        printf("Position:%d\n",count);
        printf("Name : %s\n",list->s);
        printf("Roll : %d\n\n",list->a);
        list=list->next;
    }
    printf("1.menu \t 2.exit\n");
    scanf("%d",&u);
    switch(u)
    {
    case 1:
        menu();
    case 2:
        exit(0);
    default:
        printf("It's invalid number please try again\n");
    }

}
int menu()
{
    int n,i,j;
    printf("Created by Md.Raj khan\n");
    printf("                                              Singly Linked list\n");
    printf("                                       |-----------------------------------|\n\n");
    printf("                                               1.Add.\t 2.Delete.\n\n                                              3.Search.\t 4.Display.\n\n                                           5.Exit\n");
    printf("Chose your option:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        add();
        break;

    }
    case 2:
    {
        Delete();
        break;

    }
    case 3:
    {
        search();
        break;
    }
    case 4:
    {
        display();
        break;
    }
    case 5:
    {
        exit(0);
    }
    default:
    {
        printf("It's invalid number please try again\n");
        menu();
    }
    }
}

int main()
{
    menu();
    return 0;
}



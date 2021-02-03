
void insert(char s[],char s1[],char value)
{
    node *N=(node*)malloc(sizeof(node));
    N->ch=s;
    N->ch=s1;
    N->a=value;
    N->next=NULL;
    node *list=head;
    while(list->next!=NULL)
    {
        list=list->next;
    }
    list->next=N->next;
    return;

}

int main()
{
    insert("Pan Pizza","Regular",250);
    insert("Pan Pizza","Medium",400);
    insert("Cheese Pizza","Large",700);
    insert("Sicilian Pizza","Medium",550);
    insert("Sicilian Pizza","Large",850);
}

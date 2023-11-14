#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node* prev;
    int data;
    struct Node* next;
}nd;
nd *head = NULL;

void create(int data){
    nd *p;
    p = (nd*)malloc(sizeof(nd));
    p->data = data;
    if(head == NULL){
        head = p;
        p->next = p;
        p->prev = p;
    }
    else{
        p->next = head;
        p->prev = head->prev;
        (head->prev)->next = p;
        head->prev = p;
    }
}
void insert_at_front(int item){
    nd *p;
    p = (nd*)malloc(sizeof(nd));
    p->data = item;
    head->prev->next = p;
    p->prev = head->prev;
    p->next = head;
    head->prev = p;
    head = p;
}

void insert_at_end(int item){
    nd *p;
    p = (nd*)malloc(sizeof(nd));
    p->data = item;
    p->next = head;
    p->prev  = head->prev;
    (head->prev)->next = p;
    head->prev = p;

}

void insert_after(int item, int target){
    nd *p, *s;
    p = (nd*)malloc(sizeof(nd));
    p->data = item;
    s = head;
    while(s->data != target){
        s = s->next;
    }
    (s->next)->prev = p;
    p->prev = s;
    p->next = s->next;
    s->next = p;

}
void insert_before(int item, int target){
    nd *p, *s;
    p = (nd*)malloc(sizeof(nd));
    p->data = item;
    s=head;
    while (s->data != target){
        s=s->next;
    }
    (s->prev)->next = p;
    p->prev = s->prev;
    p->next = s;
    s->prev = p;
}

int del_begin(){
    nd *p;
    int x;
    p = head;
    (p->prev)->next = p->next;
    (p->next)->prev = p->prev;
    x = p->data;
    free(p);
    head = head->next;
    return x;  
}
int del_end(){
    nd *p;
    int x;
    p = head->prev;
    (p->prev)->next = head;
    head->prev = p->prev;
    x = p->data;
    free(p);
    return x;
}
int del_after(int target){
    nd *p, *s;
    int x;
    p = head;
    while(p->data != target){
        p = p->next;
    }
    if(p == head->prev){
        head = head->next;
    }
    s = p->next;
    p->next = s->next;
    (s->next)->prev = p;
    x = s->data;
    free(s);
    return x;
}
int del_before(int target){
    nd *p, *s;
    int x;
    p = head;
    while(p->data != target){
        p = p->next;
    }
    s = p->prev;
    (s->prev)->next = p;
    p->prev = s->prev;
    x = s->data;
    free(s);
    return x;
}
void display(){
    
    nd *p;
    p = head;
    do
    {
        printf("%d  ",p->data);
        p = p->next;
    }
    while (p!= head);

    
}
void advanced_display(){
    nd *p;
    p = head;
    do{
        printf(" %d | %d | %d ",p->prev,p->data,p->next);
        printf("-|-");
        p = p->next;
    }
    while(p!= head);
}
int main(){
	int n,i,item,x,choice;
    printf("Enter no. of nodes to create\n");   
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter the value: \n");
		scanf("%d",&item);
        create(item);
    }
    
    printf("INSERTION & DELETION IN DLL\n");
    printf("IIT NARIKELBAGAN\n");
    while(1){
    printf("\n----MENU----\n");
    printf("\n");
    printf("1.Insert at first\n2.Insert at end\n3.Insert after\n4.Insert before\n5.Delete begin\n6.Delete end\n7.Delete after\n8.Delete before\n9.Display\n10.Display Advanced\n11.EXIT\n");
    int choice = 0;
    printf("enter the choice: \n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: {
         i = 0;
        printf("Enter th item to be inserted\n");
        scanf("%d", &i);
        insert_at_front(i);
        break;
    }
    case 2:{
        i = 0;
        printf("Enter th item to be inserted\n");
        scanf("%d", &i);
        insert_at_end(i);
        break;
    }
    case 3:{
         i = 0;
        int j = 0;
        printf("Enter the target\n");
        scanf("%d", &i);
        printf("Enter the item to be inserted\n");
        scanf("%d", &j);
        insert_after(j,i);
        break;
    }
    case 4:{
         i = 0;
        int j = 0;
        printf("Enter the target\n");
        scanf("%d", &i);
        printf("Enter the item to be inserted\n");
        scanf("%d", &j);
        insert_before(j,i);
        break;
    }
    case 5:
    {
         i = 0;
        i = del_begin();
        printf("The Deleted element is %d\n", i);
        break;
    }
    case 6:
    {
         i = 0;
        i = del_end();
        printf("The Deleted element is %d\n", i);
        break;
    }
    case 7:
    {
         i = 0;
        int target = 0;
        printf("Enter the target\n");
        scanf("%d", &target);
        i = del_after(target);
        printf("The deleted element is %d", i);
        break;
    }
    case 8:
    {
         i = 0;
        int target = 0;
        printf("Enter the target\n");
        scanf("%d", &target);
        i = del_before(target);
        printf("The deleted element is %d", i);
        break;
    }
    case 9:
        display();
        break;
    case 10:
        advanced_display();
        break;
    case 11:
        exit(1);
    }
    }
    return 0;
}

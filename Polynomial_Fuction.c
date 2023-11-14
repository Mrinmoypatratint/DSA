#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int coef,ext;
	struct node *next;
	
}nd;
nd*p = NULL,*q = NULL,*s = NULL,*r = NULL;
void create_poly1(int cf,int ex)
{
	nd *p_1,*s;
	p_1 = (nd*)malloc(sizeof(nd));
	p_1->coef = cf;
	p_1->ext = ex;
	p_1->next = NULL;
	if(p==NULL)
	      p = p_1;
	else
	{
		s = p;
		while(s->next != NULL)
	
		             s= s->next;
		s->next = p_1;
		
	}
	
}
void create_poly2(int cf,int ex)
{
	nd *q_1,*s;
	q_1 = (nd*)malloc(sizeof(nd));
	q_1->coef = cf;
	q_1->ext = ex;
	q_1->next = NULL;
	if(q==NULL)
	      q = q_1;
	else
	{
		s = q;
		while(s->next != NULL)
	
		             s= s->next;
		s->next = q_1;
		
	}
	
}
void create_res(struct node*r_1)
{
	nd *s;

	if(r==NULL)
	      r = r_1;
	else
	{
		s = r;
		while(s->next != NULL)
	
		             s= s->next;
		s->next = r_1;
		
	}
	
}
void display_1()
{
	int i,val;
	nd *p_1;
	p_1 = p;
	printf("\n your equation_1 is : ");
	while(p_1!= NULL)
	{

	
	          printf("%d,%d,",p_1->coef,p_1->ext);
	          p_1 =   p_1->next;
	          
    }
}
void display_2()
{
	int i,val;
	nd*q_1;
	q_1 = q;
	printf("\n your equation_1 is : ");
	while(q_1!= NULL)
	{
	
	          printf("%d,%d,",q_1->coef,q_1->ext);
	          q_1 =   q_1->next;
	          
    }  
}
void display_3()
{
	int i,val;
	nd*r_1;
	r_1 = r;
	printf("\n your final equation is : ");
	while(r_1!= NULL)
	{
	
	          printf("%dx^%d ",r_1->coef,r_1->ext);
	          r_1 =   r_1->next;
    }
}

void add()
{
	nd*a,*b,*s_3;
	a = p;
	b = q;
	while((a!=NULL)||(b!=NULL))
	{
		s_3 = (struct node*)malloc(sizeof(struct node));
		s_3->next = NULL;
		if((a->ext)==(b->ext))
		 {
		 	s_3->coef = (a->coef)+(b->coef);
		 	s_3->ext = a->ext;
		 	create_res(s_3);
		 	a= a->next;
		 	b=b->next;
		 	
		  } 
		  else if ((a->ext)>(b->ext))
		  {
		  	s_3->coef = a->coef;
		  	s_3->ext = a->ext;
		  	a = a->next;
		  	create_res(s_3);
		  	
		  }
		  else
		  {
		  	s_3->coef = b->coef;
		  	s_3->ext = b->ext;
		  	b = b->next;
		  	create_res(s_3);
		  	
		  }
	}
	
	
}

int main()
{
	int cf,ex,choice,deg;
	printf("\nHow many degree? : ");
	scanf("%d",&deg);
	for(int i =0;i<deg;i++)
	{
		printf("\n Enter the value of co-efficent:");
		scanf("%d",&cf);
		printf("\n Enter the value of exponent:");
		scanf("%d",&ex);
		create_poly1(cf,ex);
	}
	display_1();
	printf("\nHow many degree? : ");
	scanf("%d",&deg);
	for(int i =0;i<deg;i++)
	{
		printf("\n Enter the value of co-efficent:");
		scanf("%d",&cf);
		printf("\n Enter the value of exponent:");
		scanf("%d",&ex);
		create_poly2(cf,ex);
	}
	display_2();
	add();
	display_3();
	
}

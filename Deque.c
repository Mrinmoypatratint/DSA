#include<stdio.h>
#include<stdlib.h>
#define size 5
int deque[size];
int f=-1, r =-1;
void insert_front(int item)
{
	if((f ==0 && r == size -1)||(f == r +1))
	{   
	            printf("overflow");
	}
	else if((f == -1)&&(r == -1))
	{
		f= r = 0;
		deque[f] = item;
		
	}
	else if(f== 0)
	{
		f = size -1;
		deque[f] = item;
	}
	else
	{
		f = f-1;
		deque[f] = item;
	}
}
void insert_rear(int item)
{
	if((f ==0 && r == size -1)||(f == r +1))
	{   
	            printf("overflow");
	}
	else if((f == -1)&&(r == -1))
	{
		 r = 0;
		deque[r] = item;
		
	}
	else if(r = size -1)
	{
		r=0;
		deque[r] = item;
	}
	else
	{
		r++;
		deque[r] = item;
	}
}
void display()
{
	int i = f;
	printf("\n Elements in a deque qre : ");
	while(i!=r)
	{
		printf("%d",deque[i]);
		i =(i + 1)% size;
		
	}
	printf("%d",deque[r]);
}
void getfront()
{
	if((f==-1)&&(r==-1))
	{
		printf("deque is empty");
	}
	else
	{
		printf("the value of the element at front is %d", deque[f]);
	}
}
void getrear()
{
	if((f==-1)&&(r==-1))
	{
		printf("deque is empty");
	}
	else
	{
		printf("the value of the element at front is %d", deque[r]);
	}
}
void delete_front()
{
	if((f==-1)&&(r == -1))
	{
		printf("deque is empty");
		
	}
	else if (f == r)
	{
		printf("\nthe deleted elemnt is %d",deque[f]);
		f = -1;
		r =-1;
	}
	else if(f = size -1)
	{
		printf("\n the deleted element is %d",deque[f]);
		f =0;
	}
	else
	{
    	printf("\n the deleted element is %d",deque[f]);
		f =f +1;	
	}
}
void delete_rear()
{
	if((f==-1)&&(r == -1))
	{
		printf("deque is empty");
		
	}
	else if (f == r)
	{
		printf("\nthe deleted elemnt is %d",deque[r]);
		f = -1;
		r =-1;
	}
	else if(r == 0)
	{
		printf("\n the deleted element is %d",deque[f]);
		r = size - 1;
	}
	else
	{
    	printf("\n the deleted element is %d",deque[f]);
	   r = r-1;	
	}

}
int main()
{
	int i, n, item,ch;
	
	while(1)
	{
		printf("\n 1. insert_front\n 2. insert_rear\n 3. delete_rear\n 4. delete_front\n 5. display\n 6. exit\n");
		printf("enter choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("enter the element to be inserted %d\n");
			        scanf("%d",&item);
			        insert_front( item);
			        break;
			case 2: printf("enter the element to be inserted %d\n");
			        scanf("%d",&item);
			        insert_rear( item);
			        break; 
			case 3: delete_rear();
			        break;
			case 4: delete_front();
			        break;
			case 5: display();
			        break;  
		}
	}
}


#include <stdio.h>

// return type  function_name(function arguments)
// {
//     code
//     return (return type);
// }



// declaration
int sum(int x, int y);

//without argumets without return type
void print()
{
    printf("Hello World");
}

//without argumets with return type
int print_num()
{
    int i;
    scanf("%d",&i);
    return i;
}


//with argumets without return type
void print_something(int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c ",'%');
    }
}

// call
int main()
{
    // int a, b;
    // int c;
    // a = 10;
    // b = 15;
    
    
    // c = sum(a, b);

    // printf("The sum is %d \n", c);
    // printf("The sum is %d ", f);

    // c=print_num();
    // printf("The sum is %d \n", c);

    //print_something(7);
    print();
    return 0;
}


// definition

//with argumets with return type
int sum(int x, int y)
{
    int temp=x+y;
    return temp;
}

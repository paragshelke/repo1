 #include <stdio.h>

void main() 

{
    int a = 10;
    int b = 20;
    int temp;
    

    temp = a;
    a = b;
    b = temp;
    
    printf("after swapping a = %d and b = %d",a,b);
}


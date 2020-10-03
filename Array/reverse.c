#include <stdio.h>
#include <stdlib.h>

void reverse_array(int*, int);

int main()
{
    int n, c, *pointer;
    
    scanf("%d",&n);
    
    pointer = (int*)malloc(sizeof(int)*n);
    
    if( pointer == NULL )
    exit(EXIT_FAILURE);
    
    for ( c = 0 ; c < n ; c++ )
    scanf("%d",(pointer+c));
    
    reverse_array(pointer, n);
    printf("Original array on reversal is\n");
    
    for ( c = 0 ; c < n ; c++ )
    printf("%d\n",*(pointer+c));
        
    free(pointer);
    return 0;
} 

void reverse_array(int *pointer, int n)
{
    int *s, c, d;
    
    s = (int*)malloc(sizeof(int)*n);  
  
    if( s == NULL )    
    exit(EXIT_FAILURE);    
    
    for ( c = n - 1, d = 0 ; c >= 0 ; c--, d++ )
*(s+d) = *(pointer+c);
        
    for ( c = 0 ; c < n ; c++ )    
    *(pointer+c) = *(s+c);    
         
    free(s);
}
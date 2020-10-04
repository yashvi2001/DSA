#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                    
    struct node *nextptr;       
}*stnode;

void createNodeList(int n);     
void LastNodeDeletion();	    
void displayList();             

int main()
{
    int n,num,pos;
	
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);

    printf("\n Data entered in the list are : \n");		
    displayList();
    LastNodeDeletion();
	    printf("\n The new list after deletion the last node are  : \n");	
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) 
    {
        printf(" Memory can not be allocated.");
    }
    else
    {

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
 
        stnode-> num = num;      
        stnode-> nextptr = NULL; 
        tmp = stnode;
 
        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL) 
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                fnNode->num = num;      
                fnNode->nextptr = NULL; 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr;
            }
        }
    }
} 
void LastNodeDeletion()
{
    struct node *toDelLast, *preNode;
    if(stnode == NULL)
    {
        printf(" There is no element in the list.");
    }
    else
    {
        toDelLast = stnode;
        preNode = stnode;
       
        while(toDelLast->nextptr != NULL)
        {
            preNode = toDelLast;
            toDelLast = toDelLast->nextptr;
        }
        if(toDelLast == stnode)
        {
            stnode = NULL;
        }
        else
        {

            preNode->nextptr = NULL;
        }
 
        free(toDelLast);
    }
}
void displayList()
{
    struct node *tmp;
    if(stnode == NULL)
    {
        printf(" No data found in the empty list.");
    }
    else
    {
        tmp = stnode;
        while(tmp != NULL)
        {
            printf(" Data = %d\n", tmp->num);   
            tmp = tmp->nextptr;                 
        }
    }
}
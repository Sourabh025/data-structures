#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
        printf("queue overflow");
    else
    {
      t->data=x;
        t->next=NULL;
        if(front==NULL)
            front=rear=t;
        else
        {


            rear->next=t;
        rear=t;
        }
}


}
int dequeue()
{
    int x=-1;
    struct node *t;
    if(front==NULL)
        printf("queue is empty");
    else
    {
        x=front->data;
        t=front;
        front=front->next;

        free(t);

    }
    return x;
}
int isempty()
{
    return front==NULL;
}
void BFS(int g[][7],int start,int n)
{
    int i,j;
    int visited[7]={0};
    i=start;

    printf("%d",i);
    visited[i]=1;
    enqueue(i);

    while(!isempty())
    {
        i=dequeue();
        for(j=1;j<n;j++)
        {


        if(g[i][j]==1&&visited[j]==0)
        {
            printf("%d\t",j);
            visited[j]=1;
            enqueue(j);

        }
        }
    }
    printf("\n");

    }
void DFS(int g[][7],int start,int n)
{
    int i,j;
    i=start;
 static int visited[7]={0};

  if(visited[i]==0)
    {


 printf("%d\t",i);
 visited[i]=1;

for(j=1;j<n;j++)
{
    if(g[i][j]==1&&visited[j]==0)
        DFS(g,j,n);

}
    }
}
 int main()
 {

     int g[7][7]={{0,0,0,0,0,0,0},
                  {0,0,1,1,0,0,0},
                  {0,1,0,0,1,0,0},
                  {0,1,0,0,1,0,0},
                  {0,0,0,0,0,1,1},
                  {0,0,0,0,1,0,0},
                  {0,0,0,0,1,0,0}
                   };
printf(" \n breadth first search travesal of graph : \n");
                   BFS(g,3,7);
                   printf("\n");
                  printf("\n depth first search of the graph : \n");
                   DFS(g,3,7);
                   return 0;

 }

#include<stdio.h>
#include<conio.h>
int main()
{
    int head,i,n1;
    printf("\nEnter head position");
    scanf("%d",&head);          //head points to current position
    printf("\nEnter number of requests");
    scanf("%d",&n1);
    int req[n1];                //req is the request list
    for(i=0;i<n1;i++)
    {
            scanf("%d",&req[i]);
    }
    int diff=req[0]-head;
    if(diff<0)
    {
              diff=diff*-1;
    }
    for(i=1;i<n1;i++)
    {
            if((req[i]-req[i-1])>0)
               diff=diff+(req[i]-req[i-1]);
            else
               diff=diff+(req[i-1]-req[i]);
    }
    printf("Seek time = %d\n",diff);
    getch();
}

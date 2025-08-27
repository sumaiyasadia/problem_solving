#include<stdio.h>
int buy_tickets(int a[],int n,int k)
{

    int q[100];
    int front=-1,time=0;
    for(int i=0; i<n; i++)
    {
        front++;
        q[front]=a[i];
    }
    while(q[k]>0)
    {

        if(q[0]!=0){
            time++;
            q[0]=q[0]-1;
        }
        int temp = q[0];
        for(int i=0;i<n-1;i++){
            q[i] = q[i+1];
            if(i==n-2){
                q[i+1] = temp;
            }
        }

        if(k==0){
            k=n-1;
        }
        else{
            k--;
        }
        /*for(int i=0;i<n;i++){
            printf("%d ",q[i]);
        }
        printf("\n%d ",k);*/
    }
    return time;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    printf("%d",buy_tickets(a,n,k));
}

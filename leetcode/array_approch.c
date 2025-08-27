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
        for(int i=0; i<n; i++)
        {
            if(q[i]!=0)
            {

                q[i]=q[i]-1;
                time++;
                if(q[k]==0)
                {
                    break;
                }
            }
        }


    }
    return time;
}

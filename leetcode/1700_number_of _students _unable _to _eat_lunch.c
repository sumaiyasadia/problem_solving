#include<stdio.h>
int countStudents(int student[],int n1,int lunch[],int n2)
{
    int q[100],s[100];
    int front= -1,zero=0,one=0;

    for(int i=0; i<n1; i++)
    {
        front++;
        q[front]=student[i];
    }


    for(int i=0; i<n1; i++)
    {
        if(q[i]==0)
        {
            zero++;
        }
        else
        {
            one++;
        }

    }


    for(int i=0; i<n2; i++)
    {
        if(lunch[i]==0)
        {
            if(zero==0)
            {
                return one;
            }
            else
            {
                zero--;
            }
        }
        else if(lunch[i]==1)
        {
            if(one==0)
            {
                return zero;
            }
            else
            {
                one--;
            }
        }

    }
     return 0;
}
    int main()
    {
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        int student[n1],lunch[n2];
        for(int i=0; i<n1; i++)
        {
            scanf("%d",&student[i]);
        }
        for(int i=0; i<n2; i++)
        {
            scanf("%d",&lunch[i]);
        }
       printf("%d",countStudents( student, n1,lunch,n2));

        return 0;
    }







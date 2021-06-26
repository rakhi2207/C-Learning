#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int N,M;
        scanf("%d",&N);
        scanf("%d",&M);
        int train[N];
        int passengers[M];
        int a[N];
        int c[N];
        for(int i=0;i<N;i++)
        {
            scanf("%d",&train[i]);
        }
        for(int i=0;i<M;i++)
        {
            scanf("%d",&passengers[i]);
        }
        int  one=-1,two=-1;
            for(int i=0;i<N;i++)
            {
                if(one==-1)
                {
                    a[i]=-1;
                }else
                {
                    a[i]=i-one;
                }
                if(train[i]==1)
                {
                    a[i]=0;
                    one=i;
                }

            }
           for(int i=N-1;i>=0;i--)
            {
                if(two==-1)
                {
                    c[i]=-1;
                }else
                {
                    c[i]=two-i;
                }
                if(train[i]==2)
                {
                    c[i]=0;
                    two=i;
                }

            }
            // for(int i=0;i<N;i++)
            // {
            //     printf("%d",a[i]);
            // }
            // printf("\n");
            // for(int i=0;i<N;i++)
            // {
            //     printf("%d",c[i]);
            // }
                for(int i=0;i<M;i++)
            {
                if(a[passengers[i]-1]==-1&&c[passengers[i]-1]==-1)
                {
                   printf("-1 ");
                }else if(a[passengers[i]-1]>=0&&c[passengers[i]-1]==-1)
                {
                   printf("%d ",a[passengers[i]-1]);
                }else if(a[passengers[i]-1]==-1&&c[passengers[i]-1]>=0)
                {
                    printf("%d ",c[passengers[i]-1]);
                }else
                {
                    printf("%d ",min(a[passengers[i]-1],c[passengers[i]-1]));
                }
            }
            printf("\n");

    }
    return 0;
}
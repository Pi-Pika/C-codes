#include<stdio.h>

int main()
{
    int a[100],q,n,pos,temp,j,i;
    while(scanf("%d %d",&n,&q)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for (i=0;i<n-1;i++ )
            {
                for (j=i+1;j<n;j++ )
                    {
                        if(a[i]<a[j])
                        {
                            temp=a[i];
                            a[i]=a[j];
                            a[j]=temp;
                        }
                    }
            }

        for(int i=0;i<q;i++)
        {
            scanf("%d",&pos);
            printf("%d\n",a[pos-1]);
        }
    }
    return 0;
}

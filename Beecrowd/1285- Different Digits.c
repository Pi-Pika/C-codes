#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a,b,i,num,j,k,d,upokar,count;
    int n[4];

    while(scanf("%d %d",&a,&b)== 2){
          upokar=0;
          for(i=a;i<=b;i++)
            {
                d=0;
                count=0;
                num=i;
                while (num!= 0)
                {
                      n[d]=num%10;
                      num/=10;
                      d++;
                }
                for(j=0;j<d;j++)
                {
                      for(k=j+1;k<d;k++)
                      {
                            if(n[j]==n[k])
                            {
                                count=1;
                                break;
                            }
                      }
                }
                if(count==0) upokar++;
          }
          printf("%d\n",upokar);
    }

    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc;
    scanf("%d",&tc);
    while (tc--)
        {
            int a[6],c=1,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;
            for (int i=0;i<6;i++ )
                {
                    scanf("%d",&a[i]);
                    if(a[i]==1) a1++;
                    else if(a[i]==2) a2++;
                    else if(a[i]==3) a3++;
                    else if(a[i]==4) a4++;
                    else if(a[i]==5) a5++;
                    else if(a[i]==6) a6++;
                }
            if(a1==1 && a2==1 && a3==1 && a4==1 &&a5==1 && a6==1) c==0;
            if(((a[0]+a[5]==7)&&(a[1]+a[3]==7)&&(a[2]+a[4]==7))&&c==0) printf("SIM\n");
            else printf("NAO\n");
        }
    return 0;
}

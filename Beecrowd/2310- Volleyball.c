#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int tc,x,y,z,a,b,c;
    scanf("%d",&tc);
    float sum1=0.00,dif=0.00,sum2=0.00,sum3=0.00;
    float s1=0.00,s2=0.00, s3=0.00;
    while(tc--)
    {
        char arr[1000];
        scanf("%s",arr);
        scanf("%d %d %d",&x,&y,&z);
        sum1+=x;
        sum2+=y;
        sum3+=z;
        scanf("%d %d %d",&a,&b,&c);
        s1+=a;
        s2+=b;
        s3+=c;
    }
    printf("Pontos de Saque: %.2f %s",(s1*100.00)/sum1,"%.\n");
    printf("Pontos de Bloqueio: %.2f %s",(s2*100.00)/sum2,"%.\n");
    printf("Pontos de Ataque: %.2f %s",(s3*100.00)/sum3,"%.\n");
    return 0;
}

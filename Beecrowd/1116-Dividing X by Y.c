#include <stdio.h>

int main()
{
    int n,i;
    double s,x,y;
    scanf("%d", &n);

    for (i=0;i<n;i++){
        scanf("%lf %lf",&x,&y);
        if (y==0){
            printf("divisao impossivel\n");
        }else{
        s=x/(y);
        printf("%.1lf\n",s);
        }
    }
 return 0;
}

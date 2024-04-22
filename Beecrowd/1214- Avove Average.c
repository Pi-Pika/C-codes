#include <stdio.h>

int main(){
    int tc,n,i,j,c='%';
    scanf("%d",&tc);
    for(i=0;i<tc;i++)
    {
            scanf("%d",&n);
            float s=0,count = 0;
            int num[n];
            for(j = 0; j < n; j++){
                    scanf("%d",&num[j]);
                    count+=num[j];
            }
            count =count/n;
            for(j = 0; j < n; j++){
                    if(num[j] > count) s++;
            }
            printf("%.3f%c\n",s/n*100.000,c);
    }
    return 0;
}

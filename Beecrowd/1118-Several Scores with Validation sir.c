#include<stdio.h>

int main(){
    int t,nc=0;
    double num,sum=0;

    while(1){
        scanf("%lf",&num);
        if(num>=0.0 && num<=10.0){
            sum+=num;
            nc++;
        }
        else{
            printf("nota invalida\n");
        }


        if(nc==2)
        {
            printf("media = %.2lf\n",sum/2.0);

            while(1){
                printf("novo calculo (1-sim 2-nao)\n");

                scanf("%d",&t);
                if(t==1 || t==2){
                    break;
                }
            }
            if(t==2)    break;
            else if (t == 1)
            {
               nc = 0;
            }
        }
    }
    return 0;
}


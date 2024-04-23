#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

{
    int tc,n,count=0,a,x,y,z,i,j,k;
    char arr[20];
    scanf("%s",&arr);

    n=strlen(arr);

    for (i=0;i<n;i++ )
        {
            if(arr[i]=='x')
            {
                count++;
            }
        }

    if(count>7)
    {
        printf("NO\n");
    }else printf("YES\n");
    return 0;
}

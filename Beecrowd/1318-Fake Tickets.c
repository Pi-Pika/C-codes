#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1


int main(){
	int arr[10000], n, m, c, i;

	while(1){
		scanf("%d %d", &n, &m);
		if(n == 0 && m == 0) {
                break;
		}

		for(c=0;c<n;c++){
			arr[c] = 0;
		}

		for(c=0, i=0;c<m;c++){
			scanf("%d", &n);

			if(!arr[n-1]){
				arr[n-1] = 1;
			}
			else
				if(arr[n-1] == 1){
					i++;
					arr[n-1]++;
				}
		}
		printf("%d\n", i);
	}
	return 0;
}

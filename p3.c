#include<stdio.h>
 
int main() {
	int i,j,k;
	for (i=3;i>=1;i--) {
		for (j=1;j<=3;j++) {
			if(j<=i)
			        printf("%d",j); else
			        printf("*");
		}
		for (j=3;j>=1;j--) {
			if(j<=i)
			        printf("%d",j); else
			        printf("*");
		}
		printf("\n");
	}
	return 0;
}


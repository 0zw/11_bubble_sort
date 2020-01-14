#include <stdio.h>
#define NUMBER 100
int main(int argc,char *argv[])
{
	int i,j,n,c,k;
	int a[NUMBER];
	for (i=0;i<NUMBER;i++) {
		scanf_s("%d", &a[i]);
		n = i;
		if (a[i]==1)
			break;
	}
	for (k = 0; k <= n; k++) {
		printf("%d ", a[k]);
	}
	printf("\n");
	for (i = 0; i < n;i++) {
		for (j = n; j > i;j--) {
			if (a[j - 1] > a[j]) {
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
			for (k = 0; k <= n; k++) {
				printf("%d ", a[k]);
			}
			printf("\n");
		}
		
		
	}
	return 0;
}

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	while(T--){
	    int A ,B ,C;
	    scanf("%d %d %d",&A,&B,&C);
	    int d=C-A;
	    printf("%d\n",d);
	}
	return 0;
}

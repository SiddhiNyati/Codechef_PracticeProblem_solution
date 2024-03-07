#include <stdio.h>

int main(void) {
	int t,i,a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    if(a<=b*c)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,d,i,total=0;
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",total*0.95);
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",total*0.85);
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",total*0.70);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c,d,i,total=0;
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",(total*0.95)+((total*0.95)*0.07));
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",(total*0.85)+((total*0.85)*0.07));
	scanf("%d",&a);
	total = total+a;
	printf("%.2f\n",(total*0.70)+((total*0.70)*0.07));
	return 0;
}

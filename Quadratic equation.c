#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c;
	printf("From ax^2 + bx + c\n");
	printf("Enter a b c : ");
	scanf("%f %f %f",&a,&b,&c);
	
	printf("x1 = %f\n",(-b+sqrt(pow(b,2)-(4*a*c)))/2);
	printf("x2 = %f",(-b-sqrt(pow(b,2)-(4*a*c)))/2);
	return 0;
	
}

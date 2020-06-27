#include <stdio.h>
#include <math.h>
int main(){
	float r1,r2,r3,r4,r5;
	float biggest;
	printf("input : ");
	scanf("%f %f %f %f %f",&r1,&r2,&r3,&r4,&r5);
	printf("biggest : ");
	if(r1>=r2&&r1>=r3&&r1>=r4&&r1>=r5){
		printf("%f",r1);
	}
	else if(r2>=r1&&r2>=r3&&r2>=r4&&r2>=r5){
		printf("%f",r2);
	}
	else if(r3>=r1&&r3>=r2&&r3>=r4&&r3>=r5){
		printf("%f",r3);
	}
	else if(r4>=r1&&r4>=r2&&r4>=r3&&r4>=r5){
		printf("%f",r4);
	}
	else if(r5>=r1&&r5>=r2&&r5>=r3&&r5>=r4){
		
		printf("%f",r5);
	}
	printf("\nsmallest : ");
	if(r1<=r2&&r1<=r3&&r1<=r4&&r1<=r5){
		printf("%f",r1);
	}
	else if(r2<=r1&&r2<=r3&&r2<=r4&&r2<=r5){
		printf("%f",r2);
	}
	else if(r3<=r1&&r3<=r2&&r3<=r4&&r3<=r5){
		printf("%f",r3);
	}
	else if(r4<=r1&&r4<=r2&&r4<=r3&&r4<=r5){
		printf("%f",r4);
	}
	else if(r5<=r1&&r5<=r2&&r5<=r3&&r5<=r4){
		
		printf("%f",r5);
	}
	return 0;
	
}

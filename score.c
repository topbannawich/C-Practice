#include <stdio.h>
int main(){
	float score;
	printf("input score: ");
	scanf("%f",&score);
	if(score>=50){
		printf("PASS");
	}else if(score <50){
		printf("FAIL");
	}
	return 0;
}

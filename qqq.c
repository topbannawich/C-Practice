#include <stdio.h>
int main(){
	int num1,num2=0;
	int count=1;
	
	scanf("%d %d",&num1,&num2);
	while(count!=num2+1){
		printf("%d*%d = %d\n",num1,count,num1*count);
		count++;
	}
	return 0;
	
}

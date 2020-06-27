#include <stdio.h>
#include <math.h>
int main(){
	int input=0;
	int i;
	
	while(input!=-999){
		printf("input:");
		scanf("%d",&input);
		for(i=1;i<=input;i++){
			if(input%i==0&&input!=i&&i!=1){
				printf("Not Prime Num\n");
			}
			if(input%i==0&&input==i&&i!=1){
				printf("Prime Num\n");
			}
		}
	}
	printf("Bye");
}

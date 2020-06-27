//5809650335 Bannawich Chaliewkriengkrai
#include <stdio.h>
int main(){
	int num=5;
	int i,j;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("--------------------------------------\n");
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("--------------------------------------\n");
	for(i=0;i<num;i++){
		for(j=i;j<num;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("--------------------------------------\n");
	for(i=0;i<num;i++){
		for(j=num;j>i;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("--------------------------------------\n");
	for(i=0;i<num;i++){
		for(j=num;j>i;j--){
			printf("%d ",i);
		}
		printf("\n");
	}

		
}

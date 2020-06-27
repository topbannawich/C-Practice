#include <stdio.h>

int main(){
	int num[5]={3,24,12,7,45};
	int tmp;
	int i,size=4;
	for(i=0;i<5;i++){
		tmp=num[i];
		num[size-i]=num[i];
		num[i]=tmp;
	}
	for(i=0;i<5;i++){
		printf("%d ",num[i]);
	}
}

#include <stdio.h>
int main(){
		int count =0;

		while(count!=26){
			if((65+count)!=65&&(65+count)!=69&&(65+count)!=73&&(65+count)!=79&&(65+count)!=85){
					printf("%c ",65+count);
			}
		
			count++;
		}
		printf("\n\n--------------\n\n");
		
		char ch='A';
		while(ch<='Z'){
			if(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U')
			{
				printf("%c ",ch);
			}
			ch++;
		}
		
	return 0;
}

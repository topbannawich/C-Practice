#include <stdio.h>
int main(){
	int amount_Coke=3,price_Coke=12;
	int amount_NoriLay=2,price_NoriLay=20;
	int amount_TissuePaper=1,price_TissuePaper=10;
	printf("Product\t\tUnit\tPrice\tTotal\n");
	printf("\"Coke\"\t\t%d\t%d\t%d\n",amount_Coke,price_Coke,amount_Coke*price_Coke);
	printf("\"Nori Lay\"\t%d\t%d\t%d\n",amount_NoriLay,price_NoriLay,amount_NoriLay*price_NoriLay);
	printf("\"Tissue Paper\"\t%d\t%d\t%d\n",amount_TissuePaper,price_TissuePaper,amount_TissuePaper*price_TissuePaper);	
	return 0;
	
}

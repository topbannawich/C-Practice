#include <stdio.h>
int main(){
	int num=1;
	int p=0;
	int t1=0,t2=0,t3=0;
	printf("Please Selec Your Favorite Lecturer\n");
	printf("1)Dr. Tanatorn\n2)Dr. Pokpong\n3)Dr.Wasit\nType -99 to Exit\n");
	printf("=======================\n");
	while(p!=-99){
		printf("Student#%d input Number or Type -99 to Exit:",num);
		scanf("%d",&p);
		if(p==1){
			t1++;
		}
		if(p==2){
			t2++;
		}
		if(p==3){
			t3++;
		}if(p>3||p<=0){
			printf("input again!!!!\n");
			continue;
		}
		num++;
		p==0;
	}
	printf("=======================\n");
	if(t1>=t2&&t1>=t3){
		printf("Your Favorite Lecturer is Dr.Tanatorn with Score %d Points\n",t1);
	}if(t2>=t1&&t2>=t3){
		printf("Your Favorite Lecturer is Dr.Tanatorn with Score %d Points\n",t2);
	}if(t3>=t1&&t3>=t2){
		printf("Your Favorite Lecturer is Dr.Tanatorn with Score %d Points\n",t3);
	}
		
	return 0;
}

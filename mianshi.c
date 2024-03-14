#include<stdio.h>
int main()

{
	int model=1;
	int i,m;
	float capacity[5]={0.8,2,3,4,5};
	
	for(i=0;i<5;i++)
	{
		if(capacity[i]==2 || capacity[i]==3){model=3;}
		else if(capacity[i]==4 || capacity[i]==5){model=5;}
			
		for(m=10;m<=180;m=m+10)
		{
			printf("注射剂量选择 %.1f/%dml \n",capacity[i],model);
			printf("注射次数选择 %d 次\n",m);
			printf("则单次注射剂量为： %.1f/%d = %.3f ml \n",capacity[i],m,capacity[i]/m);
			printf("\n");
			
		}		
	}
		
	return 0;
}
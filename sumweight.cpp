#include<stdio.h>
#include<math.h>
float sumweight(float x , float y){
float sum;
sum=x/(y*2);
return sum;

}

 main(){
	float a,b,result;
		char name[30];
	int age;
	printf("enter the name:");
	gets(name);
			printf("enter the weight :");
	scanf("%f",&a);
	printf("enter the high :");
		scanf(" %f",&b);

	result=sumweight(a,b);
	printf(" BMI = %1.f",result);
		printf(" \n the name is %s", name);
	if(result<18.5)
printf(" \n slim ");
else if(result > 18.5 && result<=24.9)
printf(" \n sutiable weight ");
else if(result>=25 && result<=29.9)
printf(" \n fat ");
else 
printf(" \n overweight ");
}

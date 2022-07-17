#include<stdio.h>
 
int main()
{
	int Radius;
	float Area;
	printf("Enter Radius of Circle");
	scanf("%d",&Radius);
        Area=3.14*Radius*Radius;
	printf("Area of circle is %f having radius %d ",Area,Radius);

	return 0;
}

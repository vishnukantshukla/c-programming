#include<stdio.h>
int main()
{ int choice;
	float radius = 0.0 , height =0.0,pie=3.14,circumference,volume,area ;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 : printf("Area of circle");
		        scanf("%f",&radius);
		        area= pie*(radius*radius);
		        printf("%f",area);
		        break ;
		        case 2 : printf("circumference of circle =\n");
		        scanf("%f",&radius);
		        circumference = 2*pie*radius;
		        printf("%d",circumference);
		        break ;
		        case 3: 
		        printf("volume of circle");
		        scanf("%f%f",&radius,&height);
		        volume = pie*radius * radius *height;
		        printf("%f",volume);
		        break;
		        default : printf("invalid input");
		        
	}
	return 0;

}

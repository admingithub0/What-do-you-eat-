#include<stdio.h>
main()
{
	printf("Enter random number from 1 to 5, \nI will suggest you food item and their price\n");
	printf("Enter number between 1 to 5\n");
	int choice=0;
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1:
			printf("Food item- pizza\n");
			printf("Price - Rs 239");
			break;
		case 3:
			printf("Food item- burger\n");
			printf("Price - Rs 129");
			break;
		case 5:
			printf("Food item- pasta\n");
			printf("Price - Rs 179");
			break;
		case 2:
			printf("Food item- french fries\n");
			printf("Price - Rs 99");
			break;
		case 4: 
		printf("Food item- sandwich\n");
			printf("Price - Rs 149");
			break;
		default : printf("Invalid input");
	}
	
}

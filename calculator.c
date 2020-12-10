//2020-12-10 Kariantti Laitala
// Testing
#include <stdio.h>
#include <math.h>

int add(int x, int y)
{
	return x + y;

}

int minus(int x, int y)
{
	return x - y;

}

int multiplication(int x, int y)
{
	return x * y;

}

int division(int x, int y)
{
	return x / y;

}


int main()
{
	int option = 0;
	
	while(option != 9 ){
		
		int first;
		int second;
		int result;

		printf("The ultimate C languange calculator\n");
		printf("1. +\n");
		printf("2. -\n");
		printf("3. *\n");
		printf("4. /\n");
		printf("9. quit\n");
		printf("Choose: \n");
		scanf("%d", &option);

		switch (option)
		{
			case 1:
				printf("1. digit:\n");
				scanf("%d", &first);
				printf("2. digit:\n");
				scanf("%d", &second);
				result = add(first,second);
				printf("Result %d + %d = %d\n\n", first, second, result);
				break;
			case 2:
				
				printf("1. digit:\n");
				scanf("%d", &first);
				printf("2. digit:\n");
				scanf("%d", &second);
				result = minus(first,second);
				printf("Result %d - %d = %d\n\n", first, second, result);

				break;
		
			case 3:
				
				printf("1. digit:\n");
				scanf("%d", &first);
				printf("2. digit:\n");
				scanf("%d", &second);
				result = multiplication(first,second);
				printf("Result %d * %d = %d\n\n", first, second, result);

				break;

			case 4:
				
				printf("1. digit:\n");
				scanf("%d", &first);
				printf("2. digit:\n");
				scanf("%d", &second);
				result = division(first,second);
				printf("Result %d / %d = %d\n\n", first, second, result);

				break;
			case 9:
				printf("Bye bye\n");
				break;
			default:
				printf("Please choose 1-4 or 9\n");
		}

	}

	return 0;
}


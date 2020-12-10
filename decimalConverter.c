#include <stdio.h>

void toBinary(int dec)
{
	int decimal = dec;
	int binary[100];
	int i=0;
	int j;

	while (decimal > 0) {
		
		binary[i] = decimal%2;
		decimal = decimal / 2; 
		i++;

	}
	j = i-1;
	while (j >= 0)
	{
		printf("%d", binary[j]);
		j--;
	}
	printf("\n");

}

void toHex(int dec)
{
	int decimal = dec;
	int hex[100];
	int i = 0;
	int j;
	

	while (decimal > 0) {
		hex[i] = decimal%16;
		decimal = decimal/16;
		i++;


	}
	j = i-1;
	while (j >= 0)
	{
		if (hex[j] > 9)
		{
			switch(hex[j])
			{
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
			}
		} else 
		{
				printf("%d",hex[j]);
		}
		j--;
	}
	printf("\n");

}


int main () 
{
	int decimal=174;
	int hex=35631;
	char choose;
	
	printf("Give a decimal number: \n");
	scanf("%d", &decimal);
	getchar();	
	printf("Convert to (H)ex or (B)inary: \n");
	scanf("%c", &choose);
	
	switch(choose)
	{
		case 'b':
			toBinary(decimal);
			break;
		case 'B':
			toBinary(decimal);
			break;
		case 'h':
			toHex(decimal);
			break;
		case 'H':
			toHex(decimal);
			break;
		default:
			printf("Invalid selection\n");
			break;
	}
	//toBinary(decimal);
	//toHex(hex);

	return 0;
}

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

void die(const char *message)
{
	if(errno)
	{
		perror(message);
	}
	else
	{
		printf("ERROR: %s\n", message);
	}
	exit(1);
}

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


int main (int argc, char *argv[]) 
{
	if(argc < 2) die("USAGE: decimalConverter <(H)ex or (B)in> <Decimal>");

	int decimal = atoi(argv[2]);
	char choose = argv[1][0];
	
	switch(choose)
	{
		case 'b':
		case 'B':
			toBinary(decimal);
			break;
		case 'h':
		case 'H':
			toHex(decimal);
			break;
		default:
			die("Invalid action. Only H=Hex and B=Binary\n");
	}

	return 0;
}

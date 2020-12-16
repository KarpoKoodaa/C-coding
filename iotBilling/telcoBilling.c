#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct Device {
//	int id;
	char firstname[20];
	char lastname[30];
//	char address[50];
//	int zipCode;
//	char city[20];
	};
int printMenu()
{
	int choose; 
	system("clear");
	printf("\t\t********** IOT BILLING SYSTEM ***********\n\n");
	printf("\t\t\t 1. Add new device\n");
	printf("\t\t\t 2. Search\n");
	printf("\t\t\t 3. Remove a device\n");
	printf("\t\t\t 4. Create billing rules\n");
	printf("\t\t\t 5. Quit\n");
	printf("\t\t\t Choose: \n");
	scanf("%d", &choose);

	
	return choose;


}

void addCustomer() {

	int n;
	int i;
	struct Customer *ptr;
	FILE *fp;
	char *filename = "user_data.txt";


	printf("\nEnter number of customer: \n");
	scanf("%d", &n);
	ptr = (struct Customer*) malloc(n*sizeof(struct Customer));

	for (i = 0; i < n; i++) {
		printf("First and Lastname:\n");
		scanf("%s %s", (ptr+i)->firstname, (ptr+i)->lastname); 

	}
	fp = fopen(filename,"a");
	printf("\n\t Adding \n");
	for (i=0; i<n;i++){
	
		printf("Name: %s %s \n", (ptr+i)->firstname, (ptr+i)->lastname);
		fprintf(fp,"%s %s\n", (ptr+i)->firstname, (ptr+i)->lastname);
	}
	fclose(fp);

	getchar();
	getchar();

}

void search() {

	int n;
	int choosing;
	struct Customer *ptr;

	printf("\nPrint Customer\n");
	printf("Customer number: \n");
	scanf("%d", &choosing);
	printf("\n Name: %s %s\n", (ptr+choosing)->firstname, (ptr+choosing)->lastname);
	getchar();
	getchar();
}

void deleteUser() {
	printf("\nDELETE\n");
	getchar();
	getchar();
}


int main ()
{
	int option;
	
	while (option != 5){

		option = printMenu();
		switch(option)
		{
			case 1:
				addCustomer();
				break;
			case 2:
				search();
				break;
			case 3:
				deleteUser();
				break;
			case 4:
				printf("\nBye Bye\n");
				break;
			default:
				printf("\t\t\tBad choice\n");
				break;
		}

		printf("\nreturned: %d\n", option);
	}
	return 0;


}

#include <stdlib.h>
#include <stdio.h>
#define VADA_PAV_PRICE_Rs 20
#define THEPLA_PRICE_Rs   35
#define KACHORI_PRICE_Rs  12
#define POHE_PRICE_Rs     15
#define RISE_PLATE_PRICE_Rs 60
#define SAMOSA_PRICE_Rs    16

int main(){

	int choice = 0;
	int totalPrice = 0;
	
	printf("Welcome to SAI restaurant!\n");
	printf("May I take your order? \n\n");

	do{
		printf("Menu: \n\n");
		printf("1. VADA_PAV    \t  Rs%.2d \n", VADA_PAV_PRICE_Rs);
		printf("2. THEPLA      \t  Rs%.2d \n", THEPLA_PRICE_Rs);
		printf("3. KACHORI     \t  Rs%.2d \n", KACHORI_PRICE_Rs);
		printf("4. POHE        \t  Rs%.2d \n", POHE_PRICE_Rs);
		printf("5. RISE_PLATE  \t  Rs%.2d \n", RISE_PLATE_PRICE_Rs);
		printf("6. SAMOSA      \t  Rs%.2d \n", SAMOSA_PRICE_Rs);
		printf("7. Exit\n\n");
		printf("Enter an item: ");
		scanf("%i", &choice);

		switch(choice){
		case 1:
			totalPrice += VADA_PAV_PRICE_Rs;
			break;
		case 2:
			totalPrice += THEPLA_PRICE_Rs;
			break;
		case 3:
			totalPrice += KACHORI_PRICE_Rs;
			break;
		case 4:
			totalPrice += POHE_PRICE_Rs;
			break;
		case 5:
			totalPrice += RISE_PLATE_PRICE_Rs;
			break;
		case 6:
			totalPrice += SAMOSA_PRICE_Rs;
			break;
		case 7:
			printf("Than you for ordering at Sai Restaurant! \n");
			break;
		default:
			printf("*** Error:  This is not on the menu. \n");
			break;
		}
		
		printf("Total so far: Rs%.2d\n\n", totalPrice);
	
	} while (choice != 7);

	printf("Your order is Rs%.2d \n\n", totalPrice);
	printf("Thank you for coming to Sai Restaurant.\n");
	printf("Have a nice day!.\n\n");

	system("pause");
}



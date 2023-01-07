#include<stdio.h>
#pragma warning(disable:4996)

void main()
{
	int date, day, month, year;
	do
	{	
		printf("\nEnter the Date: \t");
		scanf ("%d", &date);
		if (date <= 0 || date > 31)
		{
			printf("Invalid Date...!!!\n");
		}
	} while (date <= 0 || date > 31);

	do {
		printf("\nEnter the Month: \t");
		scanf ("%d", &month);

		if (month < 0 || month>12)
			printf("Invalid Month Entered...!!!\n");

	} while (month <= 0 || month>12);

	do {

		printf("\nEnter the Year: \t");
		scanf ("%d", &year);

		if (year <= 1900)
			printf("\nInvalid Year Entered...!!!\nYear should be Greater than 1900...\n");

	} while (year <= 1900);

	do {
		printf("\nEnter the Day Number (in Week): \t");
		scanf ("%d", &day);

		if (day <= 0 || day > 7)
			printf("Invalid Day Entered...!!!\n");

	} while (day <= 0 || day > 7);


	// Date Validation
	int r;
	if ((date >= 1 && date <= 31) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 9 || month == 11))
		r = 1;
	else if ((date > 0 && date < 31) && (month == 2 || month == 4 || month == 6 || month == 8 || month == 10 || month == 12))
	{
		r = 1;
		if ((month == 2) && (date < 29) && (year % 4 == 0 || year % 100 == 0 || year % 400 == 0))
			r = 2;
		else if ((month == 2) && (date >= 29) && (year % 4 == 0 || year % 100 == 0 || year % 400 == 0))
			r = 0;
	}
	else
		r = 0;

	// day of week Validation

	if (r > 0)
	{
		switch (day)
		{
		case 1: printf("\n\n\nMonday"); break;
		case 2: printf("\n\n\nTuesday"); break;
		case 3: printf("\n\n\nWednesday"); break;
		case 4: printf("\n\n\nThursday"); break;
		case 5: printf("\n\n\nFriday"); break;
		case 6: printf("\n\n\nSaturday"); break;
		case 7: printf("\n\n\nSunday"); break;
		}

		switch (month)
		{
		case 1: printf(", January"); break;
		case 2: printf(", Feburuy"); break;
		case 3: printf(", March"); break;
		case 4: printf(", April"); break;
		case 5: printf(", May"); break;
		case 6: printf(", June"); break;
		case 7: printf(", July"); break;
		case 8: printf(", August"); break;
		case 9: printf(", September"); break;
		case 10: printf(", October"); break;
		case 11: printf(", November"); break;
		case 12: printf(", December"); break;
		}


		// Date Printing


		if (date >= 11 && date <= 19)
		{
			printf(" %dth, %d", date, year);
		}
		else
		{
			int k = 10;
			while (k >= 10)
			{

				k = date % 10;
			}

			switch (k)
			{

			case 1:		printf(" %dst, %d", date, year); break;
			case 2:		printf(" %dnd, %d", date, year); break;
			case 3:		printf(" %drd, %d", date, year); break;
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 0:
			case 10:	printf(" %dth, %d", date, year); break;
			}
		}

		

		puts("");



	}
	else printf("\n\nInvalid Input....!!!!\n\n\n");
}

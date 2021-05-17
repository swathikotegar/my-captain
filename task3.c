#include<stdio.h>
main()
{
	char x;
	printf("\n enter the character to know the colors in rainbow:");
	scanf("%c",&x);
	switch(x)
	{
		case 'V':
		case 'v':printf("\nviolet is  one of the color in rainbow",x);
		break;
		case 'I':
		case 'i':printf("\nindigo is  one of the color in rainbow",x);
		break;
			case 'B':
		case 'b':printf("\nblue is  one of the color in rainbow",x);
		break;
			case 'G':
		case 'g':printf("\ngreen is  one of the color in rainbow",x);
		break;
			case 'Y':
		case 'y':printf("\nyellow is  one of the color in rainbow",x);
		break;
			case 'O':
		case 'o':printf("\norange is  one of the color in rainbow",x);
		break;	
			case 'R':
		case 'r':printf("\nred is  one of the color in rainbow",x);
		break;
		default:printf("\n this letter color is not there in rainbow",x);
		}
		return 0;
}

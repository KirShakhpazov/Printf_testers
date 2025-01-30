#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	long	tt;
	int	hh;
	
	tt = 0;
	hh = 0;
	printf("%c", '\n');
	while (hh < 128)
	{
		tt += ft_printf("%c%c", hh, ' ');
		printf("%c%c", hh, ' ' );
		hh++;
	}
	ft_printf("\n number of characters is %d\n", tt);
	tt = 0;
	printf("\n\n%c\n", 39);
	while (hh > 0)
	{
		tt += ft_printf("%c%c", hh, '\'' );
		printf("%c%c", hh, 32);
		hh--;
	}
	ft_printf("\n number of characters is %d\n", tt);
	tt = 0;
	hh = 0;
	tt += ft_printf("write a char %c,write a char %c,\nwrite a string %s,\nwrite a null string %s,\nwrite a dec %d,\nwrite an int %i,\nwrite an uns %u,\nwrite a hex %x,\nwrite a big hex 1 %X,\nwrite a big hex 2 %X,\nwrite a percent %%,\nwrite a pointer %p,\nwrite a pointer %p", 45, 'j', "1abCdeF9", 0, -25863, 239, -58239, 239, -65134, 65520, &hh, 0);
	ft_printf("\n\n number of characters is %d\n\n", tt);
	tt = 0;
	tt += ft_printf("\n\n  |BONUS|\nwrite a     char %10c,\nwrite a     char %12c,\nwrite a     string %-15s,\nwrite a truncated string %12.5s,\nwrite a truncated string %-24.12s,\nwrite a null string %s,\nwrite a     dec % 010d,\nwrite an    int %+25.10i,\nwrite a     dec % 010d,\nwrite an    int %+.10i,\nwrite an    uns %012u,\nwrite an    uns %.16u,\nwrite a     hex %#x,\nwrite a big hex 1 %#X,\nwrite a big hex 2 %#16X,\nwrite a percent %%,\nwrite a pointer %p,\nwrite a pointer %p\n", 'f', 38, "1abCdeF9", "1abCdeF9", "1abCdeF9", 0, 25863, 239, -25863, -239, -58239, -58239, -239, -65134, 65520, &tt, NULL);
	ft_printf("\n\n number of characters is %d\n\n", tt);
	tt = 0;
	tt += printf("\n\n   CONTROL\nwrite a     char %10c,\nwrite a     char %12c,\nwrite a     string %-15s,\nwrite a truncated string %12.5s,\nwrite a truncated string %-24.12s,\nwrite a null string %s,\nwrite a     dec % 010d,\nwrite an    int %+25.10i,\nwrite a     dec % 010d,\nwrite an    int %+.10i\nwrite an    uns %012u,\nwrite an    uns %.16u,\nwrite a     hex %#x,\nwrite a big hex 1 %#X,\nwrite a big hex 2 %#16X,\nwrite a percent %%,\nwrite a pointer %p,\nwrite a pointer %p\n", 'f', 38, "1abCdeF9", "1abCdeF9", "1abCdeF9", "(null)", 25863, 239, -25863, -239, -58239, -58239, -239, -65134, 65520, &tt, NULL);

	tt = 0;
	tt +=ft_printf("\n-%c-", 0);
	tt +=ft_printf("\n-%c-", 1);
	tt +=ft_printf("\n-%c-", 2);
	tt +=ft_printf("\n-%c-", 3);
	tt +=ft_printf("\n-%c-", 4);
	tt +=ft_printf("\n-%c-", 5);
	tt +=ft_printf("\n-%c-", 6);
	tt +=ft_printf("\n-%c-", 7);
	tt +=ft_printf("\n-%c-", 8);
	tt +=ft_printf("\n-%c-", 9);
	tt +=ft_printf("\n-%c-", 10);
	tt +=ft_printf("\n-%c-", 11);
	tt +=ft_printf("\n-%c-", 12);
	tt +=ft_printf("\n-%c-", 13);
	tt +=ft_printf("\n-%c-", 14);
	tt +=ft_printf("\n-%c-", 15);
	tt +=ft_printf("\n-%c-", 16);
	tt +=ft_printf("\n-%c-", 17);
	tt +=ft_printf("\n-%c-", 18);
	tt +=ft_printf("\n-%c-", 19);
	tt +=ft_printf("\n-%c-", 20);
	tt +=ft_printf("\n-%c-", 21);
	tt +=ft_printf("\n-%c-", 22);
	tt +=ft_printf("\n-%c-", 23);
	tt +=ft_printf("\n-%c-", 24);
	tt +=ft_printf("\n-%c-", 25);
	tt +=ft_printf("\n-%c-", 26);
	tt +=ft_printf("\n-%c-", 27);
	tt +=ft_printf("\n-%c-", 28);
	tt +=ft_printf("\n-%c-", 29);
	tt +=ft_printf("\n-%c-", 30);
	tt +=ft_printf("\n-%c-", 31);
	tt +=ft_printf("\n-%c-", 32);
	tt +=ft_printf("\n-%c-", 33);
	tt +=ft_printf("\n-%c-", 34);
	ft_printf("\n%d\n-----------\n", tt);
	
	tt = 0;
	tt +=printf("\n-%c-", 0);
	tt +=printf("\n-%c-", 1);
	tt +=printf("\n-%c-", 2);
	tt +=printf("\n-%c-", 3);
	tt +=printf("\n-%c-", 4);
	tt +=printf("\n-%c-", 5);
	tt +=printf("\n-%c-", 6);
	tt +=printf("\n-%c-", 7);
	tt +=printf("\n-%c-", 8);
	tt +=printf("\n-%c-", 9);
	tt +=printf("\n-%c-", 10);
	tt +=printf("\n-%c-", 11);
	tt +=printf("\n-%c-", 12);
	tt +=printf("\n-%c-", 13);
	tt +=printf("\n-%c-", 14);
	tt +=printf("\n-%c-", 15);
	tt +=printf("\n-%c-", 16);
	tt +=printf("\n-%c-", 17);
	tt +=printf("\n-%c-", 18);
	tt +=printf("\n-%c-", 19);
	tt +=printf("\n-%c-", 20);
	tt +=printf("\n-%c-", 21);
	tt +=printf("\n-%c-", 22);
	tt +=printf("\n-%c-", 23);
	tt +=printf("\n-%c-", 24);
	tt +=printf("\n-%c-", 25);
	tt +=printf("\n-%c-", 26);
	tt +=printf("\n-%c-", 27);
	tt +=printf("\n-%c-", 28);
	tt +=printf("\n-%c-", 29);
	tt +=printf("\n-%c-", 30);
	tt +=printf("\n-%c-", 31);
	tt +=printf("\n-%c-", 32);
	tt +=printf("\n-%c-", 33);
	tt +=printf("\n-%c-", 34);
	printf("\n%ld\n-----------\n", tt);
}

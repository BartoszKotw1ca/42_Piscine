#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void print_numbers(char *s)
{
	while(*s != '\0')
	{
		write(1, s, 1);
		s ++;
	}
}

void	int_to_string(int number)
{
	if (number < 0)
	{
		ft_putchar('-');
		number = - number;
		int_to_string(number);
	}
	else if (number >= 10)
	{
		int_to_string(number / 10);
		int_to_string(number % 10);
	}
	else
	{
		ft_putchar(number + '0');
	}
}

int main(void)
{
	int liczba = 6;
	
	//print_numbers("50");
	if (liczba <= 9)
	{
		ft_putchar(liczba + '0');
	}
	else if (liczba >= 10 && liczba < 100)
	{
		ft_putchar((liczba / 10) + '0');
		ft_putchar((liczba % 10) + '0');
	}
	else if (liczba >= 100 && liczba < 1000)
	{
		ft_putchar((liczba / 100) + '0');
		liczba %= 100;
		ft_putchar((liczba / 10) + '0');
		ft_putchar((liczba % 10) + '0');
	}
	else if (liczba >= 1000 && liczba < 10000)
	{
		ft_putchar((liczba / 1000) + '0');
		liczba %= 1000;
		ft_putchar((liczba / 100) + '0');
		liczba %= 100;
		ft_putchar((liczba / 10) + '0');
		ft_putchar((liczba % 10) + '0');
	}
	else if (liczba >= 10000 && liczba < 100000)
	{
		ft_putchar((liczba / 10000) + '0');
		liczba %= 10000;
		ft_putchar((liczba / 1000) + '0');
		liczba %= 1000;
		ft_putchar((liczba / 100) + '0');
		liczba %= 100;
		ft_putchar((liczba / 10) + '0');
		ft_putchar((liczba % 10) + '0');
	}
	
	
	int_to_string(5643);	
	

}



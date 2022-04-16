// 'o', ' ', '|', '-'
// Must copy character from pdf file
// and check ascii value, by printf("%d", character)
#include<unistd.h>
void	ft_putchar(char ch);

void    print_last_column(int chk_num);

void    print_middle_column(int chk_num);

void    rush(int x, int y);

int main(void)
{
    rush(0 , 0);
}

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	print_last_column(int chk_num)
{
	if (chk_num)
		ft_putchar('o');
	else
		ft_putchar('|');
}

void	print_middle_column(int chk_num)
{
	if (chk_num)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	row;
	int	column;
	int	chk_last_row;

	if (x < 0 || y < 0)
		return ;

	row = 0;
	while (row++ < y)
	{
		if (row == 1 || row == y)
			chk_last_row = 1;
		column = 0;
		while (column++ < x)
		{
			if (column == 1 || column == x)
				print_last_column(chk_last_row);
			else
				print_middle_column(chk_last_row);
		}
		chk_last_row = 0;
		ft_putchar('\n');
	}
}

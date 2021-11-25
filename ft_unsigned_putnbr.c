#include "printf.h"
 
 //符号なし整数を10進で出力する
 //unsigned int, unsigned short

int count_decimal (size_t number);//数える関数
int ft_putchar(unsigned char c); //出力する関数

size_t ft_unsigned_putnbr(unsigned int n)//符号なし
{ 
        size_t  len;

        len = count_decimal(n);
        if (n >= 10)
        {
                ft_unsigned_putnbr(n / 10);
                n = n % 10;
        }
        if (0 <= n && n < 9)
        {
                ft_putchar(n + '0');
        }
        return (len);
}
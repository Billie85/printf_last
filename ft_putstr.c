# include <limits.h>
 # include <stdio.h>
 # include <stdlib.h>
 # include <stdint.h>
 # include <stdarg.h>
 # include <unistd.h>
 
int    ft_putstr(char *n)
{
        int i;
        //-----やることリスト----
        //ifがnullだった時の処理を書く。
        //第一引数がnullだったら(null)っていう文字を出力させてあげる。(write何文字出力させるか）
        //ポインタの値は慣れといたほうがいい。
        //

        while (*n)
        {
                i++;
                write (1, n, 1);
                n++;
        }
        return (i);
}
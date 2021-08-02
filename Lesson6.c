#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

/*С помощью getchar() и putchar() организовать от пользователя ввод данных с клавиатуры и заменить все символы в строке на следующее:
маленькие буквы английского алфавита на символ 'l'
большие буквы английского алфавита на символ 'u'
цифры на 'd'
пробелы удалить
все прочие символы на символ '*'*/

int main(int argc, char **argv){

    char a;

    while((a = getchar())!= '\n'){
        if(a >= 'a' && a <= 'z' ){
            putchar('l');
        }else if(a >= 'A' && a <= 'Z' ){
            putchar('u');
        }else if(a >= '1' && a <= '9' ){
            putchar('d');
        }else if(a != ' '){
            putchar('*');
        }}
        printf("\n");
        return 0;
    }
            
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

/*Реализовать функцию, которая возвращает сумму цифр в
 переданной ей строке. str_sum_digits(const char *cs).
 Написать программу для проверки данной функции*/

void my_str_sum_digits(const char *cs);
void get_char(void);

int main(int argc, char **argv)
{char numbers[256] = { 0 };
    char c = 0;
    int i = 0;

 printf("Введите любые числа\n");
        
        while((numbers[i] = getchar()) != '\n')
        {
            if(numbers[i] >= '1' && c <= '9'){
                printf("%c\n", numbers[i]);
                i++;  
            }else{
                printf("%s", "В строке есть символы!\n");
                break;
            }
        }
        my_str_sum_digits(numbers);
    }



void my_str_sum_digits(const char *cs){

    int summ = 0;
    
    for(int i = 0; i<cs[256] ; i++){

         if(cs[i] != 0 && cs[i] != 10){
            summ += (cs[i] - 48);
            printf("%d\n", summ);
         }
    }
    
    printf("%d\n", summ);
}
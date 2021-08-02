#include <stdio.h>

/*Написать программу, которая просит пользователя ввести 2 десятичных числа и в качестве результата выводит сумму,
произведение, разность и частное этих двух чисел.
Реализовать с помощью ОДНОЙ функции(указатели)

пример заголовка функции: void multi_ariphmetics(int *summ, int *diff, int *mult, int *div)*/

void milti_ariphmetics(int *summ, int *diff, int *mult, int *div);


int main(int argc, char **argv){
    
    int first_number; 
    int second_number; 
    int summ;
    int diff;
    int mult;
    int div;

        printf("Введите первое число\n");
    scanf("%d", &first_number);
        
        printf("Введите второе число\n");
    scanf("%d", &second_number);
    
    summ = first_number + second_number;
    diff = first_number - second_number;
    mult = first_number * second_number;
    div = first_number / second_number;

     milti_ariphmetics(&summ, &diff, &mult, &div);

    return 0;
}
void milti_ariphmetics(int *summ, int *diff, int *mult, int *div){

    printf("summ = %d\ndiff = %d\nmult = %d\ndiv = %d\n", *summ, *diff, *mult, *div);

    
    
}
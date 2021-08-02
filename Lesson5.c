#include <stdio.h>

int input;

int first_Function_Scan(void);        //Функция принимиющая значения из стандартного потока ввода
int second_Function_While(int input); //Функция while, для вывода простых чисел до указанного в вводе числа
int third_Function_For(int input);    //Функция for, для вывода простых чисел до указанного в вводе числа

int main(int argc, char **argv){

    first_Function_Scan();
    second_Function_While(input);
    third_Function_For(input);
    return 0;

}
    int first_Function_Scan(void){

        scanf("%d", &input);
        return input;

    }
    int second_Function_While(int input){
    
        
        int count = 0;
        printf("Out function while\n");

        while(input != count) {
            count += 1;  
            printf("%d ", count); 
        }
        printf("\n");
    }    
    int third_Function_For(int input){
    
        printf("Out function for\n");

        for(int i=1; i<=input; i++){
            printf("%d ", i);
        }
        printf("\n");
    }    
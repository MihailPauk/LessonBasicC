#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
/*На стандартном потоке ввода задан текст, состоящий из латинских букв
 и цифр и оканчивающийся точкой. На стандартный поток вывода вывести цифру,
наиболее часто встречающуюся в тексте (если таких цифр несколько,
 вывести любую из них).*/
void get_char_array(void);
int array_get_max(int counters[], int sz);


int main(int argc, char **argv)
{

get_char_array();

return 0;

}

void get_char_array(void){

    
    int counters[256] = { 0 };
    char c = 0;
    char a;
    
        printf("Введите любые символы\n");
        while((c = getchar()) != '.'){
            counters[c]++;
        }

        a = array_get_max(counters, 256);
            printf("Чаще всего попадающийся символ - %c \n", a);
        
}
int array_get_max(int counters[], int sz)
{
    int max = counters[0];
    int ctr;
    int i;

        for (ctr = 0; ctr < sz; ctr++) {

            if (counters[ctr] > max)
            max = counters[ctr];
            }

        for(i = 0; i < sz; i++){
               
            if(counters[i] == max){
                return i;
            }
        }
            return 0;
}
                    
                    
                    
            
            
        
        

   
    
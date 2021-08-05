#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <math.h>

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
    

        while((c = getchar()) != '.'){
            counters[c]++;
        }
        for (int i = 0; i<256;i++){
            printf("%d = %d\n", i, counters[i]);
        }
        a = array_get_max(counters, 256);
            printf("%c = \n", a);
        
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
                    
                    
                    
            
            
        
        

   
    
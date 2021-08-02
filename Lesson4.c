#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{

uint32_t a;
int8_t b;
uint32_t result;

printf("Enter number and shift value:\n");
scanf("%%PRId32" "%%PRId8", &a, &b);

    if (b > 0){

        printf("0x%.16X\n", result = a >> b); 
    
    }else if(b < 0){
        
        printf("0x%.16X\n", result = a << b);

    }else{
        
        printf("second number = 0\n");

    }
return 0;
}
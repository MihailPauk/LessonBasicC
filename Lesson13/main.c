
#include "func.h"

void help();
int main(int argc, char **argv){
    
    
    int ret;
  
    if (argc == 1) {
        help();
        return 0;
    }

    while ((ret = getopt(argc, argv, "hf:m:")) != -1) {
        switch(ret) {
            /* Print help */
            case 'h' : {
                help();
                return 0;
            }
            
            case 'f' : { 
                Temperature_per_year(argc, argv);
                break;
            }

            case 'm' : { 
                Temperature_per_month(argc, argv);
                break;
            }
           
            
        }      
        
    }
}
void help(){
printf("Программа выводит среднее, минимальное и максимальное значение температуры за год или месяц.\n");
printf("Для получения значения температуры за год введите: -f <Год> <Имя файла>\n");
printf("Для получения значения температуры за месяц введите: -m <Месяц> <Имя файла>\n");
}
  
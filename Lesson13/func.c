
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include <sys/stat.h>
#include <malloc.h>

#include "func.h"

struct meas {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int temp;
  };

int Temperature_per_year(int argc, char**argv)
  {
    int temp;
    int sum_temp = 0;
    int i = 0;
    int min_temp = 100;
    int max_temp = -100;
    int number_year = atoi(argv[2]);
    
    if (argc < 4) {
      return -1;
    }
    
    char *file = argv[3];
    
    FILE *f = fopen(file, "r");
    if (!f) {
      printf("Error opening file\n");
      return -3;
    }

    while (!feof(f)) {
        struct meas m;
        char line[100];
        
        
        int get_line = fscanf(f, "%d;%d;%d;%d;%d;%d",
            &m.year,
            &m.month,
            &m.day,
            &m.hour,
            &m.minute,
            &m.temp);
             
            if(get_line != 6){
                fscanf(f, "%s\n", line);
                printf("\x1b[31mError read line %d: %s\x1b[0m\n",i, line);
                continue;
            }
            if(m.year != number_year){
              continue;
            }
            if(m.temp < min_temp){
                min_temp = m.temp;
            }
            if(m.temp > max_temp){
                max_temp = m.temp;
            }
            sum_temp += m.temp;
            i++;
            
    }
            
    temp = sum_temp / i;
          
    printf("Средняя температура за год - %d;\n",temp);
    printf("Минимальная температура за год - %d;\n",min_temp);
    printf("Максимальная температура за год - %d;\n",max_temp);

    fclose(f);

 return 0;
}

int Temperature_per_month(int argc, char**argv){
    int month;
    int temp;
    int sum_temp = 0;
    int i = 0;
    int min_temp = 100;
    int max_temp = -100;
    int number_month = atoi(argv[2]);
    
    if (argc < 4) {
      return -1;
    }
    
   
    
    char *file = argv[3];

    FILE *f = fopen(file, "r");
    if (!f) {
      printf("Error opening file\n");
      return -4;
    }

    while (!feof(f)) {
        struct meas m;
        char line[100];
        
        
        int get_line = fscanf(f, "%d;%d;%d;%d;%d;%d",
            &m.year,
            &m.month,
            &m.day,
            &m.hour,
            &m.minute,
            &m.temp);
             
            if(get_line != 6){
                fscanf(f, "%s\n", line);
                printf("\x1b[31mError read line: %s\x1b[0m\n", line);
                continue;
            }
            if(m.month != number_month){
              continue;
            }
            if(m.temp < min_temp){
                min_temp = m.temp;
            }
            if(m.temp > max_temp){
                max_temp = m.temp;
            }
            sum_temp += m.temp;
            i++;
            month = m.month;
            
    }
            
    temp = sum_temp / i;
          
    printf("Средняя температура за %d месяц- %d;\n",number_month, temp);
    printf("Минимальная температура за %d месяц - %d;\n",number_month, min_temp);
    printf("Максимальная температура за %d месяц - %d;\n",number_month, max_temp);

    fclose(f);

 return 0;

}


#include "test.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include "test.h"

int print_copy_fyle(void)
{
    char file_name_1[100] = { 0 };
    char file_name_2[100] = { 0 };
    char line[250];
    int number;
    size_t size;
    FILE *file_1;
    FILE *file_2;
    
    printf("Введите название файла который хотите скопировать: \n");
    scanf("%s", file_name_1);

    file_1 = fopen(file_name_1, "rb");
    
    if(file_1 == NULL)
    {
        printf("Не удалось открыть файл\n");
        return 0;
    }
    
    fread(&number, sizeof(int), 1, file_1);
    
    
    fseek(file_1, 0, SEEK_END);
    size = ftell(file_1);
    

    scanf("%s", file_name_2);
    file_2 = fopen(file_name_2, "wb");
    
    if(file_2 == NULL)
    {
        printf("Не удалось открыть файл\n");
        return 0;
    }
    
    fwrite(&number, sizeof(int), 1, file_2);

    printf("Имя первого файла - %s\nИмя скопированного файла - %s\nРазмер файла %ld байт\n", file_name_1, file_name_2, size);

    fclose(file_1);
    fclose(file_2);

    return 0;

    
}
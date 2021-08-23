#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdbool.h>

#include "files.h"

extern char *optarg;
extern int optind, opterr, optopt;

void help(void);

int main(int argc, char **argv)
{


    int ret;
    bool print_all = false;
    bool recurse = false;
    char *dir;

    if (argc == 1) {
        help();
        return 0;
    }

    while ((ret = getopt(argc, argv, "ha:d:f")) != -1) {
        switch(ret) {
            /* Print help */
            case 'h' : {
                help();
                return 0;
            }
            /* Print all contents(including .. and .) */
            case 'a' : {
                dir = optarg;
                print_all = true;
                break;
            }
            /* Specify directory to open */
            case 'd' : {
                dir = optarg;
                break;
            }
            case 'f' : {
                recurse = true;
                break;
            }
        }
    }

    print_dir_contents(dir, print_all, recurse);

}


void help(void)
{
    printf("Полный вызов листинга -а<Путь к директории>\nВызов листинга без точек -d <Путь к директории>\nРекурсивный вызов листинга -f\n");
}
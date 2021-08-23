#include "files.h"
#include <sys/stat.h>

void print_type(struct stat *st)
{
    switch (st->st_mode & S_IFMT) {
       case S_IFBLK:  printf("block device ");            break;
       case S_IFCHR:  printf("character device ");        break;
       case S_IFDIR:  printf("directory ");               break;
       case S_IFIFO:  printf("FIFO/pipe ");               break;
       case S_IFLNK:  printf("symlink ");                 break;
       case S_IFREG:  printf("regular file ");            break;
       case S_IFSOCK: printf("socket ");                  break;
       default:       printf("unknown? ");                break;
    }
}

void print_dir_contents(const char *strdir, bool all, bool recurse)
{
    DIR *dir;
    struct dirent *entry;
    struct stat file_info;
    char *full_name;

    full_name = (char*)malloc(255);

    dir = opendir(strdir);

    if (dir != NULL) {
        while ((entry = readdir(dir)) != NULL) {
            if (entry->d_name[0] == '.' && !all) {
                continue;
            }
            memset(full_name, 0, 255);
            sprintf(full_name, "%s/%s", strdir, entry->d_name);
            full_name[254] = '\0';
            if (stat(full_name, &file_info) == 0) {
                print_type(&file_info);
                printf("sz %10ld ", file_info.st_size);
                if (recurse) {
                    print_dir_contents(full_name, all, recurse);
                }
            }
            printf(" %s\n", full_name);
        }
        closedir(dir);
    }

    free(full_name);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>

#include "files.h"

void ls_files(const char *path)
{
    
    print_dir_contents(path);

}
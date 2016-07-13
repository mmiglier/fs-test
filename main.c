#include <stdio.h>

#include "fs_test.h"


int main(int argc, char *argv[])
{
    int result;
    printf("Start testing\n");

    if (fs_test_run(100000)) {
        printf("PASS\n");
        result = 0;
    } else {
        printf("FAIL\n");
        result = -1;
    }

    printf("Testing finished\n");
    return result;
}

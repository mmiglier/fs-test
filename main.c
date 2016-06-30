#include <stdio.h>

#include "fs_test.h"


int main(int argc, char *argv[])
{
    printf("Start testing\n");

    if (fs_test_run(100000)) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

    printf("Testing finished\n");
    return 0;
}

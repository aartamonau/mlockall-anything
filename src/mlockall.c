/* -*- mode: c; c-basic-offset: 4; tab-width: 4; ; indent-tabs-mode: nil; -*- */

#include <stdio.h>
#include <sys/mman.h>

__attribute__((constructor))
void mlockall_init(void)
{
    if (mlockall(MCL_CURRENT | MCL_FUTURE) != 0) {
        perror("mlockall failed");
    }
}

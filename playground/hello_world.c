#include <stdio.h>
#include "omp.h"

int main() {

    omp_set_num_threads(4);
    int i, chunk;
    chunk = 2;
#pragma omp parallel 
    {    
        int ID = omp_get_thread_num();
#pragma omp for schedule (static, chunk) 
        for (i=0; i<16; ++i) { 
            printf("Thread #%d is processing i=%d\n", ID, i);
        }
    }
}

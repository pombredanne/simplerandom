
#include <inttypes.h>
#include <stdio.h>

#include "simplerandom.h"


int main (void)
{
    SimpleRandomCong_t  cong;
    SimpleRandomMWC_t   mwc;
    uint32_t            i;
    uint32_t            k;


    simplerandom_cong_seed(&cong, UINT32_C(2524969849));
    for (i = 0; i < 1000000; i++)
    {
        k = simplerandom_cong_next(&cong);
    }
    printf("%"PRIu32"\n", k - UINT32_C(1529210297));

    simplerandom_mwc_seed(&mwc, UINT32_C(2374144069), UINT32_C(1046675282));
    for (i = 0; i < 1000000; i++)
    {
        k = simplerandom_mwc_next(&mwc);
    }
    printf("%"PRIu32"\n", k - UINT32_C(904977562));
}


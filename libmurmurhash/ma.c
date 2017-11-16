#include <stdio.h>
#include <string.h>

#include "MurmurHash1.h"
#include "MurmurHash2.h"

int main()
{

    char *key = "MurMur";
    int len = strlen(key);
    uint32_t seed = 64;

    uint32_t out = MurmurHash1(key, len, seed);

    printf("%x\n", out);

    uint32_t out2 = MurmurHash2(key, len, seed);
    printf("%x\n", out2);
    uint32_t out3 = MurmurHash64A(key, len, seed);
    printf("%x\n", out3);
}

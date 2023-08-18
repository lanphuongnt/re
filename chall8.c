/*
// Source
__int64 __fastcall sub_140001000(__int64 a1)
{
    int i; // [rsp+0h] [rbp-18h]

    for ( i = 0; (unsigned __int64)i < 21; ++i )
    {
        if ( (unsigned __int8)(-5 * *(_BYTE *)(a1 + i)) != byte_140003000[i] )
        return 0i64;
    }
    return 1i64;
}

*/
//byte_20[a1[i]] = byte[i]


#include <stdio.h>

const unsigned char byte[21] = {0xac, 0xf3, 0xc, 0x25, 0xa3, 0x10, 0xb7, 0x25, 0x16, 0xc6, 0xb7, 0xbc, 0x7, 0x25, 0x2, 0xd5, 0xc6, 0x11, 0x7, 0xc5, 0x0};

int brute(char aByte){
    for (int i = 0; i < 256; i++){
        if ((char)((0xfb * i) & 0xff) == aByte){
            return i;
        }
    }
    puts("Nope!\n");
    return -1;
}

void solve(){
    unsigned char a1[21];
    for (int i = 0; i < 21; i++){
        a1[i] = brute(byte[i]);
    }
    puts(a1);
}

void main(void){
    solve();
}
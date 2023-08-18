/*
// Source
__int64 __fastcall sub_140001000(__int64 a1)
{
  int i; // [rsp+0h] [rbp-18h]

  for ( i = 0; (unsigned __int64)i < 31; ++i )
  {
    if ( (i ^ (unsigned __int8)__ROL1__(*(_BYTE *)(a1 + i), i & 7)) != byte_140003000[i] )
      return 0i64;
  }
  return 1i64;
}

*/
//byte_20[a1[i]] = byte[i]


#include <stdio.h>

const unsigned char byte[32] = {0x52, 0xdf, 0xb3, 0x60, 0xf1, 0x8b, 0x1c, 0xb5, 0x57, 0xd1, 0x9f, 0x38, 0x4b, 0x29, 0xd9, 0x26, 0x7f, 0xc9, 0xa3, 0xe9, 0x53, 0x18, 0x4f, 0xb8, 0x6a, 0xcb, 0x87, 0x58, 0x5b, 0x39, 0x1e, 0x0};

unsigned char rotate_right(unsigned char byte, int bit){
    return ((byte << (8 - bit)) | (byte >> bit));
}

void solve(){
    unsigned char a1[31];
    for (int i = 0; i < 31; i++){
        a1[i] = rotate_right(byte[i] ^ i, i & 7);
    }
    puts(a1);
}

void main(void){
    solve();
}
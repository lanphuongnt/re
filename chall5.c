#include <stdio.h>

const unsigned char byte[24] = "\xad\xd8\xcb\xcb\x9d\x97\xcb\xc4\x92\xa1\xd2\xd7\xd2\xd6\xa8\xa5\xdc\xc7\xad\xa3\xa1\x98L\x00";

void solve(){
    unsigned char a1[25];
    a1[24] = 0;
    for (int i = 23; i >= 0; i--){
        a1[i] = byte[i] - a1[i + 1];
    }
    puts(a1);
}

void main(void){
    solve();
}
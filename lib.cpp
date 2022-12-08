#include "lib.h"

bool lettere( char b=0) {
    int i=0;
    char a[51];
    bool v = true, f = false;

    a[0] = 'a';
    char risultato = 'a';
    for ( i = 1; i < 26; i++) {
        risultato++;
        a[i] = risultato;
    }
    a[26] = 'A';
    risultato = 'A';
    for ( i = 27; i < 51; i++) {
        risultato++;
        a[i] = risultato;
    }
    if(a[0]==b || a[1]==b || a[2]==b || a[3]==b || a[4]==b || a[5]==b || a[6]==b || a[7]==b || a[8]==b || a[9]==b || a[10]==b || a[11]==b || a[12]==b || a[13]==b || a[14]==b || a[15]==b || a[16]==b || a[17]==b || a[18]==b || a[19]==b || a[20]==b || a[21]==b || a[22]==b || a[23]==b || a[24]==b || a[25]==b || a[26]==b || a[27]==b || a[28]==b || a[29]==b || a[30]==b || a[31]==b || a[32]==b || a[33]==b || a[34]==b || a[35]==b || a[36]==b || a[37]==b || a[38]==b || a[39]==b || a[40]==b || a[41]==b || a[42]==b || a[43]==b || a[44]==b || a[45]==b || a[46]==b || a[47]==b || a[48]==b || a[49]==b || a[50]==b || a[51]==b) return v;
    else return f;
}

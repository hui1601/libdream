#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *arr1[] = {"adrp.ldrsh.ldnp", "ldpsw", "umax", "stnp.rsubhn", "sqdmlsl", "uqrshl.csel", "sqshlu", "umin.usubl.umlsl", "cbnz.adds", "tbnz", "usubl2", "stxr", "sbfx", "strh", "stxrb.adcs", "stxrh", "ands.urhadd", "subs", "sbcs", "fnmadd.ldxrb.saddl", "stur", "ldrsb", "strb", "prfm", "ubfiz", "ldrsw.madd.msub.sturb.ldursb", "ldrb", "b.eq", "ldur.sbfiz", "extr", "fmadd", "uqadd", "sshr.uzp1.sttrb", "umlsl2", "rsubhn2.ldrh.uqsub", "uqshl", "uabd", "ursra", "usubw", "uaddl2", "b.gt", "b.lt", "sqshl", "bics", "smin.ubfx", "smlsl2", "uabdl2", "zip2.ssubw2", "ccmp", "sqdmlal", "b.al", "smax.ldurh.uhsub", "fcvtxn2", "b.pl"},
       *arr2[] = {"saddl", "urhadd", "ubfiz.sqdmlsl.tbnz.stnp", "smin", "strh", "ccmp", "usubl", "umlsl", "uzp1", "sbfx", "b.eq", "zip2.prfm.strb", "msub", "b.pl", "csel", "stxrh.ldxrb", "uqrshl.ldrh", "cbnz", "ursra", "sshr.ubfx.ldur.ldnp", "fcvtxn2", "usubl2", "uaddl2", "b.al", "ssubw2", "umax", "b.lt", "adrp.sturb", "extr", "uqshl", "smax", "uqsub.sqshlu", "ands", "madd", "umin", "b.gt", "uabdl2", "ldrsb.ldpsw.rsubhn", "uqadd", "sttrb", "stxr", "adds", "rsubhn2.umlsl2", "sbcs.fmadd", "usubw", "sqshl", "stur.ldrsh.smlsl2", "ldrsw", "fnmadd", "stxrb.sbfiz", "adcs", "bics.ldrb", "ldursb", "subs.uhsub", "ldurh", "uabd", "sqdmlal"};
char* dream(int param) {
    const size_t a1 = strlen(arr1[param % 54]), a2 = strlen(arr2[(param + 31) % 57]);
    char *p = (char *)malloc((a1 + a2 + 2) * sizeof(char));
    strcpy(p, arr1[param % 54]);
    strcat(p ,".");
    strcat(p, arr2[(param + 31) % 57]);
    return p;
}
int main() {
    for (int i = 1001; i <= 3000; i++) {
        char *p = dream(i);
        printf("%d: %s\n", i, p);
        free(p);
    }
    return 0;
}

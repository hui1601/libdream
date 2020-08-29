#include <bits/stdc++.h>
using namespace std;
char *arr1[] = {"adrp.ldrsh.ldnp", "ldpsw", "umax", "stnp.rsubhn", "sqdmlsl", "uqrshl.csel", "umin.usubl.umlsl", "cbnz.adds", "tbnz", "usubl2", "stxr", "sbfx", "strh", "stxrb.adcs", "stxrh", "ands.urhadd", "subs", "sbcs"},
*arr2[] = {"fnmadd.ldxrb.saddl", "stur", "ldrsb", "prfm", "ubfiz", "ldrsw.madd.msub.sturb.ldursb", "b.eq", "ldur.sbfiz", "extr", "uqadd", "sshr.uzp1.sttrb", "rsubhn2.ldrh.uqsub", "uqshl", "uabd", "ursra"};
int main(){
    int iVar1;
    size_t sVar2;
    size_t sVar3;
    char *__dest;
    int64_t uVar4;
    int64_t prefixes = 0x00112008, suffixes = 0x001121b8;
    char *__s;
    char *__s_00;
    int param_3 = 0xcad63;
    iVar1 = param_3 + 0x1f;
    int64_t cul = (param_3 + (int64_t) ((param_3 / 0x36 + (param_3 >> 0x1f)) - (int)((long long)param_3 * 0x4bda12f7 >> 0x3f)) * -0x36) * 8;
    printf("%s.", arr1[0] + cul + 6);
    cul = (long long)(iVar1 + ((iVar1 / 0x39 + (iVar1 >> 0x1f)) - (int)((long long)iVar1 * 0x8fb823ef >> 0x3f)) * -0x39) * 8;
    printf("%s\n", arr2[0] + cul - 1);
    return 0;
}

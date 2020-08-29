#include <stdio.h>
char *arr1[] = {"adrp.ldrsh.ldnp", "ldpsw", "umax", "stnp.rsubhn", "sqdmlsl", "uqrshl.csel", "umin.usubl.umlsl", "cbnz.adds", "tbnz", "usubl2", "stxr", "sbfx", "strh", "stxrb.adcs", "stxrh", "ands.urhadd", "subs", "sbcs"},
*arr2[] = {"fnmadd.ldxrb.saddl", "stur", "ldrsb", "prfm", "ubfiz", "ldrsw.madd.msub.sturb.ldursb", "b.eq", "ldur.sbfiz", "extr", "uqadd", "sshr.uzp1.sttrb", "rsubhn2.ldrh.uqsub", "uqshl", "uabd", "ursra", "usubw", "uaddl2", "b.gt", "b.lt", "sqshl", "bics", "smin.ubfx", "uabdl2", "zip2.ssubw2", "ccmp", "sqdmlal", "b.al", "smax.ldurh.uhsub", "fcvtxn2", "b.pl", "ubfiz.sqdmlsl.tbnz.stnp", "smin", "usubl", "uzp1", "zip2.prfm.strb", "msub", "stxrh.ldxrb", "uqrshl.ldrh", "cbnz", "sshr.ubfx.ldur.ldnp", "adrp.sturb", "smax", "uqsub.sqshlu", "ands", "umin", "ldrsb.ldpsw.rsubhn", "rsubhn2.umlsl2", "sbcs.fmadd", "stur.ldrsh.smlsl2", "ldrsw", "fnmadd", "stxrb.sbfiz", "bics.ldrb", "subs.uhsub", "ldurh"};
int main(){
    int iVar1;
    size_t sVar2;
    size_t sVar3;
    char *__dest;
    long long uVar4;
    long long prefixes = 0x00112008, suffixes = 0x001121b8;
    char *__s;
    char *__s_00;
    int param_3 = 0xcad63;
    iVar1 = param_3 + 0x1f;
    long long cul = (param_3 + (long long) ((param_3 / 0x36 + (param_3 >> 0x1f)) - (int)((long long)param_3 * 0x4bda12f7 >> 0x3f)) * -0x36) * 8;
    printf("%s.", arr1[0] + cul + 6);//SomeThingWrong
    cul = (long long)(iVar1 + ((iVar1 / 0x39 + (iVar1 >> 0x1f)) - (int)((long long)iVar1 * 0x8fb823ef >> 0x3f)) * -0x39) * 8;
    printf("%s\n", arr2[0] + cul - 1);//SomeThingWrong2
    return 0;
}

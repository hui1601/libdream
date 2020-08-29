#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
string arr1[] = {"adrp.ldrsh.ldnp", "ldpsw", "umax", "stnp.rsubhn", "sqdmlsl", "uqrshl.csel", "sqshlu", "umin.usubl.umlsl", "cbnz.adds", "tbnz", "usubl2", "stxr", "sbfx", "strh", "stxrb.adcs", "stxrh", "ands.urhadd", "subs", "sbcs", "fnmadd.ldxrb.saddl", "stur", "ldrsb", "strb", "prfm", "ubfiz", "ldrsw.madd.msub.sturb.ldursb", "ldrb", "b.eq", "ldur.sbfiz", "extr", "fmadd", "uqadd", "sshr.uzp1.sttrb", "umlsl2", "rsubhn2.ldrh.uqsub", "uqshl", "uabd", "ursra", "usubw", "uaddl2", "b.gt", "b.lt", "sqshl", "bics", "smin.ubfx", "smlsl2", "uabdl2", "zip2.ssubw2", "ccmp", "sqdmlal", "b.al", "smax.ldurh.uhsub", "fcvtxn2", "b.pl"},
arr2[] = {"saddl", "urhadd", "ubfiz.sqdmlsl.tbnz.stnp", "smin", "strh", "ccmp", "usubl", "umlsl", "uzp1", "sbfx", "b.eq", "zip2.prfm.strb", "msub", "b.pl", "csel", "stxrh.ldxrb", "uqrshl.ldrh", "cbnz", "ursra", "sshr.ubfx.ldur.ldnp", "fcvtxn2", "usubl2", "uaddl2", "b.al", "ssubw2", "umax", "b.lt", "adrp.sturb", "extr", "uqshl", "smax", "uqsub.sqshlu", "ands", "madd", "umin", "b.gt", "uabdl2", "ldrsb.ldpsw.rsubhn", "uqadd", "sttrb", "stxr", "adds", "rsubhn2.umlsl2", "sbcs.fmadd", "usubw", "sqshl", "stur.ldrsh.smlsl2", "ldrsw", "fnmadd", "stxrb.sbfiz", "adcs", "bics.ldrb", "ldursb", "subs.uhsub", "ldurh", "uabd", "sqdmlal"};
string dream(int param_3){
    int iVar1;
    string result;
    iVar1 = param_3 + 31;
    long long cul = (long long) (param_3 + ((param_3 / 0x36 + (param_3 >> 0x1f)) - (int)((long long)param_3 * 0x4bda12f7 >> 0x3f)) * -0x36);
    long long cul2 = (long long)(iVar1 + ((iVar1 / 0x39 + (iVar1 >> 0x1f)) - (int)((long long)iVar1 * 0x8fb823ef >> 0x3f)) * -0x39);
    result = arr1[cul] + "." + arr2[cul2];
    return result;
}
int main(){
    for(int i = 1001; i <= 3000; i++){
        printf("%d : %s\n", i, dream(i).c_str());
    }
    return 0;
}

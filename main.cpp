#include <stdio.h>
char arr[] = "adrp.ldrsh.ldnp\0ldpsw\0umax\0stnp.rsubhn\0sqdmlsl\0uqrshl.csel\0umin.usubl.umlsl\0cbnz.adds\0tbnz\0usubl2\0stxr\0sbfx\0strh\0stxrb.adcs\0stxrh\0ands.urhadd\0subs\0sbcs\0fnmadd.ldxrb.saddl\0stur\0ldrsb\0prfm\0ubfiz\0ldrsw.madd.msub.sturb.ldursb\0b.eq\0ldur.sbfiz\0extr\0uqadd\0sshr.uzp1.sttrb\0rsubhn2.ldrh.uqsub\0uqshl\0uabd\0ursra\0usubw\0uaddl2\0b.gt\0b.lt\0sqshl\0bics\0smin.ubfx\0uabdl2\0zip2.ssubw2\0ccmp\0sqdmlal\0b.al\0smax.ldurh.uhsub\0fcvtxn2\0b.pl\0ubfiz.sqdmlsl.tbnz.stnp\0smin\0usubl\0uzp1\0zip2.prfm.strb\0msub\0stxrh.ldxrb\0uqrshl.ldrh\0cbnz\0sshr.ubfx.ldur.ldnp\0adrp.sturb\0smax\0uqsub.sqshlu\0ands\0umin\0ldrsb.ldpsw.rsubhn\0rsubhn2.umlsl2\0sbcs.fmadd\0stur.ldrsh.smlsl2\0ldrsw\0fnmadd\0stxrb.sbfiz\0bics.ldrb\0subs.uhsub\0ldurh";
int main(){
    int iVar1;
    size_t sVar2;
    size_t sVar3;
    char *__dest;
    long long uVar4;
    char *__s;
    char *__s_00;
    int param_3 = 0xcad63;
    int prefix;
    iVar1 = param_3 + 0x1f;
    long long cul = (param_3 + (long long) ((param_3 / 0x36 + (param_3 >> 0x1f)) - (int)((long long)param_3 * 0x4bda12f7 >> 0x3f)) * -0x36) * 8;
    printf("%s.", arr + cul + 6);//IDK why
    cul = (long long)(iVar1 + ((iVar1 / 0x39 + (iVar1 >> 0x1f)) - (int)((long long)iVar1 * 0x8fb823ef >> 0x3f)) * -0x39) * 8;
    printf("%s\n", arr + cul + 151);
    return 0;
}

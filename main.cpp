#include <bits/stdc++.h>
using namespace std;
char *arr1[] = {"adrp.ldrsh.ldnp", "ldpsw", "umax", "stnp.rsubhn", "sqdmlsl", "uqrshl.csel", "umin.usubl.umlsl", "cbnz.adds", "tbnz", "usubl2", "stxr", "sbfx", "strh", "stxrb.adcs", "stxrh", "ands.urhadd", "subs", "sbcs"},
*arr2[] = {"fnmadd.ldxrb.saddl", "stur", "ldrsb", "prfm", "ubfiz", "ldrsw.madd.msub.sturb.ldursb", "b.eq", "ldur.sbfiz", "extr", "uqadd", "sshr.uzp1.sttrb", "rsubhn2.ldrh.uqsub", "uqshl", "uabd", "ursra"},
*arr3[] = {};
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
/*

*/
/**
                                 //
                                 // .rodata 
                                 // SHT_PROGBITS  [0x1368 - 0x160a]
                                 // ram: 00101368-0010160a
                                 //
                                 s_adrp.ldrsh.ldnp_00101368                             XREF[1]:       _elfSectionHeaders::00000310(*)  
          00101368 61 64 72 70       ds           "adrp.ldrsh.ldnp"
ldpsw umax stnp.rsubhn sqdmlsl uqrshl.csel umin.usubl.umlsl cbnz.adds tbnz usubl2 stxr sbfx strh stxrb.adcs stxrh ands.urhadd subs sbcs fnmadd.ldxrb.saddl stur ldrsbprfm ubfiz  ldrsw.madd.msub.sturb.ldursb b.eq ldur.sbfiz extr
uqadd sshr.uzp1.sttrb rsubhn2.ldrh.uqsub uqshl uabd ursra
          00101494 00                ??           00h
          00101495 75                ??           75h    u
          00101496 73                ??           73h    s
          00101497 75                ??           75h    u
          00101498 62                ??           62h    b
          00101499 77                ??           77h    w
          0010149a 00                ??           00h
          0010149b 75                ??           75h    u
          0010149c 61                ??           61h    a
          0010149d 64                ??           64h    d
          0010149e 64                ??           64h    d
          0010149f 6c                ??           6Ch    l
          001014a0 32                ??           32h    2
          001014a1 00                ??           00h
          001014a2 62                ??           62h    b
          001014a3 2e                ??           2Eh    .
          001014a4 67                ??           67h    g
          001014a5 74                ??           74h    t
          001014a6 00                ??           00h
          001014a7 62                ??           62h    b
          001014a8 2e                ??           2Eh    .
          001014a9 6c                ??           6Ch    l
          001014aa 74                ??           74h    t
          001014ab 00                ??           00h
          001014ac 73                ??           73h    s
          001014ad 71                ??           71h    q
          001014ae 73                ??           73h    s
          001014af 68                ??           68h    h
          001014b0 6c                ??           6Ch    l
          001014b1 00                ??           00h
          001014b2 62                ??           62h    b
          001014b3 69                ??           69h    i
          001014b4 63                ??           63h    c
          001014b5 73                ??           73h    s
          001014b6 00                ??           00h
          001014b7 73                ??           73h    s
          001014b8 6d                ??           6Dh    m
          001014b9 69                ??           69h    i
          001014ba 6e                ??           6Eh    n
          001014bb 2e                ??           2Eh    .
          001014bc 75                ??           75h    u
          001014bd 62                ??           62h    b
          001014be 66                ??           66h    f
          001014bf 78                ??           78h    x
          001014c0 00                ??           00h
          001014c1 75                ??           75h    u
          001014c2 61                ??           61h    a
          001014c3 62                ??           62h    b
          001014c4 64                ??           64h    d
          001014c5 6c                ??           6Ch    l
          001014c6 32                ??           32h    2
          001014c7 00                ??           00h
          001014c8 7a 69 70 32       ds           "zip2.ssubw2"
                    2e 73 73 75 
                    62 77 32 00
          001014d4 63                ??           63h    c
          001014d5 63                ??           63h    c
          001014d6 6d                ??           6Dh    m
          001014d7 70                ??           70h    p
          001014d8 00                ??           00h
          001014d9 73                ??           73h    s
          001014da 71                ??           71h    q
          001014db 64                ??           64h    d
          001014dc 6d                ??           6Dh    m
          001014dd 6c                ??           6Ch    l
          001014de 61                ??           61h    a
          001014df 6c                ??           6Ch    l
          001014e0 00                ??           00h
          001014e1 62                ??           62h    b
          001014e2 2e                ??           2Eh    .
          001014e3 61                ??           61h    a
          001014e4 6c                ??           6Ch    l
          001014e5 00                ??           00h
          001014e6 73 6d 61 78       ds           "smax.ldurh.uhsub"
                    2e 6c 64 75 
                    72 68 2e 75
          001014f7 66                ??           66h    f
          001014f8 63                ??           63h    c
          001014f9 76                ??           76h    v
          001014fa 74                ??           74h    t
          001014fb 78                ??           78h    x
          001014fc 6e                ??           6Eh    n
          001014fd 32                ??           32h    2
          001014fe 00                ??           00h
          001014ff 62                ??           62h    b
          00101500 2e                ??           2Eh    .
          00101501 70                ??           70h    p
          00101502 6c                ??           6Ch    l
          00101503 00                ??           00h
          00101504 75                ??           75h    u
          00101505 62                ??           62h    b
          00101506 66                ??           66h    f
          00101507 69                ??           69h    i
          00101508 7a                ??           7Ah    z
          00101509 2e                ??           2Eh    .
          0010150a 73                ??           73h    s
          0010150b 71                ??           71h    q
          0010150c 64                ??           64h    d
          0010150d 6d                ??           6Dh    m
          0010150e 6c                ??           6Ch    l
          0010150f 73                ??           73h    s
          00101510 6c                ??           6Ch    l
          00101511 2e                ??           2Eh    .
          00101512 74                ??           74h    t
          00101513 62                ??           62h    b
          00101514 6e                ??           6Eh    n
          00101515 7a                ??           7Ah    z
          00101516 2e                ??           2Eh    .
          00101517 73                ??           73h    s
          00101518 74                ??           74h    t
          00101519 6e                ??           6Eh    n
          0010151a 70                ??           70h    p
          0010151b 00                ??           00h
          0010151c 73                ??           73h    s
          0010151d 6d                ??           6Dh    m
          0010151e 69                ??           69h    i
          0010151f 6e                ??           6Eh    n
          00101520 00                ??           00h
          00101521 75                ??           75h    u
          00101522 73                ??           73h    s
          00101523 75                ??           75h    u
          00101524 62                ??           62h    b
          00101525 6c                ??           6Ch    l
          00101526 00                ??           00h
          00101527 75                ??           75h    u
          00101528 7a                ??           7Ah    z
          00101529 70                ??           70h    p
          0010152a 31                ??           31h    1
          0010152b 00                ??           00h
          0010152c 7a 69 70 32       ds           "zip2.prfm.strb"
                    2e 70 72 66 
                    6d 2e 73 74
          0010153b 6d                ??           6Dh    m
          0010153c 73                ??           73h    s
          0010153d 75                ??           75h    u
          0010153e 62                ??           62h    b
          0010153f 00                ??           00h
          00101540 73                ??           73h    s
          00101541 74                ??           74h    t
          00101542 78                ??           78h    x
          00101543 72                ??           72h    r
          00101544 68                ??           68h    h
          00101545 2e                ??           2Eh    .
          00101546 6c                ??           6Ch    l
          00101547 64                ??           64h    d
          00101548 78                ??           78h    x
          00101549 72                ??           72h    r
          0010154a 62                ??           62h    b
          0010154b 00                ??           00h
          0010154c 75                ??           75h    u
          0010154d 71                ??           71h    q
          0010154e 72                ??           72h    r
          0010154f 73                ??           73h    s
          00101550 68                ??           68h    h
          00101551 6c                ??           6Ch    l
          00101552 2e                ??           2Eh    .
          00101553 6c                ??           6Ch    l
          00101554 64                ??           64h    d
          00101555 72                ??           72h    r
          00101556 68                ??           68h    h
          00101557 00                ??           00h
          00101558 63                ??           63h    c
          00101559 62                ??           62h    b
          0010155a 6e                ??           6Eh    n
          0010155b 7a                ??           7Ah    z
          0010155c 00                ??           00h
          0010155d 73 73 68 72       ds           "sshr.ubfx.ldur.ldnp"
                    2e 75 62 66 
                    78 2e 6c 64
          00101571 61 64 72 70       ds           "adrp.sturb"
                    2e 73 74 75 
                    72 62 00
          0010157c 73                ??           73h    s
          0010157d 6d                ??           6Dh    m
          0010157e 61                ??           61h    a
          0010157f 78                ??           78h    x
          00101580 00                ??           00h
          00101581 75                ??           75h    u
          00101582 71                ??           71h    q
          00101583 73                ??           73h    s
          00101584 75                ??           75h    u
          00101585 62                ??           62h    b
          00101586 2e                ??           2Eh    .
          00101587 73                ??           73h    s
          00101588 71                ??           71h    q
          00101589 73                ??           73h    s
          0010158a 68                ??           68h    h
          0010158b 6c                ??           6Ch    l
          0010158c 75                ??           75h    u
          0010158d 00                ??           00h
          0010158e 61                ??           61h    a
          0010158f 6e                ??           6Eh    n
          00101590 64                ??           64h    d
          00101591 73                ??           73h    s
          00101592 00                ??           00h
          00101593 75                ??           75h    u
          00101594 6d                ??           6Dh    m
          00101595 69                ??           69h    i
          00101596 6e                ??           6Eh    n
          00101597 00                ??           00h
          00101598 6c 64 72 73       ds           "ldrsb.ldpsw.rsubhn"
                    62 2e 6c 64 
                    70 73 77 2e
          001015ab 72                ??           72h    r
          001015ac 73                ??           73h    s
          001015ad 75                ??           75h    u
          001015ae 62                ??           62h    b
          001015af 68                ??           68h    h
          001015b0 6e                ??           6Eh    n
          001015b1 32                ??           32h    2
          001015b2 2e                ??           2Eh    .
          001015b3 75                ??           75h    u
          001015b4 6d                ??           6Dh    m
          001015b5 6c                ??           6Ch    l
          001015b6 73                ??           73h    s
          001015b7 6c                ??           6Ch    l
          001015b8 32                ??           32h    2
          001015b9 00                ??           00h
          001015ba 73 62 63 73       ds           "sbcs.fmadd"
                    2e 66 6d 61 
                    64 64 00
          001015c5 73 74 75 72       ds           "stur.ldrsh.smlsl2"
                    2e 6c 64 72 
                    73 68 2e 7
          001015d7 6c                ??           6Ch    l
          001015d8 64                ??           64h    d
          001015d9 72                ??           72h    r
          001015da 73                ??           73h    s
          001015db 77                ??           77h    w
          001015dc 00                ??           00h
          001015dd 66                ??           66h    f
          001015de 6e                ??           6Eh    n
          001015df 6d                ??           6Dh    m
          001015e0 61                ??           61h    a
          001015e1 64                ??           64h    d
          001015e2 64                ??           64h    d
          001015e3 00                ??           00h
          001015e4 73                ??           73h    s
          001015e5 74                ??           74h    t
          001015e6 78                ??           78h    x
          001015e7 72                ??           72h    r
          001015e8 62                ??           62h    b
          001015e9 2e                ??           2Eh    .
          001015ea 73                ??           73h    s
          001015eb 62                ??           62h    b
          001015ec 66                ??           66h    f
          001015ed 69                ??           69h    i
          001015ee 7a                ??           7Ah    z
          001015ef 00                ??           00h
          001015f0 62 69 63 73       ds           "bics.ldrb"
                    2e 6c 64 72 
                    62 00
          001015fa 73                ??           73h    s
          001015fb 75                ??           75h    u
          001015fc 62                ??           62h    b
          001015fd 73                ??           73h    s
          001015fe 2e                ??           2Eh    .
          001015ff 75                ??           75h    u
          00101600 68                ??           68h    h
          00101601 73                ??           73h    s
          00101602 75                ??           75h    u
          00101603 62                ??           62h    b
          00101604 00                ??           00h
          00101605 6c                ??           6Ch    l
          00101606 64                ??           64h    d
          00101607 75                ??           75h    u
          00101608 72                ??           72h    r
          00101609 68                ??           68h    h
          0010160a 00                ??           00h
*/
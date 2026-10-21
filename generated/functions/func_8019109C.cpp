#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8019109C_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x8019109Cu);
    goto loc_8019109C;

loc_8019109C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801910C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80191444;
    }
}

loc_801910C4:
{
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8012ECA0
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    r4 = (r0 & 255);
    r3 = MemoryInline::FlatRead8((r30 + 482));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r31 = (r0 & 255);
}

loc_801910F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80191138;
    }
}

loc_801910F4:
{
    r3 = MemoryInline::FlatRead16((r30 + 848));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191108:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(170))) {
        goto loc_80191114;
    }
}

loc_8019110C:
{
    r0 = 170;
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
}

loc_80191114:
{
    r3 = MemoryInline::FlatRead16((r30 + 850));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r30 + 850), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191128:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(180))) {
        goto loc_80191178;
    }
}

loc_8019112C:
{
    r0 = 180;
    MemoryInline::FlatWrite16((r30 + 850), static_cast<uint16_t>(r0));
    goto loc_80191178;
}

loc_80191138:
{
    r3 = MemoryInline::FlatRead16((r30 + 848));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8019114C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_80191158;
    }
}

loc_80191150:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 848), static_cast<uint16_t>(r0));
}

loc_80191158:
{
    r3 = MemoryInline::FlatRead16((r30 + 850));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r30 + 850), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8019116C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_80191178;
    }
}

loc_80191170:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 850), static_cast<uint16_t>(r0));
}

loc_80191178:
{
    r0 = MemoryInline::FlatRead16((r30 + 848));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    r3 = (r30 + 36);
    r4 = 0;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801911A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r0 = MemoryInline::FlatRead16((r30 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = (r30 + 36);
    r4 = 2;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x801911D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_801911D4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8019123C;
    }
}

loc_801911D8:
{
    r3 = MemoryInline::FlatRead16((r30 + 852));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 7);
    MemoryInline::FlatWrite16((r30 + 852), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801911EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_801911F8;
    }
}

loc_801911F0:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 852), static_cast<uint16_t>(r0));
}

loc_801911F8:
{
    r3 = MemoryInline::FlatRead16((r30 + 854));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 6);
    MemoryInline::FlatWrite16((r30 + 854), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8019120C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_80191218;
    }
}

loc_80191210:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 854), static_cast<uint16_t>(r0));
}

loc_80191218:
{
    r3 = MemoryInline::FlatRead16((r30 + 856));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 6);
    MemoryInline::FlatWrite16((r30 + 856), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8019122C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_8019129C;
    }
}

loc_80191230:
{
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 856), static_cast<uint16_t>(r0));
    goto loc_8019129C;
}

loc_8019123C:
{
    r3 = MemoryInline::FlatRead16((r30 + 852));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -7);
    MemoryInline::FlatWrite16((r30 + 852), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191250:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(40))) {
        goto loc_8019125C;
    }
}

loc_80191254:
{
    r0 = 40;
    MemoryInline::FlatWrite16((r30 + 852), static_cast<uint16_t>(r0));
}

loc_8019125C:
{
    r3 = MemoryInline::FlatRead16((r30 + 854));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -6);
    MemoryInline::FlatWrite16((r30 + 854), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191270:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_8019127C;
    }
}

loc_80191274:
{
    r0 = 60;
    MemoryInline::FlatWrite16((r30 + 854), static_cast<uint16_t>(r0));
}

loc_8019127C:
{
    r3 = MemoryInline::FlatRead16((r30 + 856));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -6);
    MemoryInline::FlatWrite16((r30 + 856), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80191290:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_8019129C;
    }
}

loc_80191294:
{
    r0 = 60;
    MemoryInline::FlatWrite16((r30 + 856), static_cast<uint16_t>(r0));
}

loc_8019129C:
{
    r0 = MemoryInline::FlatRead16((r30 + 852));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 854));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 856));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r29 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r29));
    r3 = (r30 + 36);
    r4 = 4;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x801912DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r30;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x801357AC
}

loc_801912EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80191344;
    }
}

loc_801912F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 862));
}

loc_801912F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80191314;
    }
}

loc_801912FC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r29));
    goto loc_8019132C;
}

loc_80191314:
{
    r0 = 40;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 60;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r29));
}

loc_8019132C:
{
    r3 = (r30 + 36);
    r4 = 5;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x80191340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    goto loc_8019135C;
}

loc_80191344:
{
    r3 = (r30 + 36);
    r4 = 5;
    r5 = 1;
    r6 = (r1 + 8);
    ctx->lr = 0x80191358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    MemoryInline::FlatWrite8((r30 + 862), static_cast<uint8_t>(r31));
}

loc_8019135C:
{
    r3 = (r30 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x80191370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = r30;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8019137C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019138C;
    }
}

loc_80191380:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_80191430;
}

loc_8019138C:
{
    r3 = r30;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_80191398:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801913E8;
    }
}

loc_8019139C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_5 & -8192);
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23556));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22756));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23532));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r3 = fctiwzword0;
    r0 = (r3 + 225);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    goto loc_80191430;
}

loc_801913E8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_6 & -8192);
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23556));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22756));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23532));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r3 = fctiwzword1;
    r0 = (r3 + 135);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
}

loc_80191430:
{
    r3 = (r30 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 8);
    ctx->lr = 0x80191444u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_80191444:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019109C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019109C_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019109C func_8019109C preserves=true fpr_mask=0x00000000

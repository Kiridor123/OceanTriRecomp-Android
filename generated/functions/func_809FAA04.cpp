#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DE360(CpuContext* ctx);
extern "C" uint64_t func_800DE360_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802AB2A4(CpuContext* ctx);
extern "C" uint64_t func_802AB2A4_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_809FAA04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_809FAA04;

loc_809FAA04:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r5 = MemoryInline::FlatRead8((r3 + 5));
}

loc_809FAA28:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_809FAA38;
    }
}

loc_809FAA2C:
{
}

loc_809FAA30:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_809FAB88;
    }
}

loc_809FAA34:
{
    goto loc_809FAD0C;
}

loc_809FAA38:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
}

loc_809FAA40:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_809FAA50;
    }
}

loc_809FAA44:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_809FAD0C;
}

loc_809FAA50:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -3);
}

loc_809FAA64:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809FAADC;
    }
}

loc_809FAA68:
{
}

loc_809FAA6C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_809FAA84;
    }
}

loc_809FAA70:
{
}

loc_809FAA74:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_809FAA84;
    }
}

loc_809FAA78:
{
}

loc_809FAA7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_809FAADC;
    }
}

loc_809FAA80:
{
    goto loc_809FAAFC;
}

loc_809FAA84:
{
    r0 = 90;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = r30;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x809FAA9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x809FADF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 20);
    ctx->lr = 0x809FAAB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2B58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 16);
    r7 = 0;
    ctx->lr = 0x809FAAD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_809FAAFC;
}

loc_809FAADC:
{
    r0 = 300;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = 0x80A30000u;
    r3 = (r3 + -18472);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_809FAAFC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 90));
}

loc_809FAB0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_809FAB50;
    }
}

loc_809FAB10:
{
    r3 = r30;
    r4 = 0x80A30000u;
    r4 = (r4 + -18664);
    r5 = 0x80A30000u;
    r5 = (r5 + -18680);
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = 0x80A30000u;
    r6 = (r6 + -18560);
    r6_addr_1 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_1);
    r7 = 5;
    r8 = 8;
    ctx->lr = 0x809FAB44u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_1BC6 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_1BC6);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_1BC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16((r30 + 90));
    MemoryInline::FlatWrite16((r30 + 104), static_cast<uint16_t>(r0));
    goto loc_809FAD0C;
}

loc_809FAB50:
{
    r3 = r30;
    r4 = 0x80A30000u;
    r4 = (r4 + -18664);
    r5 = 0x80A30000u;
    r5 = (r5 + -18680);
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r6 = 0x80A30000u;
    r6 = (r6 + -18560);
    r6_addr_2 = (r6 + r0);
    r6 = MemoryInline::FlatRead32(r6_addr_2);
    r7 = 5;
    r8 = 8;
    ctx->lr = 0x809FAB84u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_2212 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_2212);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_2212 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    goto loc_809FAD0C;
}

loc_809FAB88:
{
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r3 + -3);
}

loc_809FAB94:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809FAD04;
    }
}

loc_809FAB98:
{
}

loc_809FAB9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809FABB4;
    }
}

loc_809FABA0:
{
}

loc_809FABA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_809FABB4;
    }
}

loc_809FABA8:
{
}

loc_809FABAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_809FAD04;
    }
}

loc_809FABB0:
{
    goto loc_809FAD0C;
}

loc_809FABB4:
{
}

loc_809FABB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_809FABE8;
    }
}

loc_809FABBC:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809FABCC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809FABE8;
    }
}

loc_809FABD0:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 2836));
    r4 = (r30 + 24);
    r5 = 5;
    r6 = r30;
    ctx->lr = 0x809FABE8u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_800DE360_2BC3 = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_2BC3);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_2BC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
    }
}

loc_809FABE8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    r3 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809FABFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809FAC14;
    }
}

loc_809FAC00:
{
}

loc_809FAC04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_809FAC84;
    }
}

loc_809FAC08:
{
}

loc_809FAC0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_809FAC98;
    }
}

loc_809FAC10:
{
    goto loc_809FACEC;
}

loc_809FAC14:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 20);
    ctx->lr = 0x809FAC28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2B58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = MemoryInline::FlatRead8((r1 + 23));
}

loc_809FAC30:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(192))) {
        goto loc_809FAC40;
    }
}

loc_809FAC34:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_809FAC48;
}

loc_809FAC40:
{
    r0 = (r3 + 63);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
}

loc_809FAC48:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x809FAC68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809FAC70:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_809FACEC;
    }
}

loc_809FAC74:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    goto loc_809FACEC;
}

loc_809FAC84:
{
}

loc_809FAC88:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_809FACEC;
    }
}

loc_809FAC8C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    goto loc_809FACEC;
}

loc_809FAC98:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 20);
    ctx->lr = 0x809FACACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2B58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = MemoryInline::FlatRead8((r1 + 23));
}

loc_809FACB4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(25))) {
        goto loc_809FACE4;
    }
}

loc_809FACB8:
{
    r0 = (r3 + -25);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32(r31);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x809FACE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    goto loc_809FACEC;
}

loc_809FACE4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
}

loc_809FACEC:
{
    r3 = r30;
    ctx->lr = 0x809FACF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x809FB000u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x809FAD00u;
    if constexpr (KnownRegArgsCpuCall<0x802AB2A4u>(&func_802AB2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB2A4_474F = func_802AB2A4_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB2A4_474F);
        r4 = static_cast<uint32_t>(regargs_result_802AB2A4_474F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x802AB2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_809FAD0C;
}

loc_809FAD04:
{
    r3 = r30;
    ctx->lr = 0x809FAD0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x809FB4ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_809FAD0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FAA04 func_809FAA04 preserves=true fpr_mask=0x00000000

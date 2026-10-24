#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A52B4(CpuContext* ctx);
extern "C" uint64_t func_800A52B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800A83B0(CpuContext* ctx);
extern "C" uint64_t func_800A83B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800A8E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    MKW_GUEST_ENTER(0x800A8E5Cu);
    goto loc_800A8E5C;

loc_800A8E5C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r30 = r3;
    // inline leaf 0x800A8D7C (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & 512);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800A8D7C
}

loc_800A8E7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A8F64;
    }
}

loc_800A8E80:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
}

loc_800A8E88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A8F64;
    }
}

loc_800A8E8C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 180), r0);
    r0 = MemoryInline::FlatRead16((r30 + 232));
}

loc_800A8E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A8EAC;
    }
}

loc_800A8EA0:
{
    r3 = MemoryInline::FlatRead32((r30 + 188));
    r4 = 1;
    // inline leaf 0x800A5178 (10 guest instruction(s))
}

loc_inl1_0x800A5178:
{
}

loc_inl1_0x800A517C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800A5190;
    }
}

loc_inl1_0x800A5180:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_inl1_cont_800A5178;
}

loc_inl1_0x800A5190:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r0 & -65537);
    MemoryInline::FlatWrite32((r3 + 84), r0);
}

loc_inl1_cont_800A5178:
{
    // end of inlined leaf 0x800A5178
}

loc_800A8EAC:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_800A8EB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A8F40;
    }
}

loc_800A8EB8:
{
    r3 = (r30 + 192);
    if constexpr (KnownRegArgsCpuCall<0x800A52B4u>(&func_800A52B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A52B4_C32 = func_800A52B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A52B4_C32);
        r4 = static_cast<uint32_t>(regargs_result_800A52B4_C32 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800A52B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    if (!r31) {
        goto loc_800A8F40;
    }
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x800A8EE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AE3C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r1 + 8);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80088428u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r30;
    r4 = (r1 + 56);
    ctx->lr = 0x800A8EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800A9508u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = MemoryInline::FlatRead16((r30 + 222));
}

loc_800A8F10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A8F20;
    }
}

loc_800A8F14:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 222), static_cast<uint16_t>(r0));
    goto loc_800A8F64;
}

loc_800A8F20:
{
    r3 = r30;
    r4 = r31;
    r5 = (r1 + 56);
    ctx->lr = 0x800A8F30u;
    if constexpr (KnownRegArgsCpuCall<0x800A83B0u>(&func_800A83B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A83B0_1612 = func_800A83B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A83B0_1612);
        r4 = static_cast<uint32_t>(regargs_result_800A83B0_1612 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x800A83B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead32((r30 + 228));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 228), r0);
    goto loc_800A8F64;
}

loc_800A8F40:
{
    r3 = MemoryInline::FlatRead16((r30 + 222));
}

loc_800A8F48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A8F58;
    }
}

loc_800A8F4C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 222), static_cast<uint16_t>(r0));
    goto loc_800A8F64;
}

loc_800A8F58:
{
    r3 = MemoryInline::FlatRead32((r30 + 228));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 228), r0);
}

loc_800A8F64:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF000FFFF fpr_write=0xF000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A8E5C func_800A8E5C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013A724(CpuContext* ctx);
extern "C" uint32_t func_8013A724_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8013A7D4(CpuContext* ctx);
extern "C" uint64_t func_8013A7D4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801398BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_801398BC;

loc_801398BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r3 = r29;
    // inline leaf 0x80139530 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // end of inlined leaf 0x80139530
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 4));
    ctx->lr = 0x801398F4u;
    if constexpr (KnownRegArgsCpuCall<0x8013A724u>(&func_8013A724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013A724_953 = func_8013A724_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8013A724_953;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
}

loc_801398FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80139984;
    }
}

loc_80139900:
{
    goto loc_801399A0;
}

loc_80139908:
{
}

loc_8013990C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_80139980;
    }
}

loc_80139910:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_80139918:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80139950;
    }
}

loc_8013991C:
{
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r26;
    r4 = r27;
    r5 = (r1 + 12);
    r6 = r29;
    r7 = r31;
    r8 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8013994Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_80139980;
}

loc_80139950:
{
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r26;
    r4 = r27;
    r5 = (r1 + 8);
    r6 = r29;
    r7 = r31;
    r8 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80139980u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80139980:
{
    r30 = (r30 + 24);
}

loc_80139984:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + 65536);
}

loc_80139990:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80139908;
    }
}

loc_80139994:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32((r26 + 4));
    ctx->lr = 0x801399A0u;
    if constexpr (KnownRegArgsCpuCall<0x8013A7D4u>(&func_8013A7D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013A7D4_1689 = func_8013A7D4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013A7D4_1689);
        r4 = static_cast<uint32_t>(regargs_result_8013A7D4_1689 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A7D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801399A0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801398BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801398BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801398BC func_801398BC preserves=true fpr_mask=0x00000000

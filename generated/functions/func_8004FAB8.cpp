#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F4AC(CpuContext* ctx);
extern "C" uint64_t func_8004F4AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004F61C(CpuContext* ctx);
extern "C" uint64_t func_8004F61C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8004F634(CpuContext* ctx);
extern "C" uint64_t func_8004F634_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004FAB8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004FAB8u);
    goto loc_8004FAB8;

loc_8004FAB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r0 = MemoryInline::FlatRead8((r13 + -17820));
}

loc_8004FAE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004FAF8;
    }
}

loc_8004FAEC:
{
}

loc_8004FAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8004FB74;
    }
}

loc_8004FAF4:
{
    goto loc_8004FCC0;
}

loc_8004FAF8:
{
    r29 = 0;
    r31 = 0x80670000u;
    r30 = 0x80050000u;
    r28 = 0x80570000u;
}

loc_8004FB08:
{
    r3 = (r28 + -928);
    if constexpr (KnownRegArgsCpuCall<0x8004F634u>(&func_8004F634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8004F634_A70 = func_8004F634_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004F634_A70);
        r4 = static_cast<uint32_t>(regargs_result_8004F634_A70 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004F634u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite8((r13 + -17804), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead8((r13 + -17802));
    r4 = (r31 + -13152);
    r5 = 256;
    r6 = 0;
    r7 = (r30 + -2452);
    ctx->lr = 0x8004FB2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004F61Cu>(&func_8004F61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8004F61C_EA0 = func_8004F61C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8004F61C_EA0);
        r4 = static_cast<uint32_t>(regargs_result_8004F61C_EA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004F61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (r3 + 2);
}

loc_8004FB34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004FB58;
    }
}

loc_8004FB38:
{
    r0 = (r3 + 6);
}

loc_8004FB40:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004FB58;
    }
}

loc_8004FB44:
{
}

loc_8004FB48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004FCC0;
    }
}

loc_8004FB4C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -17820), static_cast<uint8_t>(r0));
    goto loc_8004FCC0;
}

loc_8004FB58:
{
    r3 = MemoryInline::FlatRead32((r13 + -17808));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -17808), r0);
}

loc_8004FB68:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_8004FB08;
    }
}

loc_8004FB6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17816));
    goto loc_8004FCC4;
}

loc_8004FB74:
{
    r0 = MemoryInline::FlatRead8((r13 + -17804));
}

loc_8004FB7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004FCC0;
    }
}

loc_8004FB80:
{
    r4 = MemoryInline::FlatRead32((r13 + -17816));
    r0 = (r4 + 3);
}

loc_8004FB8C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8004FAF8;
    }
}

loc_8004FB90:
{
    r0 = (r4 + 6);
}

loc_8004FB98:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8004FAF8;
    }
}

loc_8004FB9C:
{
}

loc_8004FBA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8004FCC0;
    }
}

loc_8004FBA4:
{
    r4 = 0x80670000u;
    r4 = (r4 + -13152);
    r5 = 0;
    r0 = 31;
    ctr = r0;
}

loc_8004FBB8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r4);
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 3));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 4));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 5));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r4 + 6));
    r5 = (r5 + r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r4 + 7));
    r4 = (r4 + 8);
    r5 = (r5 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004FBB8;
    }
}

loc_8004FC00:
{
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r5 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r5 = (r5 + r0);
    r4 = 0x80670000u;
    r4 = (r4 + -13152);
}

loc_8004FC2C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8004FC38;
    }
}

loc_8004FC30:
{
    r3 = -100;
    goto loc_8004FCC4;
}

loc_8004FC38:
{
    r0 = MemoryInline::FlatRead32((r4 + 252));
}

loc_8004FC40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_8004FC4C;
    }
}

loc_8004FC44:
{
    r3 = -100;
    goto loc_8004FCC4;
}

loc_8004FC4C:
{
    r0 = (r31 & 255);
}

loc_8004FC54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004FCA4;
    }
}

loc_8004FC58:
{
    r5 = 0x80660000u;
    r6 = (r5 + -21920);
    r5 = MemoryInline::FlatRead8((r6 + 2024));
    r0 = MemoryInline::FlatRead8((r4 + 207));
}

loc_8004FC6C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8004FC78;
    }
}

loc_8004FC70:
{
    r3 = -100;
    goto loc_8004FCC4;
}

loc_8004FC78:
{
    r5 = MemoryInline::FlatRead8((r6 + 2025));
    r0 = MemoryInline::FlatRead8((r4 + 39));
}

loc_8004FC84:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8004FC90;
    }
}

loc_8004FC88:
{
    r3 = -100;
    goto loc_8004FCC4;
}

loc_8004FC90:
{
    ctx->lr = 0x8004FC94u;
    if constexpr (KnownRegArgsCpuCall<0x8004F4ACu>(&func_8004F4AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8004F4AC_2575 = func_8004F4AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004F4AC_2575);
        r4 = static_cast<uint32_t>(regargs_result_8004F4AC_2575 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8004F4ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8004FC98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004FCA4;
    }
}

loc_8004FC9C:
{
    r3 = -100;
    goto loc_8004FCC4;
}

loc_8004FCA4:
{
    r3 = r30;
    r4 = 0x80670000u;
    r4 = (r4 + -13152);
    r5 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
    goto loc_8004FCC4;
}

loc_8004FCC0:
{
    r3 = 0;
}

loc_8004FCC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004FAB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004FAB8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004FAB8 func_8004FAB8 preserves=true fpr_mask=0x00000000

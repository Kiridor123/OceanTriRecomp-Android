#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007B1C4(CpuContext* ctx);
extern "C" uint64_t func_8007B1C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C0568(CpuContext* ctx);
extern "C" uint64_t func_802C0568_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C0634_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802C0634;

loc_802C0634:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r4 = 0x806C0000u;
    r30 = (r4 + -6272);
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_802C0664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(40))) {
        goto loc_802C0670;
    }
}

loc_802C0668:
{
    r3 = 7;
    goto loc_802C0750;
}

loc_802C0670:
{
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    // inline leaf 0x802BF4C4 (2 guest instruction(s))
    r3 = (r3 + 10360);
    // end of inlined leaf 0x802BF4C4
    r4 = r3;
    r3 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r3 + 8);
    r29 = (r0 & 255);
    r3 = (r1 + 8);
    r5 = r29;
    // inline leaf 0x80065290 (14 guest instruction(s))
}

loc_inl1_0x80065290:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_inl1_0x80065298:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x8006529C:
{
}

loc_inl1_0x800652A0:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_inl1_0x800652B4;
    }
}

loc_inl1_0x800652A4:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 * 12);
    r5 = (r6 + r0);
    goto loc_inl1_0x800652BC;
}

loc_inl1_0x800652B4:
{
    r5 = 0;
}

loc_inl1_0x800652BC:
{
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
}

loc_inl1_cont_80065290:
{
    // end of inlined leaf 0x80065290
    r0 = MemoryInline::FlatRead32((r28 + 456));
    r0 = (r0 & 1);
}

loc_802C06A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C06F8;
    }
}

loc_802C06A4:
{
    if constexpr (KnownRegArgsCpuCall<0x802C0568u>(&func_802C0568)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802C0568_BDA = func_802C0568_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802C0568_BDA);
        r4 = static_cast<uint32_t>(regargs_result_802C0568_BDA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802C0568u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r5 = (r3 & 255);
}

loc_802C06B0:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(3))) {
        goto loc_802C06BC;
    }
}

loc_802C06B4:
{
    r3 = r29;
    goto loc_802C0750;
}

loc_802C06BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
    r4 = (r30 + r0);
    MemoryInline::FlatWrite8((r4 + 4096), static_cast<uint8_t>(r3));
    r30 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r0 - r5);
}

loc_802C06D4:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = (r30 + r31);
    r5 = (r5 + 21);
    ctx->lr = 0x802C06E8u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1183 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1183);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1183 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 1);
}

loc_802C06F0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_802C06D4;
    }
}

loc_802C06F4:
{
    goto loc_802C0718;
}

loc_802C06F8:
{
    r30 = 0;
}

loc_802C06FC:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = (r30 + 30);
    ctx->lr = 0x802C070Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_15DD = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_15DD);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_15DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 1);
}

loc_802C0714:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(3))) {
        goto loc_802C06FC;
    }
}

loc_802C0718:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_802C0720:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_802C0738;
    }
}

loc_802C0724:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = -1;
    ctx->lr = 0x802C0734u;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1A9F = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1A9F);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1A9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802C074C;
}

loc_802C0738:
{
    r3 = (r1 + 8);
    r4 = r30;
    r5 = MemoryInline::FlatRead8((r28 + 2));
    r5 = (r5 + 36);
    ctx->lr = 0x802C074Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B1C4u>(&func_8007B1C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B1C4_1E58 = func_8007B1C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B1C4_1E58);
        r4 = static_cast<uint32_t>(regargs_result_8007B1C4_1E58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B1C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802C074C:
{
    r3 = r29;
}

loc_802C0750:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0634(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0634_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0634 func_802C0634 preserves=true fpr_mask=0x00000000

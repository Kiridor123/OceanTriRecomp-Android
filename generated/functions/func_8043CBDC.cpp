#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043CB60(CpuContext* ctx);
extern "C" void func_8043CB60_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8043CB60_statefree(uint32_t, uint32_t);

extern "C" uint64_t func_8043CBDC_ra58_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    MKW_GUEST_ENTER(0x8043CBDCu);
    goto loc_8043CBDC;

loc_8043CBDC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x803B33F8 (7 guest instruction(s))
}

loc_inl0_0x803B33F8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl0_0x803B3408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803B340C:
{
    r3 = 0;
    goto loc_inl0_cont_803B33F8;
}

loc_inl0_return:
{
}

loc_inl0_cont_803B33F8:
{
    // end of inlined leaf 0x803B33F8
    r0 = MemoryInline::FlatRead32((r3 + 1204));
    r31 = (r3 + r0);
    r0 = (r30 & 255);
    r3 = (r0 * 160);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r31 = (r31 + r0);
    r3 = r29;
    r4 = 0;
    r5 = 236;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = r31;
    // inline leaf 0x8043CB60 (6 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r0 = (r0 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043CB60
    r3 = (r29 + 12);
    r4 = (r31 + 4);
    // inline leaf 0x8043CB60 (6 guest instruction(s))
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, r4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043CB60
    r3 = (r29 + 24);
    r4 = (r31 + 8);
    // inline leaf 0x8043CB60 (6 guest instruction(s))
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, r4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043CB60
    r3 = (r29 + 36);
    r4 = (r31 + 12);
    // inline leaf 0x8043CB60 (6 guest instruction(s))
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, r4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 36u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 38u, (r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043CB60
    r3 = (r29 + 48);
    r4 = (r31 + 16);
    // inline leaf 0x8043CB60 (6 guest instruction(s))
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, r4);
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 48u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8043CB60
    r3 = (r29 + 60);
    r4 = (r31 + 20);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8043CB60u) && KnownTranslatedCpuCall<0x8043CB60u>::kAvailable && !KnownTranslatedCpuCall<0x8043CB60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8043CB60u>()) {
        func_8043CB60_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8043CB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 72);
    r4 = (r31 + 24);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8043CB60u) && KnownTranslatedCpuCall<0x8043CB60u>::kAvailable && !KnownTranslatedCpuCall<0x8043CB60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8043CB60u>()) {
        func_8043CB60_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8043CB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 84);
    r4 = (r31 + 28);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8043CB60u) && KnownTranslatedCpuCall<0x8043CB60u>::kAvailable && !KnownTranslatedCpuCall<0x8043CB60u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8043CB60u>()) {
        func_8043CB60_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8043CB60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 6;
    MemoryInline::FlatWrite8((r29 + 96), static_cast<uint8_t>(r0));
    r3 = (r29 + 108);
    r4 = (r31 + 32);
    r5 = 96;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 204);
    r4 = (r31 + 128);
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8043CBDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8043CBDC_ra58_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8043CBDC func_8043CBDC preserves=true fpr_mask=0x00000000

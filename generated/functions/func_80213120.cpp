#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80212B34(CpuContext* ctx);
extern "C" uint32_t func_80212B34_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80212B80(CpuContext* ctx);
extern "C" uint64_t func_80212B80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80212F98(CpuContext* ctx);
extern "C" uint64_t func_80212F98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80212B34_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80212B34_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80213120_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80213120u);
    goto loc_80213120;

loc_80213120:
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
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = (r5 * 36);
    r7 = (r6 + r0);
    r30 = 0;
    r29 = r6;
}

loc_80213164:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(-1))) {
        goto loc_80213178;
    }
}

loc_80213168:
{
    r3 = (r4 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80212B34u) && KnownTranslatedCpuCall<0x80212B34u>::kAvailable && !KnownTranslatedCpuCall<0x80212B34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80212B34u>()) {
        const auto state_free_result_80212B34_A23 = func_80212B34_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80212B34_A23[0]);
        r3 = static_cast<uint32_t>(state_free_result_80212B34_A23[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80212B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r31 = r3;
    goto loc_802131B8;
}

loc_80213178:
{
    r3 = (r3 & 255);
    r4 = (r4 & 255);
    r5 = MemoryInline::FlatRead16((r7 + 2));
    ctx->lr = 0x80213188u;
    if constexpr (KnownRegArgsCpuCall<0x80212B80u>(&func_80212B80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80212B80_EE2 = func_80212B80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212B80_EE2);
        r4 = static_cast<uint32_t>(regargs_result_80212B80_EE2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80212B80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r31 = r3;
    goto loc_802131B8;
}

loc_80213190:
{
    r3 = (r26 & 255);
    r4 = (r27 & 255);
    r5 = r28;
    r6 = r30;
    r8 = r31;
    r9 = (r1 + 8);
    r10 = (r1 + 12);
    ctx->lr = 0x802131B0u;
    if constexpr (KnownRegArgsCpuCall<0x80212F98u>(&func_80212F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        const auto regargs_result_80212F98_13C0 = func_80212F98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212F98_13C0);
        r4 = static_cast<uint32_t>(regargs_result_80212F98_13C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80212F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r30 = (r30 + 1);
    r29 = (r29 + 36);
}

loc_802131B8:
{
    r7 = MemoryInline::FlatRead16((r29 + 2));
}

loc_802131C0:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(65535))) {
        goto loc_80213190;
    }
}

loc_802131C4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80213120(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80213120_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80213120 func_80213120 preserves=true fpr_mask=0x00000000

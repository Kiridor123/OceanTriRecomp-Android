#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126054(CpuContext* ctx);
extern "C" uint64_t func_80126054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801B43FC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801B43FC;

loc_801B43FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = 0;
    r3 = 0x805B0000u;
    r31 = (r3 + 8904);
    goto loc_801B448C;
}

loc_801B442C:
{
    r3 = MemoryInline::FlatRead8((r26 + 480));
    ctx->lr = 0x801B4434u;
    if constexpr (KnownRegArgsCpuCall<0x80126054u>(&func_80126054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126054_709 = func_80126054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126054_709);
        r4 = static_cast<uint32_t>(regargs_result_80126054_709 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801B4438:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801B4488;
    }
}

loc_801B443C:
{
    r3 = 0x805B0000u;
    r0 = (r3 + 8904);
    r3 = (r0 + r30);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801B4450:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801B44A0;
    }
}

loc_801B4454:
{
    r0 = (r27 & 255);
    goto loc_801B4478;
}

loc_801B445C:
{
}

loc_801B4460:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801B4474;
    }
}

loc_801B4464:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32(r28, r0);
    r3 = MemoryInline::FlatRead8((r4 + 1));
    goto loc_801B44A4;
}

loc_801B4474:
{
    r4 = (r4 + 8);
}

loc_801B4478:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_801B4480:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_801B445C;
    }
}

loc_801B4484:
{
    goto loc_801B44A0;
}

loc_801B4488:
{
    r29 = (r29 + 1);
}

loc_801B448C:
{
    r0 = (r29 & 255);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r30 = (r30_rot_2 & -8);
    r31_addr_2 = (r31 + r30);
    r4 = MemoryInline::FlatRead8(r31_addr_2);
}

loc_801B449C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_801B442C;
    }
}

loc_801B44A0:
{
    r3 = 0;
}

loc_801B44A4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801B43FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801B43FC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801B43FC func_801B43FC preserves=true fpr_mask=0x00000000

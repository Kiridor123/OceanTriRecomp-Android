#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80297104(CpuContext* ctx);
extern "C" uint64_t func_80297104_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802913C0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;

    goto loc_802913C0;

loc_802913C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r4 * 136);
    r4 = 0x806B0000u;
    r0 = (r4 + -6904);
    r30 = (r0 + r5);
    r31 = (r3 + 8);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = (r30 + 72);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 84);
    r4 = (r31 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 72);
    ctx->lr = 0x80291410u;
    if constexpr (KnownRegArgsCpuCall<0x80297104u>(&func_80297104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80297104_85C = func_80297104_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80297104_85C);
        r4 = static_cast<uint32_t>(regargs_result_80297104_85C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        InvokeDirectCpu<0x80297104u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_80291414:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80291434;
    }
}

loc_80291418:
{
    r3 = (r30 + 84);
    ctx->lr = 0x80291420u;
    if constexpr (KnownRegArgsCpuCall<0x80297104u>(&func_80297104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80297104_DAC = func_80297104_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80297104_DAC);
        r4 = static_cast<uint32_t>(regargs_result_80297104_DAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        InvokeDirectCpu<0x80297104u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
}

loc_80291424:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80291434;
    }
}

loc_80291428:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
    goto loc_8029143C;
}

loc_80291434:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 68), static_cast<uint8_t>(r0));
}

loc_8029143C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 24), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 24));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 96), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 96), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 104), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r31 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 116), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r31 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 112), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 108), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r31 + 52));
    r0 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 56));
    r0 = (r31 + r0);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r30 + 124), r0);
    r5 = 0;
    goto loc_8029150C;
}

loc_8029148C:
{
    r7 = 0;
    goto loc_802914FC;
}

loc_80291494:
{
    r6 = 0;
    goto loc_802914EC;
}

loc_8029149C:
{
    r4 = MemoryInline::FlatRead32((r30 + 120));
    r0 = MemoryInline::FlatRead32((r30 + 112));
    r0 = (r0 * r5);
    r0 = (r7 + r0);
    r0 = (r3 * r0);
    r0 = (r0 + r6);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r4_addr_4 = (r4 + r3);
    r0 = MemoryInline::FlatRead32(r4_addr_4);
    r8 = (r0 + r31);
    r4_addr_5 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_5, r8);
    goto loc_802914D8;
}

loc_802914C8:
{
    r0 = MemoryInline::FlatRead32((r30 + 124));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32(r8, r0);
    r8 = (r8 + 4);
}

loc_802914D8:
{
    r3 = MemoryInline::FlatRead32(r8);
    r0 = (r3 + 65536);
}

loc_802914E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_802914C8;
    }
}

loc_802914E8:
{
    r6 = (r6 + 1);
}

loc_802914EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 108));
}

loc_802914F4:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r3))) {
        goto loc_8029149C;
    }
}

loc_802914F8:
{
    r7 = (r7 + 1);
}

loc_802914FC:
{
    r0 = MemoryInline::FlatRead32((r30 + 112));
}

loc_80291504:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_80291494;
    }
}

loc_80291508:
{
    r5 = (r5 + 1);
}

loc_8029150C:
{
    r0 = MemoryInline::FlatRead32((r30 + 116));
}

loc_80291514:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8029148C;
    }
}

loc_80291518:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802913C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802913C0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802913C0 func_802913C0 preserves=true fpr_mask=0x00000000

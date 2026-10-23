#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8007B104_ra38_40_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[6].d = arg_f6;

    goto loc_8007B104;

loc_8007B104:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r5);
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r3 = (r1 + 8);
    r4 = (r1 + 12);
    // inline leaf 0x8007B1AC (6 guest instruction(s))
}

loc_inl0_0x8007B1AC:
{
    r5 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl0_0x8007B1B8:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8007B1BC:
{
    r3 = r4;
    goto loc_inl0_cont_8007B1AC;
}

loc_inl0_return:
{
}

loc_inl0_cont_8007B1AC:
{
    // end of inlined leaf 0x8007B1AC
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = 0;
    r31 = 0;
    goto loc_8007B180;
}

loc_8007B154:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r0 + r31);
    // inline leaf 0x800651F0 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800651F0
}

loc_8007B164:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007B178;
    }
}

loc_8007B168:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r3 = (r0 + r31);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8007A878u>(ctx);
}

loc_8007B178:
{
    r31 = (r31 + 68);
    r30 = (r30 + 1);
}

loc_8007B180:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8007B188:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_8007B154;
    }
}

loc_8007B18C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007B104(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007B104_ra38_40_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8007B104 func_8007B104 preserves=true fpr_mask=0x00000000

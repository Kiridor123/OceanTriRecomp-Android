#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800921A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800921A0;

loc_800921A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800628A4u>(ctx);
    r3 = ctx->gpr[3];
    r5 = (r3 + 8);
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
    goto loc_80092234;
}

loc_800921E4:
{
    r5 = r28;
    r0 = (static_cast<int32_t>(r4) >> 3);
    r4 = (r4 & 7);
}

loc_800921F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r31))) {
        goto loc_80092224;
    }
}

loc_800921F8:
{
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r0 & 1);
}

loc_8009220C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80092224;
    }
}

loc_80092210:
{
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
    goto loc_80092234;
}

loc_80092224:
{
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r4 = (r3 + r0);
    r28 = (r4 + 8);
}

loc_80092234:
{
    r4 = MemoryInline::FlatRead16(r28);
    r0 = MemoryInline::FlatRead16(r5);
}

loc_80092240:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_800921E4;
    }
}

loc_80092244:
{
    r4 = MemoryInline::FlatRead32((r28 + 8));
}

loc_8009224C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80092274;
    }
}

loc_80092250:
{
    r3 = r29;
    // inline leaf 0x80092298 (7 guest instruction(s))
}

loc_inl0_0x80092298:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x800922A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800922AC;
    }
}

loc_inl0_0x800922A4:
{
    r3 = (r0 + r4);
    goto loc_inl0_cont_80092298;
}

loc_inl0_0x800922AC:
{
    r3 = 0;
}

loc_inl0_cont_80092298:
{
    // end of inlined leaf 0x80092298
    r4 = r3;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80092268:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80092274;
    }
}

loc_8009226C:
{
    r3 = r28;
    goto loc_80092278;
}

loc_80092274:
{
    r3 = 0;
}

loc_80092278:
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

extern "C" void func_800921A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800921A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800921A0 func_800921A0 preserves=true fpr_mask=0x00000000

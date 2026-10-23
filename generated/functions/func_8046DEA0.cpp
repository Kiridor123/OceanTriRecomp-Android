#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8046DEA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_not_3 = 0;
    uint32_t r0_not_4 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r0_subfe_rb_3 = 0;
    uint32_t r29_ca_0 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_10 = 0;
    uint32_t r5_ca_11 = 0;
    uint32_t r5_ca_12 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_ca_3 = 0;
    uint32_t r5_ca_4 = 0;
    uint32_t r5_ca_5 = 0;
    uint32_t r5_ca_6 = 0;
    uint32_t r5_ca_7 = 0;
    uint32_t r5_ca_8 = 0;
    uint32_t r5_ca_9 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_10 = 0;
    uint32_t r5_not_11 = 0;
    uint32_t r5_not_12 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_not_3 = 0;
    uint32_t r5_not_4 = 0;
    uint32_t r5_not_5 = 0;
    uint32_t r5_not_6 = 0;
    uint32_t r5_not_7 = 0;
    uint32_t r5_not_8 = 0;
    uint32_t r5_not_9 = 0;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_8046DEA0;

loc_8046DEA0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = 0;
    r3 = 0;
    r0 = 0;
    r29 = 0;
    r30 = 0;
    r31 = -855638016;
    goto loc_8046E024;
}

loc_8046DED0:
{
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r0 = (r0 & -33);
    r0 = (r0 | 32);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r0 = (r0 & -3);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    r0 = (r0 | 1);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r31 + 27656));
    r3 = (r0 & 2147483647);
    // nop
}

loc_8046DF08:
{
    r0 = MemoryHw::FlatRead32((r31 + 27656));
    r0 = (r0 & 2147483647);
}

loc_8046DF14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8046DF08;
    }
}

loc_8046DF18:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r27 = r4;
    r28 = r3;
    r0 = (r0 & -3);
    r0 = (r0 | 2);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    r0 = (r0 | 1);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r0 = MemoryHw::FlatRead32((r31 + 27656));
    r3 = (r0 & 2147483647);
    // nop
}

loc_8046DF50:
{
    r0 = MemoryHw::FlatRead32((r31 + 27656));
    r0 = (r0 & 2147483647);
}

loc_8046DF5C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8046DF50;
    }
}

loc_8046DF60:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r8 = (r4 - r27);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r27) ? 1u : 0u) << 29);
    r5_not_2 = ~(r28);
    r5_ca_2 = (xer >> 29) & 1u;
    r5 = (r5_not_2 + r3);
    r5 = (r5 + r5_ca_2);
    r0 = (r0 & -3);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r7 = (r5 ^ -2147483648);
    r0 = MemoryHw::FlatRead32((r31 + 27648));
    r0 = (r0 & -2);
    MemoryHw::FlatWrite32((r31 + 27648), r0);
    r10 = MemoryHw::FlatRead32((r13 + -16268));
    r12 = MemoryHw::FlatRead32((r13 + -16236));
    r9 = MemoryHw::FlatRead32((r13 + -16272));
    r11 = MemoryHw::FlatRead32((r13 + -16240));
    r6 = (r12 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r12) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_not_2 = ~(r9);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_not_2 + r11);
    r0 = (r0 + r0_ca_2);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_3 = ~(r5);
    r5_ca_3 = (xer >> 29) & 1u;
    r5 = (r5_not_3 + r7);
    r5 = (r5 + r5_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_4 = ~(r7);
    r5_ca_4 = (xer >> 29) & 1u;
    r5 = (r5_not_4 + r7);
    r5 = (r5 + r5_ca_4);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046DFC8;
    }
}

loc_8046DFB8:
{
    r30 = MemoryHw::FlatRead32((r13 + -16256));
    r0 = 1;
    r29 = MemoryHw::FlatRead32((r13 + -16252));
    goto loc_8046E024;
}

loc_8046DFC8:
{
    r6 = (r12 + r10);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r12)) + static_cast<uint64_t>(static_cast<uint32_t>(r10)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r11 + r9);
    r0 = (r0 + r0_ca_3);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_5 = ~(r5);
    r5_ca_5 = (xer >> 29) & 1u;
    r5 = (r5_not_5 + r7);
    r5 = (r5 + r5_ca_5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_5)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_5)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_6 = ~(r7);
    r5_ca_6 = (xer >> 29) & 1u;
    r5 = (r5_not_6 + r7);
    r5 = (r5 + r5_ca_6);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046E020;
    }
}

loc_8046DFE8:
{
    r5 = MemoryHw::FlatRead32((r13 + -16244));
    r0 = MemoryHw::FlatRead32((r13 + -16248));
    r6 = (r5 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_subfe_rb_2 = r0;
    r0_not_3 = ~(r9);
    r0_ca_4 = (xer >> 29) & 1u;
    r0 = (r0_not_3 + r0_subfe_rb_2);
    r0 = (r0 + r0_ca_4);
    r5 = (r0 ^ -2147483648);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r5_not_7 = ~(r5);
    r5_ca_7 = (xer >> 29) & 1u;
    r5 = (r5_not_7 + r7);
    r5 = (r5 + r5_ca_7);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_7)) + static_cast<uint64_t>(static_cast<uint32_t>(r7)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_7)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_8 = ~(r7);
    r5_ca_8 = (xer >> 29) & 1u;
    r5 = (r5_not_8 + r7);
    r5 = (r5 + r5_ca_8);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8046E020;
    }
}

loc_8046E010:
{
    r30 = MemoryHw::FlatRead32((r13 + -16264));
    r0 = 1;
    r29 = MemoryHw::FlatRead32((r13 + -16260));
    goto loc_8046E024;
}

loc_8046E020:
{
    r0 = 0;
}

loc_8046E024:
{
}

loc_8046E028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046DED0;
    }
}

loc_8046E02C:
{
    r31 = (r4 + r29);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r29)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r29_ca_0 = (xer >> 29) & 1u;
    r29 = (r3 + r30);
    r29 = (r29 + r29_ca_0);
}

loc_8046E034:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = (r3 ^ -2147483648);
    r5 = (r29 ^ -2147483648);
    r3 = (r4 - r31);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r31) ? 1u : 0u) << 29);
    r5_not_11 = ~(r5);
    r5_ca_11 = (xer >> 29) & 1u;
    r5 = (r5_not_11 + r0);
    r5 = (r5 + r5_ca_11);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_not_11)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r5_ca_11)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r5_not_12 = ~(r0);
    r5_ca_12 = (xer >> 29) & 1u;
    r5 = (r5_not_12 + r0);
    r5 = (r5 + r5_ca_12);
    r5 = (0 - r5);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8046E034;
    }
}

loc_8046E054:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046DEA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046DEA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046DEA0 func_8046DEA0 preserves=true fpr_mask=0x00000000

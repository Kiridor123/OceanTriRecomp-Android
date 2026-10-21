#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843A00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80843A00u);
    goto loc_80843A00;

loc_80843A00:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 * 76);
    r3 = MemoryInline::FlatRead32((r4 + -30380));
    r30 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r30 + 8));
}

loc_80843A2C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80843AD8;
    }
}

loc_80843A30:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
}

loc_80843A38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843A80;
    }
}

loc_80843A3C:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_80843A48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843A80;
    }
}

loc_80843A4C:
{
    r3 = MemoryInline::FlatRead8((r30 + 12));
    r0 = MemoryInline::FlatRead8((r30 + 13));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_1 & -512);
    r3 = (r31 + r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1032));
}

loc_80843A6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_80843A78;
    }
}

loc_80843A70:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1032), r0);
}

loc_80843A78:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 48), r0);
}

loc_80843A80:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80842FF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_80843A90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80843AC8;
    }
}

loc_80843A94:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    // inline leaf 0x80841470 (11 guest instruction(s))
    r4 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + -32096);
    r3 = 0x80870000u;
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -31996));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    // end of inlined leaf 0x80841470
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x80842190 (11 guest instruction(s))
}

loc_inl1_0x80842190:
{
    r5 = 0x80870000u;
    r5 = (r5 + -32096);
    r5_addr_1 = (r5 + r3);
    r6 = MemoryInline::FlatRead8(r5_addr_1);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x808421A4:
{
    r4 = 0x80870000u;
    r0 = -1;
    r4 = (r4 + -32112);
    r5_addr_2 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r0));
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80842190;
}

loc_inl1_return:
{
}

loc_inl1_cont_80842190:
{
    // end of inlined leaf 0x80842190
    r3 = MemoryInline::FlatRead32((r30 + 4));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 1028));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 1028), r0);
    goto loc_80843AD8;
}

loc_80843AC8:
{
    r3 = r30;
    ctx->lr = 0x80843AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x808431A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r3 = r30;
    ctx->lr = 0x80843AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80843460u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80843AD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x0000001A fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80843A00 func_80843A00 preserves=true fpr_mask=0x00000000

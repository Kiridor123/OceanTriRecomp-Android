#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828D30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80828D30;

loc_80828D30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = 0;
    r29 = r4;
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r31 = (r5 + r0);
    goto loc_80828DB8;
}

loc_80828D68:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r31_addr_2 = (r31 + r0);
    r0 = MemoryInline::FlatRead32(r31_addr_2);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 21));
}

loc_80828D7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80828DB4;
    }
}

loc_80828D80:
{
    r3 = (r29 + 4);
    ctx->lr = 0x80828D88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80829DD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_80828D8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80828DB4;
    }
}

loc_80828D90:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r5 = (r5_rot_2 & 1048560);
    r3 = r29;
    r4 = (r0 + r5);
    MemoryInline::FlatWrite32((r4 + 8), r28);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r30));
    r0 = MemoryInline::FlatRead32((r28 + 24));
    r4 = (r0 + r5);
    ctx->lr = 0x80828DB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80830010u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_80828DB4:
{
    r30 = (r30 + 1);
}

loc_80828DB8:
{
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r3 = (r30 & 65535);
    r0 = MemoryInline::FlatRead16((r4 + 14));
}

loc_80828DC8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80828D68;
    }
}

loc_80828DCC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828D30 func_80828D30 preserves=true fpr_mask=0x00000000

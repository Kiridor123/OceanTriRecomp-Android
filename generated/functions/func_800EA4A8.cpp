#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EA4A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EA4A8;

loc_800EA4A8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = r4;
}

loc_800EA4D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800EA5CC;
    }
}

loc_800EA4D4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r4 = (r5 + -2147483648);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r13 + -17420));
    guest_range_0 = MemoryInline::ResolveRangeHost(r28, 0, 212u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r28 + 64));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 211u, (r28 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800EA4FC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_800EA56C;
    }
}

loc_800EA500:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 204u, (r28 + 204));
}

loc_800EA508:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EA53C;
    }
}

loc_800EA50C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 150), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE9DCu>(ctx);
    r3 = ctx->gpr[3];
    r29 = (r31 + r3);
    r3 = MemoryInline::FlatRead32(r28);
    r4 = MemoryInline::FlatRead32((r3 + 20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE9DCu>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r31 + r3);
    r4 = (r4 + -1);
    goto loc_800EA588;
}

loc_800EA53C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 150), static_cast<uint16_t>(r0));
    r29 = r31;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r28 + 64));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 211u, (r28 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r31 + r3);
    r4 = (r4 + -1);
    goto loc_800EA588;
}

loc_800EA56C:
{
    r29 = r31;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, r28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE8CCu>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r31 + r3);
    r4 = (r4 + -1);
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 150), static_cast<uint16_t>(r0));
}

loc_800EA588:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EA594:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800EA59C;
    }
}

loc_800EA598:
{
    r29 = (r29 + 2);
}

loc_800EA59C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    MemoryInline::FlatWrite16((r30 + 154), static_cast<uint16_t>(r0));
    r0 = (r29 & 65535);
    MemoryInline::FlatWrite16((r30 + 156), static_cast<uint16_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 65535);
    MemoryInline::FlatWrite16((r30 + 158), static_cast<uint16_t>(r0));
    r0 = (r4 & 65535);
    MemoryInline::FlatWrite16((r30 + 160), static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    MemoryInline::FlatWrite16((r30 + 162), static_cast<uint16_t>(r0));
    r0 = (r31 & 65535);
    MemoryInline::FlatWrite16((r30 + 164), static_cast<uint16_t>(r0));
}

loc_800EA5CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EA4A8 func_800EA4A8 preserves=true fpr_mask=0x00000000

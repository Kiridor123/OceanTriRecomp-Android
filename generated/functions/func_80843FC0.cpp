#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843FC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80843FC0;

loc_80843FC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80870000u;
    r4 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r3 + -29148));
    r30 = MemoryInline::FlatRead32((r4 + -29152));
}

loc_80843FF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80844120;
    }
}

loc_80843FF4:
{
    goto loc_80844128;
}

loc_80843FFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + -1);
}

loc_80844008:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_808440DC;
    }
}

loc_8084400C:
{
    r31 = (r30 + 9244);
    r29 = 0;
    goto loc_808440D0;
}

loc_80844018:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r3 + -1);
}

loc_80844024:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_808440C8;
    }
}

loc_80844028:
{
    r28 = MemoryInline::FlatRead32((r31 + 28));
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_80844034:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r28))) {
        goto loc_808440B0;
    }
}

loc_80844038:
{
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r31 + 32), r0);
    goto loc_808440C8;
}

loc_80844048:
{
    r4 = r31;
    r28 = (r28 - r0);
    r3 = (r30 + 20);
    ctx->lr = 0x80844058u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80843AF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_80844060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808440BC;
    }
}

loc_80844064:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r4 = MemoryInline::FlatRead8(r3);
    r5 = (r4 & 127);
    goto loc_80844094;
}

loc_80844078:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(7));
    r3 = (r3_rot_5 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r4);
    r4 = MemoryInline::FlatRead8(r4);
    r0 = (r4 & 127);
    r5 = (r3 + r0);
}

loc_80844094:
{
    r0 = (r4 & 128);
}

loc_80844098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80844078;
    }
}

loc_8084409C:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & -65536);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_808440B0:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_808440B8:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_80844048;
    }
}

loc_808440BC:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 - r28);
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_808440C8:
{
    r31 = (r31 + 40);
    r29 = (r29 + 1);
}

loc_808440D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_808440D8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_80844018;
    }
}

loc_808440DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_808440E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084411C;
    }
}

loc_808440E8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_808440F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80844110;
    }
}

loc_808440F4:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x80844100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r30;
    r4 = 2;
    ctx->lr = 0x8084410Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_8084411C;
}

loc_80844110:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8084411Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8084411C:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_80844120:
{
}

loc_80844124:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80843FFC;
    }
}

loc_80844128:
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

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843FC0 func_80843FC0 preserves=true fpr_mask=0x00000000

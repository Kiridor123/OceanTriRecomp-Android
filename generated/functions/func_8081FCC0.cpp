#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081FCC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081FCC0u);
    goto loc_8081FCC0;

loc_8081FCC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r28 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r31 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    r3 = r31;
    r30 = (r31 + r0);
    goto loc_8081FD14;
}

loc_8081FD00:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8081FD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(44))) {
        goto loc_8081FD20;
    }
}

loc_8081FD0C:
{
    r28 = (r28 + 1);
    r3 = (r3 + 1);
}

loc_8081FD14:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081FD00;
    }
}

loc_8081FD20:
{
    r3 = (r28 + 1);
    ctx->lr = 0x8081FD28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    MemoryInline::FlatWrite32((r29 + 176), r3);
    r4 = r31;
    r5 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_9E6 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_9E6;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = MemoryInline::FlatRead32((r29 + 176));
    r3 = (r28 + r31);
    r31 = (r3 + 1);
    r0 = 0;
    r4_addr_0 = (r4 + r28);
    MemoryInline::FlatWrite8(r4_addr_0, static_cast<uint8_t>(r0));
    r3 = r31;
    r28 = 0;
    goto loc_8081FD6C;
}

loc_8081FD58:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_8081FD60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(44))) {
        goto loc_8081FD78;
    }
}

loc_8081FD64:
{
    r28 = (r28 + 1);
    r3 = (r3 + 1);
}

loc_8081FD6C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081FD58;
    }
}

loc_8081FD78:
{
    r3 = (r28 + 1);
    ctx->lr = 0x8081FD80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x8081E8D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    MemoryInline::FlatWrite32((r29 + 180), r3);
    r4 = r31;
    r5 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_1186 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_1186;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r29 + 180));
    r4 = 0;
    r5 = r29;
    r31 = (r31 + r28);
    r3_addr_0 = (r3 + r28);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r4));
    r8 = 0;
    r9 = 0;
    r3 = 1;
    goto loc_8081FDE8;
}

loc_8081FDB8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
}

loc_8081FDC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(44))) {
        goto loc_8081FDE4;
    }
}

loc_8081FDC4:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
}

loc_8081FDCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(49))) {
        goto loc_8081FDD8;
    }
}

loc_8081FDD0:
{
    MemoryInline::FlatWrite32((r5 + 160), r3);
    goto loc_8081FDDC;
}

loc_8081FDD8:
{
    MemoryInline::FlatWrite32((r5 + 160), r4);
}

loc_8081FDDC:
{
    r5 = (r5 + 4);
    r9 = (r9 + 1);
}

loc_8081FDE4:
{
    r8 = (r8 + 1);
}

loc_8081FDE8:
{
    r31_addr_2 = (r31 + r8);
    r7 = MemoryInline::FlatRead8(r31_addr_2);
    r6 = (r31 + r8);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081FE00;
    }
}

loc_8081FDF8:
{
}

loc_8081FDFC:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r30))) {
        goto loc_8081FDB8;
    }
}

loc_8081FE00:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    MemoryInline::FlatWrite32((r29 + 12), r9);
    r0 = (r0 - r9);
    MemoryInline::FlatWrite32((r29 + 16), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081FCC0 func_8081FCC0 preserves=true fpr_mask=0x00000000

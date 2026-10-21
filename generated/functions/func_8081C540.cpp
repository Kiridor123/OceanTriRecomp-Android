#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF1F0(CpuContext* ctx);
extern "C" uint64_t func_804EF1F0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8081C540(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r29_addr_4 = 0;
    uint32_t r29_addr_5 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r3_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8081C540u);
    goto loc_8081C540;

loc_8081C540:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8081C54C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r4;
    r30 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8081C578;
    }
}

loc_8081C56C:
{
}

loc_8081C570:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_8081C5C0;
    }
}

loc_8081C574:
{
    goto loc_8081C5F4;
}

loc_8081C578:
{
    r28 = 0x80870000u;
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r29 = (r29_rot_1 & -4);
    r28 = (r28 + -32352);
    r28_addr_1 = (r28 + r29);
    r4 = MemoryInline::FlatRead32(r28_addr_1);
    r0 = MemoryInline::FlatRead8((r4 + 64));
}

loc_8081C590:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8081C5AC;
    }
}

loc_8081C594:
{
    r4 = 0x80820000u;
    r4 = (r4 + -14768);
    ctx->lr = 0x8081C5A0u;
    if constexpr (KnownRegArgsCpuCall<0x804EF1F0u>(&func_804EF1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EF1F0_979 = func_804EF1F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804EF1F0_979);
        r4 = static_cast<uint32_t>(regargs_result_804EF1F0_979 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28_addr_2 = (r28 + r29);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
}

loc_8081C5AC:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8081C5BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804EFF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8081C5F4;
}

loc_8081C5C0:
{
    r29 = 0x80870000u;
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & -4);
    r29 = (r29 + -32352);
    r29_addr_1 = (r29 + r28);
    r4 = MemoryInline::FlatRead32(r29_addr_1);
    r4 = MemoryInline::FlatRead32((r4 + 40));
    ctx->lr = 0x8081C5D8u;
    if constexpr (KnownRegArgsCpuCall<0x804EF1F0u>(&func_804EF1F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EF1F0_1016 = func_804EF1F0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804EF1F0_1016);
        r4 = static_cast<uint32_t>(regargs_result_804EF1F0_1016 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF1F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29_addr_2 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_2);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 64), static_cast<uint8_t>(r0));
    r29_addr_3 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_3);
    MemoryInline::FlatWrite8((r3 + 66), static_cast<uint8_t>(r0));
    r29_addr_4 = (r29 + r28);
    r3 = MemoryInline::FlatRead32(r29_addr_4);
    MemoryInline::FlatWrite8((r3 + 67), static_cast<uint8_t>(r0));
}

loc_8081C5F4:
{
    r3 = 0x80870000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + -32352);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r12 = MemoryInline::FlatRead32((r3 + 36));
}

loc_8081C60C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8081C630;
    }
}

loc_8081C610:
{
    r3 = 0x80820000u;
    r3 = (r3 + -15040);
}

loc_8081C61C:
{
    if ((static_cast<uint32_t>(r12) == static_cast<uint32_t>(r3))) {
        goto loc_8081C630;
    }
}

loc_8081C620:
{
    r3 = r30;
    r4 = r31;
    ctr = r12;
    ctx->lr = 0x8081C630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8081C630:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081C540 func_8081C540 preserves=true fpr_mask=0x00000000

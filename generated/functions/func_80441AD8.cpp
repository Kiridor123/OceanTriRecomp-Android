#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80441AD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80441AD8u);
    goto loc_80441AD8;

loc_80441AD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = 0x806E0000u;
    r30 = (r5 + -30960);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r5 + -30960), r31);
    MemoryInline::FlatWriteRam32((r30 + 4), r31);
    MemoryInline::FlatWriteRam32((r30 + 8), r31);
    MemoryInline::FlatWriteRam32((r30 + 12), r31);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam8((r30 + 256), static_cast<uint8_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    MemoryInline::FlatWriteRam8((r30 + 257), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r30 + 16), r31);
    r3 = (r30 + 20);
    r0 = (r5 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x80600000u;
    r4 = (r4 + 30616);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_746 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_746;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2384));
    MemoryInline::FlatWriteRam32((r30 + 84), r3);
}

loc_80441B50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80441B5C;
    }
}

loc_80441B54:
{
    r3 = 0;
    goto loc_80441B84;
}

loc_80441B5C:
{
    r4 = 65536;
    r5 = (r4 + 16384);
    MemoryInline::FlatWriteRam32((r30 + 88), r5);
    r0 = 5;
    MemoryInline::FlatWriteRam32((r30 + 92), r0);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r30 + 100), r31);
    MemoryInline::FlatWriteRam32((r30 + 96), r31);
    r3 = 1;
}

loc_80441B84:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80441AD8 func_80441AD8 preserves=true fpr_mask=0x00000000

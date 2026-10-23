#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004C45C(CpuContext* ctx);
extern "C" uint64_t func_8004C45C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8004C620(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8004C620;

loc_8004C620:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    ctx->lr = 0x8004C648u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004AED4_4B1 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_4B1;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = 0;
    r0 = (r3 & 65535);
    ctr = r0;
}

loc_8004C658:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_8004C69C;
    }
}

loc_8004C65C:
{
    r0 = (r30 & 65535);
    r0 = (r0 * 12);
    r31 = (r28 + r0);
    r31 = (r31 + 3584);
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8004C674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004C694;
    }
}

loc_8004C678:
{
    r3 = r31;
    r4 = r29;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWrite32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = r31;
    ctx->lr = 0x8004C68Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004C45Cu>(&func_8004C45C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C45C_C64 = func_8004C45C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C45C_C64);
        r4 = static_cast<uint32_t>(regargs_result_8004C45C_C64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004C45Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    goto loc_8004C6A4;
}

loc_8004C694:
{
    r30 = (r30 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004C65C;
    }
}

loc_8004C69C:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8004C6A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004C620 func_8004C620 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80440218_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    goto loc_80440218;

loc_80440218:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806E0000u;
    r30 = (r3 + -30960);
    r31 = MemoryInline::FlatRead32((r30 + 84));
    r3 = r31;
    r4 = 0;
    r5 = 16384;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2134));
}

loc_80440268:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80440294;
    }
}

loc_8044026C:
{
    r3 = (r31 + 16);
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 24), r0);
    MemoryInline::FlatWrite32((r31 + 28), r0);
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
    goto loc_804402B4;
}

loc_80440294:
{
    r0 = MemoryInline::FlatRead32((r3 + 2184));
    MemoryInline::FlatWrite32((r31 + 24), r0);
    r0 = MemoryInline::FlatRead32((r3 + 2188));
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r0 = MemoryInline::FlatRead8((r3 + 2320));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2321));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r0));
}

loc_804402B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 84));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = (r3 + 8);
    r0 = 2047;
    ctr = r0;
}

loc_804402CC:
{
    r4 = MemoryInline::FlatRead32((r31 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r4 = MemoryInline::FlatRead32((r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804402CC;
    }
}

loc_80440354:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80440218(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80440218_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80440218 func_80440218 preserves=true fpr_mask=0x00000000

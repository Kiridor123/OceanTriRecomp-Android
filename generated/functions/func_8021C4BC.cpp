#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021C264(CpuContext* ctx);
extern "C" uint32_t func_8021C264_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8021C4BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021C4BCu);
    goto loc_8021C4BC;

loc_8021C4BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r5;
    r31 = r4;
    goto loc_8021C590;
}

loc_8021C4E4:
{
    r3 = r31;
    ctx->lr = 0x8021C4ECu;
    if constexpr (KnownRegArgsCpuCall<0x8021C264u>(&func_8021C264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021C264_476 = func_8021C264_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021C264_476;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021C264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8021C4F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8021C58C;
    }
}

loc_8021C4F4:
{
}

loc_8021C4F8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8021C560;
    }
}

loc_8021C4FC:
{
    r3 = r29;
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 1));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 14));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r3 = 1;
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (r0 & 4);
}

loc_8021C538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C544;
    }
}

loc_8021C53C:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    goto loc_8021C54C;
}

loc_8021C544:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8021C54C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    goto loc_8021C584;
}

loc_8021C560:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (r0 & 4);
}

loc_8021C56C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8021C57C;
    }
}

loc_8021C570:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8021C584;
}

loc_8021C57C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8021C584:
{
    r3 = MemoryInline::FlatRead16((r31 + 14));
    goto loc_8021C5A4;
}

loc_8021C58C:
{
    r31 = (r31 + 16);
}

loc_8021C590:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
}

loc_8021C598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8021C4E4;
    }
}

loc_8021C59C:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8021C5A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021C4BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021C4BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021C4BC func_8021C4BC preserves=true fpr_mask=0x00000000

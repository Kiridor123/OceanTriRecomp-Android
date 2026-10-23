#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E8028(CpuContext* ctx);
extern "C" uint64_t func_800E8028_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800F25A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800F25A4;

loc_800F25A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r0 = 0;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_800F25E0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(49))) {
        goto loc_800F2624;
    }
}

loc_800F25E4:
{
    // inline leaf 0x800F0560 (8 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + -26764));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800F0560
}

loc_800F25EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F2624;
    }
}

loc_800F25F0:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x800F25FCu;
    if constexpr (KnownRegArgsCpuCall<0x800E8028u>(&func_800E8028)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8028_8B2 = func_800E8028_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E8028_8B2);
        r4 = static_cast<uint32_t>(regargs_result_800E8028_8B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800E8028u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800F2600:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F2624;
    }
}

loc_800F2604:
{
    r0 = MemoryInline::FlatRead16((r3 + 36));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 38));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 40));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 42));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
}

loc_800F2624:
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

extern "C" void func_800F25A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F25A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F25A4 func_800F25A4 preserves=true fpr_mask=0x00000000

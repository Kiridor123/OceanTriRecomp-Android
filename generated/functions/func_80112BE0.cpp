#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114A80(CpuContext* ctx);
extern "C" uint64_t func_80114A80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80331274(CpuContext* ctx);
extern "C" uint64_t func_80331274_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80112BE0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80112BE0;

loc_80112BE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r7;
    f31.d = f1.d;
    r3 = r6;
    r4 = MemoryInline::FlatRead8((r27 + 22));
    r5 = (r28 & 255);
    ctx->lr = 0x80112C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80114A80u>(&func_80114A80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80114A80_78D = func_80114A80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114A80_78D);
        r4 = static_cast<uint32_t>(regargs_result_80114A80_78D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80114A80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r31 = r3;
}

loc_80112C24:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80112C90;
    }
}

loc_80112C28:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    MemoryInline::FlatWrite32((r3 + 44), r0);
    MemoryInline::FlatWrite32((r3 + 48), r27);
    r30 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWriteFloat32((r30 + 72), f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f31.d);
    r0 = (r28 & 255);
}

loc_80112C58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(102))) {
        goto loc_80112C8C;
    }
}

loc_80112C5C:
{
    r3 = r27;
    ctx->lr = 0x80112C64u;
    if constexpr (KnownRegArgsCpuCall<0x80331274u>(&func_80331274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331274_EB2 = func_80331274_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80331274_EB2);
        r4 = static_cast<uint32_t>(regargs_result_80331274_EB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80331274u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80112C6C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80112C7C;
    }
}

loc_80112C70:
{
}

loc_80112C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80112C84;
    }
}

loc_80112C78:
{
    goto loc_80112C8C;
}

loc_80112C7C:
{
    r29 = r3;
    goto loc_80112C8C;
}

loc_80112C84:
{
    r0 = 103;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_80112C8C:
{
    MemoryInline::FlatWrite8((r30 + 64), static_cast<uint8_t>(r29));
}

loc_80112C90:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80112BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80112BE0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80112BE0 func_80112BE0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802CB964(CpuContext* ctx);
extern "C" uint64_t func_802CB964_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802D1CF4_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x802D1CF4u);
    goto loc_802D1CF4;

loc_802D1CF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13232));
    ctx->lr = 0x802D1D1Cu;
    if constexpr (KnownRegArgsCpuCall<0x802CB964u>(&func_802CB964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CB964_474 = func_802CB964_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802CB964_474);
        r4 = static_cast<uint32_t>(regargs_result_802CB964_474 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802CB964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_802D1D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1D60;
    }
}

loc_802D1D28:
{
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13100));
    ctx->lr = 0x802D1D3Cu;
    if constexpr (KnownRegArgsCpuCall<0x802CB964u>(&func_802CB964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CB964_8B0 = func_802CB964_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802CB964_8B0);
        r4 = static_cast<uint32_t>(regargs_result_802CB964_8B0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802CB964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_802D1D44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802D1D54;
    }
}

loc_802D1D48:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 1046), static_cast<uint8_t>(r0));
    goto loc_802D1D68;
}

loc_802D1D54:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 1046), static_cast<uint8_t>(r0));
    goto loc_802D1D68;
}

loc_802D1D60:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1046), static_cast<uint8_t>(r0));
}

loc_802D1D68:
{
    r0 = MemoryInline::FlatRead8((r31 + 1046));
}

loc_802D1D70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D1DA0;
    }
}

loc_802D1D74:
{
    r3 = MemoryInline::FlatRead16((r31 + 908));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 908), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D1D88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(300))) {
        goto loc_802D1DE0;
    }
}

loc_802D1D8C:
{
    r0 = 300;
    MemoryInline::FlatWrite16((r31 + 908), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 910), static_cast<uint8_t>(r0));
    goto loc_802D1DE0;
}

loc_802D1DA0:
{
}

loc_802D1DA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802D1DD4;
    }
}

loc_802D1DA8:
{
    r3 = MemoryInline::FlatRead16((r31 + 908));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 908), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802D1DBC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(150))) {
        goto loc_802D1DE0;
    }
}

loc_802D1DC0:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r31 + 908), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 910), static_cast<uint8_t>(r0));
    goto loc_802D1DE0;
}

loc_802D1DD4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 908), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 910), static_cast<uint8_t>(r0));
}

loc_802D1DE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D1CF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D1CF4_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D1CF4 func_802D1CF4 preserves=true fpr_mask=0x00000000

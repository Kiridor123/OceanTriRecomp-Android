#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A40C(CpuContext* ctx);
extern "C" uint32_t func_8026A40C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8020927C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8020927Cu);
    goto loc_8020927C;

loc_8020927C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80208B1C (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x80208B1C
}

loc_80209298:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802092BC;
    }
}

loc_8020929C:
{
    r3 = r31;
    // inline leaf 0x80208B24 (10 guest instruction(s))
}

loc_inl1_0x80208B24:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl1_0x80208B2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_inl1_0x80208B38;
    }
}

loc_inl1_0x80208B30:
{
    r3 = 0;
    goto loc_inl1_cont_80208B24;
}

loc_inl1_0x80208B38:
{
    r3 = MemoryInline::FlatRead8((r3 + 2816));
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_inl1_cont_80208B24:
{
    // end of inlined leaf 0x80208B24
}

loc_802092A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802092BC;
    }
}

loc_802092AC:
{
    r3 = r31;
    // inline leaf 0x80208B4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2816));
    r0 = (r3 + -3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x80208B4C
}

loc_802092B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802092C4;
    }
}

loc_802092BC:
{
    r3 = 0;
    goto loc_802092FC;
}

loc_802092C4:
{
    r3 = r31;
    ctx->lr = 0x802092CCu;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026A40C_AD6 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_AD6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = MemoryInline::FlatRead32((r31 + 88));
    r3 = MemoryInline::FlatRead32((r31 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r4 = (r3 + -24576);
    r3 = 16384;
    r0 = (16384 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_802092FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8020927C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020927C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020927C func_8020927C preserves=true fpr_mask=0x00000000

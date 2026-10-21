#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274B1C(CpuContext* ctx);
extern "C" uint64_t func_80274B1C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802716D8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802716D8u);
    goto loc_802716D8;

loc_802716D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    r3 = (r31 & 255);
    r0 = (r3 + -15);
}

loc_80271710:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80271720;
    }
}

loc_80271714:
{
}

loc_80271718:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(74))) {
        goto loc_80271738;
    }
}

loc_8027171C:
{
    goto loc_80271768;
}

loc_80271720:
{
    r3 = r30;
    ctx->lr = 0x80271728u;
    if constexpr (KnownRegArgsCpuCall<0x80274B1Cu>(&func_80274B1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274B1C_845 = func_80274B1C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274B1C_845);
        r4 = static_cast<uint32_t>(regargs_result_80274B1C_845 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274B1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_802717B8;
}

loc_80271738:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -7);
}

loc_80271744:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80271758;
    }
}

loc_80271748:
{
}

loc_8027174C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80271758;
    }
}

loc_80271750:
{
}

loc_80271754:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_80271760;
    }
}

loc_80271758:
{
    r3 = 1;
    goto loc_802717B8;
}

loc_80271760:
{
    r3 = 0;
    goto loc_802717B8;
}

loc_80271768:
{
    r0 = (r4 & 65535);
}

loc_80271770:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80271780;
    }
}

loc_80271774:
{
    r3 = 0x805C0000u;
    r4 = (r3 + 2392);
    goto loc_80271788;
}

loc_80271780:
{
    r3 = 0x805C0000u;
    r4 = (r3 + 2424);
}

loc_80271788:
{
    r3 = (r31 & 255);
    goto loc_802717A8;
}

loc_80271790:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
}

loc_8027179C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_802717A8;
    }
}

loc_802717A0:
{
    r3 = 0;
    goto loc_802717B8;
}

loc_802717A8:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_802717B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80271790;
    }
}

loc_802717B4:
{
    r3 = 1;
}

loc_802717B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802716D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802716D8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802716D8 func_802716D8 preserves=true fpr_mask=0x00000000

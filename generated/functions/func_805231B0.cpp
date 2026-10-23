#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80522CE8(CpuContext* ctx);
extern "C" uint64_t func_80522CE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805231B0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805231B0;

loc_805231B0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_805231BC:
{
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    MemoryHw::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805231F0;
    }
}

loc_805231D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80523204;
    }
}

loc_805231D4:
{
}

loc_805231D8:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(1))) {
        goto loc_805231E0;
    }
}

loc_805231DC:
{
    goto loc_80523204;
}

loc_805231E0:
{
    r0 = MemoryHw::FlatRead8(r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & -16777216);
    MemoryHw::FlatWriteRam32((r1 + 12), r0);
    goto loc_80523220;
}

loc_805231F0:
{
    r3 = MemoryHw::FlatRead16(r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 16711680);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0_mrot_2 = (r0_rot_4 & -16777216);
    r0_mdest_2 = (r0 & 16777215);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryHw::FlatWriteRam32((r1 + 12), r0);
    goto loc_80523220;
}

loc_80523204:
{
    r4 = MemoryHw::FlatRead32(r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 65280);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_2 & -16777216);
    r3_mdest_1 = (r3 & 16777215);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_2 & 255);
    r0_mdest_1 = (r0 & -256);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r3 | r0);
    MemoryHw::FlatWriteRam32((r1 + 12), r0);
}

loc_80523220:
{
    r30 = -855638016;
    r3 = (r1 + 8);
    r0 = MemoryHw::FlatRead32((r30 + 26664));
    r4 = 4;
    r5 = 1;
    r0 = (r0 & 1029);
}

loc_80523238:
{
    r0 = (r0 | 192);
    MemoryHw::FlatWrite32((r30 + 26664), r0);
    ctx->lr = 0x80523244u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80522CE8_FF8 = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_FF8);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_FF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r31 = (r31_rot_0 & 134217727);
}

loc_8052324C:
{
    r0 = MemoryHw::FlatRead32((r30 + 26676));
    r0 = (r0 & 1);
}

loc_80523254:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052324C;
    }
}

loc_80523258:
{
    r3 = (r1 + 12);
    r4 = 4;
    r5 = 1;
    ctx->lr = 0x80523268u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80522CE8_157A = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_157A);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_157A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = -855638016;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    r5 = (r31 | r0);
}

loc_80523278:
{
    r0 = MemoryHw::FlatRead32((r3 + 26676));
    r0 = (r0 & 1);
}

loc_80523280:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523278;
    }
}

loc_80523284:
{
    r4 = -855638016;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r5 = MemoryHw::FlatRead32((r4 + 26664));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    r0 = (r5 & 1029);
}

loc_80523298:
{
    MemoryHw::FlatWrite32((r4 + 26664), r0);
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805231B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805231B0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805231B0 func_805231B0 preserves=true fpr_mask=0x00000000

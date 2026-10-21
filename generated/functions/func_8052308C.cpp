#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80522CE8(CpuContext* ctx);
extern "C" uint64_t func_80522CE8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8052308C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r29_rot_0 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8052308Cu);
    goto loc_8052308C;

loc_8052308C:
{
    guest_range_0 = MemoryHw::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryHw::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0;
    MemoryHw::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r31 = r5;
    r5 = 1;
    r30 = r4;
    r4 = 4;
    r28 = -855638016;
    MemoryHw::WriteResolved32(guest_range_0, 8u, (r1 + 8), r3);
    r3 = (r1 + 8);
    MemoryHw::WriteResolved32(guest_range_0, 12u, (r1 + 12), r6);
    r0 = MemoryHw::FlatRead32((r28 + 26664));
    r0 = (r0 & 1029);
}

loc_805230D4:
{
    r0 = (r0 | 192);
    MemoryHw::FlatWrite32((r28 + 26664), r0);
    ctx->lr = 0x805230E0u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80522CE8_9DE = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_9DE);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_9DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_0 & 134217727);
}

loc_805230E8:
{
    r0 = MemoryHw::FlatRead32((r28 + 26676));
    r0 = (r0 & 1);
}

loc_805230F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805230E8;
    }
}

loc_805230F4:
{
    r3 = (r1 + 12);
    r4 = 4;
    r5 = 0;
    ctx->lr = 0x80523104u;
    if constexpr (KnownRegArgsCpuCall<0x80522CE8u>(&func_80522CE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80522CE8_F94 = func_80522CE8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80522CE8_F94);
        r4 = static_cast<uint32_t>(regargs_result_80522CE8_F94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80522CE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = -855638016;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r6 = (r29 | r0);
}

loc_80523114:
{
    r0 = MemoryHw::FlatRead32((r3 + 26676));
    r0 = (r0 & 1);
}

loc_8052311C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80523114;
    }
}

loc_80523120:
{
    r3 = -855638016;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80523128:
{
    r0 = MemoryHw::FlatRead32((r3 + 26664));
    r0 = (r0 & 1029);
}

loc_80523130:
{
    MemoryHw::FlatWrite32((r3 + 26664), r0);
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80523158;
    }
}

loc_80523138:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8052316C;
    }
}

loc_8052313C:
{
}

loc_80523140:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_80523148;
    }
}

loc_80523144:
{
    goto loc_8052316C;
}

loc_80523148:
{
    r0 = MemoryHw::FlatRead32((r1 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryHw::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_80523188;
}

loc_80523158:
{
    r3 = MemoryHw::FlatRead32((r1 + 12));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 65280);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_5 & 255);
    r0_mdest_2 = (r0 & -256);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryHw::FlatWrite16(r30, static_cast<uint16_t>(r0));
    goto loc_80523188;
}

loc_8052316C:
{
    r4 = MemoryHw::FlatRead32((r1 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 16711680);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 65280);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r3_mrot_1 = (r3_rot_2 & -16777216);
    r3_mdest_1 = (r3 & 16777215);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_3 & 255);
    r0_mdest_1 = (r0 & -256);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r3 | r0);
    MemoryHw::FlatWrite32(r30, r0);
}

loc_80523188:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052308C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052308C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052308C func_8052308C preserves=true fpr_mask=0x00000000

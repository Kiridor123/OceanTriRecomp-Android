#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A6A8(CpuContext* ctx);
extern "C" uint32_t func_8026A6A8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80252B50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80252B50u);
    goto loc_80252B50;

loc_80252B50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r7;
    r4 = r6;
    // inline leaf 0x8026A6A8 (13 guest instruction(s))
    r5 = 1;
    r0 = (r4 & 31);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r4) >> 5);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026A6A8
}

loc_80252B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80252BAC;
    }
}

loc_80252B8C:
{
    r3 = r31;
    // inline leaf 0x80278878 (18 guest instruction(s))
}

loc_inl1_0x80278878:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl1_0x80278880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802788B8;
    }
}

loc_inl1_0x80278884:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl1_0x80278898:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x802788B8;
    }
}

loc_inl1_0x802788A0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl1_0x802788A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl1_0x802788B8;
    }
}

loc_inl1_0x802788B0:
{
    r3 = 1;
    goto loc_inl1_cont_80278878;
}

loc_inl1_0x802788B8:
{
    r3 = 0;
}

loc_inl1_cont_80278878:
{
    // end of inlined leaf 0x80278878
}

loc_80252B98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80252BAC;
    }
}

loc_80252B9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (r3 + -1024);
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C1C;
}

loc_80252BAC:
{
    r3 = r31;
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8026A6A8u>(&func_8026A6A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        const auto regargs_result_8026A6A8_1182 = func_8026A6A8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8026A6A8_1182;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x8026A6A8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_80252BBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80252BD0;
    }
}

loc_80252BC0:
{
    r3 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (r3 + 1024);
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C1C;
}

loc_80252BD0:
{
    r3 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80252BDC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80252C00;
    }
}

loc_80252BE0:
{
}

loc_80252BE4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(768))) {
        goto loc_80252BF4;
    }
}

loc_80252BE8:
{
    r0 = (r3 + -768);
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C1C;
}

loc_80252BF4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C1C;
}

loc_80252C00:
{
}

loc_80252C04:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(64768))) {
        goto loc_80252C14;
    }
}

loc_80252C08:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C1C;
}

loc_80252C14:
{
    r0 = (r3 + 768);
    MemoryInline::FlatWrite32((r31 + 172), r0);
}

loc_80252C1C:
{
    r3 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80252C28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80252C44;
    }
}

loc_80252C2C:
{
    r3 = (r3 & 65535);
    r0 = (r28 & 65535);
}

loc_80252C38:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80252C58;
    }
}

loc_80252C3C:
{
    MemoryInline::FlatWrite32((r31 + 172), r0);
    goto loc_80252C58;
}

loc_80252C44:
{
    r3 = (r3 & 65535);
    r0 = (r29 & 65535);
}

loc_80252C50:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80252C58;
    }
}

loc_80252C54:
{
    MemoryInline::FlatWrite32((r31 + 172), r0);
}

loc_80252C58:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80252B50 func_80252B50 preserves=true fpr_mask=0x00000000

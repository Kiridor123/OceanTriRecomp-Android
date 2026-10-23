#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD88(CpuContext* ctx);
extern "C" uint64_t func_8045BD88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045BE44(CpuContext* ctx);
extern "C" uint64_t func_8045BE44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045BEEC(CpuContext* ctx);
extern "C" uint64_t func_8045BEEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045BFAC(CpuContext* ctx);
extern "C" uint64_t func_8045BFAC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8045BC18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r3_stbu_ea_6 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint32_t r5_addic_src_6 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8045BC18;

loc_8045BC18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = (r3 ^ r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(32));
}

loc_8045BC28:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r31 = r3;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & 1);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8045BC80;
    }
}

loc_8045BC44:
{
    r0 = (r6 & 3);
}

loc_8045BC48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045BC64;
    }
}

loc_8045BC4C:
{
}

loc_8045BC50:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8045BC5C;
    }
}

loc_8045BC54:
{
    if constexpr (KnownRegArgsCpuCall<0x8045BEECu>(&func_8045BEEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BEEC_AD2 = func_8045BEEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BEEC_AD2);
        r4 = static_cast<uint32_t>(regargs_result_8045BEEC_AD2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BEECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8045BC78;
}

loc_8045BC5C:
{
    if constexpr (KnownRegArgsCpuCall<0x8045BFACu>(&func_8045BFAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BFAC_F36 = func_8045BFAC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BFAC_F36);
        r4 = static_cast<uint32_t>(regargs_result_8045BFAC_F36 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BFACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8045BC78;
}

loc_8045BC64:
{
}

loc_8045BC68:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8045BC74;
    }
}

loc_8045BC6C:
{
    if constexpr (KnownRegArgsCpuCall<0x8045BD88u>(&func_8045BD88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8045BD88_142D = func_8045BD88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD88_142D);
        r4 = static_cast<uint32_t>(regargs_result_8045BD88_142D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD88u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8045BC78;
}

loc_8045BC74:
{
    if constexpr (KnownRegArgsCpuCall<0x8045BE44u>(&func_8045BE44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045BE44_1879 = func_8045BE44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BE44_1879);
        r4 = static_cast<uint32_t>(regargs_result_8045BE44_1879 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045BE44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8045BC78:
{
    r3 = r31;
    goto loc_8045BCD0;
}

loc_8045BC80:
{
}

loc_8045BC84:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8045BCAC;
    }
}

loc_8045BC88:
{
    r4 = (r4 + -1);
    r3 = (r3 + -1);
    r5 = (r5 + 1);
    goto loc_8045BCA0;
}

loc_8045BC98:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r3_stbu_ea_2 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
}

loc_8045BCA0:
{
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045BCA4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BC98;
    }
}

loc_8045BCA8:
{
    goto loc_8045BCCC;
}

loc_8045BCAC:
{
    r4 = (r4 + r5);
    r3 = (r3 + r5);
    r5 = (r5 + 1);
    goto loc_8045BCC4;
}

loc_8045BCBC:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r3_stbu_ea_4 = (r3 + -1);
    MemoryInline::FlatWrite8(r3_stbu_ea_4, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_4;
}

loc_8045BCC4:
{
    r5_addic_src_4 = r5;
    r5 = (r5_addic_src_4 + -1);
}

loc_8045BCC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BCBC;
    }
}

loc_8045BCCC:
{
    r3 = r31;
}

loc_8045BCD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BC18 func_8045BC18 preserves=true fpr_mask=0x00000000

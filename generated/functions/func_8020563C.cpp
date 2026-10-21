#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE1A0(CpuContext* ctx);
extern "C" uint64_t func_801FE1A0_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);

extern "C" uint64_t func_8020563C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8020563Cu);
    goto loc_8020563C;

loc_8020563C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_80205660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802057B0;
    }
}

loc_80205664:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_80205670:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(22))) {
        goto loc_80205680;
    }
}

loc_80205674:
{
}

loc_80205678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_802056E8;
    }
}

loc_8020567C:
{
    goto loc_8020574C;
}

loc_80205680:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_80205688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802056A0;
    }
}

loc_8020568C:
{
}

loc_80205690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802056B8;
    }
}

loc_80205694:
{
}

loc_80205698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802056D0;
    }
}

loc_8020569C:
{
    goto loc_8020574C;
}

loc_802056A0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r3 = 0x805C0000u;
    r3 = (r3 + -26960);
    goto loc_8020574C;
}

loc_802056B8:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r3 = 0x805C0000u;
    r3 = (r3 + -26904);
    goto loc_8020574C;
}

loc_802056D0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r3 = 0x805C0000u;
    r3 = (r3 + -26888);
    goto loc_8020574C;
}

loc_802056E8:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_802056F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80205708;
    }
}

loc_802056F4:
{
}

loc_802056F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80205720;
    }
}

loc_802056FC:
{
}

loc_80205700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80205738;
    }
}

loc_80205704:
{
    goto loc_8020574C;
}

loc_80205708:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r3 = 0x805C0000u;
    r3 = (r3 + -26864);
    goto loc_8020574C;
}

loc_80205720:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 40));
    r3 = 0x805C0000u;
    r3 = (r3 + -26848);
    goto loc_8020574C;
}

loc_80205738:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13352);
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r3 = 0x805C0000u;
    r3 = (r3 + -26832);
}

loc_8020574C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16520));
    goto loc_8020578C;
}

loc_80205754:
{
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 16));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80205760:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80205784;
    }
}

loc_80205764:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80205770:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80205784;
    }
}

loc_80205774:
{
    r0 = (r31 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    goto loc_80205798;
}

loc_80205784:
{
    r31 = (r31 + 1);
    r3 = (r3 + 8);
}

loc_8020578C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80205794:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80205754;
    }
}

loc_80205798:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 520), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r30 + 516), r4);
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r4 + 12));
    ctx->lr = 0x802057B0u;
    if constexpr (KnownRegArgsCpuCall<0x801FE1A0u>(&func_801FE1A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801FE1A0_16EE = func_801FE1A0_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801FE1A0_16EE);
        r4 = static_cast<uint32_t>(regargs_result_801FE1A0_16EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x801FE1A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_802057B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8020563C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020563C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020563C func_8020563C preserves=true fpr_mask=0x00000000

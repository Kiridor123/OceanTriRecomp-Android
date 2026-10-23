#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D4160(CpuContext* ctx);
extern "C" uint64_t func_804D4160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D4C80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D4C80;

loc_804D4C80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = MemoryInline::FlatRead32((r29 + 716));
    r31 = r3;
    r0 = (r30 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804D4CAC:
{
    MemoryInline::FlatWrite32((r29 + 716), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804D4CC0;
    }
}

loc_804D4CB4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 716), r0);
    goto loc_804D4EF4;
}

loc_804D4CC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804D4EF4;
    }
}

loc_804D4CC4:
{
    r0 = MemoryInline::FlatRead16((r29 + 712));
}

loc_804D4CCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804D4CDC;
    }
}

loc_804D4CD0:
{
}

loc_804D4CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804D4D78;
    }
}

loc_804D4CD8:
{
    goto loc_804D4EE0;
}

loc_804D4CDC:
{
    r5 = MemoryInline::FlatRead32((r29 + 724));
    r4 = MemoryInline::FlatRead32((r29 + 756));
    goto loc_804D4D08;
}

loc_804D4CE8:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_804D4CF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D4D04;
    }
}

loc_804D4CF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D4CFC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r5))) {
        goto loc_804D4D04;
    }
}

loc_804D4D00:
{
    r5 = r0;
}

loc_804D4D04:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_804D4D08:
{
}

loc_804D4D0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4CE8;
    }
}

loc_804D4D10:
{
    r3 = 0x80750000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + -400);
    MemoryInline::FlatWrite32((r29 + 720), r5);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804D4D30:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4D3C;
    }
}

loc_804D4D34:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804D4D40;
}

loc_804D4D3C:
{
    MemoryInline::FlatWrite32((r4 + 736), r29);
}

loc_804D4D40:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r4);
    r4 = MemoryInline::FlatRead32((r29 + 732));
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r29);
    r0 = MemoryInline::FlatRead32((r29 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -14984));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
    MemoryInline::FlatWrite32((r13 + -14988), r3);
    goto loc_804D4EE0;
}

loc_804D4D78:
{
    r4 = MemoryInline::FlatRead32((r29 + 736));
    r5 = MemoryInline::FlatRead32((r29 + 740));
}

loc_804D4D84:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4D94;
    }
}

loc_804D4D88:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_804D4D98;
}

loc_804D4D94:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_804D4D98:
{
}

loc_804D4D9C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4DAC;
    }
}

loc_804D4DA0:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_804D4DB0;
}

loc_804D4DAC:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_804D4DB0:
{
    r0 = MemoryInline::FlatRead32((r29 + 724));
    r4 = MemoryInline::FlatRead32((r29 + 756));
    goto loc_804D4DE0;
}

loc_804D4DC0:
{
    r3 = MemoryInline::FlatRead32(r4);
}

loc_804D4DC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D4DDC;
    }
}

loc_804D4DCC:
{
    r3 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D4DD4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_804D4DDC;
    }
}

loc_804D4DD8:
{
    r0 = r3;
}

loc_804D4DDC:
{
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_804D4DE0:
{
}

loc_804D4DE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4DC0;
    }
}

loc_804D4DE8:
{
    MemoryInline::FlatWrite32((r29 + 720), r0);
    r4 = MemoryInline::FlatRead32((r29 + 732));
    r5 = MemoryInline::FlatRead32(r4);
    goto loc_804D4DFC;
}

loc_804D4DF8:
{
    r5 = MemoryInline::FlatRead32((r5 + 736));
}

loc_804D4DFC:
{
}

loc_804D4E00:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804D4E14;
    }
}

loc_804D4E04:
{
    r3 = MemoryInline::FlatRead32((r5 + 720));
    r0 = MemoryInline::FlatRead32((r29 + 720));
}

loc_804D4E10:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_804D4DF8;
    }
}

loc_804D4E14:
{
}

loc_804D4E18:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4E4C;
    }
}

loc_804D4E1C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804D4E24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D4E30;
    }
}

loc_804D4E28:
{
    MemoryInline::FlatWrite32(r4, r29);
    goto loc_804D4E34;
}

loc_804D4E30:
{
    MemoryInline::FlatWrite32((r3 + 736), r29);
}

loc_804D4E34:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r3);
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r3 + 4), r29);
    goto loc_804D4E74;
}

loc_804D4E4C:
{
    MemoryInline::FlatWrite32((r29 + 736), r5);
    r3 = MemoryInline::FlatRead32((r5 + 740));
    MemoryInline::FlatWrite32((r5 + 740), r29);
}

loc_804D4E5C:
{
    MemoryInline::FlatWrite32((r29 + 740), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D4E70;
    }
}

loc_804D4E64:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804D4E74;
}

loc_804D4E70:
{
    MemoryInline::FlatWrite32((r3 + 736), r29);
}

loc_804D4E74:
{
    r3 = MemoryInline::FlatRead32((r29 + 752));
}

loc_804D4E7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D4EE0;
    }
}

loc_804D4E80:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804D4E84:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_804D4E8C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D4EE0;
    }
}

loc_804D4E90:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_804D4EC0;
}

loc_804D4EA0:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_804D4EA8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D4EBC;
    }
}

loc_804D4EAC:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_804D4EB4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_804D4EBC;
    }
}

loc_804D4EB8:
{
    r4 = r0;
}

loc_804D4EBC:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_804D4EC0:
{
}

loc_804D4EC4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4EA0;
    }
}

loc_804D4EC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D4ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_804D4EE0;
    }
}

loc_804D4ED4:
{
    ctx->lr = 0x804D4ED8u;
    if constexpr (KnownRegArgsCpuCall<0x804D4160u>(&func_804D4160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804D4160_2767 = func_804D4160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804D4160_2767);
        r4 = static_cast<uint32_t>(regargs_result_804D4160_2767 >> 32);
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
        InvokeDirectCpu<0x804D4160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804D4EDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D4E84;
    }
}

loc_804D4EE0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14988));
}

loc_804D4EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D4EF4;
    }
}

loc_804D4EEC:
{
    r3 = 0;
    ctx->lr = 0x804D4EF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D4360u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_804D4EF4:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

extern "C" void func_804D4C80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D4C80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4C80 func_804D4C80 preserves=true fpr_mask=0x00000000

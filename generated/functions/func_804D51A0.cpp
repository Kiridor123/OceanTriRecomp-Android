#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D51A0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804D51A0;

loc_804D51A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = 0x80750000u;
    r31 = r3;
    r5 = (r5 + -400);
    r6 = 0;
    r3 = 1;
    goto loc_804D5258;
}

loc_804D51D8:
{
    r4 = MemoryInline::FlatRead32((r8 + 736));
}

loc_804D51E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D51EC;
    }
}

loc_804D51E4:
{
    MemoryInline::FlatWrite32((r30 + 4), r6);
    goto loc_804D51F0;
}

loc_804D51EC:
{
    MemoryInline::FlatWrite32((r4 + 740), r6);
}

loc_804D51F0:
{
    MemoryInline::FlatWrite32(r30, r4);
    MemoryInline::FlatWrite16((r8 + 712), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r8 + 716));
}

loc_804D5200:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D5258;
    }
}

loc_804D5204:
{
    r0 = MemoryInline::FlatRead32((r8 + 720));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r5 + r0);
    MemoryInline::FlatWrite32((r8 + 732), r4);
    r7 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804D521C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804D5228;
    }
}

loc_804D5220:
{
    MemoryInline::FlatWrite32(r4, r8);
    goto loc_804D522C;
}

loc_804D5228:
{
    MemoryInline::FlatWrite32((r7 + 736), r8);
}

loc_804D522C:
{
    MemoryInline::FlatWrite32((r8 + 740), r7);
    MemoryInline::FlatWrite32((r8 + 736), r6);
    r4 = MemoryInline::FlatRead32((r8 + 732));
    MemoryInline::FlatWrite32((r4 + 4), r8);
    r0 = MemoryInline::FlatRead32((r8 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -14984));
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
    MemoryInline::FlatWrite32((r13 + -14988), r3);
}

loc_804D5258:
{
    r8 = MemoryInline::FlatRead32(r30);
}

loc_804D5260:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804D51D8;
    }
}

loc_804D5264:
{
    r0 = MemoryInline::FlatRead32((r13 + -14988));
}

loc_804D526C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D5278;
    }
}

loc_804D5270:
{
    r3 = 0;
    ctx->lr = 0x804D5278u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804D4360u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804D5278:
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
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D51A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D51A0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D51A0 func_804D51A0 preserves=true fpr_mask=0x00000000

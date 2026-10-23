#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804AFDC0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_subfic_ra_0 = 0;
    uint32_t r1_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_804AFDC0;

loc_804AFDC0:
{
    r11 = (r1 & 31);
    r12 = r1;
    r11_subfic_ra_0 = r11;
    r11 = (-320 - r11_subfic_ra_0);
    r1_addr_0 = (r1 + r11);
    MemoryInline::FlatWrite32(r1_addr_0, r1);
    r1 = r1_addr_0;
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r12 + 4), r0);
    r7 = (r1 + 240);
    r9 = (r1 + 32);
    r31 = r4;
    r6 = MemoryInline::FlatRead32((r13 + -20472));
}

loc_804AFDF0:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_804AFE00;
    }
}

loc_804AFDF4:
{
    r5 = 0;
}

loc_804AFDFC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_804AFE08;
    }
}

loc_804AFE00:
{
    r3 = -1017;
    goto loc_804AFE94;
}

loc_804AFE08:
{
    r0 = (r3 & 31);
}

loc_804AFE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804AFE18;
    }
}

loc_804AFE10:
{
    r3 = -1017;
    goto loc_804AFE94;
}

loc_804AFE18:
{
}

loc_804AFE1C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r5))) {
        goto loc_804AFE54;
    }
}

loc_804AFE20:
{
    r0 = 4;
    MemoryInline::FlatWriteRam32((r1 + 240), r9);
    r3 = r6;
    r4 = 57;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x804AFE40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
}

loc_804AFE44:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804AFE94;
    }
}

loc_804AFE48:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_804AFE94;
}

loc_804AFE54:
{
    r8 = MemoryInline::FlatRead32(r4);
}

loc_804AFE5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804AFE68;
    }
}

loc_804AFE60:
{
    r3 = -1017;
    goto loc_804AFE94;
}

loc_804AFE68:
{
    MemoryInline::FlatWriteRam32((r1 + 248), r3);
    r0 = 4;
    r3 = r6;
    r4 = 58;
    MemoryInline::FlatWriteRam32((r1 + 32), r8);
    r5 = 1;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 240), r9);
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r8);
    ctx->lr = 0x804AFE94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    InvokeDirectCpu<0x804BD310u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
}

loc_804AFE94:
{
    r10 = MemoryInline::FlatRead32(r1);
    r0 = MemoryInline::FlatRead32((r10 + 4));
    ctx->lr = r0;
    r1 = r10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804AFDC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AFDC0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804AFDC0 func_804AFDC0 preserves=true fpr_mask=0x00000000

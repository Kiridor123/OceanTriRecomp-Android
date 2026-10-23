#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D50B0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_804D50B0;

loc_804D50B0:
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
    r4 = 0x80000000u;
    r0 = 4;
    r4 = MemoryInline::FlatRead32((r4 + 228));
    r31 = r3;
    MemoryInline::FlatWrite16((r4 + 712), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r4 + 732), r30);
    r5 = MemoryInline::FlatRead32(r30);
    goto loc_804D50F4;
}

loc_804D50F0:
{
    r5 = MemoryInline::FlatRead32((r5 + 736));
}

loc_804D50F4:
{
}

loc_804D50F8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804D510C;
    }
}

loc_804D50FC:
{
    r3 = MemoryInline::FlatRead32((r5 + 720));
    r0 = MemoryInline::FlatRead32((r4 + 720));
}

loc_804D5108:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_804D50F0;
    }
}

loc_804D510C:
{
}

loc_804D5110:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D5140;
    }
}

loc_804D5114:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
}

loc_804D511C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D5128;
    }
}

loc_804D5120:
{
    MemoryInline::FlatWrite32(r30, r4);
    goto loc_804D512C;
}

loc_804D5128:
{
    MemoryInline::FlatWrite32((r3 + 736), r4);
}

loc_804D512C:
{
    MemoryInline::FlatWrite32((r4 + 740), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 736), r0);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    goto loc_804D5164;
}

loc_804D5140:
{
    MemoryInline::FlatWrite32((r4 + 736), r5);
    r3 = MemoryInline::FlatRead32((r5 + 740));
    MemoryInline::FlatWrite32((r5 + 740), r4);
}

loc_804D5150:
{
    MemoryInline::FlatWrite32((r4 + 740), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D5160;
    }
}

loc_804D5158:
{
    MemoryInline::FlatWrite32(r30, r4);
    goto loc_804D5164;
}

loc_804D5160:
{
    MemoryInline::FlatWrite32((r3 + 736), r4);
}

loc_804D5164:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14988), r0);
    r0 = MemoryInline::FlatRead32((r13 + -14988));
}

loc_804D5174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D5180;
    }
}

loc_804D5178:
{
    r3 = 0;
    ctx->lr = 0x804D5180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804D4360u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_804D5180:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D50B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D50B0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D50B0 func_804D50B0 preserves=true fpr_mask=0x00000000

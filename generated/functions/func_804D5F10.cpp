#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D5F10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

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

    goto loc_804D5F10;

loc_804D5F10:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x804D0000u;
    r3 = 0x804D0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 + 25360);
    r3 = (r3 + 25344);
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r13 + -14964));
    MemoryInline::FlatWrite32((r13 + -14944), r4);
}

loc_804D5F44:
{
    MemoryInline::FlatWrite32((r13 + -14940), r3);
    MemoryInline::FlatWrite32((r13 + -14968), r31);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D5F58;
    }
}

loc_804D5F50:
{
    r3 = 1;
    goto loc_804D6010;
}

loc_804D5F58:
{
    r3 = 0x80630000u;
    MemoryInline::FlatWrite32((r13 + -14948), r31);
    r4 = 0;
    r3 = (r3 + -25128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BC500u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804D5F70:
{
    MemoryInline::FlatWrite32((r13 + -14960), r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804D5F84;
    }
}

loc_804D5F78:
{
    MemoryInline::FlatWrite32((r13 + -14964), r31);
    r3 = 0;
    goto loc_804D6010;
}

loc_804D5F84:
{
    r3 = 0x80630000u;
    r4 = 0;
    r3 = (r3 + -25108);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804BC500u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804D5F98:
{
    MemoryInline::FlatWrite32((r13 + -14956), r3);
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804D5FAC;
    }
}

loc_804D5FA0:
{
    MemoryInline::FlatWrite32((r13 + -14964), r31);
    r3 = 0;
    goto loc_804D6010;
}

loc_804D5FAC:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = r3;
    r5 = 0x80750000u;
    r7 = 0x80750000u;
    r9 = 0x804D0000u;
    r3 = MemoryInline::FlatRead32((r13 + -14956));
    r5 = (r5 + 1376);
    r7 = (r7 + 1408);
    r9 = (r9 + 25376);
    r4 = 4096;
    r6 = 32;
    r8 = 32;
    r10 = 0;
    ctx->lr = 0x804D5FE4u;
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
    InvokeDirectCpu<0x804BCE70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
}

loc_804D5FE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D5FF8;
    }
}

loc_804D5FEC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14952), r0);
    goto loc_804D5FFC;
}

loc_804D5FF8:
{
    MemoryInline::FlatWrite32((r13 + -14952), r31);
}

loc_804D5FFC:
{
    r3 = r30;
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14964), r0);
    r3 = 1;
}

loc_804D6010:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D5F10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D5F10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D5F10 func_804D5F10 preserves=true fpr_mask=0x00000000

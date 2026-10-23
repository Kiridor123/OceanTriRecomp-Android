#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80527650(CpuContext* ctx);
extern "C" uint64_t func_80527650_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_805273C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    goto loc_805273C0;

loc_805273C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r29 = r3;
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = (r5 + r0);
    r0 = (r3 + 1);
}

loc_805273F4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_80527414;
    }
}

loc_805273F8:
{
    r3 = 0x80650000u;
    r5 = 0x80650000u;
    r3 = (r3 + -25632);
    r4 = 215;
    r5 = (r5 + -25620);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80527414u;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
}

loc_80527414:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r31 = r3;
    r0 = (r0 & 1);
}

loc_80527424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052743C;
    }
}

loc_80527428:
{
    r3 = r29;
    r4 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80527650u>(&func_80527650)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80527650_CF9 = func_80527650_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80527650_CF9);
        r4 = static_cast<uint32_t>(regargs_result_80527650_CF9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80527650u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_80527438:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805274C0;
    }
}

loc_8052743C:
{
    r3 = MemoryInline::FlatRead8((r29 + 16));
    r0 = MemoryInline::FlatRead8((r29 + 17));
    r0 = (r3 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r29_addr_1 = (r29 + r0);
    MemoryInline::FlatWrite16(r29_addr_1, static_cast<uint16_t>(r30));
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MemoryInline::FlatRead8((r29 + 17));
    r0 = (r4 & 2);
}

loc_8052745C:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 17), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8052747C;
    }
}

loc_80527468:
{
    r12 = MemoryInline::FlatRead32((r13 + -13360));
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x80527478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_805274AC;
}

loc_8052747C:
{
    r0 = (r4 & 8);
}

loc_80527480:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052748C;
    }
}

loc_80527484:
{
    r0 = (r4 & 4);
}

loc_80527488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805274A0;
    }
}

loc_8052748C:
{
    r12 = MemoryInline::FlatRead32((r13 + -13356));
    r3 = r29;
    ctr = r12;
    ctx->lr = 0x8052749Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_805274AC;
}

loc_805274A0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r29 + 17), static_cast<uint8_t>(r0));
}

loc_805274AC:
{
}

loc_805274B0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(65535))) {
        goto loc_805274C0;
    }
}

loc_805274B4:
{
    r3 = MemoryInline::FlatRead8((r29 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 16), static_cast<uint8_t>(r0));
}

loc_805274C0:
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
    r3 = MemoryInline::FlatRead8((r29 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805273C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805273C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805273C0 func_805273C0 preserves=true fpr_mask=0x00000000

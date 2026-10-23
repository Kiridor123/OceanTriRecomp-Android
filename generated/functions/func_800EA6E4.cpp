#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A69A0(CpuContext* ctx);
extern "C" uint64_t func_804A69A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800EA6E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_800EA6E4;

loc_800EA6E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
}

loc_800EA700:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800EA804;
    }
}

loc_800EA704:
{
}

loc_800EA708:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_800EA804;
    }
}

loc_800EA70C:
{
}

loc_800EA710:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-3))) {
        goto loc_800EA804;
    }
}

loc_800EA714:
{
    r3 = MemoryInline::FlatRead32((r4 + 44));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 144));
}

loc_800EA728:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800EA804;
    }
}

loc_800EA72C:
{
    r0 = MemoryInline::FlatRead8((r3 + 169));
}

loc_800EA734:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EA764;
    }
}

loc_800EA738:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_800EA744:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800EA764;
    }
}

loc_800EA748:
{
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EA758:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA764;
    }
}

loc_800EA75C:
{
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471DE0u>(ctx);
}

loc_800EA764:
{
    r3 = MemoryInline::FlatRead32((r13 + -17416));
    r0 = MemoryInline::FlatRead8((r31 + 208));
}

loc_800EA770:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800EA79C;
    }
}

loc_800EA774:
{
    r0 = MemoryInline::FlatRead8((r31 + 209));
}

loc_800EA77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800EA79C;
    }
}

loc_800EA780:
{
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17420));
}

loc_800EA798:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_800EA7A0;
    }
}

loc_800EA79C:
{
    r3 = r30;
}

loc_800EA7A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 172));
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 172), r0);
    r4 = MemoryInline::FlatRead32((r31 + 176));
    r5 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (r4 + r3);
}

loc_800EA7BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r5))) {
        goto loc_800EA7C4;
    }
}

loc_800EA7C0:
{
    r3 = (r5 - r4);
}

loc_800EA7C4:
{
    r4 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EA81Cu>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    r3 = (r31 + 12);
    r7 = MemoryInline::FlatRead32((r31 + 144));
    r6 = MemoryInline::FlatRead32((r13 + -17420));
    r4 = MemoryInline::FlatRead8((r31 + 169));
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r4 = (r4 * r0);
    r0 = (r7 + r6);
    r4 = (r4 + r0);
    r6 = MemoryInline::FlatRead32((r31 + 176));
    r7 = 0x800F0000u;
    r7 = (r7 + -22456);
    r8 = 0;
    ctx->lr = 0x800EA804u;
    if constexpr (KnownRegArgsCpuCall<0x804A69A0u>(&func_804A69A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804A69A0_13C9 = func_804A69A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A69A0_13C9);
        r4 = static_cast<uint32_t>(regargs_result_804A69A0_13C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804A69A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_800EA804:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EA6E4 func_800EA6E4 preserves=true fpr_mask=0x00000000

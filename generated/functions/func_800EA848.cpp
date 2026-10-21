#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A69A0(CpuContext* ctx);
extern "C" uint64_t func_804A69A0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800EA848(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
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

    MKW_GUEST_ENTER(0x800EA848u);
    goto loc_800EA848;

loc_800EA848:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
}

loc_800EA868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_800EA9AC;
    }
}

loc_800EA86C:
{
}

loc_800EA870:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_800EA9AC;
    }
}

loc_800EA874:
{
}

loc_800EA878:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-3))) {
        goto loc_800EA9AC;
    }
}

loc_800EA87C:
{
    r29 = MemoryInline::FlatRead32((r4 + 44));
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 144));
}

loc_800EA894:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EA9AC;
    }
}

loc_800EA898:
{
    r0 = MemoryInline::FlatRead8((r3 + 169));
}

loc_800EA8A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EA8C4;
    }
}

loc_800EA8A4:
{
    r0 = MemoryInline::FlatRead32((r13 + -17420));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_800EA8B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EA8C4;
    }
}

loc_800EA8BC:
{
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80471DE0u>(ctx);
}

loc_800EA8C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
}

loc_800EA8CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800EA944;
    }
}

loc_800EA8D0:
{
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r29 = (r0 - r30);
    r0 = MemoryInline::FlatRead8((r31 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800EA8E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800EA8F8;
    }
}

loc_800EA8E8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE918u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_800EA904;
}

loc_800EA8F8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EE964u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EA904:
{
    r5 = MemoryInline::FlatRead32((r31 + 144));
    r4 = MemoryInline::FlatRead8((r31 + 169));
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r4 = (r4 * r0);
    r0 = (r30 + r5);
    r4 = (r4 + r0);
    r0 = (r3 & -8);
    MemoryInline::FlatWrite32((r31 + 172), r0);
    r3 = (r31 + 12);
    r5 = r29;
    r6 = MemoryInline::FlatRead32((r31 + 172));
    r7 = 0x800F0000u;
    r7 = (r7 + -22072);
    r8 = 0;
    ctx->lr = 0x800EA940u;
    if constexpr (KnownRegArgsCpuCall<0x804A69A0u>(&func_804A69A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804A69A0_117A = func_804A69A0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804A69A0_117A);
        r4 = static_cast<uint32_t>(regargs_result_804A69A0_117A >> 32);
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
    goto loc_800EA9AC;
}

loc_800EA944:
{
    r0 = MemoryInline::FlatRead32((r31 + 176));
    r0 = (r0 + r30);
    MemoryInline::FlatWrite32((r31 + 176), r0);
    r30 = MemoryInline::FlatRead8((r31 + 169));
    r3 = r29;
    r0 = 65536;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    r3 = r29;
    r0 = 8192;
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F8Cu>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead32((r13 + -17420));
}

loc_800EA980:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800EA9AC;
    }
}

loc_800EA984:
{
    r3 = MemoryInline::FlatRead8((r31 + 169));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 169), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_800EA998:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800EA9A4;
    }
}

loc_800EA99C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 169), static_cast<uint8_t>(r0));
}

loc_800EA9A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 214), static_cast<uint8_t>(r0));
}

loc_800EA9AC:
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
// RECOMP_REGISTRATION base 0x800EA848 func_800EA848 preserves=true fpr_mask=0x00000000

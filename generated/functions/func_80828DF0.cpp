#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80828DF0;

loc_80828DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 64);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r6 = 0x80840000u;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    f31.d = MemoryInline::FlatReadFloat32((r6 + 18548));
    r0 = MemoryInline::FlatRead32((r7 + 16));
    r24 = r3;
    r25 = r5;
    r31 = (r1 + 8);
    r0 = (r7 + r0);
    r26 = 0;
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r30 = (r7 + r0);
    r28 = (r30 + 24);
    goto loc_80828F9C;
}

loc_80828E4C:
{
    r0 = MemoryInline::FlatRead32(r28);
    r30_addr_2 = (r30 + r0);
    r3 = MemoryInline::FlatRead32(r30_addr_2);
    r29 = (r30 + r0);
    r27 = (r29 + 8);
    r0 = (r3 + -1380712448);
}

loc_80828E64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20545))) {
        goto loc_80828E7C;
    }
}

loc_80828E68:
{
}

loc_80828E6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(22089))) {
        goto loc_80828ECC;
    }
}

loc_80828E70:
{
}

loc_80828E74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(22083))) {
        goto loc_80828F28;
    }
}

loc_80828E78:
{
    goto loc_80828F94;
}

loc_80828E7C:
{
    f30.d = MemoryInline::FlatReadFloat32((r24 + 16));
    r23 = 0;
    goto loc_80828EBC;
}

loc_80828E88:
{
    r0 = MemoryInline::FlatRead32(r27);
    f1.d = f30.d;
    r22 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r4 = MemoryInline::FlatRead16((r22 + 4));
    r3 = (r22 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80828720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    r0 = MemoryInline::FlatRead8((r22 + 1));
    r27 = (r27 + 4);
    r23 = (r23 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r25 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
}

loc_80828EBC:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
}

loc_80828EC4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80828E88;
    }
}

loc_80828EC8:
{
    goto loc_80828F94;
}

loc_80828ECC:
{
    f30.d = MemoryInline::FlatReadFloat32((r24 + 16));
    r23 = 0;
    goto loc_80828F18;
}

loc_80828ED8:
{
    r0 = MemoryInline::FlatRead32(r27);
    f1.d = f30.d;
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r4 = MemoryInline::FlatRead16((r3 + 4));
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80828630u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = (r3 & 65535);
    r0 = MemoryInline::FlatRead8((r25 + 207));
    r3 = (0 - r4);
    r27 = (r27 + 4);
    r3 = (r3 | r4);
    r0 = (r0 & 254);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0_mrot_3 = (r0_rot_3 & 1);
    r0_mdest_3 = (r0 & -2);
    r0 = (r0_mdest_3 | r0_mrot_3);
    MemoryInline::FlatWrite8((r25 + 207), static_cast<uint8_t>(r0));
    r23 = (r23 + 1);
}

loc_80828F18:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
}

loc_80828F20:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80828ED8;
    }
}

loc_80828F24:
{
    goto loc_80828F94;
}

loc_80828F28:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r23 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r24 + 16));
}

loc_80828F38:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80828F94;
    }
}

loc_80828F3C:
{
    goto loc_80828F88;
}

loc_80828F40:
{
    r0 = MemoryInline::FlatRead32(r27);
    f1.d = f30.d;
    r22 = (r29 + r0);
    r0 = MemoryInline::FlatRead32((r22 + 8));
    r4 = MemoryInline::FlatRead16((r22 + 4));
    r3 = (r22 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x80828720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    // psq_store w=1 quant=2 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 2u>(ctx, r31, PPC_PsFromScalarInline(f0.d));
    r3 = r25;
    r12 = MemoryInline::FlatRead32(r25);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r4 = MemoryInline::FlatRead8((r22 + 1));
    ctr = r12;
    ctx->lr = 0x80828F80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r27 = (r27 + 4);
    r23 = (r23 + 1);
}

loc_80828F88:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
}

loc_80828F90:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80828F40;
    }
}

loc_80828F94:
{
    r28 = (r28 + 4);
    r26 = (r26 + 1);
}

loc_80828F9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80828FA4:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80828E4C;
    }
}

loc_80828FA8:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828DF0 func_80828DF0 preserves=true fpr_mask=0x00000000

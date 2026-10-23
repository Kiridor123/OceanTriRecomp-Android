#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80984C44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80984D94_loc_0 = 0;
    uint32_t addr_psqx_80984DA0_loc_0 = 0;
    uint32_t addr_psqx_80984DAC_loc_0 = 0;
    uint32_t addr_psqx_80984DB8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t mkw_fifo_burst_0[64];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80984C44;

loc_80984C44:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r31 = r6;
    r30 = r7;
    r29 = r10;
    r0 = MemoryInline::FlatRead8((r1 + 107));
    f31.d = MemoryInline::FlatReadFloat32(r8);
    f30.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f29.d = MemoryInline::FlatReadFloat32(r9);
    f28.d = MemoryInline::FlatReadFloat32((r9 + 4));
}

loc_80984CA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80984CC4;
    }
}

loc_80984CAC:
{
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x80984CC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804BA550u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    goto loc_80984CD8;
}

loc_80984CC4:
{
    r3 = 1;
    r4 = 4;
    r5 = 1;
    r6 = 0;
    ctx->lr = 0x80984CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804BA550u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80984CD8:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x80984CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    mkw_gqr0 = ctx->gqr[0];
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x80984CF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
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
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80984DF8 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DF8
    r3 = r29;
    // inline leaf 0x80984DEC (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DEC
    f1.d = f31.d;
    f2.d = f30.d;
    // inline leaf 0x80984DDC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DDC
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r31 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    // inline leaf 0x80984DF8 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[16] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[17] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[18] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[19] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DF8
    r3 = r29;
    // inline leaf 0x80984DEC (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[20] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[21] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[22] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[23] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DEC
    f1.d = f29.d;
    f2.d = f30.d;
    // inline leaf 0x80984DDC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[24] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[25] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[26] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[27] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[28] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[29] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[30] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[31] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DDC
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r30 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x80984DF8 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[32] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[33] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[34] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[35] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DF8
    r3 = r29;
    // inline leaf 0x80984DEC (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[36] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[37] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[38] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[39] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DEC
    f1.d = f29.d;
    f2.d = f28.d;
    // inline leaf 0x80984DDC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[40] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[41] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[42] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[43] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[44] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[45] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[46] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[47] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DDC
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    // inline leaf 0x80984DF8 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[48] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[49] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[50] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[51] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DF8
    r3 = r29;
    // inline leaf 0x80984DEC (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[52] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[53] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[54] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[55] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x80984DEC
    f1.d = f31.d;
    f2.d = f28.d;
    // inline leaf 0x80984DDC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[56] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[57] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[58] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[59] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[60] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[61] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[62] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[63] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 64u);
    // end of inlined leaf 0x80984DDC
    // inline leaf 0x80984DD8 (1 guest instruction(s))
    // end of inlined leaf 0x80984DD8
    r0 = 88;
    addr_psqx_80984D94_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80984D94_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_80984DA0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80984DA0_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = 56;
    addr_psqx_80984DAC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80984DAC_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_80984DB8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80984DB8_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80984C44 func_80984C44 preserves=true fpr_mask=0x00000000

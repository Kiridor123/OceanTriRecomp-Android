#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082BBD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8082BBD0u);
    goto loc_8082BBD0;

loc_8082BBD0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = r4;
    r24 = r3;
    r25 = r5;
    r3 = r29;
    // inline leaf 0x80829E00 (10 guest instruction(s))
}

loc_inl1_0x80829E00:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r4 = 0;
}

loc_inl1_0x80829E0C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65279))) {
        goto loc_inl1_0x80829E20;
    }
}

loc_inl1_0x80829E10:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_inl1_0x80829E18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl1_0x80829E20;
    }
}

loc_inl1_0x80829E1C:
{
    r4 = 1;
}

loc_inl1_0x80829E20:
{
    r3 = r4;
}

loc_inl1_cont_80829E00:
{
    // end of inlined leaf 0x80829E00
}

loc_8082BBFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8082BC08;
    }
}

loc_8082BC00:
{
    r3 = 0;
    goto loc_8082BD00;
}

loc_8082BC08:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r27 = 0;
    r26 = 0;
    r31 = 0x80870000u;
    r28 = (r29 + r0);
    goto loc_8082BCF0;
}

loc_8082BC20:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + -1885405184);
}

loc_8082BC2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(26929))) {
        goto loc_8082BCE4;
    }
}

loc_8082BC30:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + -1380712448);
}

loc_8082BC3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16718))) {
        goto loc_8082BC70;
    }
}

loc_8082BC40:
{
}

loc_8082BC44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20545))) {
        goto loc_8082BC70;
    }
}

loc_8082BC48:
{
}

loc_8082BC4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(22089))) {
        goto loc_8082BC70;
    }
}

loc_8082BC50:
{
}

loc_8082BC54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(22083))) {
        goto loc_8082BC70;
    }
}

loc_8082BC58:
{
}

loc_8082BC5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(19779))) {
        goto loc_8082BC70;
    }
}

loc_8082BC60:
{
}

loc_8082BC64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(21587))) {
        goto loc_8082BC70;
    }
}

loc_8082BC68:
{
}

loc_8082BC6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21584))) {
        goto loc_8082BCC4;
    }
}

loc_8082BC70:
{
    r3 = MemoryInline::FlatRead32((r31 + -32224));
    r4 = 32;
    ctx->lr = 0x8082BC7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8082BC80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BC98;
    }
}

loc_8082BC84:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8082BC9C;
    }
}

loc_8082BC8C:
{
    // inline leaf 0x80828A10 (14 guest instruction(s))
    r4 = 0x80840000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 18544));
    r4 = 0x80840000u;
    r4 = (r4 + 25080);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    }
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80828A10
    r30 = r3;
    goto loc_8082BC9C;
}

loc_8082BC98:
{
    r30 = 0;
}

loc_8082BC9C:
{
}

loc_8082BCA0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8082BCC4;
    }
}

loc_8082BCA4:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r4 = r28;
    r5 = r25;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8082BCC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = r30;
}

loc_8082BCC4:
{
}

loc_8082BCC8:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_8082BCE4;
    }
}

loc_8082BCCC:
{
    r0 = (r24 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r24 + 4);
    r4 = (r1 + 8);
    r5 = (r27 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80839AB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_8082BCE4:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r26 = (r26 + 1);
    r28 = (r28 + r0);
}

loc_8082BCF0:
{
    r0 = MemoryInline::FlatRead16((r29 + 14));
}

loc_8082BCF8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8082BC20;
    }
}

loc_8082BCFC:
{
    r3 = r27;
}

loc_8082BD00:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8082BBD0 func_8082BBD0 preserves=true fpr_mask=0x00000000

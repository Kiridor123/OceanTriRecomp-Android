#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EABBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x800EABBCu);
    goto loc_800EABBC;

loc_800EABBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r28 = r4;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA840u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r30 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 144));
}

loc_800EABF0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800EADCC;
    }
}

loc_800EABF4:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800EABFC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_800EADCC;
    }
}

loc_800EAC00:
{
    r4 = (r4 + -2147483648);
    r0 = MemoryInline::FlatRead32((r13 + -17416));
    r26 = (r4 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r25 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r5 + 162));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r4 = (r4_rot_1 & -65536);
    r0 = MemoryInline::FlatRead16((r5 + 164));
    r4 = (r4 | r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EE918u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 192), r3);
    r0 = MemoryInline::FlatRead32((r31 + 196));
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r29 = (r3 - r0);
}

loc_800EAC40:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r26))) {
        goto loc_800EAC54;
    }
}

loc_800EAC44:
{
}

loc_800EAC48:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r26))) {
        goto loc_800EAC54;
    }
}

loc_800EAC4C:
{
    r30 = 1;
    goto loc_800EAC80;
}

loc_800EAC54:
{
}

loc_800EAC58:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r25))) {
        goto loc_800EAC6C;
    }
}

loc_800EAC5C:
{
}

loc_800EAC60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r25))) {
        goto loc_800EAC6C;
    }
}

loc_800EAC64:
{
    r30 = 1;
    goto loc_800EAC80;
}

loc_800EAC6C:
{
}

loc_800EAC70:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_800EAC80;
    }
}

loc_800EAC74:
{
    r30 = 1;
    r0 = MemoryInline::FlatRead32((r13 + -17420));
    r29 = (r29 + r0);
}

loc_800EAC80:
{
    r3 = MemoryInline::FlatRead32((r31 + 204));
}

loc_800EAC88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800EAC9C;
    }
}

loc_800EAC8C:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r31 + 200), r0);
    goto loc_800EACF4;
}

loc_800EAC9C:
{
    r0 = MemoryInline::FlatRead8((r31 + 216));
}

loc_800EACA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800EACB8;
    }
}

loc_800EACA8:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
    r0 = (r0 + r29);
    MemoryInline::FlatWrite32((r31 + 200), r0);
    goto loc_800EACF4;
}

loc_800EACB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
    r0 = (r0 + r29);
}

loc_800EACC4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800EACF0;
    }
}

loc_800EACC8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EE964u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r31 + 204));
    r0 = MemoryInline::FlatRead32((r31 + 200));
    r0 = (r0 + r29);
    r0 = (r0 - r4);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r31 + 200), r0);
    goto loc_800EACF4;
}

loc_800EACF0:
{
    MemoryInline::FlatWrite32((r31 + 200), r0);
}

loc_800EACF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 209));
}

loc_800EACFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800EAD40;
    }
}

loc_800EAD00:
{
    r5 = MemoryInline::FlatRead32((r31 + 200));
    r4 = MemoryInline::FlatRead32((r13 + -17412));
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 - r4);
}

loc_800EAD20:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_800EAD40;
    }
}

loc_800EAD24:
{
    r3 = r27;
    r4 = r28;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x800EAD3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_800EADCC;
}

loc_800EAD40:
{
    r0 = MemoryInline::FlatRead32((r31 + 192));
    MemoryInline::FlatWrite32((r31 + 196), r0);
}

loc_800EAD4C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800EADCC;
    }
}

loc_800EAD50:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = MemoryInline::FlatRead8((r31 + 211));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r13 + -17420));
}

loc_800EAD68:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800EADCC;
    }
}

loc_800EAD6C:
{
    r3 = MemoryInline::FlatRead8((r31 + 137));
    r5 = (r3 + 1);
    r3 = r28;
    r4 = 65536;
    r0 = 2;
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r27 = 0;
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r27);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    r0 = (r5 & ~r0);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800EADA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EADC4;
    }
}

loc_800EADA4:
{
    r3 = MemoryInline::FlatRead8((r31 + 137));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 137), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_800EADB8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800EADCC;
    }
}

loc_800EADBC:
{
    MemoryInline::FlatWrite8((r31 + 137), static_cast<uint8_t>(r27));
    goto loc_800EADCC;
}

loc_800EADC4:
{
    r3 = r31;
    ctx->lr = 0x800EADCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800EA5ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800EADCC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EABBC func_800EABBC preserves=true fpr_mask=0x00000000

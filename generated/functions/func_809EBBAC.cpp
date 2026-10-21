#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AB080(CpuContext* ctx);
extern "C" uint64_t func_802AB080_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_809EBBAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x809EBBACu);
    goto loc_809EBBAC;

loc_809EBBAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = (r3 + 48);
    r4 = (r31 + 24);
    ctx->lr = 0x809EBBE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_809EBBE8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(50))) {
        goto loc_809EBCD4;
    }
}

loc_809EBBEC:
{
    r3 = 0x80A20000u;
    r3 = (r3 + 30028);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x809EBC04u:
        goto loc_809EBC04;
        break;
    case 0x809EBC18u:
        goto loc_809EBC18;
        break;
    case 0x809EBC58u:
        goto loc_809EBC58;
        break;
    case 0x809EBC24u:
        goto loc_809EBC24;
        break;
    case 0x809EBC0Cu:
        goto loc_809EBC0C;
        break;
    case 0x809EBC64u:
        goto loc_809EBC64;
        break;
    case 0x809EBC70u:
        goto loc_809EBC70;
        break;
    case 0x809EBC7Cu:
        goto loc_809EBC7C;
        break;
    case 0x809EBCD4u:
        goto loc_809EBCD4;
        break;
    case 0x809EBCC8u:
        goto loc_809EBCC8;
        break;
    case 0x809EBCB0u:
        goto loc_809EBCB0;
        break;
    case 0x809EBCBCu:
        goto loc_809EBCBC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_809EBC04:
{
    r8 = 8;
    goto loc_809EBC10;
}

loc_809EBC0C:
{
    r8 = 1;
}

loc_809EBC10:
{
    r7 = 31;
    goto loc_809EBD20;
}

loc_809EBC18:
{
    r8 = 2;
    r7 = 31;
    goto loc_809EBD20;
}

loc_809EBC24:
{
    r3 = (r31 + 60);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6764));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -6760));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r31 + 60);
    r4 = MemoryInline::FlatRead32((r31 + 40));
    ctx->lr = 0x809EBC4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    ctr = ctx->ctr;
    r7 = 31;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBC58:
{
    r7 = 2;
    r8 = 8;
    goto loc_809EBD20;
}

loc_809EBC64:
{
    r7 = 1;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBC70:
{
    r7 = 2;
    r8 = 8;
    goto loc_809EBD20;
}

loc_809EBC7C:
{
    r3 = (r31 + 60);
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + -6764));
    r4 = 0x80A20000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + -6756));
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r31 + 60);
    r4 = MemoryInline::FlatRead32((r31 + 40));
    ctx->lr = 0x809EBCA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    ctr = ctx->ctr;
    r7 = 31;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBCB0:
{
    r7 = 5;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBCBC:
{
    r7 = 7;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBCC8:
{
    r7 = 55;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBCD4:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_809EBCDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EBCF4;
    }
}

loc_809EBCE0:
{
}

loc_809EBCE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809EBD00;
    }
}

loc_809EBCE8:
{
}

loc_809EBCEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809EBD0C;
    }
}

loc_809EBCF0:
{
    goto loc_809EBD18;
}

loc_809EBCF4:
{
    r7 = 15;
    r8 = 1;
    goto loc_809EBD20;
}

loc_809EBD00:
{
    r7 = 23;
    r8 = 2;
    goto loc_809EBD20;
}

loc_809EBD0C:
{
    r7 = 10;
    r8 = 4;
    goto loc_809EBD20;
}

loc_809EBD18:
{
    r7 = 31;
    r8 = 8;
}

loc_809EBD20:
{
    r0 = MemoryInline::FlatRead16((r31 + 90));
}

loc_809EBD28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_809EBD54;
    }
}

loc_809EBD2C:
{
    r3 = r31;
    r4 = 0x80A20000u;
    r4 = (r4 + 28504);
    r5 = 0x80A20000u;
    r5 = (r5 + 28360);
    r6 = MemoryInline::FlatRead8((r31 + 2));
    ctx->lr = 0x809EBD48u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_1D83 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_1D83);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_1D83 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead16((r31 + 90));
    MemoryInline::FlatWrite16((r31 + 104), static_cast<uint16_t>(r0));
    goto loc_809EBD70;
}

loc_809EBD54:
{
    r3 = r31;
    r4 = 0x80A20000u;
    r4 = (r4 + 28504);
    r5 = 0x80A20000u;
    r5 = (r5 + 28360);
    r6 = MemoryInline::FlatRead8((r31 + 2));
    ctx->lr = 0x809EBD70u;
    if constexpr (KnownRegArgsCpuCall<0x802AB080u>(&func_802AB080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_802AB080_22B5 = func_802AB080_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB080_22B5);
        r4 = static_cast<uint32_t>(regargs_result_802AB080_22B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_809EBD70:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r3 + -9);
}

loc_809EBD7C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_809EBD8C;
    }
}

loc_809EBD80:
{
    r3 = (r31 + 92);
    r4 = 1088;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_809EBD8C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x809EBE8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EBBAC func_809EBBAC preserves=true fpr_mask=0x00000000

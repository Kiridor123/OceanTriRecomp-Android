#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8051574C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8051574Cu);
    goto loc_8051574C;

loc_8051574C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
}

loc_80515754:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80515768;
    }
}

loc_80515760:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r6, r0);
}

loc_80515768:
{
}

loc_8051576C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80515930;
    }
}

loc_80515770:
{
}

loc_80515774:
{
    r10 = -1;
    r30 = 0;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1024))) {
        goto loc_8051578C;
    }
}

loc_80515780:
{
    r31 = r4;
    r12 = 0;
    goto loc_805157E8;
}

loc_8051578C:
{
    r0 = (r4 + -1024);
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r8 = (static_cast<int32_t>(r0) >> 9);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_805157E0;
    }
}

loc_8051579C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_805157A0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805157D4;
    }
}

loc_805157A8:
{
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    r12 = MemoryInline::FlatRead32(r12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805157A8;
    }
}

loc_805157CC:
{
    r8 = (r8 & 7);
}

loc_805157D0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_805157E0;
    }
}

loc_805157D4:
{
    ctr = r8;
}

loc_805157D8:
{
    r12 = MemoryInline::FlatRead32(r12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805157D8;
    }
}

loc_805157E0:
{
    r0 = (r4 + -1024);
    r31 = (r0 & 511);
}

loc_805157E8:
{
    r0 = (r5 - r4);
    r8 = 1;
    ctr = r0;
}

loc_805157F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80515930;
    }
}

loc_805157FC:
{
}

loc_80515800:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_8051582C;
    }
}

loc_80515804:
{
}

loc_80515808:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1024))) {
        goto loc_80515820;
    }
}

loc_8051580C:
{
    r9 = (r3 + r31);
    r31 = (r31 + 1);
    r0 = MemoryInline::FlatRead8((r9 + 56));
    r11 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80515848;
}

loc_80515820:
{
    r12 = MemoryInline::FlatRead32((r3 + 52));
    r31 = 0;
    goto loc_8051583C;
}

loc_8051582C:
{
}

loc_80515830:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(512))) {
        goto loc_8051583C;
    }
}

loc_80515834:
{
    r31 = 0;
    r12 = MemoryInline::FlatRead32(r12);
}

loc_8051583C:
{
    r9 = (r12 + r31);
    r31 = (r31 + 1);
    r11 = MemoryInline::FlatRead8((r9 + 4));
}

loc_80515848:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_80515850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(58))) {
        goto loc_8051586C;
    }
}

loc_80515854:
{
}

loc_80515858:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8051586C;
    }
}

loc_8051585C:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80515864:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8051586C;
    }
}

loc_80515868:
{
    MemoryInline::FlatWrite32(r6, r4);
}

loc_8051586C:
{
}

loc_80515870:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805158B4;
    }
}

loc_80515874:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_8051587C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_805158AC;
    }
}

loc_80515880:
{
    r3 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80515888:
{
    r5 = (r4 - r3);
    r0 = (r4 + 1);
    r3 = (r3 - r4);
    r3 = ~(r5 | r3);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r10 = (r0 & ~r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805158AC;
    }
}

loc_805158A4:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r7, r0);
}

loc_805158AC:
{
    r3 = r10;
    goto loc_80515934;
}

loc_805158B4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_805158BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_805158EC;
    }
}

loc_805158C0:
{
    r9 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_805158C8:
{
    r10 = (r4 - r9);
    r0 = (r4 + 1);
    r9 = (r9 - r4);
    r30 = 1;
    r9 = ~(r10 | r9);
    r9 = (static_cast<int32_t>(r9) >> 31);
    r10 = (r0 & ~r9);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805158EC;
    }
}

loc_805158E8:
{
    MemoryInline::FlatWrite32(r7, r8);
}

loc_805158EC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
}

loc_805158F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80515928;
    }
}

loc_805158F8:
{
    r3 = (r5 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80515900:
{
    r5 = (r4 - r3);
    r0 = (r4 + 1);
    r3 = (r3 - r4);
    r3 = ~(r5 | r3);
    r3 = (static_cast<int32_t>(r3) >> 31);
    r3 = (r0 & ~r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80515934;
    }
}

loc_8051591C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_80515934;
}

loc_80515928:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805157FC;
    }
}

loc_80515930:
{
    r3 = -1;
}

loc_80515934:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8051574C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8051574C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001F3B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8051574C func_8051574C preserves=true fpr_mask=0x00000000

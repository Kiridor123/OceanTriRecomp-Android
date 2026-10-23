#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D8730_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_addc_left_0 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_not_0 = 0;
    uint32_t r7_subfe_rb_0 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_not_0 = 0;
    uint32_t r8_subfe_rb_0 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804D8730;

loc_804D8730:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = MemoryInline::FlatRead8(r3);
    r8 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_804D8754;
    }
}

loc_804D874C:
{
    r9 = 1;
    goto loc_804D875C;
}

loc_804D8754:
{
    r9 = -1;
    r0 = (0 - r0);
}

loc_804D875C:
{
}

loc_804D8760:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_804D876C;
    }
}

loc_804D8764:
{
    r10 = 1;
    goto loc_804D8774;
}

loc_804D876C:
{
    r10 = -1;
    r8 = (0 - r8);
}

loc_804D8774:
{
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r11 = (r0 ^ -2147483648);
    r7 = (r31 - r0);
    r12 = (r8 ^ -2147483648);
    r7_addc_left_0 = r7;
    r7 = (r7_addc_left_0 + r11);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7_addc_left_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r11)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r0 - r31);
    r7_subfe_rb_0 = r7;
    r7_not_0 = ~(r7);
    r7_ca_0 = (xer >> 29) & 1u;
    r7 = (r7_not_0 + r7_subfe_rb_0);
    r7 = (r7 + r7_ca_0);
    r11 = (r31 - r8);
    r0 = (r0 & ~r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r7 = (r8 - r31);
    r8 = (r11 + r12);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r11)) + static_cast<uint64_t>(static_cast<uint32_t>(r12)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8_subfe_rb_0 = r8;
    r8_not_0 = ~(r8);
    r8_ca_0 = (xer >> 29) & 1u;
    r8 = (r8_not_0 + r8_subfe_rb_0);
    r8 = (r8 + r8_ca_0);
    r8 = (r7 & ~r8);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804D87C4;
    }
}

loc_804D87AC:
{
}

loc_804D87B0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804D87C4;
    }
}

loc_804D87B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_804D8854;
}

loc_804D87C4:
{
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r11 = (r7 * r0);
    r12 = (r7 * r8);
}

loc_804D87D4:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(r11))) {
        goto loc_804D8810;
    }
}

loc_804D87D8:
{
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r6 - r7);
    r5 = (r8 * r5);
    r6 = (r7 * r6);
    r7 = (r11 + r5);
}

loc_804D87F0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_804D8844;
    }
}

loc_804D87F4:
{
    r5 = (r0 * r6);
    r0 = (r8 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    goto loc_804D8844;
}

loc_804D8810:
{
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r5 = (r6 - r7);
    r5 = (r0 * r5);
    r6 = (r7 * r6);
    r7 = (r12 + r5);
}

loc_804D8828:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_804D8844;
    }
}

loc_804D882C:
{
    r5 = (r0 * r6);
    r0 = (r8 * r6);
    r6 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r7));
    r5 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_804D8844:
{
    r0 = (r9 * r0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = (r10 * r8);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
}

loc_804D8854:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

extern "C" void func_804D8730(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_804D8730_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFB gpr_write=0x00001FE3 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D8730 func_804D8730 preserves=true fpr_mask=0x00000000

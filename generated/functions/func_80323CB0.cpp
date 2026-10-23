#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80323CB0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80323CB0;

loc_80323CB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 & 65535);
    r0 = (r3 + -16000);
}

loc_80323CD0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80323CDC;
    }
}

loc_80323CD4:
{
    r3 = 0;
    goto loc_80323D24;
}

loc_80323CDC:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_80323CE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80323D04;
    }
}

loc_80323CE8:
{
    r0 = (r31 & 65535);
}

loc_80323CF0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(10000))) {
        goto loc_80323D20;
    }
}

loc_80323CF4:
{
}

loc_80323CF8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(60000))) {
        goto loc_80323D20;
    }
}

loc_80323CFC:
{
    r3 = 1;
    goto loc_80323D24;
}

loc_80323D04:
{
    r0 = (r31 & 65535);
}

loc_80323D0C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1000))) {
        goto loc_80323D20;
    }
}

loc_80323D10:
{
}

loc_80323D14:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9000))) {
        goto loc_80323D20;
    }
}

loc_80323D18:
{
    r3 = 1;
    goto loc_80323D24;
}

loc_80323D20:
{
    r3 = 0;
}

loc_80323D24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80323CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80323CB0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80323CB0 func_80323CB0 preserves=true fpr_mask=0x00000000

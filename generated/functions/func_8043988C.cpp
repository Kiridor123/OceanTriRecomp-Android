#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8043988C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_8043988C;

loc_8043988C:
{
    r0 = (r3 & 255);
}

loc_80439894:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_804398AC;
    }
}

loc_80439898:
{
}

loc_8043989C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804398D0;
    }
}

loc_804398A0:
{
}

loc_804398A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_804398E0;
    }
}

loc_804398A8:
{
    goto loc_80439904;
}

loc_804398AC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2640));
}

loc_804398BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804398C8;
    }
}

loc_804398C0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804398C8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804398D0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2642));
    ctx->gpr[0] = r0;
    return r3;
}

loc_804398E0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2641));
}

loc_804398F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804398FC;
    }
}

loc_804398F4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

loc_804398FC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return r3;
}

loc_80439904:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8043988C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8043988C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043988C func_8043988C preserves=true fpr_mask=0x00000000

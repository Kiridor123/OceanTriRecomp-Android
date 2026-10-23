#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027BD44_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_8027BD44;

loc_8027BD44:
{
    r4 = 65536;
    r6 = (r4 + -1);
    r5 = 0;
    r0 = 6;
    ctr = r0;
}

loc_8027BD58:
{
    r0 = MemoryInline::FlatRead16((r3 + 634));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027BD60:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027BD88;
    }
}

loc_8027BD64:
{
    r4 = MemoryInline::FlatRead16((r3 + 632));
    r0 = (r4 + -381);
}

loc_8027BD70:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027BD84;
    }
}

loc_8027BD74:
{
}

loc_8027BD78:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(139))) {
        goto loc_8027BD84;
    }
}

loc_8027BD7C:
{
}

loc_8027BD80:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(395))) {
        goto loc_8027BD88;
    }
}

loc_8027BD84:
{
    r6 = r4;
}

loc_8027BD88:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 638));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027BD94:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027BDBC;
    }
}

loc_8027BD98:
{
    r4 = MemoryInline::FlatRead16((r3 + 636));
    r0 = (r4 + -381);
}

loc_8027BDA4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027BDB8;
    }
}

loc_8027BDA8:
{
}

loc_8027BDAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(139))) {
        goto loc_8027BDB8;
    }
}

loc_8027BDB0:
{
}

loc_8027BDB4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(395))) {
        goto loc_8027BDBC;
    }
}

loc_8027BDB8:
{
    r6 = r4;
}

loc_8027BDBC:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 642));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027BDC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027BDF0;
    }
}

loc_8027BDCC:
{
    r4 = MemoryInline::FlatRead16((r3 + 640));
    r0 = (r4 + -381);
}

loc_8027BDD8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027BDEC;
    }
}

loc_8027BDDC:
{
}

loc_8027BDE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(139))) {
        goto loc_8027BDEC;
    }
}

loc_8027BDE4:
{
}

loc_8027BDE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(395))) {
        goto loc_8027BDF0;
    }
}

loc_8027BDEC:
{
    r6 = r4;
}

loc_8027BDF0:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 646));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027BDFC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027BE24;
    }
}

loc_8027BE00:
{
    r4 = MemoryInline::FlatRead16((r3 + 644));
    r0 = (r4 + -381);
}

loc_8027BE0C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027BE20;
    }
}

loc_8027BE10:
{
}

loc_8027BE14:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(139))) {
        goto loc_8027BE20;
    }
}

loc_8027BE18:
{
}

loc_8027BE1C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(395))) {
        goto loc_8027BE24;
    }
}

loc_8027BE20:
{
    r6 = r4;
}

loc_8027BE24:
{
    r3 = (r3 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8027BD58;
    }
}

loc_8027BE30:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027BD44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027BD44_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027BD44 func_8027BD44 preserves=true fpr_mask=0x00000000

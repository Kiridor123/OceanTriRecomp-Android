#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80517CB4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_80517CB4;

loc_80517CB4:
{
    r0 = (r4 + -2);
    r0 = (r0 & 3);
    r3_addr_0 = (r3 + r0);
    r5 = MemoryInline::FlatRead8(r3_addr_0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80517CC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80517CEC;
    }
}

loc_80517CCC:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517CE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80517CEC;
    }
}

loc_80517CE4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80517CEC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80517CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80517D18;
    }
}

loc_80517CF8:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517D0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80517D18;
    }
}

loc_80517D10:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80517D18:
{
    r0 = (r4 + -4);
    r0 = (r0 & 3);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517D2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80517D74;
    }
}

loc_80517D30:
{
    r0 = (r4 + -3);
    r0 = (r0 & 3);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517D44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80517D74;
    }
}

loc_80517D48:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80517D50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_80517D74;
    }
}

loc_80517D54:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80517D68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80517D74;
    }
}

loc_80517D6C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

loc_80517D74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_80517CB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80517CB4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517CB4 func_80517CB4 preserves=true fpr_mask=0x00000000

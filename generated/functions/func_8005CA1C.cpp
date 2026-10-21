#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8005CA1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8005CA1Cu);
    goto loc_8005CA1C;

loc_8005CA1C:
{
    r6 = 0;
    goto loc_8005CAB0;
}

loc_8005CA24:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8005CA2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(126))) {
        goto loc_8005CA48;
    }
}

loc_8005CA30:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8005CA3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(67))) {
        goto loc_8005CA48;
    }
}

loc_8005CA40:
{
    r3 = (r3 + 4);
    goto loc_8005CAB0;
}

loc_8005CA48:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8005CA50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8005CA5C;
    }
}

loc_8005CA54:
{
    r3 = (r3 + 1);
    goto loc_8005CAB0;
}

loc_8005CA5C:
{
    r4 = 1;
    r0 = 0;
}

loc_8005CA68:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(128))) {
        goto loc_8005CA78;
    }
}

loc_8005CA6C:
{
}

loc_8005CA70:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(159))) {
        goto loc_8005CA78;
    }
}

loc_8005CA74:
{
    r0 = 1;
}

loc_8005CA78:
{
}

loc_8005CA7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005CA9C;
    }
}

loc_8005CA80:
{
    r0 = 0;
}

loc_8005CA88:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(224))) {
        goto loc_8005CA90;
    }
}

loc_8005CA8C:
{
    r0 = 1;
}

loc_8005CA90:
{
}

loc_8005CA94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005CA9C;
    }
}

loc_8005CA98:
{
    r4 = 0;
}

loc_8005CA9C:
{
}

loc_8005CAA0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_8005CAA8;
    }
}

loc_8005CAA4:
{
    r3 = (r3 + 1);
}

loc_8005CAA8:
{
    r6 = (r6 + 1);
    r3 = (r3 + 1);
}

loc_8005CAB0:
{
    r5 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_8005CABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005CA24;
    }
}

loc_8005CAC0:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005CA1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005CA1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005CA1C func_8005CA1C preserves=true fpr_mask=0x00000000

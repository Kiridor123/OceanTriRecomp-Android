#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_8097DCFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8097DCFC;

loc_8097DCFC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 4352));
}

loc_8097DD20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DD38;
    }
}

loc_8097DD24:
{
    r0 = MemoryInline::FlatRead8((r3 + 4429));
}

loc_8097DD2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8097DD38;
    }
}

loc_8097DD30:
{
    r29 = 1;
    goto loc_8097DD3C;
}

loc_8097DD38:
{
    r29 = 0;
}

loc_8097DD3C:
{
    r31 = 0;
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80043BAC_566 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_566;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_8097DD50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8097DD60;
    }
}

loc_8097DD54:
{
}

loc_8097DD58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8097DD9C;
    }
}

loc_8097DD5C:
{
    goto loc_8097DDD4;
}

loc_8097DD60:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = (r29 * 848);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 260));
    r0 = (r3 & 1024);
}

loc_8097DD7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DD88;
    }
}

loc_8097DD80:
{
    r31 = 1;
    goto loc_8097DDD4;
}

loc_8097DD88:
{
    r0 = (r3 & 2048);
}

loc_8097DD90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DDD4;
    }
}

loc_8097DD94:
{
    r31 = 2;
    goto loc_8097DDD4;
}

loc_8097DD9C:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = (r29 * 848);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 222));
    r0 = (r3 & 4);
}

loc_8097DDB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DDC4;
    }
}

loc_8097DDBC:
{
    r31 = 1;
    goto loc_8097DDD4;
}

loc_8097DDC4:
{
    r0 = (r3 & 8);
}

loc_8097DDCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DDD4;
    }
}

loc_8097DDD0:
{
    r31 = 2;
}

loc_8097DDD4:
{
    r0 = (r31 & 1);
}

loc_8097DDDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DDEC;
    }
}

loc_8097DDE0:
{
    r3 = MemoryInline::FlatRead16((r30 + 4418));
    r3 = MH3_TickLoad(r3, 2157436384);
    r0 = (r3 + 1024);
    MemoryInline::FlatWrite16((r30 + 4418), static_cast<uint16_t>(r0));
}

loc_8097DDEC:
{
    r0 = (r31 & 2);
}

loc_8097DDF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097DE04;
    }
}

loc_8097DDF8:
{
    r3 = MemoryInline::FlatRead16((r30 + 4418));
    r3 = MH3_TickLoad(r3, 2157436408);
    r0 = (r3 + -1024);
    MemoryInline::FlatWrite16((r30 + 4418), static_cast<uint16_t>(r0));
}

loc_8097DE04:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8097DCFC func_8097DCFC preserves=true fpr_mask=0x00000000

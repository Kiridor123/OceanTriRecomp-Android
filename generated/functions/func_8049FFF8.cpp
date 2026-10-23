#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804A5054(CpuContext* ctx);
extern "C" uint64_t func_804A5054_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8049FFF8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8049FFF8;

loc_8049FFF8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_804A0004:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804A0024;
    }
}

loc_804A001C:
{
    r31 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_804A00D8;
}

loc_804A0024:
{
    r31 = MemoryInline::FlatRead32((r5 + 4));
    goto loc_804A00D8;
}

loc_804A002C:
{
    r30 = MemoryInline::FlatRead32(r31);
    goto loc_804A00CC;
}

loc_804A0034:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
}

loc_804A003C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804A0094;
    }
}

loc_804A0040:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_804A004C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_804A0094;
    }
}

loc_804A0050:
{
    r30 = MemoryInline::FlatRead32((r30 + 8));
    goto loc_804A0088;
}

loc_804A0058:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_804A0064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_804A0084;
    }
}

loc_804A0068:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x804A0074u;
    if constexpr (KnownRegArgsCpuCall<0x804A5054u>(&func_804A5054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5054_8CA = func_804A5054_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A5054_8CA);
        r4 = static_cast<uint32_t>(regargs_result_804A5054_8CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804A5054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_804A0078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A0084;
    }
}

loc_804A007C:
{
    r3 = r31;
    goto loc_804A00E4;
}

loc_804A0084:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_804A0088:
{
}

loc_804A008C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804A0058;
    }
}

loc_804A0090:
{
    goto loc_804A00D4;
}

loc_804A0094:
{
}

loc_804A0098:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_804A00C8;
    }
}

loc_804A009C:
{
    r0 = MemoryInline::FlatRead16((r30 + 6));
    r0 = (static_cast<int32_t>(r0) >> 12);
}

loc_804A00A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_804A00C8;
    }
}

loc_804A00AC:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x804A00B8u;
    if constexpr (KnownRegArgsCpuCall<0x804A5054u>(&func_804A5054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804A5054_F77 = func_804A5054_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804A5054_F77);
        r4 = static_cast<uint32_t>(regargs_result_804A5054_F77 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804A5054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_804A00BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A00C8;
    }
}

loc_804A00C0:
{
    r3 = r31;
    goto loc_804A00E4;
}

loc_804A00C8:
{
    r30 = MemoryInline::FlatRead32(r30);
}

loc_804A00CC:
{
}

loc_804A00D0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804A0034;
    }
}

loc_804A00D4:
{
    r31 = MemoryInline::FlatRead32((r31 + 4));
}

loc_804A00D8:
{
}

loc_804A00DC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804A002C;
    }
}

loc_804A00E0:
{
    r3 = 0;
}

loc_804A00E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049FFF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049FFF8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049FFF8 func_8049FFF8 preserves=true fpr_mask=0x00000000

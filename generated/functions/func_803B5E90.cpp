#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B5E90_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803B5E90u);
    goto loc_803B5E90;

loc_803B5E90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16864));
    ctx->lr = 0x803B5EA8u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_3E2 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_3E2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B5EAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5EB8;
    }
}

loc_803B5EB0:
{
    r3 = 0;
    goto loc_803B5F78;
}

loc_803B5EB8:
{
}

loc_803B5EBC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803B5EC8;
    }
}

loc_803B5EC0:
{
    r3 = 0;
    goto loc_803B5F78;
}

loc_803B5EC8:
{
    r3 = MemoryInline::FlatRead32((r31 + 148));
    r0 = (r3 & 16);
}

loc_803B5ED4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5F00;
    }
}

loc_803B5ED8:
{
    r0 = (r3 & 1028);
}

loc_803B5EDC:
{
}

loc_803B5EE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5EEC;
    }
}

loc_803B5EE4:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5EEC:
{
    r0 = (r3 & 1044);
}

loc_803B5EF0:
{
}

loc_803B5EF4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1044))) {
        goto loc_803B5F00;
    }
}

loc_803B5EF8:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5F00:
{
    r4 = (r31 + 244);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 & 16);
}

loc_803B5F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5F3C;
    }
}

loc_803B5F14:
{
    r0 = (r3 & 1028);
}

loc_803B5F18:
{
}

loc_803B5F1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5F28;
    }
}

loc_803B5F20:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5F28:
{
    r0 = (r3 & 1044);
}

loc_803B5F2C:
{
}

loc_803B5F30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1044))) {
        goto loc_803B5F3C;
    }
}

loc_803B5F34:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5F3C:
{
    r3 = MemoryInline::FlatRead32((r4 + 96));
    r0 = (r3 & 16);
}

loc_803B5F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803B5F74;
    }
}

loc_803B5F4C:
{
    r0 = (r3 & 1028);
}

loc_803B5F50:
{
}

loc_803B5F54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5F60;
    }
}

loc_803B5F58:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5F60:
{
    r0 = (r3 & 1044);
}

loc_803B5F64:
{
}

loc_803B5F68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1044))) {
        goto loc_803B5F74;
    }
}

loc_803B5F6C:
{
    r3 = 1;
    goto loc_803B5F78;
}

loc_803B5F74:
{
    r3 = 0;
}

loc_803B5F78:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B5E90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B5E90_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B5E90 func_803B5E90 preserves=true fpr_mask=0x00000000

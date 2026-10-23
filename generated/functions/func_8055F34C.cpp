#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046429C(CpuContext* ctx);
extern "C" uint32_t func_8046429C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8055F34C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8055F34C;

loc_8055F34C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8055F358:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(97))) {
        goto loc_8055F384;
    }
}

loc_8055F36C:
{
}

loc_8055F370:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(122))) {
        goto loc_8055F384;
    }
}

loc_8055F374:
{
    r3 = (r3 + 65536);
    r0 = (r3 + -288);
    r3 = (r0 & 65535);
    goto loc_8055F408;
}

loc_8055F384:
{
}

loc_8055F388:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(65))) {
        goto loc_8055F3A4;
    }
}

loc_8055F38C:
{
}

loc_8055F390:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(90))) {
        goto loc_8055F3A4;
    }
}

loc_8055F394:
{
    r3 = (r3 + 65536);
    r0 = (r3 + -288);
    r3 = (r0 & 65535);
    goto loc_8055F408;
}

loc_8055F3A4:
{
}

loc_8055F3A8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(48))) {
        goto loc_8055F3C4;
    }
}

loc_8055F3AC:
{
}

loc_8055F3B0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(57))) {
        goto loc_8055F3C4;
    }
}

loc_8055F3B4:
{
    r3 = (r3 + 65536);
    r0 = (r3 + -288);
    r3 = (r0 & 65535);
    goto loc_8055F408;
}

loc_8055F3C4:
{
    r31 = MemoryInline::FlatRead32((r2 + -900));
    r4 = r30;
    r0 = MemoryInline::FlatRead32((r2 + -904));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if constexpr (KnownRegArgsCpuCall<0x8046429Cu>(&func_8046429C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046429C_A21 = func_8046429C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8046429C_A21;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8046429Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8055F3E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055F404;
    }
}

loc_8055F3E8:
{
    r3 = (r3 - r31);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
    goto loc_8055F408;
}

loc_8055F404:
{
    r3 = r30;
}

loc_8055F408:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055F34C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055F34C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8055F34C func_8055F34C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8005BEA4_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8005BEA4u);
    goto loc_8005BEA4;

loc_8005BEA4:
{
    MemoryInline::FlatWriteRam32((r1 + -1040), r1);
    r1 = (r1 + -1040);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 1044), r0);
    r4 = r3;
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_3BC = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3BC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8005BEC4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(127))) {
        goto loc_8005BED0;
    }
}

loc_8005BEC8:
{
    r3 = 1;
    goto loc_8005BF74;
}

loc_8005BED0:
{
    r0 = (r3 + -192);
}

loc_8005BED8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8005BF0C;
    }
}

loc_8005BEDC:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8005BEE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005BEF0;
    }
}

loc_8005BEE8:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BEF0:
{
    r0 = (r3 + -128);
}

loc_8005BEF8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_8005BF04;
    }
}

loc_8005BEFC:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BF04:
{
    r3 = 2;
    goto loc_8005BF74;
}

loc_8005BF0C:
{
    r0 = (r3 + -224);
}

loc_8005BF14:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8005BF70;
    }
}

loc_8005BF18:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8005BF20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005BF2C;
    }
}

loc_8005BF24:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BF2C:
{
    r0 = (r3 + -128);
}

loc_8005BF34:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_8005BF40;
    }
}

loc_8005BF38:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BF40:
{
    r3 = MemoryInline::FlatRead8((r1 + 10));
}

loc_8005BF48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8005BF54;
    }
}

loc_8005BF4C:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BF54:
{
    r0 = (r3 + -128);
}

loc_8005BF5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(63))) {
        goto loc_8005BF68;
    }
}

loc_8005BF60:
{
    r3 = 0;
    goto loc_8005BF74;
}

loc_8005BF68:
{
    r3 = 3;
    goto loc_8005BF74;
}

loc_8005BF70:
{
    r3 = 0;
}

loc_8005BF74:
{
    r0 = MemoryInline::FlatRead32((r1 + 1044));
    ctx->lr = r0;
    r1 = (r1 + 1040);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_8005BEA4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8005BEA4_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001EB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005BEA4 func_8005BEA4 preserves=true fpr_mask=0x00000000

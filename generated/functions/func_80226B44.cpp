#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274150(CpuContext* ctx);
extern "C" uint64_t func_80274150_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80226B44_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80226B44u);
    goto loc_80226B44;

loc_80226B44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = r5;
    r6 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r6 + -4);
}

loc_80226B6C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80226B7C;
    }
}

loc_80226B70:
{
}

loc_80226B74:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(8))) {
        goto loc_80226BBC;
    }
}

loc_80226B78:
{
    goto loc_80226C54;
}

loc_80226B7C:
{
    ctx->lr = 0x80226B80u;
    if constexpr (KnownRegArgsCpuCall<0x80274150u>(&func_80274150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274150_582 = func_80274150_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274150_582);
        r4 = static_cast<uint32_t>(regargs_result_80274150_582 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r31 & 255);
}

loc_80226B88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80226BA4;
    }
}

loc_80226B8C:
{
    r0 = (r3 & 255);
    r4 = (r0 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19104);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226BA4:
{
    r0 = (r3 & 255);
    r4 = (r0 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18792);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226BBC:
{
    r0 = (r5 & 255);
}

loc_80226BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80226C18;
    }
}

loc_80226BC8:
{
}

loc_80226BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80226C2C;
    }
}

loc_80226BD0:
{
}

loc_80226BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80226C40;
    }
}

loc_80226BD8:
{
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r3 = (r3 & 65535);
    r0 = (r3 + -1122);
}

loc_80226BE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80226BF8;
    }
}

loc_80226BEC:
{
    r0 = (r3 + -1172);
}

loc_80226BF4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80226C04;
    }
}

loc_80226BF8:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -18480);
    goto loc_80226CBC;
}

loc_80226C04:
{
    r4 = (r30 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19632);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C18:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19368);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C2C:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19056);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C40:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18744);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C54:
{
    r0 = (r5 & 255);
}

loc_80226C5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80226C98;
    }
}

loc_80226C60:
{
}

loc_80226C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80226CAC;
    }
}

loc_80226C68:
{
}

loc_80226C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80226C84;
    }
}

loc_80226C70:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18744);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C84:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19632);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226C98:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19368);
    r3 = (r0 + r4);
    goto loc_80226CBC;
}

loc_80226CAC:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19056);
    r3 = (r0 + r4);
}

loc_80226CBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80226B44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80226B44_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000005B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80226B44 func_80226B44 preserves=true fpr_mask=0x00000000

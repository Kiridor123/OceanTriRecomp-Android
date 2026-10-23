#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80455E58(CpuContext* ctx);
extern "C" uint64_t func_80455E58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80453920_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80453920;

loc_80453920:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453928:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80453934;
    }
}

loc_8045392C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453934:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15784));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80453944:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80453954;
    }
}

loc_80453948:
{
}

loc_8045394C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_8045395C;
    }
}

loc_80453950:
{
    goto loc_80453960;
}

loc_80453954:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8045395C:
{
    if constexpr (KnownRegArgsCpuCall<0x80455E58u>(&func_80455E58)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_80455E58_6B4 = func_80455E58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80455E58_6B4);
        r4 = static_cast<uint32_t>(regargs_result_80455E58_6B4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80455E58u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453960:
{
    // inline leaf 0x80455E38 (8 guest instruction(s))
}

loc_inl0_0x80455E38:
{
    r4 = MemoryInline::FlatRead32((r13 + -16448));
    r0 = MemoryInline::FlatRead16((r13 + -16432));
}

loc_inl0_0x80455E44:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl0_0x80455E4C;
    }
}

loc_inl0_0x80455E48:
{
    r3 = 0;
}

loc_inl0_0x80455E4C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
}

loc_inl0_cont_80455E38:
{
    // end of inlined leaf 0x80455E38
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80453920(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80453920_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453920 func_80453920 preserves=true fpr_mask=0x00000000

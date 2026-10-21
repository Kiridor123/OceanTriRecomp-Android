#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026F8EC(CpuContext* ctx);
extern "C" uint32_t func_8026F8EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8025A860_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8025A860u);
    goto loc_8025A860;

loc_8025A860:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025A880:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025A980;
    }
}

loc_8025A884:
{
    r3 = MemoryInline::FlatRead8((r31 + 935));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8025A890:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025A89C;
    }
}

loc_8025A894:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 935), static_cast<uint8_t>(r0));
}

loc_8025A89C:
{
    r3 = r31;
    r4 = 48;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_670 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_670);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_670 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8025A8AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025A8CC;
    }
}

loc_8025A8B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 296));
}

loc_8025A8B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8025A8C4;
    }
}

loc_8025A8BC:
{
    r30 = 6;
    goto loc_8025A8E0;
}

loc_8025A8C4:
{
    r30 = 8;
    goto loc_8025A8E0;
}

loc_8025A8CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 296));
}

loc_8025A8D4:
{
    r30 = 15;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8025A8E0;
    }
}

loc_8025A8DC:
{
    r30 = 12;
}

loc_8025A8E0:
{
    r0 = MemoryInline::FlatRead16((r31 + 936));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8025A8E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025A970;
    }
}

loc_8025A8EC:
{
    r0 = MemoryInline::FlatRead16((r31 + 888));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8025A8F4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8025A980;
    }
}

loc_8025A8F8:
{
    r3 = r31;
    ctx->lr = 0x8025A900u;
    if constexpr (KnownRegArgsCpuCall<0x8026F8ECu>(&func_8026F8EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026F8EC_D8B = func_8026F8EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026F8EC_D8B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026F8ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_8025A904:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025A980;
    }
}

loc_8025A908:
{
    r0 = MemoryInline::FlatRead8((r31 + 935));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8025A914:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8025A980;
    }
}

loc_8025A918:
{
    r3 = MemoryInline::FlatRead8((r31 + 934));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 934), static_cast<uint8_t>(r3));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 935), static_cast<uint8_t>(r0));
    r3 = (r3 & 255);
    r0 = (r30 & 255);
}

loc_8025A938:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8025A980;
    }
}

loc_8025A93C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 934), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 777));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite8((r31 + 777), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 932));
}

loc_8025A958:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8025A964;
    }
}

loc_8025A95C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 932), static_cast<uint8_t>(r0));
}

loc_8025A964:
{
    r3 = r31;
    // inline leaf 0x8025A838 (3 guest instruction(s))
    r0 = 300;
    MemoryInline::FlatWrite16((r3 + 936), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8025A838
    goto loc_8025A980;
}

loc_8025A970:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 934), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x8025A838 (3 guest instruction(s))
    r0 = 300;
    MemoryInline::FlatWrite16((r3 + 936), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8025A838
}

loc_8025A980:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025A860(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025A860_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8025A860 func_8025A860 preserves=true fpr_mask=0x00000000

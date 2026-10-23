#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056DAFC(CpuContext* ctx);
extern "C" uint64_t func_8056DAFC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8056D7F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8056D7F4;

loc_8056D7F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8056D80Cu;
    if constexpr (KnownRegArgsCpuCall<0x8056DAFCu>(&func_8056DAFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8056DAFC_4E6 = func_8056DAFC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8056DAFC_4E6);
        r4 = static_cast<uint32_t>(regargs_result_8056DAFC_4E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8056DAFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (r3 & 65535);
}

loc_8056D814:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(61744))) {
        goto loc_8056D830;
    }
}

loc_8056D818:
{
}

loc_8056D81C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(61753))) {
        goto loc_8056D830;
    }
}

loc_8056D820:
{
    r3 = (r3 + -65536);
    r0 = (r3 + 3840);
    r3 = (r0 & 65535);
    goto loc_8056D884;
}

loc_8056D830:
{
    r0 = (r3 & 65535);
}

loc_8056D838:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(61709))) {
        goto loc_8056D848;
    }
}

loc_8056D83C:
{
    r3 = 65536;
    r3 = (r3 + -3635);
    goto loc_8056D884;
}

loc_8056D848:
{
}

loc_8056D84C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(61696))) {
        goto loc_8056D868;
    }
}

loc_8056D850:
{
}

loc_8056D854:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(61759))) {
        goto loc_8056D868;
    }
}

loc_8056D858:
{
    r3 = (r3 + -65536);
    r0 = (r3 + 3840);
    r3 = (r0 & 65535);
    goto loc_8056D884;
}

loc_8056D868:
{
    r0 = (r3 & 65535);
}

loc_8056D870:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(61760))) {
        goto loc_8056D884;
    }
}

loc_8056D874:
{
}

loc_8056D878:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(61823))) {
        goto loc_8056D884;
    }
}

loc_8056D87C:
{
    r0 = (r3 + 64);
    r3 = (r0 & 65535);
}

loc_8056D884:
{
    r4 = (r3 & 61440);
    r0 = (r4 + 0);
}

loc_8056D890:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(61440))) {
        goto loc_8056D89C;
    }
}

loc_8056D894:
{
    r3 = 0;
    goto loc_8056D8BC;
}

loc_8056D89C:
{
    r0 = (r3 & 65535);
}

loc_8056D8A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(61166))) {
        goto loc_8056D8B0;
    }
}

loc_8056D8A8:
{
    r3 = 0;
    goto loc_8056D8BC;
}

loc_8056D8B0:
{
}

loc_8056D8B4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(32))) {
        goto loc_8056D8BC;
    }
}

loc_8056D8B8:
{
    r3 = 0;
}

loc_8056D8BC:
{
    r6 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8056D8C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056D8D0;
    }
}

loc_8056D8CC:
{
    goto loc_8056D914;
}

loc_8056D8D0:
{
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_8056D8D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8056D8E0;
    }
}

loc_8056D8DC:
{
    goto loc_8056D914;
}

loc_8056D8E0:
{
    r5 = (r3 & 65535);
    r7 = 0;
    ctr = r0;
}

loc_8056D8F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_8056D910;
    }
}

loc_8056D8F4:
{
    r4 = MemoryInline::FlatRead32((r6 + 12));
    r4_addr_2 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(r4_addr_2);
}

loc_8056D900:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8056D908;
    }
}

loc_8056D904:
{
    goto loc_8056D914;
}

loc_8056D908:
{
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8056D8F4;
    }
}

loc_8056D910:
{
    r3 = 0;
}

loc_8056D914:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056D7F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056D7F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056D7F4 func_8056D7F4 preserves=true fpr_mask=0x00000000

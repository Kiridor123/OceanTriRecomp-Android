#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A9354(CpuContext* ctx);
extern "C" uint32_t func_802A9354_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804399C8(CpuContext* ctx);
extern "C" uint64_t func_804399C8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_80439810_ra88_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;

    goto loc_80439810;

loc_80439810:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = (r3 + 420);
    r3 = 28;
    // inline leaf 0x803BECD4 (12 guest instruction(s))
}

loc_inl0_0x803BECD4:
{
    r0 = (r3 & 255);
}

loc_inl0_0x803BECDC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_inl0_0x803BECF4;
    }
}

loc_inl0_0x803BECE0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 ^ 1);
    goto loc_inl0_cont_803BECD4;
}

loc_inl0_0x803BECF4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19184);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_inl0_cont_803BECD4:
{
    // end of inlined leaf 0x803BECD4
    r0 = (r3 & 255);
}

loc_8043983C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80439858;
    }
}

loc_80439840:
{
    r3 = r31;
    r4 = 0;
    r5 = 3;
    r6 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802A9354_89A = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_89A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802A9354u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_8043986C;
}

loc_80439858:
{
    r3 = r31;
    r4 = 0;
    r5 = 6;
    r6 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802A9354u>(&func_802A9354)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802A9354_BC0 = func_802A9354_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_802A9354_BC0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802A9354u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8043986C:
{
    r3 = r30;
    ctx->lr = 0x80439874u;
    if constexpr (KnownRegArgsCpuCall<0x804399C8u>(&func_804399C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804399C8_EA8 = func_804399C8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804399C8_EA8);
        r4 = static_cast<uint32_t>(regargs_result_804399C8_EA8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804399C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r3;
}

}

extern "C" void func_80439810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80439810_ra88_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000208B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80439810 func_80439810 preserves=true fpr_mask=0x00000000

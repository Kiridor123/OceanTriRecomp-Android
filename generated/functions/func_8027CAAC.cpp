#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027492C(CpuContext* ctx);
extern "C" uint64_t func_8027492C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027CAAC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8027CAACu);
    goto loc_8027CAAC;

loc_8027CAAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8027CAC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8027CB6C;
    }
}

loc_8027CACC:
{
    r0 = MemoryInline::FlatRead16((r3 + 902));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 902), static_cast<uint16_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8027CAE0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8027CB58;
    }
}

loc_8027CAE4:
{
    r0 = 1800;
    MemoryInline::FlatWrite16((r3 + 1130), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027CAF4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_8027CB00;
    }
}

loc_8027CAF8:
{
    r0 = 100;
    MemoryInline::FlatWrite16((r3 + 902), static_cast<uint16_t>(r0));
}

loc_8027CB00:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8027492Cu>(&func_8027492C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027492C_76D = func_8027492C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027492C_76D);
        r4 = static_cast<uint32_t>(regargs_result_8027492C_76D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027492Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_8027CB10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8027CB28;
    }
}

loc_8027CB14:
{
}

loc_8027CB18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027CB38;
    }
}

loc_8027CB1C:
{
}

loc_8027CB20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8027CB48;
    }
}

loc_8027CB24:
{
    goto loc_8027CB6C;
}

loc_8027CB28:
{
    r3 = r31;
    r4 = 900;
    // inline leaf 0x8027C900 (6 guest instruction(s))
}

loc_inl0_0x8027C900:
{
    r5 = MemoryInline::FlatRead16((r3 + 1128));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8027C90C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8027C910:
{
    MemoryInline::FlatWrite16((r3 + 1128), static_cast<uint16_t>(r4));
    goto loc_inl0_cont_8027C900;
}

loc_inl0_return:
{
}

loc_inl0_cont_8027C900:
{
    // end of inlined leaf 0x8027C900
    goto loc_8027CB6C;
}

loc_8027CB38:
{
    r3 = r31;
    r4 = 900;
    // inline leaf 0x8027C900 (6 guest instruction(s))
}

loc_inl1_0x8027C900:
{
    r5 = MemoryInline::FlatRead16((r3 + 1128));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x8027C90C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8027C910:
{
    MemoryInline::FlatWrite16((r3 + 1128), static_cast<uint16_t>(r4));
    goto loc_inl1_cont_8027C900;
}

loc_inl1_return:
{
}

loc_inl1_cont_8027C900:
{
    // end of inlined leaf 0x8027C900
    goto loc_8027CB6C;
}

loc_8027CB48:
{
    r3 = r31;
    r4 = 900;
    // inline leaf 0x8027C900 (6 guest instruction(s))
}

loc_inl2_0x8027C900:
{
    r5 = MemoryInline::FlatRead16((r3 + 1128));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8027C90C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8027C910:
{
    MemoryInline::FlatWrite16((r3 + 1128), static_cast<uint16_t>(r4));
    goto loc_inl2_cont_8027C900;
}

loc_inl2_return:
{
}

loc_inl2_cont_8027C900:
{
    // end of inlined leaf 0x8027C900
    goto loc_8027CB6C;
}

loc_8027CB58:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8027CB60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8027CB6C;
    }
}

loc_8027CB64:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 902), static_cast<uint16_t>(r0));
}

loc_8027CB6C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027CAAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027CAAC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027CAAC func_8027CAAC preserves=true fpr_mask=0x00000000

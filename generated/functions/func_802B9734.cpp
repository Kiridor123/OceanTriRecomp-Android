#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FEA8(CpuContext* ctx);
extern "C" uint64_t func_8026FEA8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027A230(CpuContext* ctx);
extern "C" uint64_t func_8027A230_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802B9734_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_802B9734;

loc_802B9734:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8027A1FC (13 guest instruction(s))
}

loc_inl0_0x8027A1FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl0_0x8027A204:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8027A228;
    }
}

loc_inl0_0x8027A208:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -68);
}

loc_inl0_0x8027A214:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8027A220;
    }
}

loc_inl0_0x8027A218:
{
}

loc_inl0_0x8027A21C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(71))) {
        goto loc_inl0_0x8027A228;
    }
}

loc_inl0_0x8027A220:
{
    r3 = 1;
    goto loc_inl0_cont_8027A1FC;
}

loc_inl0_0x8027A228:
{
    r3 = 0;
}

loc_inl0_cont_8027A1FC:
{
    // end of inlined leaf 0x8027A1FC
}

loc_802B9750:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B975C;
    }
}

loc_802B9754:
{
    r3 = 1;
    goto loc_802B9790;
}

loc_802B975C:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x802B9768u;
    if constexpr (KnownRegArgsCpuCall<0x8027A230u>(&func_8027A230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027A230_931 = func_8027A230_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8027A230_931);
        r4 = static_cast<uint32_t>(regargs_result_8027A230_931 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x8027A230u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_802B976C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B9778;
    }
}

loc_802B9770:
{
    r3 = 2;
    goto loc_802B9790;
}

loc_802B9778:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8026FEA8u>(&func_8026FEA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FEA8_E1B = func_8026FEA8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FEA8_E1B);
        r4 = static_cast<uint32_t>(regargs_result_8026FEA8_E1B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8026FEA8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = (r4 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
}

loc_802B9790:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B9734(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B9734_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B9734 func_802B9734 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FDF08(CpuContext* ctx);
extern "C" uint32_t func_803FDF08_ra8_1c_8_0(CpuContext*, uint32_t, double, double, double);

extern "C" uint32_t func_80452488_ra8_1c_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x80452488u);
    goto loc_80452488;

loc_80452488:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_804524A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804524B0;
    }
}

loc_804524A8:
{
    r3 = 0;
    goto loc_804524F0;
}

loc_804524B0:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    ctx->lr = 0x804524B8u;
    if constexpr (KnownRegArgsCpuCall<0x803FDF08u>(&func_803FDF08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803FDF08_5F7 = func_803FDF08_ra8_1c_8_0(ctx, r3, f2.d, f3.d, f4.d);
        r3 = regargs_result_803FDF08_5F7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x803FDF08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = MemoryInline::FlatRead32(r31);
}

loc_804524C0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_804524EC;
    }
}

loc_804524C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_804524CC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804524D8;
    }
}

loc_804524D0:
{
    r3 = 1;
    goto loc_804524F0;
}

loc_804524D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_804524E0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804524EC;
    }
}

loc_804524E4:
{
    r3 = 2;
    goto loc_804524F0;
}

loc_804524EC:
{
    r3 = 0;
}

loc_804524F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return r3;
}

}

extern "C" void func_80452488(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80452488_ra8_1c_8_0(ctx, ctx->gpr[3], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80452488 func_80452488 preserves=true fpr_mask=0x00000000

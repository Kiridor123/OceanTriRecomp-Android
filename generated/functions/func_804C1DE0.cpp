#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C1DE0(CpuContext* ctx);
extern "C" uint64_t func_804C1DE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804C1DE0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x804C1DE0u);
    goto loc_804C1DE0;

loc_804C1DE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r29 = 0;
    r28 = r4;
    goto loc_804C1EE4;
}

loc_804C1E0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1E14:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_804C1EE4;
    }
}

loc_804C1E18:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C1E20:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_804C1EE4;
    }
}

loc_804C1E24:
{
    r31 = 0;
    goto loc_804C1EB4;
}

loc_804C1E2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1E34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_804C1EB4;
    }
}

loc_804C1E38:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C1E40:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_804C1EB4;
    }
}

loc_804C1E44:
{
    r30 = 0;
    goto loc_804C1E84;
}

loc_804C1E4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1E54:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r28))) {
        goto loc_804C1E84;
    }
}

loc_804C1E58:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C1E60:
{
    if ((static_cast<uint32_t>(r28) >= static_cast<uint32_t>(r0))) {
        goto loc_804C1E84;
    }
}

loc_804C1E64:
{
    r4 = r28;
    r3 = (r3 + 12);
    ctx->lr = 0x804C1E70u;
    if constexpr (KnownRegArgsCpuCall<0x804C1DE0u>(&func_804C1DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804C1DE0_B07 = func_804C1DE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C1DE0_B07);
        r4 = static_cast<uint32_t>(regargs_result_804C1DE0_B07 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804C1DE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804C1E74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C1E7C;
    }
}

loc_804C1E78:
{
    goto loc_804C1EA0;
}

loc_804C1E7C:
{
    r3 = r30;
    goto loc_804C1EA0;
}

loc_804C1E84:
{
    r4 = r30;
    r3 = (r31 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl0_0x804C2C40:
{
}

loc_inl0_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x804C2C50;
    }
}

loc_inl0_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_804C2C40;
}

loc_inl0_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C1E94:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1E4C;
    }
}

loc_804C1E9C:
{
    r3 = 0;
}

loc_804C1EA0:
{
}

loc_804C1EA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C1EAC;
    }
}

loc_804C1EA8:
{
    goto loc_804C1ED0;
}

loc_804C1EAC:
{
    r3 = r31;
    goto loc_804C1ED0;
}

loc_804C1EB4:
{
    r4 = r31;
    r3 = (r29 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl1_0x804C2C40:
{
}

loc_inl1_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x804C2C50;
    }
}

loc_inl1_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_804C2C40;
}

loc_inl1_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C1EC4:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1E2C;
    }
}

loc_804C1ECC:
{
    r3 = 0;
}

loc_804C1ED0:
{
}

loc_804C1ED4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C1EDC;
    }
}

loc_804C1ED8:
{
    goto loc_804C1F00;
}

loc_804C1EDC:
{
    r3 = r29;
    goto loc_804C1F00;
}

loc_804C1EE4:
{
    r3 = r30;
    r4 = r29;
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl2_0x804C2C40:
{
}

loc_inl2_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x804C2C50;
    }
}

loc_inl2_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_804C2C40;
}

loc_inl2_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C1EF4:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1E0C;
    }
}

loc_804C1EFC:
{
    r3 = 0;
}

loc_804C1F00:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C1DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C1DE0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C1DE0 func_804C1DE0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DD96C(CpuContext* ctx);
extern "C" uint64_t func_800DD96C_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8026FDF8(CpuContext* ctx);
extern "C" uint32_t func_8026FDF8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027CCA8(CpuContext* ctx);
extern "C" uint64_t func_8027CCA8_ra38_1a_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80287958_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    MKW_GUEST_ENTER(0x80287958u);
    goto loc_80287958;

loc_80287958:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = 255;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r29;
    ctx->lr = 0x8028798Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026FDF8u>(&func_8026FDF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FDF8_668 = func_8026FDF8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026FDF8_668;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026FDF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80287990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80287A14;
    }
}

loc_80287994:
{
    r3 = r29;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_802879A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1105))) {
        goto loc_802879D4;
    }
}

loc_802879A8:
{
}

loc_802879AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1154))) {
        goto loc_802879D4;
    }
}

loc_802879B0:
{
}

loc_802879B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1101))) {
        goto loc_802879DC;
    }
}

loc_802879B8:
{
}

loc_802879BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1150))) {
        goto loc_802879DC;
    }
}

loc_802879C0:
{
}

loc_802879C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1108))) {
        goto loc_802879E4;
    }
}

loc_802879C8:
{
}

loc_802879CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1157))) {
        goto loc_802879E4;
    }
}

loc_802879D0:
{
    goto loc_802879E8;
}

loc_802879D4:
{
    r31 = 0;
    goto loc_802879E8;
}

loc_802879DC:
{
    r31 = 1;
    goto loc_802879E8;
}

loc_802879E4:
{
    r31 = 2;
}

loc_802879E8:
{
}

loc_802879EC:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(255))) {
        goto loc_80287A14;
    }
}

loc_802879F0:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x80287A00u;
    if constexpr (KnownRegArgsCpuCall<0x8027CCA8u>(&func_8027CCA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027CCA8_EA3 = func_8027CCA8_ra38_1a_18_0(ctx, r3, r4, r5, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8027CCA8_EA3);
        r4 = static_cast<uint32_t>(regargs_result_8027CCA8_EA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8027CCA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r29;
    r4 = (r1 + 8);
    r5 = (r30 & 255);
    r6 = r31;
    ctx->lr = 0x80287A14u;
    if constexpr (KnownRegArgsCpuCall<0x800DD96Cu>(&func_800DD96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DD96C_12D5 = func_800DD96C_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD96C_12D5);
        r4 = static_cast<uint32_t>(regargs_result_800DD96C_12D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DD96Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_80287A14:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80287958(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80287958_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xE000001B fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80287958 func_80287958 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D40B0(CpuContext* ctx);
extern "C" uint32_t func_804D40B0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D4160(CpuContext* ctx);
extern "C" uint64_t func_804D4160_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D4F20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    MKW_GUEST_ENTER(0x804D4F20u);
    goto loc_804D4F20;

loc_804D4F20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r30 = MemoryInline::FlatRead32((r29 + 716));
    r31 = r3;
}

loc_804D4F4C:
{
    r0 = (r30 + 1);
    MemoryInline::FlatWrite32((r29 + 716), r0);
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_804D5084;
    }
}

loc_804D4F58:
{
    r0 = MemoryInline::FlatRead16((r29 + 712));
}

loc_804D4F60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804D4F78;
    }
}

loc_804D4F64:
{
}

loc_804D4F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804D4F88;
    }
}

loc_804D4F6C:
{
}

loc_804D4F70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804D4F94;
    }
}

loc_804D4F74:
{
    goto loc_804D5070;
}

loc_804D4F78:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14988), r0);
    MemoryInline::FlatWrite16((r29 + 712), static_cast<uint16_t>(r0));
    goto loc_804D5070;
}

loc_804D4F88:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x804D40B0u>(&func_804D40B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D40B0_B23 = func_804D40B0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D40B0_B23;
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
        InvokeDirectCpu<0x804D40B0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_804D5070;
}

loc_804D4F94:
{
    r4 = MemoryInline::FlatRead32((r29 + 736));
    r5 = MemoryInline::FlatRead32((r29 + 740));
}

loc_804D4FA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4FB0;
    }
}

loc_804D4FA4:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    goto loc_804D4FB4;
}

loc_804D4FB0:
{
    MemoryInline::FlatWrite32((r4 + 740), r5);
}

loc_804D4FB4:
{
}

loc_804D4FB8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4FC8;
    }
}

loc_804D4FBC:
{
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32(r3, r4);
    goto loc_804D4FCC;
}

loc_804D4FC8:
{
    MemoryInline::FlatWrite32((r5 + 736), r4);
}

loc_804D4FCC:
{
    r0 = 32;
    MemoryInline::FlatWrite32((r29 + 720), r0);
    r3 = MemoryInline::FlatRead32((r29 + 732));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804D4FE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4FEC;
    }
}

loc_804D4FE4:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_804D4FF0;
}

loc_804D4FEC:
{
    MemoryInline::FlatWrite32((r4 + 736), r29);
}

loc_804D4FF0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 740), r4);
    r3 = MemoryInline::FlatRead32((r29 + 732));
    MemoryInline::FlatWrite32((r29 + 736), r0);
    MemoryInline::FlatWrite32((r3 + 4), r29);
    r3 = MemoryInline::FlatRead32((r29 + 752));
}

loc_804D500C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D5070;
    }
}

loc_804D5010:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804D5014:
{
    r0 = MemoryInline::FlatRead32((r3 + 716));
}

loc_804D501C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_804D5070;
    }
}

loc_804D5020:
{
    r4 = MemoryInline::FlatRead32((r3 + 724));
    r5 = MemoryInline::FlatRead32((r3 + 756));
    goto loc_804D5050;
}

loc_804D5030:
{
    r6 = MemoryInline::FlatRead32(r5);
}

loc_804D5038:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D504C;
    }
}

loc_804D503C:
{
    r0 = MemoryInline::FlatRead32((r6 + 720));
}

loc_804D5044:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_804D504C;
    }
}

loc_804D5048:
{
    r4 = r0;
}

loc_804D504C:
{
    r5 = MemoryInline::FlatRead32((r5 + 16));
}

loc_804D5050:
{
}

loc_804D5054:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D5030;
    }
}

loc_804D5058:
{
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D5060:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r4))) {
        goto loc_804D5070;
    }
}

loc_804D5064:
{
    ctx->lr = 0x804D5068u;
    if constexpr (KnownRegArgsCpuCall<0x804D4160u>(&func_804D4160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D4160_18CE = func_804D4160_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804D4160_18CE);
        r4 = static_cast<uint32_t>(regargs_result_804D4160_18CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804D4160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_804D506C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D5014;
    }
}

loc_804D5070:
{
    r0 = MemoryInline::FlatRead32((r13 + -14988));
}

loc_804D5078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D5084;
    }
}

loc_804D507C:
{
    r3 = 0;
    ctx->lr = 0x804D5084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x804D4360u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_804D5084:
{
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D4F20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D4F20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4F20 func_804D4F20 preserves=true fpr_mask=0x00000000

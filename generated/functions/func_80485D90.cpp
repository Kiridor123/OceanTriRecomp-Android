#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B230(CpuContext* ctx);
extern "C" uint64_t func_8047B230_ra48_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80485D90_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    uint32_t ctr = ctx->ctr;

    goto loc_80485D90;

loc_80485D90:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    r11 = (r1 + 288);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = 0x80740000u;
    r29 = (r29 + -17608);
    r3 = (r29 + 5828);
    if constexpr (KnownRegArgsCpuCall<0x8047B230u>(&func_8047B230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B230_763 = func_8047B230_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B230_763);
        r4 = static_cast<uint32_t>(regargs_result_8047B230_763 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8047B230u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead8((r29 + 6216));
}

loc_80485DBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80485DF4;
    }
}

loc_80485DC0:
{
    r0 = (r3 + 255);
    r3 = 0;
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r29 + 6216), static_cast<uint8_t>(r3));
}

loc_80485DD4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80485DF4;
    }
}

loc_80485DD8:
{
    r12 = MemoryInline::FlatRead32((r29 + 5808));
}

loc_80485DE0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80485DF4;
    }
}

loc_80485DE4:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r3 = (r1 + 9);
    ctr = r12;
    ctx->lr = 0x80485DF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80485DF4:
{
    r0 = MemoryInline::FlatRead8((r29 + 5806));
    r0 = (r0 & 1);
}

loc_80485DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485E44;
    }
}

loc_80485E00:
{
    r3 = (r29 + 5760);
    if constexpr (KnownRegArgsCpuCall<0x8047B230u>(&func_8047B230)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8047B230_1044 = func_8047B230_ra48_0_18_0(ctx, r3, r6);
        r3 = static_cast<uint32_t>(regargs_result_8047B230_1044);
        r4 = static_cast<uint32_t>(regargs_result_8047B230_1044 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8047B230u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r30 = 0;
    r3 = (r29 + 5800);
    MemoryInline::FlatWriteRam8((r29 + 5806), static_cast<uint8_t>(r30));
    r4 = 0;
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r12 = MemoryInline::FlatRead32((r29 + 5756));
}

loc_80485E28:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80485E44;
    }
}

loc_80485E2C:
{
    r0 = 12;
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    ctr = r12;
    ctx->lr = 0x80485E40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam32((r29 + 5756), r30);
}

loc_80485E44:
{
    r0 = MemoryInline::FlatRead8((r29 + 6212));
}

loc_80485E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485E78;
    }
}

loc_80485E50:
{
    r12 = MemoryInline::FlatRead32((r29 + 5816));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 6212), static_cast<uint8_t>(r0));
}

loc_80485E60:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80485E78;
    }
}

loc_80485E64:
{
    r0 = 12;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    ctr = r12;
    ctx->lr = 0x80485E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80485E78:
{
    r30 = 0;
    r31 = 0x80740000u;
    r31 = (r31 + -17608);
    MemoryInline::FlatWriteRam8((r29 + 6215), static_cast<uint8_t>(r30));
    r28 = 0;
    MemoryInline::FlatWriteRam8((r29 + 6213), static_cast<uint8_t>(r30));
    r27 = (r31 + 5860);
    MemoryInline::FlatWriteRam32((r29 + 5812), r30);
}

loc_80485E98:
{
    r0 = MemoryInline::FlatRead8((r27 + 26));
}

loc_80485EA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80485EC4;
    }
}

loc_80485EA4:
{
    MemoryInline::FlatWrite8((r27 + 26), static_cast<uint8_t>(r30));
    r12 = MemoryInline::FlatRead32((r31 + 5820));
}

loc_80485EB0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80485EC4;
    }
}

loc_80485EB4:
{
    r3 = (r27 + 8);
    r4 = 0;
    ctr = r12;
    ctx->lr = 0x80485EC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80485EC4:
{
    r28 = (r28 + 1);
    r27 = (r27 + 28);
}

loc_80485ED0:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(12))) {
        goto loc_80485E98;
    }
}

loc_80485ED4:
{
    r31 = 0x80740000u;
    r31 = (r31 + -17608);
    r3 = MemoryInline::FlatRead32((r31 + 5852));
}

loc_80485EE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80485EF4;
    }
}

loc_80485EE8:
{
    ctx->lr = 0x80485EECu;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_22BF = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_22BF);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_22BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 5852), r0);
}

loc_80485EF4:
{
    r0 = 0;
    r11 = (r1 + 288);
    MemoryInline::FlatWriteRam16((r31 + 5856), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r31 + 5858), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r29 + 5784), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r29 + 5786), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r29 + 5798), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r29 + 5796), static_cast<uint16_t>(r0));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80485D90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80485D90_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80485D90 func_80485D90 preserves=true fpr_mask=0x00000000

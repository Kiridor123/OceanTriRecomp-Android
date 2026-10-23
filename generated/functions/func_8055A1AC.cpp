#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80527580(CpuContext* ctx);
extern "C" uint64_t func_80527580_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8055A1AC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_8055A1AC;

loc_8055A1AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_8055A1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055A214;
    }
}

loc_8055A1CC:
{
    r4 = 0;
    r5 = 0;
    r3 = (r3 + 44);
    ctx->lr = 0x8055A1DCu;
    if constexpr (KnownRegArgsCpuCall<0x80527580u>(&func_80527580)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80527580_6E3 = func_80527580_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80527580_6E3);
        r4 = static_cast<uint32_t>(regargs_result_80527580_6E3 >> 32);
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
        InvokeDirectCpu<0x80527580u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_8055A1E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055A214;
    }
}

loc_8055A1E4:
{
    r6 = MemoryInline::FlatRead8((r31 + 61));
    r3 = (r31 + 44);
    r4 = 0;
    r5 = 0;
    r0 = (r6 + -1);
    MemoryInline::FlatWrite8((r31 + 61), static_cast<uint8_t>(r0));
    ctx->lr = 0x8055A200u;
    if constexpr (KnownRegArgsCpuCall<0x80527580u>(&func_80527580)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80527580_BD2 = func_80527580_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80527580_BD2);
        r4 = static_cast<uint32_t>(regargs_result_80527580_BD2 >> 32);
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
        InvokeDirectCpu<0x80527580u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 510);
    r4 = 0;
    r3 = (r31 + r0);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r4));
    goto loc_8055A300;
}

loc_8055A214:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r12 = MemoryInline::FlatRead32((r12 + 152));
    ctr = r12;
    ctx->lr = 0x8055A230u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_8055A23C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8055A248;
    }
}

loc_8055A240:
{
}

loc_8055A244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8055A300;
    }
}

loc_8055A248:
{
}

loc_8055A24C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8055A2C0;
    }
}

loc_8055A250:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x8055A264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8055A268:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055A288;
    }
}

loc_8055A26C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x8055A284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8055A2F8;
}

loc_8055A288:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
}

loc_8055A290:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8055A29C;
    }
}

loc_8055A294:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_8055A29C:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r5 = 1;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    r4 = (r0 & 65535);
    ctr = r12;
    ctx->lr = 0x8055A2BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    goto loc_8055A2F8;
}

loc_8055A2C0:
{
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r3 = r31;
    r0 = (r4 - r5);
    r4 = (r5 & 65535);
    r12 = MemoryInline::FlatRead32(r31);
    r5 = (r0 & 65535);
    r6 = (r1 + 8);
    r12 = MemoryInline::FlatRead32((r12 + 44));
    ctr = r12;
    ctx->lr = 0x8055A2F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_8055A2F8:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_8055A300:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8055A1AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8055A1AC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8055A1AC func_8055A1AC preserves=true fpr_mask=0x00000000

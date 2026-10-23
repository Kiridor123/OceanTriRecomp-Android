#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80044AB8(CpuContext* ctx);
extern "C" uint32_t func_80044AB8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800D2354_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_800D2354;

loc_800D2354:
{
    r3 = 0x80660000u;
    r29 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r29 + 2156));
}

loc_800D2364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D265C;
    }
}

loc_800D2368:
{
    // inline leaf 0x804360A0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27968);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x804360A0
}

loc_800D2370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D2380;
    }
}

loc_800D2374:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 2156), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D2380:
{
    // inline leaf 0x800CEE20 (6 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28904);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800CEE20
}

loc_800D2388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D238C:
{
    r3 = 0x80690000u;
    r0 = MemoryInline::FlatRead8((r3 + 30624));
}

loc_800D2398:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D23C0;
    }
}

loc_800D239C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2160));
}

loc_800D23A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D23A8:
{
    r0 = MemoryInline::FlatRead8((r29 + 2149));
}

loc_800D23B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D23B4:
{
    ctx->lr = 0x800D23B8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800D23BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D23E0;
    }
}

loc_800D23C0:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 40), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D23E0:
{
    r0 = MemoryInline::FlatRead8((r29 + 2157));
}

loc_800D23E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D265C;
    }
}

loc_800D23EC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 2156), static_cast<uint8_t>(r0));
    r30 = 1;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r29 + 2163), static_cast<uint8_t>(r30));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800D240C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D2414;
    }
}

loc_800D2410:
{
    MemoryInline::FlatWriteRam8((r29 + 2162), static_cast<uint8_t>(r30));
}

loc_800D2414:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r12 = MemoryInline::FlatRead32((r3 + 2252));
    ctr = r12;
    ctx->lr = 0x800D2428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    // inline leaf 0x800D26C4 (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80690000u;
    r3 = (r3 + 30952);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D26C4
    r0 = 10;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    ctx->lr = 0x800D2438u;
    if constexpr (KnownRegArgsCpuCall<0x80044AB8u>(&func_80044AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80044AB8_1548 = func_80044AB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80044AB8_1548;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80044AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800D265C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | r3;
}

}

extern "C" void func_800D2354(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D2354_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xE0003FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D2354 func_800D2354 preserves=true fpr_mask=0x00000000

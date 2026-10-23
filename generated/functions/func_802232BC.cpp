#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80223660(CpuContext* ctx);
extern "C" uint64_t func_80223660_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802236BC(CpuContext* ctx);
extern "C" uint64_t func_802236BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E820(CpuContext* ctx);
extern "C" uint32_t func_8027E820_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027E8A4(CpuContext* ctx);
extern "C" uint32_t func_8027E8A4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802232BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802232BC;

loc_802232BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = (r4 * 12);
    r3 = (r3 + r0);
    r31 = (r3 + 320);
    r3 = r31;
    ctx->lr = 0x802232F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8027E854u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_802232F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80223324;
    }
}

loc_802232F8:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8027E8A4u>(&func_8027E8A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E8A4_782 = func_8027E8A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027E8A4_782;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8027E8A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = MemoryInline::FlatRead32((r29 + 316));
    r4 = (r1 + 12);
    r5 = r30;
    ctx->lr = 0x80223320u;
    if constexpr (KnownRegArgsCpuCall<0x802236BCu>(&func_802236BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802236BC_C81 = func_802236BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802236BC_C81);
        r4 = static_cast<uint32_t>(regargs_result_802236BC_C81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802236BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80223360;
}

loc_80223324:
{
    r4 = MemoryInline::FlatRead8((r29 + 610));
}

loc_8022332C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80223344;
    }
}

loc_80223330:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    r4 = (r4 & 65535);
    r5 = r30;
    ctx->lr = 0x80223340u;
    if constexpr (KnownRegArgsCpuCall<0x80223660u>(&func_80223660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223660_10EC = func_80223660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223660_10EC);
        r4 = static_cast<uint32_t>(regargs_result_80223660_10EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_80223360;
}

loc_80223344:
{
    r3 = r31;
    ctx->lr = 0x8022334Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027E820u>(&func_8027E820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027E820_1469 = func_8027E820_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027E820_1469;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E820u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 316));
    r4 = (r0 & 255);
    r5 = r30;
    ctx->lr = 0x80223360u;
    if constexpr (KnownRegArgsCpuCall<0x80223660u>(&func_80223660)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223660_17A7 = func_80223660_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223660_17A7);
        r4 = static_cast<uint32_t>(regargs_result_80223660_17A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223660u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80223360:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802232BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802232BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802232BC func_802232BC preserves=true fpr_mask=0x00000000

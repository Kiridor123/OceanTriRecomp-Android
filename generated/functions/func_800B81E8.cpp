#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800B5A48(CpuContext* ctx);
extern "C" uint32_t func_800B5A48_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_800B81E8_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    goto loc_800B81E8;

loc_800B81E8:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r28 = r3;
    r31 = r4;
    r30 = r5;
    r29 = r6;
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r30 + 174));
}

loc_800B8220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_800B832C;
    }
}

loc_800B8224:
{
    r3 = r31;
    r4 = r30;
    // inline leaf 0x800B8424 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 178));
    r3 = (r0 & 56);
    // end of inlined leaf 0x800B8424
}

loc_800B8234:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_800B824C;
    }
}

loc_800B8238:
{
}

loc_800B823C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_800B8294;
    }
}

loc_800B8240:
{
}

loc_800B8244:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(24))) {
        goto loc_800B82B8;
    }
}

loc_800B8248:
{
    goto loc_800B8270;
}

loc_800B824C:
{
    r3 = (r1 + 92);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 120));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 136));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800B83E8;
}

loc_800B8270:
{
    r3 = (r1 + 80);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 108));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 124));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 140));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800B83E8;
}

loc_800B8294:
{
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 112));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 128));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 144));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800B83E8;
}

loc_800B82B8:
{
    r3 = (r1 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 104), 0, 44u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 112));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r29 + 128));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r29 + 144));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r30 = r3;
    r3 = (r1 + 20);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 108));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r29 + 124));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r29 + 140));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r31 = r3;
    r3 = (r1 + 32);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r29 + 104));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r29 + 120));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r29 + 136));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 44);
    r5 = r31;
    ctx->lr = 0x800B830Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_1B7D = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_1B7D);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_1B7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = (r1 + 56);
    r4 = (r1 + 44);
    r5 = r30;
    ctx->lr = 0x800B831Cu;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_1F46 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_1F46);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_1F46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = r28;
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800B83E8;
}

loc_800B832C:
{
    r3 = r31;
    r4 = r30;
    // inline leaf 0x800B8424 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 178));
    r3 = (r0 & 56);
    // end of inlined leaf 0x800B8424
}

loc_800B833C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_800B8354;
    }
}

loc_800B8340:
{
}

loc_800B8344:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_800B838C;
    }
}

loc_800B8348:
{
}

loc_800B834C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(24))) {
        goto loc_800B83B4;
    }
}

loc_800B8350:
{
    goto loc_800B837C;
}

loc_800B8354:
{
    // inline leaf 0x800B619C (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28808);
    // end of inlined leaf 0x800B619C
    r5 = r3;
    r3 = r28;
    r4 = (r29 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = r28;
    r4 = (r29 + 104);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    goto loc_800B83E8;
}

loc_800B837C:
{
    r3 = r28;
    r4 = (r29 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_800B8404;
}

loc_800B838C:
{
    // inline leaf 0x800B6190 (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28832);
    // end of inlined leaf 0x800B6190
    r5 = r3;
    r3 = r28;
    r4 = (r29 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = r28;
    r4 = (r29 + 104);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    goto loc_800B83E8;
}

loc_800B83B4:
{
    r3 = (r1 + 104);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31100));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = r28;
    r4 = (r29 + 8);
    r5 = (r1 + 104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    r3 = r28;
    r4 = (r29 + 104);
    r5 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
}

loc_800B83E8:
{
    r3 = r28;
    ctx->lr = 0x800B83F0u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_800B5A48_2EA3 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_2EA3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800B83F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B8404;
    }
}

loc_800B83F8:
{
    r3 = r28;
    r4 = (r29 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800B8404:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B81E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B81E8_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x8000000E fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B81E8 func_800B81E8 preserves=true fpr_mask=0x00000000

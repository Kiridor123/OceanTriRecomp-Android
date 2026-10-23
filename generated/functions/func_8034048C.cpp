#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80340248(CpuContext* ctx);
extern "C" uint64_t func_80340248_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803402F0(CpuContext* ctx);
extern "C" uint64_t func_803402F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803425E0(CpuContext* ctx);
extern "C" uint64_t func_803425E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8034048C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8034048C;

loc_8034048C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = MemoryInline::FlatRead32((r3 + 56));
    r3 = 0x806A0000u;
    r31 = (r3 + 17776);
    r29 = MemoryInline::FlatRead32((r31 + 16));
    r30 = 0;
    goto loc_803405D0;
}

loc_803404C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_803404C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(34))) {
        goto loc_803405C8;
    }
}

loc_803404CC:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_803404D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_803405C8;
    }
}

loc_803404D8:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_803404E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803404F0;
    }
}

loc_803404E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803404EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_803404F8;
    }
}

loc_803404F0:
{
    r3 = 0;
    goto loc_803405E0;
}

loc_803404F8:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
    r4 = MemoryInline::FlatRead8((r28 + 88));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = r26;
    ctx->lr = 0x8034050Cu;
    if constexpr (KnownRegArgsCpuCall<0x803402F0u>(&func_803402F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803402F0_BE6 = func_803402F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803402F0_BE6);
        r4 = static_cast<uint32_t>(regargs_result_803402F0_BE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803402F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r26 + 8), static_cast<uint8_t>(r0));
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x80340520u;
    if constexpr (KnownRegArgsCpuCall<0x803425E0u>(&func_803425E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803425E0_F49 = func_803425E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803425E0_F49);
        r4 = static_cast<uint32_t>(regargs_result_803425E0_F49 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803425E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = MemoryInline::FlatRead32((r29 + 48));
}

loc_80340528:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_803405A4;
    }
}

loc_8034052C:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_80340534:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80340540;
    }
}

loc_80340538:
{
    r3 = 0;
    goto loc_803405E0;
}

loc_80340540:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
}

loc_80340548:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80340558;
    }
}

loc_8034054C:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_80340554:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803405C8;
    }
}

loc_80340558:
{
    r4 = MemoryInline::FlatRead8((r5 + 1431));
    r0 = (r3 & 255);
}

loc_80340564:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80340570;
    }
}

loc_80340568:
{
    r3 = 0;
    goto loc_803405E0;
}

loc_80340570:
{
    r3 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8034057C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803405C8;
    }
}

loc_80340580:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_80340588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803405C8;
    }
}

loc_8034058C:
{
    r3 = (r26 + 24);
    r4 = (r29 + 24);
    ctx->lr = 0x80340598u;
    if constexpr (KnownRegArgsCpuCall<0x80340248u>(&func_80340248)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80340248_1870 = func_80340248_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80340248_1870);
        r4 = static_cast<uint32_t>(regargs_result_80340248_1870 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80340248u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r28 + 64), r3);
    r3 = r29;
    goto loc_803405E0;
}

loc_803405A4:
{
    r3 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803405B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803405C8;
    }
}

loc_803405B4:
{
    r0 = MemoryInline::FlatRead8((r26 + 8));
}

loc_803405BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803405C8;
    }
}

loc_803405C0:
{
    r3 = r29;
    goto loc_803405E0;
}

loc_803405C8:
{
    r30 = (r30 + 1);
    r29 = (r29 + 72);
}

loc_803405D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_803405D8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_803404C0;
    }
}

loc_803405DC:
{
    r3 = 0;
}

loc_803405E0:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00003FE1 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034048C func_8034048C preserves=true fpr_mask=0x00000000

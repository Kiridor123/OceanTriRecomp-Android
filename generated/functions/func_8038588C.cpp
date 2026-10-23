#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80385F50(CpuContext* ctx);
extern "C" uint32_t func_80385F50_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_8038EF8C(CpuContext* ctx);
extern "C" uint64_t func_8038EF8C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A4278(CpuContext* ctx);
extern "C" uint64_t func_803A4278_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8038588C_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8038588C;

loc_8038588C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    MemoryInline::FlatWrite32((r3 + 364), r31);
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 404), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 404), static_cast<uint8_t>(r3));
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 405), static_cast<uint8_t>(r3));
    r3 = (r30 + 368);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 380);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6968));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r30 + 414), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r30 + 413), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 416), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r30 + 415), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 417), static_cast<uint8_t>(r31));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -6964));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r30 + 432), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r30 + 428), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_8038590C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80385924;
    }
}

loc_80385910:
{
}

loc_80385914:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80385930;
    }
}

loc_80385918:
{
}

loc_8038591C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8038593C;
    }
}

loc_80385920:
{
    goto loc_80385944;
}

loc_80385924:
{
    r3 = r30;
    ctx->lr = 0x8038592Cu;
    if constexpr (KnownRegArgsCpuCall<0x8038EF8Cu>(&func_8038EF8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8038EF8C_1070 = func_8038EF8C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8038EF8C_1070);
        r4 = static_cast<uint32_t>(regargs_result_8038EF8C_1070 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8038EF8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    goto loc_80385944;
}

loc_80385930:
{
    r3 = r30;
    ctx->lr = 0x80385938u;
    if constexpr (KnownRegArgsCpuCall<0x803A4278u>(&func_803A4278)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_803A4278_14E0 = func_803A4278_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_803A4278_14E0);
        r4 = static_cast<uint32_t>(regargs_result_803A4278_14E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803A4278u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80385944;
}

loc_8038593C:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80385F50u>(&func_80385F50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80385F50_19BB = func_80385F50_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80385F50_19BB;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80385F50u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_80385944:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_8038588C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8038588C_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000021CF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8038588C func_8038588C preserves=true fpr_mask=0x00000000

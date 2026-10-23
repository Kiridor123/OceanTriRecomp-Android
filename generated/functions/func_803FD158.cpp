#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803FAFDC(CpuContext* ctx);
extern "C" uint64_t func_803FAFDC_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803FD158_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_803FD158;

loc_803FD158:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    ctx->lr = 0x803FD174u;
    if constexpr (KnownRegArgsCpuCall<0x803FAFDCu>(&func_803FAFDC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FAFDC_48B = func_803FAFDC_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_803FAFDC_48B);
        r4 = static_cast<uint32_t>(regargs_result_803FAFDC_48B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803FAFDCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = (r30 + 24892);
    r4 = 0;
    r5 = 520;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 25412);
    r4 = 0;
    r5 = 520;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 25932);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 24856);
    r4 = -1;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 0;
    MemoryInline::FlatWrite8((r30 + 24859), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r30 + 26088), r31);
    MemoryInline::FlatWrite32((r30 + 26092), r31);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4816));
    MemoryInline::FlatWriteFloat32((r30 + 24860), f0.d);
    r3 = (r30 + 24864);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 24872), 0, 17u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 24872), r31);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 24876), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r30 + 24880), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r30 + 24881), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r30 + 24882), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r30 + 24883), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 24884), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 24885), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 24886), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r30 + 24887), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 24888), static_cast<uint8_t>(r31));
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -32172), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + -32076), r31);
    MemoryInline::FlatWrite32((r3 + -32072), r31);
    MemoryInline::FlatWrite8((r3 + -30379), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + -30378), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + -30377), static_cast<uint8_t>(r31));
    r3 = (r3 + -30376);
    r4 = 0;
    r5 = 513;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -29856);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -29764), r31);
    MemoryInline::FlatWrite32((r3 + -29760), r31);
    MemoryInline::FlatWrite32((r3 + -11260), r31);
    MemoryInline::FlatWrite8((r3 + -11256), static_cast<uint8_t>(r31));
    r3 = (r3 + -11255);
    r4 = 0;
    r5 = 512;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    r3 = (r3 + -10740);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite32((r3 + -29752), r31);
    MemoryInline::FlatWrite32((r30 + 27704), r31);
    MemoryInline::FlatWrite8((r30 + 27708), static_cast<uint8_t>(r31));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + -32704), r0);
    MemoryInline::FlatWrite32((r3 + -32700), r0);
    r3 = (r3 + -32696);
    r4 = 0;
    r5 = 262;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 65536);
    MemoryInline::FlatWrite8((r3 + -10708), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + -10704), r31);
    MemoryInline::FlatWrite32((r3 + -29732), r31);
    r0 = 18432;
    MemoryInline::FlatWrite32((r3 + -29728), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FD158(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FD158_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020CE gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803FD158 func_803FD158 preserves=true fpr_mask=0x00000000

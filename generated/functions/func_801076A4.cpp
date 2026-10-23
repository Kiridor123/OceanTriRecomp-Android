#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801076A4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_801076A4;

loc_801076A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r28 = r3;
    r29 = r4;
    f31.d = f1.d;
    r30 = r5;
    r3 = 72;
    ctx->lr = 0x801076DCu;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_4F0 = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_4F0);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_4F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_801076E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801076F0;
    }
}

loc_801076E8:
{
    r3 = 0;
    goto loc_801077C4;
}

loc_801076F0:
{
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r4 = (r29 & 255);
    r0 = (r4 + -26);
}

loc_80107700:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80107710;
    }
}

loc_80107704:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80107718;
}

loc_80107710:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
}

loc_80107718:
{
    MemoryInline::FlatWriteFloat32((r5 + 40), f31.d);
    MemoryInline::FlatWriteFloat32((r5 + 44), f31.d);
    MemoryInline::FlatWriteRam32((r3 + 48), r28);
    MemoryInline::FlatWriteRam8((r3 + 68), static_cast<uint8_t>(r30));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r29));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r3 + -6);
}

loc_8010774C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80107770;
    }
}

loc_80107750:
{
}

loc_80107754:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_80107784;
    }
}

loc_80107758:
{
    r0 = (r3 + -3);
}

loc_80107760:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80107784;
    }
}

loc_80107764:
{
}

loc_80107768:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(11))) {
        goto loc_80107784;
    }
}

loc_8010776C:
{
    goto loc_80107798;
}

loc_80107770:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    goto loc_801077A8;
}

loc_80107784:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    goto loc_801077A8;
}

loc_80107798:
{
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
}

loc_801077A8:
{
    r3 = 0x80100000u;
    r0 = (r3 + 32004);
    MemoryInline::FlatWriteRam32((r31 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 32320);
    MemoryInline::FlatWriteRam32((r31 + 52), r0);
    r3 = r31;
}

loc_801077C4:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801076A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801076A4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801076A4 func_801076A4 preserves=true fpr_mask=0x00000000

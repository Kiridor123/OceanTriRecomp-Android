#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80104ACC_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_80104ACC;

loc_80104ACC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 40u, (r1 + 40), f31.d);
    r11 = (r1 + 40);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    f31.d = f1.d;
    r29 = r5;
    r0 = (r4 & 255);
}

loc_80104AFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80104B08;
    }
}

loc_80104B00:
{
    r3 = 0;
    goto loc_80104B9C;
}

loc_80104B08:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = (r29 & 255);
}

loc_80104B18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80104B24;
    }
}

loc_80104B1C:
{
    r3 = 0;
    goto loc_80104B9C;
}

loc_80104B24:
{
    r3 = 24;
    ctx->lr = 0x80104B2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F87EC_907 = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_907);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_907 >> 32);
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
    r30 = r3;
}

loc_80104B34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80104B40;
    }
}

loc_80104B38:
{
    r3 = 0;
    goto loc_80104B9C;
}

loc_80104B40:
{
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 1;
    MemoryInline::FlatWrite32(r4, r31);
    MemoryInline::FlatWrite32((r4 + 4), r27);
    MemoryInline::FlatWriteFloat32((r4 + 20), f31.d);
    r0 = 9;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r3 + 68), static_cast<uint8_t>(r29));
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + 19384);
    MemoryInline::FlatWriteRam32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 19448);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
    ctx->lr = 0x80104B8Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80104B90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80104B98;
    }
}

loc_80104B94:
{
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r31));
}

loc_80104B98:
{
    r3 = r30;
}

loc_80104B9C:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 40));
    r11 = (r1 + 40);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80104ACC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80104ACC_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80104ACC func_80104ACC preserves=true fpr_mask=0x00000000

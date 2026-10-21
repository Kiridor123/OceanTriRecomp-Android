#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DE360(CpuContext* ctx);
extern "C" uint64_t func_800DE360_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_802B49A0_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x802B49A0u);
    goto loc_802B49A0;

loc_802B49A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r28 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r29 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 3013));
}

loc_802B49D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_802B49FC;
    }
}

loc_802B49D8:
{
}

loc_802B49DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802B4A40;
    }
}

loc_802B49E0:
{
}

loc_802B49E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_802B4A40;
    }
}

loc_802B49E8:
{
}

loc_802B49EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802B4A5C;
    }
}

loc_802B49F0:
{
}

loc_802B49F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_802B4A78;
    }
}

loc_802B49F8:
{
    goto loc_802B4A90;
}

loc_802B49FC:
{
    // inline leaf 0x8021F29C (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12536);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    // end of inlined leaf 0x8021F29C
}

loc_802B4A04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B4A90;
    }
}

loc_802B4A08:
{
    r0 = MemoryInline::FlatRead8((r28 + 3014));
}

loc_802B4A10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B4A20;
    }
}

loc_802B4A14:
{
}

loc_802B4A18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802B4A30;
    }
}

loc_802B4A1C:
{
    goto loc_802B4A90;
}

loc_802B4A20:
{
    r29 = (r13 + -27016);
    r31 = 1;
    r30 = 0;
    goto loc_802B4A90;
}

loc_802B4A30:
{
    r29 = (r13 + -27012);
    r31 = 0;
    r30 = 0;
    goto loc_802B4A90;
}

loc_802B4A40:
{
    r0 = MemoryInline::FlatRead8((r28 + 3014));
}

loc_802B4A48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B4A90;
    }
}

loc_802B4A4C:
{
    r29 = (r13 + -27008);
    r31 = 0;
    r30 = 0;
    goto loc_802B4A90;
}

loc_802B4A5C:
{
    r0 = MemoryInline::FlatRead8((r28 + 3014));
}

loc_802B4A64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B4A90;
    }
}

loc_802B4A68:
{
    r29 = (r13 + -27004);
    r31 = 0;
    r30 = 0;
    goto loc_802B4A90;
}

loc_802B4A78:
{
    r0 = MemoryInline::FlatRead8((r28 + 3014));
}

loc_802B4A80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B4A90;
    }
}

loc_802B4A84:
{
    r31 = 0;
    r29 = (r13 + -27000);
    r30 = 1;
}

loc_802B4A90:
{
}

loc_802B4A94:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802B4B00;
    }
}

loc_802B4A98:
{
    goto loc_802B4AF0;
}

loc_802B4A9C:
{
    r3 = MemoryInline::FlatRead32((r28 + 4));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
}

loc_802B4AB0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802B4AC0;
    }
}

loc_802B4AB4:
{
}

loc_802B4AB8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(1))) {
        goto loc_802B4AD8;
    }
}

loc_802B4ABC:
{
    goto loc_802B4AEC;
}

loc_802B4AC0:
{
    r3 = 0;
    r4 = (r1 + 8);
    r5 = 16;
    r6 = r31;
    ctx->lr = 0x802B4AD4u;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DE360_11EE = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_11EE);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_11EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    goto loc_802B4AEC;
}

loc_802B4AD8:
{
    r3 = 0;
    r4 = (r1 + 8);
    r5 = 17;
    r6 = r31;
    ctx->lr = 0x802B4AECu;
    if constexpr (KnownRegArgsCpuCall<0x800DE360u>(&func_800DE360)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800DE360_161B = func_800DE360_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DE360_161B);
        r4 = static_cast<uint32_t>(regargs_result_800DE360_161B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DE360u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_802B4AEC:
{
    r29 = (r29 + 1);
}

loc_802B4AF0:
{
    r4 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_802B4AFC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802B4A9C;
    }
}

loc_802B4B00:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B49A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B49A0_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B49A0 func_802B49A0 preserves=true fpr_mask=0x00000000

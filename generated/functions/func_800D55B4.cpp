#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80041468(CpuContext* ctx);
extern "C" uint64_t func_80041468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D530C(CpuContext* ctx);
extern "C" uint64_t func_800D530C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800D55B4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_800D55B4;

loc_800D55B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = MemoryInline::FlatRead32((r13 + -17584));
}

loc_800D55E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D55EC;
    }
}

loc_800D55E4:
{
    r3 = -1;
    goto loc_800D5738;
}

loc_800D55EC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D55F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D5604;
    }
}

loc_800D55FC:
{
    r3 = -1;
    goto loc_800D5738;
}

loc_800D5604:
{
    r4 = 47;
    if constexpr (KnownRegArgsCpuCall<0x80041468u>(&func_80041468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80041468_7B7 = func_80041468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80041468_7B7);
        r4 = static_cast<uint32_t>(regargs_result_80041468_7B7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80041468u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800D5610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D5618;
    }
}

loc_800D5614:
{
    goto loc_800D561C;
}

loc_800D5618:
{
    r28 = (r3 + 1);
}

loc_800D561C:
{
    r3 = r28;
    ctx->lr = 0x800D5624u;
    if constexpr (KnownRegArgsCpuCall<0x800D530Cu>(&func_800D530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800D530C_BB8 = func_800D530C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D530C_BB8);
        r4 = static_cast<uint32_t>(regargs_result_800D530C_BB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_800D5628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D5640;
    }
}

loc_800D562C:
{
    r4 = MemoryInline::FlatRead32((r3 + 72));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 72), r0);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    goto loc_800D5738;
}

loc_800D5640:
{
}

loc_800D5644:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_800D5650;
    }
}

loc_800D5648:
{
    r3 = -1;
    goto loc_800D5738;
}

loc_800D5650:
{
    r31 = (r31 + 65536);
    r31 = (r31 + 24688);
    r30 = 0;
    r0 = 128;
    ctr = r0;
}

loc_800D5664:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D566C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D5670:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D5680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D5684:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D5694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D5698:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D56A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D56AC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D56BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D56C0:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D56D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D56D4:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D56E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D56E8:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    r0 = MemoryInline::FlatRead32((r31 + 64));
}

loc_800D56F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D5708;
    }
}

loc_800D56FC:
{
    r30 = (r30 + 1);
    r31 = (r31 + 76);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D5664;
    }
}

loc_800D5708:
{
}

loc_800D570C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(1024))) {
        goto loc_800D5718;
    }
}

loc_800D5710:
{
    r3 = -1;
    goto loc_800D5738;
}

loc_800D5718:
{
    r3 = r31;
    r4 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1AAD = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1AAD;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r31 + 68), r29);
    MemoryInline::FlatWrite32((r31 + 64), r30);
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 72), r0);
    r3 = r30;
}

loc_800D5738:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D55B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D55B4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D55B4 func_800D55B4 preserves=true fpr_mask=0x00000000

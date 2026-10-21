#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005C868(CpuContext* ctx);
extern "C" uint64_t func_8005C868_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809D68A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x809D68A8u);
    goto loc_809D68A8;

loc_809D68A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80A80000u;
    r30 = (r31 + -31488);
    r3 = 22;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x8005C868u>(&func_8005C868)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8005C868_451 = func_8005C868_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005C868_451);
        r4 = static_cast<uint32_t>(regargs_result_8005C868_451 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8005C868u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + -31488));
}

loc_809D68D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809D6908;
    }
}

loc_809D68DC:
{
}

loc_809D68E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809D6914;
    }
}

loc_809D68E4:
{
}

loc_809D68E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809D6924;
    }
}

loc_809D68EC:
{
}

loc_809D68F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_809D6930;
    }
}

loc_809D68F4:
{
}

loc_809D68F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_809D6948;
    }
}

loc_809D68FC:
{
}

loc_809D6900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(99))) {
        goto loc_809D6954;
    }
}

loc_809D6904:
{
    goto loc_809D695C;
}

loc_809D6908:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
}

loc_809D6914:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
    goto loc_809D695C;
}

loc_809D6924:
{
    r3 = r30;
    ctx->lr = 0x809D692Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x809D698Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    goto loc_809D695C;
}

loc_809D6930:
{
    r0 = MemoryInline::FlatRead32((r30 + 48));
}

loc_809D6938:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_809D695C;
    }
}

loc_809D693C:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
    goto loc_809D695C;
}

loc_809D6948:
{
    ctx->lr = 0x809D694Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = 1;
    goto loc_809D6974;
}

loc_809D6954:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8(r30, static_cast<uint8_t>(r0));
}

loc_809D695C:
{
    r3 = 0x809D0000u;
    r3 = (r3 + 30224);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80049240_FF3 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_FF3);
        r4 = static_cast<uint32_t>(regargs_result_80049240_FF3 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
}

loc_809D6974:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D68A8 func_809D68A8 preserves=true fpr_mask=0x00000000

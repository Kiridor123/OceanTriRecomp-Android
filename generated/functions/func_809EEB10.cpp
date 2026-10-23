#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D76A4(CpuContext* ctx);
extern "C" uint64_t func_802D76A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809EEB10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809EEB10;

loc_809EEB10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = (r4 & 255);
    r31 = (r3 + -12);
}

loc_809EEB3C:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(3))) {
        goto loc_809EEBA4;
    }
}

loc_809EEB40:
{
    r4 = MemoryInline::FlatRead8((r29 + 420));
    r5 = r29;
    r6 = 2;
    ctx->lr = 0x809EEB50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x809EE890u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_809EEB54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809EEBA4;
    }
}

loc_809EEB58:
{
    r4 = (r30 & 255);
    r0 = (r4 + -14);
}

loc_809EEB64:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809EEB7C;
    }
}

loc_809EEB68:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 7), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r29 + 1093));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r29 + 1093), static_cast<uint8_t>(r0));
}

loc_809EEB7C:
{
    r30 = MemoryInline::FlatRead32((r3 + 256));
}

loc_809EEB84:
{
    if ((static_cast<uint32_t>(r31) > static_cast<uint32_t>(1))) {
        goto loc_809EEBA4;
    }
}

loc_809EEB88:
{
    r3 = r29;
    r4 = 27;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_96A = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_96A);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_96A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_809EEB98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809EEBA4;
    }
}

loc_809EEB9C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 10), static_cast<uint8_t>(r0));
}

loc_809EEBA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EEB10 func_809EEB10 preserves=true fpr_mask=0x00000000

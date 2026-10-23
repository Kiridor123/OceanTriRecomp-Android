#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004DE38(CpuContext* ctx);
extern "C" uint64_t func_8004DE38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8004DF74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004DF74;

loc_8004DF74:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r6 + 15844));
}

loc_8004DFA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004DFCC;
    }
}

loc_8004DFAC:
{
    r0 = 1;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r3 + 15840));
    MemoryInline::FlatWrite32(r4, r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_8004E040;
}

loc_8004DFCC:
{
    r0 = MemoryInline::FlatRead32((r6 + 15840));
    MemoryInline::FlatWrite32(r4, r0);
    r3 = 999;
    if constexpr (KnownRegArgsCpuCall<0x8004DE38u>(&func_8004DE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004DE38_6F2 = func_8004DE38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DE38_6F2);
        r4 = static_cast<uint32_t>(regargs_result_8004DE38_6F2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004DE38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r4 + 15840));
}

loc_8004DFE8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8004E000;
    }
}

loc_8004DFEC:
{
    r0 = 999;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8004E040;
}

loc_8004E000:
{
    r31 = 0;
}

loc_8004E004:
{
    r3 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004DE38u>(&func_8004DE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004DE38_BFF = func_8004DE38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DE38_BFF);
        r4 = static_cast<uint32_t>(regargs_result_8004DE38_BFF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004DE38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8004E014:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8004E034;
    }
}

loc_8004E018:
{
    r0 = (r31 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r3 = (r31 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004DE38u>(&func_8004DE38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004DE38_1065 = func_8004DE38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004DE38_1065);
        r4 = static_cast<uint32_t>(regargs_result_8004DE38_1065 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004DE38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32(r30, r3);
    goto loc_8004E040;
}

loc_8004E034:
{
    r31 = (r31 + 1);
}

loc_8004E03C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(1000))) {
        goto loc_8004E004;
    }
}

loc_8004E040:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DF74 func_8004DF74 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E860(CpuContext* ctx);
extern "C" uint64_t func_8046E860_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8046E890(CpuContext* ctx);
extern "C" uint32_t func_8046E890_ra0_0_8_0(CpuContext*);

extern "C" MkwStateFreeResult2 func_8046E860_statefree(uint32_t);
extern "C" uint64_t func_8046E890_statefree();

extern "C" void func_8081D2C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081D2C0u);
    goto loc_8081D2C0;

loc_8081D2C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = (r3 + 464);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r6;
    r30 = r5;
    r5 = (r1 + 8);
    // inline leaf 0x8046E3C0 (20 guest instruction(s))
}

loc_inl0_0x8046E3C0:
{
}

loc_inl0_0x8046E3C4:
{
    r6 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl0_0x8046E3E8;
    }
}

loc_inl0_0x8046E3CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_inl0_0x8046E3D4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x8046E3E8;
    }
}

loc_inl0_0x8046E3D8:
{
    r4 = (r4 * 12);
    r6_addr_1 = (r6 + r4);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0 = (r0 & -16777216);
}

loc_inl0_0x8046E3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8046E3F0;
    }
}

loc_inl0_0x8046E3E8:
{
    r3 = 0;
    goto loc_inl0_cont_8046E3C0;
}

loc_inl0_0x8046E3F0:
{
    MemoryInline::FlatWriteRam32(r5, r3);
    r4 = (r6 + r4);
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r5 + 8), r0);
}

loc_inl0_cont_8046E3C0:
{
    // end of inlined leaf 0x8046E3C0
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8046E860u) && KnownTranslatedCpuCall<0x8046E860u>::kAvailable && !KnownTranslatedCpuCall<0x8046E860u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8046E860u>()) {
        const auto state_free_result_8046E860_A3B = func_8046E860_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8046E860_A3B[0]);
        r4 = static_cast<uint32_t>(state_free_result_8046E860_A3B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8046E860u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32(r30, r3);
    r3 = (r1 + 8);
    // inline leaf 0x8046E880 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // end of inlined leaf 0x8046E880
    MemoryInline::FlatWrite32(r31, r3);
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8046E890u) && KnownTranslatedCpuCall<0x8046E890u>::kAvailable && !KnownTranslatedCpuCall<0x8046E890u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8046E890u>()) {
        const auto state_free_result_8046E890_E86 = func_8046E890_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8046E890_E86);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8046E890u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
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

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D2C0 func_8081D2C0 preserves=true fpr_mask=0x00000000

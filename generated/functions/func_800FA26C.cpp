#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA3DC(CpuContext* ctx);
extern "C" uint32_t func_800FA3DC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA41C(CpuContext* ctx);
extern "C" uint32_t func_800FA41C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA484(CpuContext* ctx);
extern "C" uint32_t func_800FA484_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_800FA41C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800FA41C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_800FA26C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800FA26C;

loc_800FA26C:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 8);
    ctx->lr = 0x800FA290u;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_5F5 = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_5F5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 24);
    ctx->lr = 0x800FA298u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA41Cu) && KnownTranslatedCpuCall<0x800FA41Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA41Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA41Cu>() && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA41C_967 = func_800FA41C_statefree_v0(r1, r3, r31, 0x800FA298u);
        r1 = static_cast<uint32_t>(state_free_result_800FA41C_967);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FA41Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r1 + 56);
    ctx->lr = 0x800FA2A0u;
    if constexpr (KnownRegArgsCpuCall<0x800FA3DCu>(&func_800FA3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA3DC_CE2 = func_800FA3DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA3DC_CE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA3DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_800FA2AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA30C;
    }
}

loc_800FA2B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FA2C4;
    }
}

loc_800FA2B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800FA2B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800FA2D0;
    }
}

loc_800FA2BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FA2D8;
    }
}

loc_800FA2C0:
{
    goto loc_800FA360;
}

loc_800FA2C4:
{
}

loc_800FA2C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_800FA360;
    }
}

loc_800FA2CC:
{
    goto loc_800FA348;
}

loc_800FA2D0:
{
    r3 = 0;
    goto loc_800FA364;
}

loc_800FA2D8:
{
    r3 = (r1 + 8);
    r4 = (r31 + 4);
    // inline leaf 0x800FA3B8 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    // end of inlined leaf 0x800FA3B8
    r3 = r30;
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8028F680u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800FA2F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FA304;
    }
}

loc_800FA2FC:
{
    r3 = 1;
    goto loc_800FA364;
}

loc_800FA304:
{
    r3 = 0;
    goto loc_800FA364;
}

loc_800FA30C:
{
    r3 = (r1 + 24);
    r4 = (r31 + 20);
    // inline leaf 0x800FA37C (15 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 16), r5);
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteRamFloat32((r3 + 24), f0.d);
    // end of inlined leaf 0x800FA37C
    r3 = (r1 + 24);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8028F5BCu>(ctx);
    r3 = r30;
    r4 = (r1 + 56);
    ctx->lr = 0x800FA330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80290820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800FA334:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FA340;
    }
}

loc_800FA338:
{
    r3 = 1;
    goto loc_800FA364;
}

loc_800FA340:
{
    r3 = 0;
    goto loc_800FA364;
}

loc_800FA348:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29868));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800FA354:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800FA360;
    }
}

loc_800FA358:
{
    r3 = 1;
    goto loc_800FA364;
}

loc_800FA360:
{
    r3 = 0;
}

loc_800FA364:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FA26C func_800FA26C preserves=true fpr_mask=0x00000000

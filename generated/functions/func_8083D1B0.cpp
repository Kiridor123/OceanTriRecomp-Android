#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083D1B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8083D1B0u);
    goto loc_8083D1B0;

loc_8083D1B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 48);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80840000u;
    r27 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 18816));
    r28 = r4;
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    r29 = r5;
    f2.d = f1.d;
    r30 = r6;
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 12), f1.d);
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    f31.d = MemoryInline::FlatReadFloat32((r31 + 18816));
}

loc_8083D200:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f31.d);
    r3 = r27;
    r5 = r29;
    r6 = r30;
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f31.d);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    ctx->lr = 0x8083D224u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8083CDD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r29 = (r29 + r3);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    r30 = (r30 - r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083D238:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083D240;
    }
}

loc_8083D23C:
{
    goto loc_8083D244;
}

loc_8083D240:
{
    f1.d = f0.d;
}

loc_8083D244:
{
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083D254:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083D25C;
    }
}

loc_8083D258:
{
    goto loc_8083D260;
}

loc_8083D25C:
{
    f1.d = f0.d;
}

loc_8083D260:
{
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083D270:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083D278;
    }
}

loc_8083D274:
{
    goto loc_8083D27C;
}

loc_8083D278:
{
    f1.d = f0.d;
}

loc_8083D27C:
{
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083D28C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8083D294;
    }
}

loc_8083D290:
{
    goto loc_8083D298;
}

loc_8083D294:
{
    f1.d = f0.d;
}

loc_8083D298:
{
}

loc_8083D29C:
{
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(0))) {
        goto loc_8083D200;
    }
}

loc_8083D2A4:
{
    r11 = (r1 + 48);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083D1B0 func_8083D1B0 preserves=true fpr_mask=0x00000000

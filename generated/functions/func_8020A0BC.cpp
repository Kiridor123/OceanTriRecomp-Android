#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_8020A0BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8020A0BCu);
    goto loc_8020A0BC;

loc_8020A0BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r3 + 60);
    r4 = (r30 + 144);
    ctx->lr = 0x8020A0E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16100));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8020A0EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020A100;
    }
}

loc_8020A0F4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8020A0FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020A128;
    }
}

loc_8020A100:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 180), static_cast<uint16_t>(r0));
    r3 = (r30 + 60);
    r4 = (r30 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16208));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 160), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
    goto loc_8020A1A4;
}

loc_8020A128:
{
    MemoryInline::FlatWrite16((r30 + 180), static_cast<uint16_t>(r31));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 144));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -16096));
    r3 = (r0 ^ -2147483648);
    stackword4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 156), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 148));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    stackword6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 160), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 152));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 164), f0.d);
}

loc_8020A1A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020A0BC func_8020A0BC preserves=true fpr_mask=0x00000000

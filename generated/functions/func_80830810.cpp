#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80830810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80830810;

loc_80830810:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18632));
    r30 = r5;
    r29 = r4;
    r28 = r3;
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x808314C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32(r28, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r28 + 4), f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 18632));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 76));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80830890:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteFloat32((r28 + 8), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_808308AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808308C0;
    }
}

loc_808308B0:
{
    f1.d = (-(f3.d));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
}

loc_808308C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80830810 func_80830810 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082BE30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];

    goto loc_8082BE30;

loc_8082BE30:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_8082BE38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8082BE78;
    }
}

loc_8082BE3C:
{
    f4.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r5 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f3.d = (-(f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 18580));
    f0.d = (-(f1.d));
    f5.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f5.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f3.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

loc_8082BE78:
{
    r5 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18576));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082BE30 func_8082BE30 preserves=true fpr_mask=0x00000000

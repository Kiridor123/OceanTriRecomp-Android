#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097D954(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8097D954;

loc_8097D954:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = 0x809D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 13672));
}

loc_8097D96C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8097D9FC;
    }
}

loc_8097D970:
{
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14636));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14640));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    ctx->lr = 0x8097D98Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8005AF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80040424
}

loc_8097D994:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8097D9B0;
    }
}

loc_8097D998:
{
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14644));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    goto loc_8097D9CC;
}

loc_8097D9B0:
{
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14648));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r3 = 0x80990000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 14644));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_8097D9CC:
{
    r3 = 0x809D0000u;
    r6 = MemoryInline::FlatRead32((r3 + 13672));
    r0 = MemoryInline::FlatRead32((r6 + 4133));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r6 + 4132));
    r0 = (r0 * 56);
    r6 = (r6 + r0);
    r6 = (r6 + 24);
    ctx->lr = 0x8097D9FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8005AC3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
}

loc_8097D9FC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8097D954 func_8097D954 preserves=true fpr_mask=0x00000000

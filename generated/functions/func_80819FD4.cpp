#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80819FD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80819FD4u);
    goto loc_80819FD4;

loc_80819FD4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = 0x80790000u;
    r0 = MemoryInline::FlatRead8((r3 + 27728));
}

loc_80819FF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081A014;
    }
}

loc_80819FF8:
{
    r3 = 0x80790000u;
    r0 = MemoryInline::FlatRead8((r3 + 13025));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_8081A018;
}

loc_8081A014:
{
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

loc_8081A018:
{
}

loc_8081A01C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081A034;
    }
}

loc_8081A020:
{
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17440));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    goto loc_8081A04C;
}

loc_8081A034:
{
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17460));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17440));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_8081A04C:
{
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17464));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    // inline leaf 0x8003FCC0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r13 + -18076));
    // end of inlined leaf 0x8003FCC0
    r0 = (r3 & 255);
}

loc_8081A064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8081A07C;
    }
}

loc_8081A068:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17468));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
}

loc_8081A07C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80819FD4 func_80819FD4 preserves=true fpr_mask=0x00000000

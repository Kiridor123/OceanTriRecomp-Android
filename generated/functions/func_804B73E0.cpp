#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B73E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x804B73E0u);
    goto loc_804B73E0;

loc_804B73E0:
{
    r8 = MemoryInline::FlatRead32((r2 + -2480));
    r7 = 0;
    r7_mrot_0 = (r3 & 1023);
    r7_mdest_0 = (r7 & -1024);
    r7 = (r7_mdest_0 | r7_mrot_0);
    r0 = (r5 + -1);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(10));
    r7_mrot_1 = (r7_rot_0 & 1047552);
    r7_mdest_1 = (r7 & -1047553);
    r7 = (r7_mdest_1 | r7_mrot_1);
    r4 = 73;
    r3 = 0;
    r3_mrot_0 = (r0 & 1023);
    r3_mdest_0 = (r3 & -1024);
    r3 = (r3_mdest_0 | r3_mrot_0);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r7_mrot_2 = (r7_rot_1 & -16777216);
    r7_mdest_2 = (r7 & 16777215);
    r7 = (r7_mdest_2 | r7_mrot_2);
    r0 = (r6 + -1);
    MemoryInline::FlatWrite32((r8 + 560), r7);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r3_mrot_1 = (r3_rot_0 & 1047552);
    r3_mdest_1 = (r3 & -1047553);
    r3 = (r3_mdest_1 | r3_mrot_1);
    r0 = 74;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3_mrot_2 = (r3_rot_1 & -16777216);
    r3_mdest_2 = (r3 & 16777215);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::FlatWrite32((r8 + 564), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007C gpr_write=0x00000199 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B73E0 func_804B73E0 preserves=true fpr_mask=0x00000000

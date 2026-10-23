#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E4C30(CpuContext* ctx);
extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80533EAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80533EAC;

loc_80533EAC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0x80000000u;
    r31 = r5;
    r30 = r4;
    r29 = r3;
    r6 = MemoryInline::FlatRead32((r4 + 8));
}

loc_80533EDC:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_80533EE8;
    }
}

loc_80533EE0:
{
    r3 = r30;
    ctx->lr = 0x80533EE8u;
    if constexpr (KnownRegArgsCpuCall<0x804E4C30u>(&func_804E4C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804E4C30_635 = func_804E4C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E4C30_635);
        r4 = static_cast<uint32_t>(regargs_result_804E4C30_635 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x804E4C30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80533EE8:
{
    r3 = r30;
    r4 = r31;
    // inline leaf 0x804E4D50 (8 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r3 = (r3 + r0);
    // end of inlined leaf 0x804E4D50
    r6 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r29 + 24));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite32(r29, r0);
    r5 = MemoryInline::FlatRead16(r6);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r4_mrot_0 = (r4_rot_0 & -268435456);
    r4_mdest_0 = (r4 & 268435455);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite32((r29 + 24), r4);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80533F28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80533F4C;
    }
}

loc_80533F2C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r4_mrot_1 = (r4_rot_1 & 24576);
    r4_mdest_1 = (r4 & -24577);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32((r29 + 24), r4);
    r0 = MemoryInline::FlatRead16(r3);
    MemoryInline::FlatWrite16((r29 + 22), static_cast<uint16_t>(r0));
    goto loc_80533F60;
}

loc_80533F4C:
{
    r3 = 0;
    r0 = (r4 & -24577);
    MemoryInline::FlatWrite32((r29 + 4), r3);
    MemoryInline::FlatWrite32((r29 + 24), r0);
    MemoryInline::FlatWrite16((r29 + 22), static_cast<uint16_t>(r3));
}

loc_80533F60:
{
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

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80533EAC func_80533EAC preserves=true fpr_mask=0x00000000

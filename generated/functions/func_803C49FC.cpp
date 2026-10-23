#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80119AA4(CpuContext* ctx);
extern "C" uint64_t func_80119AA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_803C49FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_803C49FC;

loc_803C49FC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x803C48A4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x803C48A4
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r29 & 255);
}

loc_803C4A34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_803C4A44;
    }
}

loc_803C4A38:
{
}

loc_803C4A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_803C4AC8;
    }
}

loc_803C4A40:
{
    goto loc_803C4AE8;
}

loc_803C4A44:
{
    r3 = 0x80600000u;
    r30 = (r3 + -28428);
    r3 = 0x80600000u;
    r29 = (r3 + -28408);
    goto loc_803C4AB8;
}

loc_803C4A58:
{
}

loc_803C4A5C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r3))) {
        goto loc_803C4AB0;
    }
}

loc_803C4A60:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C4A68:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_803C4AB0;
    }
}

loc_803C4A6C:
{
    r4 = (r31 - r3);
    r3 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
}

loc_803C4A84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C4AB0;
    }
}

loc_803C4A88:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r29);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 8));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = 1;
    r4 = (r1 + 8);
    r5 = 12;
    r6 = 0;
    ctx->lr = 0x803C4AB0u;
    if constexpr (KnownRegArgsCpuCall<0x80119AA4u>(&func_80119AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80119AA4_D96 = func_80119AA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80119AA4_D96);
        r4 = static_cast<uint32_t>(regargs_result_80119AA4_D96 >> 32);
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
        InvokeDirectCpu<0x80119AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C4AB0:
{
    r30 = (r30 + 6);
    r29 = (r29 + 12);
}

loc_803C4AB8:
{
    r3 = MemoryInline::FlatRead16(r30);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_803C4AC0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_803C4A58;
    }
}

loc_803C4AC4:
{
    goto loc_803C4AE8;
}

loc_803C4AC8:
{
    r3 = (r13 + -21872);
    r0 = MemoryInline::FlatRead16((r13 + -21872));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C4AD4:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r0))) {
        goto loc_803C4AE8;
    }
}

loc_803C4AD8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803C4AE0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_803C4AE8;
    }
}

loc_803C4AE4:
{
    // inline leaf 0x802B4620 (6 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r0 = MemoryInline::FlatRead8((r3 + 12177));
    r0 = (r0 | 129);
    MemoryInline::FlatWriteRam8((r3 + 12177), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B4620
}

loc_803C4AE8:
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C49FC func_803C49FC preserves=true fpr_mask=0x00000000

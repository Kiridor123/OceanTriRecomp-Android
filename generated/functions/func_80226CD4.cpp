#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274150(CpuContext* ctx);
extern "C" uint64_t func_80274150_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80226CD4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80226CD4;

loc_80226CD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = r28;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_80226D0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80226D7C;
    }
}

loc_80226D10:
{
    r0 = (r30 & 255);
}

loc_80226D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80226D40;
    }
}

loc_80226D1C:
{
}

loc_80226D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80226D54;
    }
}

loc_80226D24:
{
}

loc_80226D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80226D68;
    }
}

loc_80226D2C:
{
    r4 = (r29 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19632);
    r30 = (r0 + r4);
    goto loc_80226DBC;
}

loc_80226D40:
{
    r4 = (r29 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19368);
    r30 = (r0 + r4);
    goto loc_80226DBC;
}

loc_80226D54:
{
    r4 = (r29 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19056);
    r30 = (r0 + r4);
    goto loc_80226DBC;
}

loc_80226D68:
{
    r4 = (r29 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18744);
    r30 = (r0 + r4);
    goto loc_80226DBC;
}

loc_80226D7C:
{
    r3 = r28;
    ctx->lr = 0x80226D84u;
    if constexpr (KnownRegArgsCpuCall<0x80274150u>(&func_80274150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274150_B45 = func_80274150_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274150_B45);
        r4 = static_cast<uint32_t>(regargs_result_80274150_B45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r30 & 255);
}

loc_80226D8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80226DA8;
    }
}

loc_80226D90:
{
    r0 = (r3 & 255);
    r4 = (r0 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -19104);
    r30 = (r0 + r4);
    goto loc_80226DBC;
}

loc_80226DA8:
{
    r0 = (r3 & 255);
    r4 = (r0 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18792);
    r30 = (r0 + r4);
}

loc_80226DBC:
{
    r3 = (r31 + 12);
    r4 = r30;
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    r3 = (r31 + 24);
    r4 = (r30 + 12);
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80226CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80226CD4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80226CD4 func_80226CD4 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800595B4_ra190_60_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r7, uint32_t arg_r8, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[7] = arg_r7;
    ctx->gpr[8] = arg_r8;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;

    goto loc_800595B4;

loc_800595B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = MemoryInline::FlatRead32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32256));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32252));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80040424
}

loc_800595E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800595F8;
    }
}

loc_800595E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32248));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    goto loc_8005960C;
}

loc_800595F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32244));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32248));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_8005960C:
{
    r0 = MemoryInline::FlatRead32((r13 + -32016));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead16((r31 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 5);
    // inline leaf 0x800D05CC (15 guest instruction(s))
}

loc_inl1_0x800D05CC:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
}

loc_inl1_0x800D05D8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(32))) {
        goto loc_inl1_0x800D05E4;
    }
}

loc_inl1_0x800D05DC:
{
    r3 = 0;
    goto loc_inl1_cont_800D05CC;
}

loc_inl1_0x800D05E4:
{
    r0 = (r3 * 56);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 188));
}

loc_inl1_0x800D05F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D0600;
    }
}

loc_inl1_0x800D05F8:
{
    r3 = 0;
    goto loc_inl1_cont_800D05CC;
}

loc_inl1_0x800D0600:
{
    r3 = (r3 + 192);
}

loc_inl1_cont_800D05CC:
{
    // end of inlined leaf 0x800D05CC
    r6 = r3;
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    ctx->lr = 0x80059634u;
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
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return r4;
}

}

extern "C" void func_800595B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800595B4_ra190_60_10_0(ctx, ctx->gpr[4], ctx->gpr[7], ctx->gpr[8], ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00003F96 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800595B4 func_800595B4 preserves=true fpr_mask=0x00000000

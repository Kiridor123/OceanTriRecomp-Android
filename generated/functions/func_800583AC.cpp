#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800583AC_ra38_62_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;

    goto loc_800583AC;

loc_800583AC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = 1;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_800583C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80058450;
    }
}

loc_800583C8:
{
    r3 = (r1 + 16);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    ctx->lr = 0x800583D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8005AF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32312));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32308));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = 1;
    // inline leaf 0x800582C0 (5 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80670000u;
    r3 = (r3 + -12024);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x800582C0
    r0 = (r3 & -16777216);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 32);
    r4 = (r1 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80058450u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80041470u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_80058450:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800583AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800583AC_ra38_62_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800583AC func_800583AC preserves=true fpr_mask=0x00000000

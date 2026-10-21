#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D6E58_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x802D6E58u);
    goto loc_802D6E58;

loc_802D6E58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = MemoryInline::FlatRead16((r3 + 512));
    r0 = MemoryInline::FlatRead8((r3 + 568));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 569));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1080));
    r0 = (r4 * r0);
    r4 = 1374420992;
    r4 = (r4 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
}

loc_802D6E9C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802D6EA4;
    }
}

loc_802D6EA0:
{
    r0 = 1;
}

loc_802D6EA4:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 508), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13080));
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13176));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 520), f0.d);
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

extern "C" void func_802D6E58(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_802D6E58_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D6E58 func_802D6E58 preserves=true fpr_mask=0x00000000

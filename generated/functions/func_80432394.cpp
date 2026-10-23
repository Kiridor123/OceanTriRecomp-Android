#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80432394_ra88_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = arg_r7;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80432394;

loc_80432394:
{
    r7 = 0;
    r5 = 1;
    r4 = 715849728;
    r0 = (r4 + -21845);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0 = (static_cast<int32_t>(r6) >> 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 + r4);
    r0 = (r0 * 12);
    r0 = (r3 - r0);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(r6) >> 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 16632));
    r0 = (r5 & r0);
}

loc_804323E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804323EC;
    }
}

loc_804323E8:
{
    r7 = 1;
}

loc_804323EC:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_80432394(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80432394_ra88_0_8_0(ctx, ctx->gpr[3], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002088 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80432394 func_80432394 preserves=true fpr_mask=0x00000000

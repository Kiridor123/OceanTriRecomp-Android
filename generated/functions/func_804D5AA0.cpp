#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804D5AA0_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_804D5AA0;

loc_804D5AA0:
{
    r6 = MemoryInline::FlatRead8(r3);
}

loc_804D5AA8:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D5AB0;
    }
}

loc_804D5AAC:
{
    r3 = (r3 + 1);
}

loc_804D5AB0:
{
    r0 = (r6 & 128);
}

loc_804D5AB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D5AC0;
    }
}

loc_804D5AB8:
{
    r7 = 0;
    goto loc_804D5B10;
}

loc_804D5AC0:
{
    r0 = (r6 & 224);
}

loc_804D5AC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(192))) {
        goto loc_804D5AD8;
    }
}

loc_804D5ACC:
{
    r6 = (r6 & 31);
    r7 = 1;
    goto loc_804D5B10;
}

loc_804D5AD8:
{
    r0 = (r6 & 240);
}

loc_804D5AE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(224))) {
        goto loc_804D5AF0;
    }
}

loc_804D5AE4:
{
    r6 = (r6 & 15);
    r7 = 2;
    goto loc_804D5B10;
}

loc_804D5AF0:
{
    r0 = (r6 & 248);
}

loc_804D5AF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(240))) {
        goto loc_804D5B08;
    }
}

loc_804D5AFC:
{
    r6 = (r6 & 7);
    r7 = 3;
    goto loc_804D5B10;
}

loc_804D5B08:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5B10:
{
    ctr = r7;
}

loc_804D5B18:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(0))) {
        goto loc_804D5B4C;
    }
}

loc_804D5B1C:
{
    // nop
}

loc_804D5B20:
{
    r5 = MemoryInline::FlatRead8(r3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(6));
    r6 = (r6_rot_2 & -64);
    r3 = (r3 + 1);
    r0 = (r5 & 192);
}

loc_804D5B34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_804D5B40;
    }
}

loc_804D5B38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5B40:
{
    r0 = (r5 & 63);
    r6 = (r6 | r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D5B20;
    }
}

loc_804D5B4C:
{
}

loc_804D5B50:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(127))) {
        goto loc_804D5B64;
    }
}

loc_804D5B54:
{
}

loc_804D5B58:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804D5B94;
    }
}

loc_804D5B5C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5B64:
{
}

loc_804D5B68:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(2047))) {
        goto loc_804D5B7C;
    }
}

loc_804D5B6C:
{
}

loc_804D5B70:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1))) {
        goto loc_804D5B94;
    }
}

loc_804D5B74:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5B7C:
{
}

loc_804D5B80:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(65535))) {
        goto loc_804D5B94;
    }
}

loc_804D5B84:
{
}

loc_804D5B88:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(2))) {
        goto loc_804D5B94;
    }
}

loc_804D5B8C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5B94:
{
}

loc_804D5B98:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(55296))) {
        goto loc_804D5BAC;
    }
}

loc_804D5B9C:
{
}

loc_804D5BA0:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(57343))) {
        goto loc_804D5BAC;
    }
}

loc_804D5BA4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_804D5BAC:
{
    MemoryInline::FlatWrite32(r4, r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804D5AA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D5AA0_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D5AA0 func_804D5AA0 preserves=true fpr_mask=0x00000000

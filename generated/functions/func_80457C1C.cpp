#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457B84(CpuContext* ctx);
extern "C" uint32_t func_80457B84_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80457C1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80457C1C;

loc_80457C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r31 = r4;
    r30 = r3;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80457B84u>(&func_80457B84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80457B84_6AA = func_80457B84_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80457B84_6AA;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80457B84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80457C50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80457DB4;
    }
}

loc_80457C54:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r3 = 715849728;
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = (r3 + -21845);
    r7 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 24));
    MemoryInline::FlatWrite32((r31 + 16), r0);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 - r5);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r30 - r4);
    r3 = (static_cast<int32_t>(r3) >> 1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r9 = (r3 + r4);
}

loc_80457C9C:
{
}

loc_80457CA0:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r9))) {
        goto loc_80457DB4;
    }
}

loc_80457CA4:
{
    r4 = (r7 + r9);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r3 = (r3 + r4);
    r8 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r8 * 12);
    r5_addr_2 = (r5 + r3);
    r4 = MemoryInline::FlatRead32(r5_addr_2);
    r6 = (r5 + r3);
}

loc_80457CC4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_80457CD0;
    }
}

loc_80457CC8:
{
    r9 = (r8 + -1);
    goto loc_80457C9C;
}

loc_80457CD0:
{
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r3 = (r3 & 2147483647);
    r3 = (r4 + r3);
}

loc_80457CE0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_80457CEC;
    }
}

loc_80457CE4:
{
    r7 = (r8 + 1);
    goto loc_80457C9C;
}

loc_80457CEC:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r3 = (r3 + r4);
    MemoryInline::FlatWrite32((r31 + 4), r3);
    r3 = MemoryInline::FlatRead32((r6 + 4));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_80457D00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80457D0C;
    }
}

loc_80457D04:
{
    r5 = (r6 + 8);
    goto loc_80457D18;
}

loc_80457D0C:
{
    r4 = MemoryInline::FlatRead32((r1 + 24));
    r3 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r4 + r3);
}

loc_80457D18:
{
    MemoryInline::FlatWrite32(r31, r5);
    r3 = MemoryInline::FlatRead16(r5);
    r4 = MemoryInline::FlatRead32(r6);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_4 & 1);
}

loc_80457D28:
{
    r0 = (r0 - r4);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80457D78;
    }
}

loc_80457D30:
{
    r6 = (r5 + 4);
    goto loc_80457D68;
}

loc_80457D38:
{
    r3 = MemoryInline::FlatRead16((r6 + 4));
}

loc_80457D40:
{
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_6 & -4);
    r3 = (r4 + r3);
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80457D64;
    }
}

loc_80457D4C:
{
}

loc_80457D50:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80457D64;
    }
}

loc_80457D54:
{
    r0 = MemoryInline::FlatRead16((r6 + 6));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457DB4;
}

loc_80457D64:
{
    r6 = (r6 + 8);
}

loc_80457D68:
{
    r4 = MemoryInline::FlatRead32(r6);
}

loc_80457D70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80457D38;
    }
}

loc_80457D74:
{
    goto loc_80457DB4;
}

loc_80457D78:
{
    r4 = (r5 + 2);
    goto loc_80457DA8;
}

loc_80457D80:
{
}

loc_80457D84:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_80457DA4;
    }
}

loc_80457D88:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80457D90:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80457DA4;
    }
}

loc_80457D94:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457DB4;
}

loc_80457DA4:
{
    r4 = (r4 + 6);
}

loc_80457DA8:
{
    r3 = MemoryInline::FlatRead16(r4);
}

loc_80457DB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80457D80;
    }
}

loc_80457DB4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457C1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80457C1C func_80457C1C preserves=true fpr_mask=0x00000000

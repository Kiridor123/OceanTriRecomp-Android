#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED20(CpuContext* ctx);
extern "C" uint64_t func_8027ED20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027FEB4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_lhax_8027FF28_loc_0 = 0;
    uint32_t addr_lhax_8027FF3C_loc_0 = 0;
    uint32_t addr_lhax_8027FF50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8027FEB4u);
    goto loc_8027FEB4;

loc_8027FEB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0;
    r3 = (r3 & 255);
}

loc_8027FED8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(11))) {
        goto loc_8027FEE4;
    }
}

loc_8027FEDC:
{
    r3 = 0;
    goto loc_8027FF68;
}

loc_8027FEE4:
{
    r4 = (r4 & 65535);
    ctx->lr = 0x8027FEECu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED20u>(&func_8027ED20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED20_5E1 = func_8027ED20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ED20_5E1);
        r4 = static_cast<uint32_t>(regargs_result_8027ED20_5E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r0 - r3);
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r30 = (r30_rot_1 & -2);
    r3 = 0x805C0000u;
    r31 = (r3 + 1192);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004DDD8u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r3 & 255);
}

loc_8027FF10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027FF28;
    }
}

loc_8027FF14:
{
}

loc_8027FF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8027FF3C;
    }
}

loc_8027FF1C:
{
}

loc_8027FF20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027FF50;
    }
}

loc_8027FF24:
{
    goto loc_8027FF64;
}

loc_8027FF28:
{
    addr_lhax_8027FF28_loc_0 = (r31 + r30);
    r0 = MemoryInline::FlatRead16(addr_lhax_8027FF28_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027FF30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027FF64;
    }
}

loc_8027FF34:
{
    r29 = 3;
    goto loc_8027FF64;
}

loc_8027FF3C:
{
    addr_lhax_8027FF3C_loc_0 = (r31 + r30);
    r0 = MemoryInline::FlatRead16(addr_lhax_8027FF3C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027FF44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027FF64;
    }
}

loc_8027FF48:
{
    r29 = 3;
    goto loc_8027FF64;
}

loc_8027FF50:
{
    addr_lhax_8027FF50_loc_0 = (r31 + r30);
    r0 = MemoryInline::FlatRead16(addr_lhax_8027FF50_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027FF58:
{
    r29 = 3;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027FF64;
    }
}

loc_8027FF60:
{
    r29 = 6;
}

loc_8027FF64:
{
    r3 = r29;
}

loc_8027FF68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027FEB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027FEB4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027FEB4 func_8027FEB4 preserves=true fpr_mask=0x00000000

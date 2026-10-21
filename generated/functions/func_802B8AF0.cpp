#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027A3A4(CpuContext* ctx);
extern "C" uint32_t func_8027A3A4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802B8AF0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802B8AF0u);
    goto loc_802B8AF0;

loc_802B8AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = -1;
    r3 = r30;
    ctx->lr = 0x802B8B1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027A3A4u>(&func_8027A3A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8027A3A4_4BE = func_8027A3A4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027A3A4_4BE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027A3A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802B8B20:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B8B64;
    }
}

loc_802B8B24:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_802B8B2C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B8B4C;
    }
}

loc_802B8B30:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_802B8B38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B8B44;
    }
}

loc_802B8B3C:
{
    r31 = 2;
    goto loc_802B8B64;
}

loc_802B8B44:
{
    r31 = 3;
    goto loc_802B8B64;
}

loc_802B8B4C:
{
    r4 = MemoryInline::FlatRead8((r30 + 10));
    r3 = (1 - r4);
    r0 = (r4 + -1);
    r0 = (r3 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B8B64:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_802B8B68:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802B8BA4;
    }
}

loc_802B8B6C:
{
    r0 = MemoryInline::FlatRead8((r29 + 156));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B8B78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802B8BAC;
    }
}

loc_802B8B7C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_802B8B8C;
    }
}

loc_802B8B80:
{
    r3 = MemoryInline::FlatRead8((r29 + 157));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 157), static_cast<uint8_t>(r0));
}

loc_802B8B8C:
{
    r0 = MemoryInline::FlatRead8((r29 + 157));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802B8B98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802B8BAC;
    }
}

loc_802B8B9C:
{
    r31 = -1;
    goto loc_802B8BAC;
}

loc_802B8BA4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 157), static_cast<uint8_t>(r0));
}

loc_802B8BAC:
{
    MemoryInline::FlatWrite8((r29 + 156), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B8AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B8AF0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B8AF0 func_802B8AF0 preserves=true fpr_mask=0x00000000

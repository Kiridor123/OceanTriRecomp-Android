#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804E4C30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_804E4C30;

loc_804E4C30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 + -2097152);
}

loc_804E4C50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(44848))) {
        goto loc_804E4C6C;
    }
}

loc_804E4C54:
{
    r5 = 0x80630000u;
    r3 = (r13 + -19664);
    r5 = (r5 + -19416);
    r4 = 25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804E4C6Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
}

loc_804E4C6C:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r3 = 0;
    r5 = 1;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_804E4D24;
}

loc_804E4C88:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & 524280);
    r4_addr_2 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_804E4C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E4CD0;
    }
}

loc_804E4C9C:
{
    r0 = (r31 + r0);
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4_addr_4 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    r0 = MemoryInline::FlatRead8((r4 + 35));
}

loc_804E4CB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E4CD0;
    }
}

loc_804E4CB8:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4_addr_5 = (r4 + r6);
    r4 = MemoryInline::FlatRead32(r4_addr_5);
    MemoryInline::FlatWrite8((r4 + 35), static_cast<uint8_t>(r5));
}

loc_804E4CD0:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804E4CE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E4D20;
    }
}

loc_804E4CE4:
{
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_804E4D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E4D20;
    }
}

loc_804E4D04:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = (r0 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r5));
}

loc_804E4D20:
{
    r3 = (r3 + 1);
}

loc_804E4D24:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r3 & 65535);
}

loc_804E4D30:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_804E4C88;
    }
}

loc_804E4D34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E4C30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E4C30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E4C30 func_804E4C30 preserves=true fpr_mask=0x00000000

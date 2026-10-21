#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804BD0E0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804BD0E0u);
    goto loc_804BD0E0;

loc_804BD0E0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804BD0F8:
{
    r29 = r3;
    r30 = r7;
    r31 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804BD110;
    }
}

loc_804BD108:
{
    r31 = -4;
    goto loc_804BD200;
}

loc_804BD110:
{
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r27 = (r27_rot_1 & -8);
    r26 = 0;
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    MemoryInline::FlatWrite32((r3 + 20), r6);
    MemoryInline::FlatWrite32((r3 + 24), r7);
    goto loc_804BD174;
}

loc_804BD130:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r28 + r27);
    r4 = (r3 + r0);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_B38 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_B38);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_B38 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = MemoryInline::FlatRead32((r29 + 24));
    r3 = (r28 + r27);
    r4_addr_2 = (r4 + r3);
    r5 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_804BD158:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804BD164;
    }
}

loc_804BD15C:
{
    r0 = (r5 + -2147483648);
    goto loc_804BD168;
}

loc_804BD164:
{
    r0 = 0;
}

loc_804BD168:
{
    r4_addr_3 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r28 = (r28 + 8);
    r26 = (r26 + 1);
}

loc_804BD174:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_804BD17C:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r0))) {
        goto loc_804BD130;
    }
}

loc_804BD180:
{
    r27 = 0;
    r28 = 0;
    goto loc_804BD1C8;
}

loc_804BD18C:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
    r4 = (r0 + r28);
    r28_addr_2 = (r28 + r0);
    r3 = MemoryInline::FlatRead32(r28_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_115E = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_115E);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_115E >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r3_addr_4 = (r3 + r28);
    r4 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_804BD1AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BD1B8;
    }
}

loc_804BD1B0:
{
    r0 = (r4 + -2147483648);
    goto loc_804BD1BC;
}

loc_804BD1B8:
{
    r0 = 0;
}

loc_804BD1BC:
{
    r3_addr_5 = (r3 + r28);
    MemoryInline::FlatWrite32(r3_addr_5, r0);
    r28 = (r28 + 8);
    r27 = (r27 + 1);
}

loc_804BD1C8:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
}

loc_804BD1D0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r4))) {
        goto loc_804BD18C;
    }
}

loc_804BD1D4:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r4 + r0);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_1753 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1753);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1753 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_804BD1EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804BD1F8;
    }
}

loc_804BD1F0:
{
    r0 = (r30 + -2147483648);
    goto loc_804BD1FC;
}

loc_804BD1F8:
{
    r0 = 0;
}

loc_804BD1FC:
{
    MemoryInline::FlatWrite32((r29 + 24), r0);
}

loc_804BD200:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BD0E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BD0E0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BD0E0 func_804BD0E0 preserves=true fpr_mask=0x00000000

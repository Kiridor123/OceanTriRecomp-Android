#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E6F0C(CpuContext* ctx);
extern "C" uint64_t func_801E6F0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801E6FE4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801E6FE4;

loc_801E6FE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r4 = 0x805C0000u;
    r30 = (r4 + -20776);
    r4 = 0x805C0000u;
    r29 = (r4 + -20844);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 78), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r3 + 256), r0);
    r3 = (r3 + 80);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r27 + 68);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = 0;
    r31 = r27;
    goto loc_801E70EC;
}

loc_801E704C:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x801E6F0Cu>(&func_801E6F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E6F0C_A05 = func_801E6F0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E6F0C_A05);
        r4 = static_cast<uint32_t>(regargs_result_801E6F0C_A05 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E6F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r26 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16(r30);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x801E6F0Cu>(&func_801E6F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E6F0C_D23 = func_801E6F0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E6F0C_D23);
        r4 = static_cast<uint32_t>(regargs_result_801E6F0C_D23 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E6F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r0 = (r26 + r5);
}

loc_801E7070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E70E8;
    }
}

loc_801E7074:
{
    r0 = MemoryInline::FlatRead16((r27 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E707C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E7088;
    }
}

loc_801E7080:
{
}

loc_801E7084:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_801E70A8;
    }
}

loc_801E7088:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead16((r27 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r27 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 14), static_cast<uint16_t>(r0));
}

loc_801E70A8:
{
    r3 = MemoryInline::FlatRead32((r27 + 256));
    r0 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r26 * r0);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 256), r3);
    r0 = MemoryInline::FlatRead16((r30 + 4));
    r0 = (r5 * r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 256), r0);
    r0 = MemoryInline::FlatRead16(r30);
    MemoryInline::FlatWrite16((r31 + 80), static_cast<uint16_t>(r0));
    r31 = (r31 + 2);
    r28 = (r28 + 1);
    r3 = MemoryInline::FlatRead16((r27 + 76));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 76), static_cast<uint16_t>(r0));
}

loc_801E70E8:
{
    r30 = (r30 + 8);
}

loc_801E70EC:
{
    r3 = MemoryInline::FlatRead16(r30);
}

loc_801E70F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E704C;
    }
}

loc_801E70F8:
{
    r0 = MemoryInline::FlatRead16((r27 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E7100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801E7110;
    }
}

loc_801E7104:
{
}

loc_801E7108:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801E7118;
    }
}

loc_801E710C:
{
    goto loc_801E711C;
}

loc_801E7110:
{
    r28 = 3;
    goto loc_801E711C;
}

loc_801E7118:
{
    r28 = 6;
}

loc_801E711C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r30 = (r27 + r0);
    goto loc_801E71A4;
}

loc_801E7128:
{
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x801E6F0Cu>(&func_801E6F0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E6F0C_1B48 = func_801E6F0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801E6F0C_1B48);
        r4 = static_cast<uint32_t>(regargs_result_801E6F0C_1B48 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801E6F0Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
}

loc_801E7138:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801E71A0;
    }
}

loc_801E713C:
{
    r0 = MemoryInline::FlatRead16((r27 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E7144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E7150;
    }
}

loc_801E7148:
{
}

loc_801E714C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_801E7170;
    }
}

loc_801E7150:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead16((r27 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r27 + r0);
    MemoryInline::FlatWrite16((r3 + 68), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r27 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 14), static_cast<uint16_t>(r0));
}

loc_801E7170:
{
    r3 = MemoryInline::FlatRead32((r27 + 256));
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r5 * r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r27 + 256), r0);
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    r30 = (r30 + 2);
    r28 = (r28 + 1);
    r3 = MemoryInline::FlatRead16((r27 + 78));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r27 + 78), static_cast<uint16_t>(r0));
}

loc_801E71A0:
{
    r29 = (r29 + 6);
}

loc_801E71A4:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_801E71AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E7128;
    }
}

loc_801E71B0:
{
    r0 = MemoryInline::FlatRead16((r27 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E71B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E71C4;
    }
}

loc_801E71BC:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r27 + 14), static_cast<uint16_t>(r0));
}

loc_801E71C4:
{
    r11 = (r1 + 32);
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

extern "C" void func_801E6FE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E6FE4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E6FE4 func_801E6FE4 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80220BB4(CpuContext* ctx);
extern "C" uint32_t func_80220BB4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80220D38_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80220D38;

loc_80220D38:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = r3;
    r25 = r4;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r27 = (r4 + 18004);
    r3 = (r3 + 96);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r26 = 0;
}

loc_80220D74:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(-1))) {
        goto loc_80220DD0;
    }
}

loc_80220D78:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805C0000u;
    r3 = (r3 + -20552);
    r3_addr_0 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_0);
    r29 = r31;
    goto loc_80220DC0;
}

loc_80220D90:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
}

loc_80220D98:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(64))) {
        goto loc_80220E44;
    }
}

loc_80220D9C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80220BB4u>(&func_80220BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80220BB4_AF1 = func_80220BB4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80220BB4_AF1;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80220BB4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_80220DA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220DBC;
    }
}

loc_80220DAC:
{
    r0 = MemoryInline::FlatRead16(r27);
    MemoryInline::FlatWrite16((r29 + 96), static_cast<uint16_t>(r0));
    r29 = (r29 + 2);
    r26 = (r26 + 1);
}

loc_80220DBC:
{
    r27 = (r27 + 2);
}

loc_80220DC0:
{
    r5 = MemoryInline::FlatRead16(r27);
}

loc_80220DC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80220D90;
    }
}

loc_80220DCC:
{
    goto loc_80220E44;
}

loc_80220DD0:
{
    r25 = 0;
    r3 = 0x805C0000u;
    r30 = (r3 + -20552);
    r29 = r31;
}

loc_80220DE0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r27_addr_2 = (r27 + r0);
    r0 = MemoryInline::FlatRead8(r27_addr_2);
}

loc_80220DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80220E34;
    }
}

loc_80220DF0:
{
    r28 = MemoryInline::FlatRead32(r30);
    goto loc_80220E28;
}

loc_80220DF8:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r26)));
}

loc_80220E00:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(64))) {
        goto loc_80220E34;
    }
}

loc_80220E04:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80220BB4u>(&func_80220BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80220BB4_125F = func_80220BB4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80220BB4_125F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80220BB4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_80220E10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220E24;
    }
}

loc_80220E14:
{
    r0 = MemoryInline::FlatRead16(r28);
    MemoryInline::FlatWrite16((r29 + 96), static_cast<uint16_t>(r0));
    r29 = (r29 + 2);
    r26 = (r26 + 1);
}

loc_80220E24:
{
    r28 = (r28 + 2);
}

loc_80220E28:
{
    r5 = MemoryInline::FlatRead16(r28);
}

loc_80220E30:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80220DF8;
    }
}

loc_80220E34:
{
    r30 = (r30 + 4);
    r25 = (r25 + 1);
}

loc_80220E40:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(4))) {
        goto loc_80220DE0;
    }
}

loc_80220E44:
{
    r3 = r26;
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80220D38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220D38_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220D38 func_80220D38 preserves=true fpr_mask=0x00000000

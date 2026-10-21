#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271B3C(CpuContext* ctx);
extern "C" uint64_t func_80271B3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80271C38_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80271C38u);
    goto loc_80271C38;

loc_80271C38:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80271C60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271C70;
    }
}

loc_80271C64:
{
    r0 = (r4 & 255);
}

loc_80271C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80271C78;
    }
}

loc_80271C70:
{
    r3 = 0;
    goto loc_80271E58;
}

loc_80271C78:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + -7);
}

loc_80271C84:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80271E24;
    }
}

loc_80271C88:
{
    r0 = (r4 + -1);
}

loc_80271C90:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80271CA0;
    }
}

loc_80271C94:
{
}

loc_80271C98:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80271D60;
    }
}

loc_80271C9C:
{
    goto loc_80271E54;
}

loc_80271CA0:
{
    ctx->lr = 0x80271CA4u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3A8_9D8 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_9D8);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_9D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 14), 0, 10u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 14));
    r0 = (r30 & 255);
}

loc_80271CB0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271CBC;
    }
}

loc_80271CB4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 15));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271CBC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 16));
    r0 = (r30 & 255);
}

loc_80271CC8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271CD8;
    }
}

loc_80271CCC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 17));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271CD8:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 18));
    r0 = (r30 & 255);
}

loc_80271CE4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271CF4;
    }
}

loc_80271CE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 19));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271CF4:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 20));
    r0 = (r30 & 255);
}

loc_80271D00:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271D10;
    }
}

loc_80271D04:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 21));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271D10:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 22));
    r0 = (r30 & 255);
}

loc_80271D1C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271D2C;
    }
}

loc_80271D20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 23));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271D2C:
{
    r27 = 0;
}

loc_80271D30:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
}

loc_80271D38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80271D4C;
    }
}

loc_80271D3C:
{
    r4 = (r30 & 255);
    ctx->lr = 0x80271D44u;
    if constexpr (KnownRegArgsCpuCall<0x80271B3Cu>(&func_80271B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271B3C_15C5 = func_80271B3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271B3C_15C5);
        r4 = static_cast<uint32_t>(regargs_result_80271B3C_15C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 + r3);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271D4C:
{
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_80271D58:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_80271D30;
    }
}

loc_80271D5C:
{
    goto loc_80271E54;
}

loc_80271D60:
{
    r5 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80271D68:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80271DA8;
    }
}

loc_80271D6C:
{
    r27 = 0;
    r28 = r29;
    goto loc_80271D9C;
}

loc_80271D78:
{
    r3 = MemoryInline::FlatRead16((r28 + 6));
}

loc_80271D80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80271D94;
    }
}

loc_80271D84:
{
    r4 = (r30 & 255);
    ctx->lr = 0x80271D8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80271B3Cu>(&func_80271B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271B3C_1BD7 = func_80271B3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271B3C_1BD7);
        r4 = static_cast<uint32_t>(regargs_result_80271B3C_1BD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 + r3);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271D94:
{
    r28 = (r28 + 2);
    r27 = (r27 + 1);
}

loc_80271D9C:
{
    r5 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80271DA4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r5))) {
        goto loc_80271D78;
    }
}

loc_80271DA8:
{
}

loc_80271DAC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3))) {
        goto loc_80271E54;
    }
}

loc_80271DB0:
{
    r4 = (r30 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80271DC4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80271DE4;
    }
}

loc_80271DC8:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r0 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r31 + r0);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271DE4:
{
    r0 = (r5 + 1);
}

loc_80271DEC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_80271E54;
    }
}

loc_80271DF0:
{
    r4 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80271E04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80271E54;
    }
}

loc_80271E08:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
    goto loc_80271E54;
}

loc_80271E24:
{
    r28 = 0;
}

loc_80271E28:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
}

loc_80271E30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80271E44;
    }
}

loc_80271E34:
{
    r4 = (r30 & 255);
    ctx->lr = 0x80271E3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80271B3Cu>(&func_80271B3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271B3C_2780 = func_80271B3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271B3C_2780);
        r4 = static_cast<uint32_t>(regargs_result_80271B3C_2780 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271B3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 + r3);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271E44:
{
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_80271E50:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_80271E28;
    }
}

loc_80271E54:
{
    r3 = r31;
}

loc_80271E58:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_80271C38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80271C38_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80271C38 func_80271C38 preserves=true fpr_mask=0x00000000

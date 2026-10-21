#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8C2C(CpuContext* ctx);
extern "C" uint32_t func_800A8C2C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800A8C98(CpuContext* ctx);
extern "C" uint64_t func_800A8C98_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A8D4C(CpuContext* ctx);
extern "C" uint32_t func_800A8D4C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_800A8AC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800A8AC0u);
    goto loc_800A8AC0;

loc_800A8AC0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    // inline leaf 0x800A8D7C (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & 512);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800A8D7C
}

loc_800A8AE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A8C14;
    }
}

loc_800A8AE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 220u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
}

loc_800A8AEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800A8C14;
    }
}

loc_800A8AF0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r31 + 180));
}

loc_800A8AF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A8C14;
    }
}

loc_800A8AFC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 210u, (r31 + 222));
}

loc_800A8B04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A8C14;
    }
}

loc_800A8B08:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 32));
    r3 = (r0 & 4);
}

loc_800A8B14:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800A8B38;
    }
}

loc_800A8B18:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r31 + 228));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r31 + 60));
}

loc_800A8B24:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_800A8B58;
    }
}

loc_800A8B28:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r31 + 188));
    r4 = r31;
    ctx->lr = 0x800A8B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800A48D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    goto loc_800A8C14;
}

loc_800A8B38:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r31 + 228));
    r0 = (r30 + 65536);
}

loc_800A8B44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_800A8B58;
    }
}

loc_800A8B48:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r31 + 188));
    r4 = r31;
    ctx->lr = 0x800A8B54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800A48D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    goto loc_800A8C14;
}

loc_800A8B58:
{
}

loc_800A8B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A8B68;
    }
}

loc_800A8B60:
{
    r29 = -1;
    goto loc_800A8B6C;
}

loc_800A8B68:
{
    r29 = MemoryInline::ReadResolved16(guest_range_0, 48u, (r31 + 60));
}

loc_800A8B6C:
{
    r28 = 0;
}

loc_800A8B74:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800A8B80;
    }
}

loc_800A8B78:
{
    r3 = 0;
    goto loc_800A8B88;
}

loc_800A8B80:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r31 + 184));
    ctx->lr = 0x800A8B88u;
    if constexpr (KnownRegArgsCpuCall<0x800A8D4Cu>(&func_800A8D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8D4C_1494 = func_800A8D4C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8D4C_1494;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800A8B88:
{
    r27 = r3;
    goto loc_800A8BEC;
}

loc_800A8B90:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    r4 = (r27 & 65535);
    ctx->lr = 0x800A8B9Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A8C98u>(&func_800A8C98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8C98_1749 = func_800A8C98_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A8C98_1749);
        r4 = static_cast<uint32_t>(regargs_result_800A8C98_1749 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800A8C98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 8);
}

loc_800A8BA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A8BE8;
    }
}

loc_800A8BAC:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + 85);
    r0 = (r0 & 255);
}

loc_800A8BBC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800A8BE8;
    }
}

loc_800A8BC0:
{
    r26 = MemoryInline::FlatRead8((r3 + 1));
    r4 = (r31 + r26);
    r4 = (r4 + 32);
    r5 = r30;
    r6 = MemoryInline::FlatRead16((r31 + 234));
    r7 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8009F8C0u>(ctx);
}

loc_800A8BE0:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(112))) {
        goto loc_800A8BE8;
    }
}

loc_800A8BE4:
{
    r28 = 1;
}

loc_800A8BE8:
{
    r27 = (r27 + 1);
}

loc_800A8BEC:
{
    r3 = MemoryInline::FlatRead32((r31 + 184));
    ctx->lr = 0x800A8BF4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8C2Cu>(&func_800A8C2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A8C2C_1E47 = func_800A8C2C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800A8C2C_1E47;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800A8C2Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 65535);
    r0 = (r27 & 65535);
}

loc_800A8C00:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800A8B90;
    }
}

loc_800A8C04:
{
}

loc_800A8C08:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800A8C14;
    }
}

loc_800A8C0C:
{
    r3 = r31;
    ctx->lr = 0x800A8C14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x800A963Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
}

loc_800A8C14:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A8AC0 func_800A8AC0 preserves=true fpr_mask=0x00000000

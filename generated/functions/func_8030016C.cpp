#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802FFD38(CpuContext* ctx);
extern "C" uint64_t func_802FFD38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802FFFB0(CpuContext* ctx);
extern "C" uint32_t func_802FFFB0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803000E4(CpuContext* ctx);
extern "C" uint64_t func_803000E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8030016C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8030016C;

loc_8030016C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r28 = r3;
    r29 = r4;
    r30 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r31 = (r0 * 12);
    r26 = (r3 + r31);
    r0 = MemoryInline::FlatRead16((r26 + 1098));
}

loc_803001A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803001AC;
    }
}

loc_803001A4:
{
    r3 = 16;
    goto loc_803002FC;
}

loc_803001AC:
{
    r0 = MemoryInline::FlatRead16((r3 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803001B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803001CC;
    }
}

loc_803001B8:
{
    r4 = MemoryInline::FlatRead16((r26 + 1096));
    if constexpr (KnownRegArgsCpuCall<0x802FFD38u>(&func_802FFD38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802FFD38_A88 = func_802FFD38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802FFD38_A88);
        r4 = static_cast<uint32_t>(regargs_result_802FFD38_A88 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802FFD38u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803001C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803001CC;
    }
}

loc_803001C8:
{
    r30 = (r30 | 4);
}

loc_803001CC:
{
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803001D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_803001F4;
    }
}

loc_803001D8:
{
    r0 = MemoryInline::FlatRead16((r28 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803001E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803001F4;
    }
}

loc_803001E4:
{
    r0 = MemoryInline::FlatRead16((r28 + 2006));
}

loc_803001EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803001F4;
    }
}

loc_803001F0:
{
    r30 = (r30 | 2);
}

loc_803001F4:
{
    r3 = r28;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x803000E4u>(&func_803000E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803000E4_119D = func_803000E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803000E4_119D);
        r4 = static_cast<uint32_t>(regargs_result_803000E4_119D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803000E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = r3;
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8030020C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300218;
    }
}

loc_80300210:
{
    r4 = 1000;
    goto loc_8030023C;
}

loc_80300218:
{
    r0 = MemoryInline::FlatRead16((r28 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80300220:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8030022C;
    }
}

loc_80300224:
{
    r4 = 5;
    goto loc_8030023C;
}

loc_8030022C:
{
    r3 = r28;
    r4 = (r28 + 2004);
    if constexpr (KnownRegArgsCpuCall<0x803000E4u>(&func_803000E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803000E4_1796 = func_803000E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803000E4_1796);
        r4 = static_cast<uint32_t>(regargs_result_803000E4_1796 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803000E4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8030023C:
{
    r0 = MemoryInline::FlatRead16((r28 + 48));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80300244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80300260;
    }
}

loc_80300248:
{
    r3 = (r27 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80300254:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8030027C;
    }
}

loc_80300258:
{
    r30 = (r30 | 2);
    goto loc_8030027C;
}

loc_80300260:
{
    r3 = (r27 & 65535);
    r0 = MemoryInline::FlatRead16((r26 + 1098));
    r3 = (r3 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80300274:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8030027C;
    }
}

loc_80300278:
{
    r30 = (r30 | 2);
}

loc_8030027C:
{
    r3 = r28;
    r4 = r29;
    r6 = (r28 + r31);
    r5 = MemoryInline::FlatRead16((r6 + 1096));
    r6 = MemoryInline::FlatRead8((r6 + 1105));
    if constexpr (KnownRegArgsCpuCall<0x802FFFB0u>(&func_802FFFB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802FFFB0_1F4C = func_802FFFB0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_802FFFB0_1F4C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802FFFB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8030029C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803002A8;
    }
}

loc_803002A0:
{
    r30 = (r30 | 1);
    goto loc_803002F8;
}

loc_803002A8:
{
    r26_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r26 = (r26_rot_1 & -8);
    r3 = (r29 + r26);
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_803002B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803002E8;
    }
}

loc_803002BC:
{
    r29_addr_1 = (r29 + r26);
    r3 = MemoryInline::FlatRead16(r29_addr_1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803002C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803002D0;
    }
}

loc_803002CC:
{
    r30 = (r30 | 8);
}

loc_803002D0:
{
    r3 = (r29 + r26);
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_803002DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803002F8;
    }
}

loc_803002E0:
{
    r30 = (r30 | 1);
    goto loc_803002F8;
}

loc_803002E8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
}

loc_803002F0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(99))) {
        goto loc_803002F8;
    }
}

loc_803002F4:
{
    r30 = (r30 | 32);
}

loc_803002F8:
{
    r3 = r30;
}

loc_803002FC:
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8030016C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8030016C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8030016C func_8030016C preserves=true fpr_mask=0x00000000

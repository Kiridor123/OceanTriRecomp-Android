#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D318(CpuContext* ctx);
extern "C" uint64_t func_8004D318_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004BDBC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_8004BDBC;

loc_8004BDBC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r30 = r3;
    r25 = r4;
    r26 = r5;
    r27 = r6;
    r31 = r7;
    r3 = (r5 & 65535);
    // inline leaf 0x8004B098 (12 guest instruction(s))
}

loc_inl1_0x8004B098:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -438);
}

loc_inl1_0x8004B0A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl1_0x8004B0B8;
    }
}

loc_inl1_0x8004B0A8:
{
}

loc_inl1_0x8004B0AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004B0B8;
    }
}

loc_inl1_0x8004B0B0:
{
}

loc_inl1_0x8004B0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(223))) {
        goto loc_inl1_0x8004B0C0;
    }
}

loc_inl1_0x8004B0B8:
{
    r3 = 1;
    goto loc_inl1_cont_8004B098;
}

loc_inl1_0x8004B0C0:
{
    r3 = 0;
}

loc_inl1_cont_8004B098:
{
    // end of inlined leaf 0x8004B098
}

loc_8004BDF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004BDFC;
    }
}

loc_8004BDF4:
{
    r3 = 0;
    goto loc_8004BEF0;
}

loc_8004BDFC:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r6 = r30;
    r28 = 0;
    r3 = 99;
    r4 = (r26 & 65535);
    ctr = r25;
}

loc_8004BE1C:
{
    if ((static_cast<uint32_t>(r25) <= static_cast<uint32_t>(0))) {
        goto loc_8004BE84;
    }
}

loc_8004BE20:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_8004BE28:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8004BE78;
    }
}

loc_8004BE2C:
{
    r5 = MemoryInline::FlatRead16((r6 + 2));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_8004BE34:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(99))) {
        goto loc_8004BE78;
    }
}

loc_8004BE38:
{
    r0 = (99 - r5);
}

loc_8004BE40:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r27))) {
        goto loc_8004BE68;
    }
}

loc_8004BE44:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    // inline leaf 0x8004D318 (13 guest instruction(s))
}

loc_inl2_0x8004D318:
{
    r6 = (r4 & 65535);
}

loc_inl2_0x8004D320:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(746))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004D324:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 19160));
    r3 = 1;
    r0 = (r6 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 19160), r0);
    goto loc_inl2_cont_8004D318;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004D318:
{
    // end of inlined leaf 0x8004D318
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_8004BEF0;
}

loc_8004BE68:
{
    r27 = (r27 - r0);
    MemoryInline::FlatWrite16((r6 + 2), static_cast<uint16_t>(r3));
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_8004BE78:
{
    r28 = (r28 + 1);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004BE20;
    }
}

loc_8004BE84:
{
    r28 = 0;
    r29 = 99;
    goto loc_8004BEE4;
}

loc_8004BE90:
{
    r0 = MemoryInline::FlatRead16(r30);
}

loc_8004BE98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004BEDC;
    }
}

loc_8004BE9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r26 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8004D318u>(&func_8004D318)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004D318_1679 = func_8004D318_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004D318_1679);
        r4 = static_cast<uint32_t>(regargs_result_8004D318_1679 >> 32);
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
        InvokeDirectCpu<0x8004D318u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r26));
}

loc_8004BEB0:
{
    if ((static_cast<uint32_t>(r27) > static_cast<uint32_t>(99))) {
        goto loc_8004BECC;
    }
}

loc_8004BEB4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r0));
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = 0;
    goto loc_8004BEF0;
}

loc_8004BECC:
{
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r29));
    r27 = (r27 + -99);
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
}

loc_8004BEDC:
{
    r28 = (r28 + 1);
    r30 = (r30 + 4);
}

loc_8004BEE4:
{
}

loc_8004BEE8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r25))) {
        goto loc_8004BE90;
    }
}

loc_8004BEEC:
{
    r3 = r27;
}

loc_8004BEF0:
{
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004BDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004BDBC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004BDBC func_8004BDBC preserves=true fpr_mask=0x00000000

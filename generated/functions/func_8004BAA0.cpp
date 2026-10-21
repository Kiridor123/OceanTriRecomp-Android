#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B0C8(CpuContext* ctx);
extern "C" uint64_t func_8004B0C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8004BAA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    MKW_GUEST_ENTER(0x8004BAA0u);
    goto loc_8004BAA0;

loc_8004BAA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r25 = r4;
    r29 = r5;
    r26 = r6;
    r30 = r7;
    r31 = r8;
    r3 = (r3 & 65535);
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

loc_8004BAD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004BAE4;
    }
}

loc_8004BADC:
{
    r27 = 6;
    goto loc_8004BC10;
}

loc_8004BAE4:
{
    r3 = (r28 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl2_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F758;
    }
}

loc_inl2_0x8029F754:
{
    r3 = 0;
}

loc_inl2_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl2_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
}

loc_8004BAF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004BAFC;
    }
}

loc_8004BAF4:
{
    r27 = 6;
    goto loc_8004BC10;
}

loc_8004BAFC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8004BB04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004BB0C;
    }
}

loc_8004BB08:
{
    r31 = MemoryInline::FlatRead8((r3 + 3));
}

loc_8004BB0C:
{
    r3 = (r28 & 65535);
    r4 = r29;
    r5 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8004B0C8u>(&func_8004B0C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8004B0C8_ED9 = func_8004B0C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B0C8_ED9);
        r4 = static_cast<uint32_t>(regargs_result_8004B0C8_ED9 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8004B0C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
}

loc_8004BB20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004BB7C;
    }
}

loc_8004BB24:
{
    r27 = 5;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    ctr = r26;
}

loc_8004BB34:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_8004BC10;
    }
}

loc_8004BB38:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_8004BB40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004BB70;
    }
}

loc_8004BB44:
{
}

loc_8004BB48:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8004BB70;
    }
}

loc_8004BB4C:
{
    r27 = 0;
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r28));
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r25));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8004BB64:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8004BC10;
    }
}

loc_8004BB68:
{
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r31));
    goto loc_8004BC10;
}

loc_8004BB70:
{
    r29 = (r29 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004BB38;
    }
}

loc_8004BB78:
{
    goto loc_8004BC10;
}

loc_8004BB7C:
{
    r0 = (r28 & 65535);
    ctr = r26;
}

loc_8004BB88:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_8004BC10;
    }
}

loc_8004BB8C:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_8004BB94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8004BC08;
    }
}

loc_8004BB98:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
}

loc_8004BBA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8004BBC0;
    }
}

loc_8004BBA4:
{
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8004BBB0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8004BBC0;
    }
}

loc_8004BBB4:
{
    r27 = 3;
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r31));
    goto loc_8004BC10;
}

loc_8004BBC0:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r25);
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8004BBD4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8004BBE8;
    }
}

loc_8004BBD8:
{
    r27 = 4;
    r3 = r29;
    // inline leaf 0x8004BD94 (10 guest instruction(s))
}

loc_inl3_0x8004BD94:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_inl3_0x8004BDA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8004BDB0;
    }
}

loc_inl3_0x8004BDA8:
{
    r3 = 0;
    goto loc_inl3_cont_8004BD94;
}

loc_inl3_0x8004BDB0:
{
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    r3 = 1;
}

loc_inl3_cont_8004BD94:
{
    // end of inlined leaf 0x8004BD94
    goto loc_8004BC10;
}

loc_8004BBE8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_8004BBF0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_8004BC00;
    }
}

loc_8004BBF4:
{
    r27 = 2;
    MemoryInline::FlatWrite16((r29 + 2), static_cast<uint16_t>(r31));
    goto loc_8004BC10;
}

loc_8004BC00:
{
    r27 = 1;
    goto loc_8004BC10;
}

loc_8004BC08:
{
    r29 = (r29 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004BB8C;
    }
}

loc_8004BC10:
{
    r0 = (r30 & 255);
}

loc_8004BC18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004BC34;
    }
}

loc_8004BC1C:
{
    r0 = (r27 + -4);
}

loc_8004BC24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_8004BC34;
    }
}

loc_8004BC28:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r28 & 65535);
    // inline leaf 0x8004D318 (13 guest instruction(s))
}

loc_inl4_0x8004D318:
{
    r6 = (r4 & 65535);
}

loc_inl4_0x8004D320:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(746))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8004D324:
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
    goto loc_inl4_cont_8004D318;
}

loc_inl4_return:
{
}

loc_inl4_cont_8004D318:
{
    // end of inlined leaf 0x8004D318
}

loc_8004BC34:
{
    r3 = r27;
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004BAA0 func_8004BAA0 preserves=true fpr_mask=0x00000000

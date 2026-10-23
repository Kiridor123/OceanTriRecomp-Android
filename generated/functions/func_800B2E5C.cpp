#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B2E5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B2E5C;

loc_800B2E5C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B2E9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2EB4;
    }
}

loc_800B2EA0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B2EAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2EB4;
    }
}

loc_800B2EB0:
{
    r10 = 0;
}

loc_800B2EB4:
{
}

loc_800B2EB8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B2ED0;
    }
}

loc_800B2EBC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B2EC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2ED0;
    }
}

loc_800B2ECC:
{
    r9 = 0;
}

loc_800B2ED0:
{
}

loc_800B2ED4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B2EE8;
    }
}

loc_800B2ED8:
{
    r0 = (r11 + 1073741824);
}

loc_800B2EE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2EE8;
    }
}

loc_800B2EE4:
{
    r8 = 0;
}

loc_800B2EE8:
{
}

loc_800B2EEC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B2F04;
    }
}

loc_800B2EF0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B2EFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2F04;
    }
}

loc_800B2F00:
{
    r7 = 0;
}

loc_800B2F04:
{
}

loc_800B2F08:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B2F20;
    }
}

loc_800B2F0C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B2F18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2F20;
    }
}

loc_800B2F1C:
{
    r6 = 0;
}

loc_800B2F20:
{
}

loc_800B2F24:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B2F3C;
    }
}

loc_800B2F28:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B2F34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2F3C;
    }
}

loc_800B2F38:
{
    r5 = 0;
}

loc_800B2F3C:
{
}

loc_800B2F40:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B2F64;
    }
}

loc_800B2F44:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 179;
    r5 = 0x80590000u;
    r5 = (r5 + 15968);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B2F64u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800B2F64:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800B2F88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2FA0;
    }
}

loc_800B2F8C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B2F98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2FA0;
    }
}

loc_800B2F9C:
{
    r9 = 0;
}

loc_800B2FA0:
{
}

loc_800B2FA4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B2FBC;
    }
}

loc_800B2FA8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B2FB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2FBC;
    }
}

loc_800B2FB8:
{
    r8 = 0;
}

loc_800B2FBC:
{
}

loc_800B2FC0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B2FD4;
    }
}

loc_800B2FC4:
{
    r0 = (r10 + 1073741824);
}

loc_800B2FCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2FD4;
    }
}

loc_800B2FD0:
{
    r7 = 0;
}

loc_800B2FD4:
{
}

loc_800B2FD8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B2FF0;
    }
}

loc_800B2FDC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B2FE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2FF0;
    }
}

loc_800B2FEC:
{
    r6 = 0;
}

loc_800B2FF0:
{
}

loc_800B2FF4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B300C;
    }
}

loc_800B2FF8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B3004:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B300C;
    }
}

loc_800B3008:
{
    r5 = 0;
}

loc_800B300C:
{
}

loc_800B3010:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B3028;
    }
}

loc_800B3014:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B3020:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3028;
    }
}

loc_800B3024:
{
    r4 = 0;
}

loc_800B3028:
{
}

loc_800B302C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B3050;
    }
}

loc_800B3030:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 180;
    r5 = 0x80590000u;
    r5 = (r5 + 16024);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B3050u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800B3050:
{
    r0 = MemoryInline::FlatRead32(r30);
    r29 = (r30 + r0);
    r28 = (r29 + 8);
    r27 = 0;
    r30 = MemoryInline::FlatRead16((r29 + 4));
    goto loc_800B30CC;
}

loc_800B3068:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r28 + 1));
    r0 = (r3 + r0);
    r28 = (r28 + 2);
    r4 = r28;
    r28 = (r28 + r0);
    r6 = MemoryInline::FlatRead8((r28 + 3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = MemoryInline::FlatRead8(r28);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & -16777216);
    r0 = MemoryInline::FlatRead8((r28 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r6 + r3);
    r0 = (r5 + r0);
    r26 = (r3 + r0);
    r28 = (r28 + 8);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800B30BC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B30C8;
    }
}

loc_800B30C0:
{
    r3 = (r29 + r26);
    goto loc_800B30D8;
}

loc_800B30C8:
{
    r27 = (r27 + 1);
}

loc_800B30CC:
{
}

loc_800B30D0:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r30))) {
        goto loc_800B3068;
    }
}

loc_800B30D4:
{
    r3 = 0;
}

loc_800B30D8:
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2E5C func_800B2E5C preserves=true fpr_mask=0x00000000

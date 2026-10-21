#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED20(CpuContext* ctx);
extern "C" uint64_t func_8027ED20_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80213DD4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_80213ED8_loc_0 = 0;
    uint32_t addr_lhax_80213EFC_loc_0 = 0;
    uint32_t addr_lhax_80213F20_loc_0 = 0;
    uint32_t addr_lhax_80213F44_loc_0 = 0;
    uint32_t addr_lhax_80213F7C_loc_0 = 0;
    uint32_t addr_lhax_80213FA0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80213DD4u);
    goto loc_80213DD4;

loc_80213DD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = 11;
    r4 = (r4 & 65535);
    ctx->lr = 0x80213E0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027ED20u>(&func_8027ED20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED20_85B = func_8027ED20_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ED20_85B);
        r4 = static_cast<uint32_t>(regargs_result_8027ED20_85B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r28 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x806C0000u;
    r4 = (r4 + 6208);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r29 & 65535);
    goto loc_80213E34;
}

loc_80213E28:
{
}

loc_80213E2C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_80213E40;
    }
}

loc_80213E30:
{
    r5 = (r5 + 36);
}

loc_80213E34:
{
    r4 = MemoryInline::FlatRead16((r5 + 2));
}

loc_80213E3C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_80213E28;
    }
}

loc_80213E40:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 1192);
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 16u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 0u, r31, r4);
        MemoryInline::WriteResolved16(guest_range_0, 2u, (r31 + 2), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 4), r4);
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r31 + 6), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 8u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 8u, (r31 + 8), r4);
        MemoryInline::WriteResolved16(guest_range_0, 10u, (r31 + 10), r4);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 12u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 12u, (r31 + 12), r4);
        MemoryInline::WriteResolved16(guest_range_0, 14u, (r31 + 14), r4);
    }
    r7 = 0;
    r6 = 0;
    r4 = r5;
    r10 = 0x805C0000u;
}

loc_80213E8C:
{
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r8 = (r5 + r8);
    r8 = MemoryInline::FlatRead8((r8 + 28));
    r8 = (r8 & 240);
    r8 = (static_cast<int32_t>(r8) >> 4);
}

loc_80213EA4:
{
    if ((static_cast<uint32_t>(r8) > static_cast<uint32_t>(7))) {
        goto loc_80213FC4;
    }
}

loc_80213EA8:
{
    r9 = (r10 + -24540);
    r8_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r8 = (r8_rot_2 & -4);
    r9_addr_2 = (r9 + r8);
    r9 = MemoryInline::FlatRead32(r9_addr_2);
    ctr = r9;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80213EBCu:
        goto loc_80213EBC;
        break;
    case 0x80213ECCu:
        goto loc_80213ECC;
        break;
    case 0x80213EF0u:
        goto loc_80213EF0;
        break;
    case 0x80213F14u:
        goto loc_80213F14;
        break;
    case 0x80213F38u:
        goto loc_80213F38;
        break;
    case 0x80213F70u:
        goto loc_80213F70;
        break;
    case 0x80213F94u:
        goto loc_80213F94;
        break;
    case 0x80213FB8u:
        goto loc_80213FB8;
        break;
    default:
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
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80213EBC:
{
    r8 = (r30 & 255);
}

loc_80213EC4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213EC8:
{
    goto loc_80213FC4;
}

loc_80213ECC:
{
    r9 = (r30 & 255);
}

loc_80213ED4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80213FC4;
    }
}

loc_80213ED8:
{
    addr_lhax_80213ED8_loc_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_80213ED8_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_80213EE0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213EE4:
{
}

loc_80213EE8:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(4))) {
        goto loc_80213FC4;
    }
}

loc_80213EEC:
{
    goto loc_80213FE8;
}

loc_80213EF0:
{
    r9 = (r30 & 255);
}

loc_80213EF8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80213FC4;
    }
}

loc_80213EFC:
{
    addr_lhax_80213EFC_loc_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_80213EFC_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_80213F04:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FC4;
    }
}

loc_80213F08:
{
}

loc_80213F0C:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(3))) {
        goto loc_80213FE8;
    }
}

loc_80213F10:
{
    goto loc_80213FC4;
}

loc_80213F14:
{
    r9 = (r30 & 255);
}

loc_80213F1C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213F20:
{
    addr_lhax_80213F20_loc_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_80213F20_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_80213F28:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FC4;
    }
}

loc_80213F2C:
{
}

loc_80213F30:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(2))) {
        goto loc_80213FE8;
    }
}

loc_80213F34:
{
    goto loc_80213FC4;
}

loc_80213F38:
{
    r8 = (r30 & 255);
}

loc_80213F40:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213F44:
{
    addr_lhax_80213F44_loc_0 = (r3 + r0);
    r9 = MemoryInline::FlatRead16(addr_lhax_80213F44_loc_0);
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
}

loc_80213F4C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80213F58;
    }
}

loc_80213F50:
{
}

loc_80213F54:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(6))) {
        goto loc_80213FE8;
    }
}

loc_80213F58:
{
}

loc_80213F5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(1))) {
        goto loc_80213FC4;
    }
}

loc_80213F60:
{
    r8 = (r30 & 255);
}

loc_80213F68:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(3))) {
        goto loc_80213FE8;
    }
}

loc_80213F6C:
{
    goto loc_80213FC4;
}

loc_80213F70:
{
    r9 = (r30 & 255);
}

loc_80213F78:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213F7C:
{
    addr_lhax_80213F7C_loc_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_80213F7C_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_80213F84:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213F88:
{
}

loc_80213F8C:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(4))) {
        goto loc_80213FC4;
    }
}

loc_80213F90:
{
    goto loc_80213FE8;
}

loc_80213F94:
{
    r9 = (r30 & 255);
}

loc_80213F9C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213FA0:
{
    addr_lhax_80213FA0_loc_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead16(addr_lhax_80213FA0_loc_0);
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
}

loc_80213FA8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80213FC4;
    }
}

loc_80213FAC:
{
}

loc_80213FB0:
{
    if ((static_cast<uint32_t>(r9) <= static_cast<uint32_t>(3))) {
        goto loc_80213FE8;
    }
}

loc_80213FB4:
{
    goto loc_80213FC4;
}

loc_80213FB8:
{
    r8 = (r30 & 255);
}

loc_80213FC0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80213FE8;
    }
}

loc_80213FC4:
{
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_80213FCC:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(3))) {
        goto loc_80213FE8;
    }
}

loc_80213FD0:
{
    r8 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r8));
    r8 = MemoryInline::FlatRead16((r4 + 6));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r8));
    r31 = (r31 + 4);
    r7 = (r7 + 1);
}

loc_80213FE8:
{
    r4 = (r4 + 4);
    r6 = (r6 + 1);
}

loc_80213FF4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(6))) {
        goto loc_80213E8C;
    }
}

loc_80213FF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80213DD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80213DD4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80213DD4 func_80213DD4 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271BB0(CpuContext* ctx);
extern "C" uint64_t func_80271BB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80271E70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_80271E70;

loc_80271E70:
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

loc_80271E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271EA8;
    }
}

loc_80271E9C:
{
    r0 = (r4 & 255);
}

loc_80271EA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80271EB0;
    }
}

loc_80271EA8:
{
    r3 = 0;
    goto loc_802720D0;
}

loc_80271EB0:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + -7);
}

loc_80271EBC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_80272098;
    }
}

loc_80271EC0:
{
    r0 = (r4 + -1);
}

loc_80271EC8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80271ED8;
    }
}

loc_80271ECC:
{
}

loc_80271ED0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_80271FC8;
    }
}

loc_80271ED4:
{
    goto loc_802720CC;
}

loc_80271ED8:
{
    ctx->lr = 0x80271EDCu;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3A8_A31 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_A31);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_A31 >> 32);
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

loc_80271EE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271F00;
    }
}

loc_80271EEC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 15));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271F00;
    }
}

loc_80271EFC:
{
    r31 = 1;
}

loc_80271F00:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 16));
    r0 = (r30 & 255);
}

loc_80271F0C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271F24;
    }
}

loc_80271F10:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271F1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271F24;
    }
}

loc_80271F20:
{
    r31 = 1;
}

loc_80271F24:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 18));
    r0 = (r30 & 255);
}

loc_80271F30:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271F48;
    }
}

loc_80271F34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 19));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271F40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271F48;
    }
}

loc_80271F44:
{
    r31 = 1;
}

loc_80271F48:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 20));
    r0 = (r30 & 255);
}

loc_80271F54:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271F6C;
    }
}

loc_80271F58:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 21));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271F6C;
    }
}

loc_80271F68:
{
    r31 = 1;
}

loc_80271F6C:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 22));
    r0 = (r30 & 255);
}

loc_80271F78:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80271F90;
    }
}

loc_80271F7C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 23));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80271F88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80271F90;
    }
}

loc_80271F8C:
{
    r31 = 1;
}

loc_80271F90:
{
    r27 = 0;
}

loc_80271F94:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
}

loc_80271F9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80271FB4;
    }
}

loc_80271FA0:
{
    r4 = (r30 & 255);
    ctx->lr = 0x80271FA8u;
    if constexpr (KnownRegArgsCpuCall<0x80271BB0u>(&func_80271BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271BB0_1973 = func_80271BB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271BB0_1973);
        r4 = static_cast<uint32_t>(regargs_result_80271BB0_1973 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271BB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80271FAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80271FB4;
    }
}

loc_80271FB0:
{
    r31 = 1;
}

loc_80271FB4:
{
    r29 = (r29 + 2);
    r27 = (r27 + 1);
}

loc_80271FC0:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(3))) {
        goto loc_80271F94;
    }
}

loc_80271FC4:
{
    goto loc_802720CC;
}

loc_80271FC8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_80271FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272014;
    }
}

loc_80271FD4:
{
    r27 = 0;
    r28 = r29;
    goto loc_80272008;
}

loc_80271FE0:
{
    r3 = MemoryInline::FlatRead16((r28 + 6));
}

loc_80271FE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80272000;
    }
}

loc_80271FEC:
{
    r4 = (r30 & 255);
    ctx->lr = 0x80271FF4u;
    if constexpr (KnownRegArgsCpuCall<0x80271BB0u>(&func_80271BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271BB0_2025 = func_80271BB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271BB0_2025);
        r4 = static_cast<uint32_t>(regargs_result_80271BB0_2025 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271BB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80271FF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80272000;
    }
}

loc_80271FFC:
{
    r31 = 1;
}

loc_80272000:
{
    r28 = (r28 + 2);
    r27 = (r27 + 1);
}

loc_80272008:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_80272010:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_80271FE0;
    }
}

loc_80272014:
{
    r5 = (r0 & 255);
}

loc_8027201C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(3))) {
        goto loc_802720CC;
    }
}

loc_80272020:
{
    r4 = (r30 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80272034:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80272054;
    }
}

loc_80272038:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0 = (r0 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -10);
}

loc_8027204C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272054;
    }
}

loc_80272050:
{
    r31 = 1;
}

loc_80272054:
{
    r0 = (r5 + 1);
}

loc_8027205C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(3))) {
        goto loc_802720CC;
    }
}

loc_80272060:
{
    r4 = (r30 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_80272074:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_802720CC;
    }
}

loc_80272078:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + -10);
}

loc_8027208C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802720CC;
    }
}

loc_80272090:
{
    r31 = 1;
    goto loc_802720CC;
}

loc_80272098:
{
    r28 = 0;
}

loc_8027209C:
{
    r3 = MemoryInline::FlatRead16((r29 + 6));
}

loc_802720A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802720BC;
    }
}

loc_802720A8:
{
    r4 = (r30 & 255);
    ctx->lr = 0x802720B0u;
    if constexpr (KnownRegArgsCpuCall<0x80271BB0u>(&func_80271BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271BB0_2D27 = func_80271BB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271BB0_2D27);
        r4 = static_cast<uint32_t>(regargs_result_80271BB0_2D27 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271BB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802720B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802720BC;
    }
}

loc_802720B8:
{
    r31 = 1;
}

loc_802720BC:
{
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_802720C8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_8027209C;
    }
}

loc_802720CC:
{
    r3 = r31;
}

loc_802720D0:
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

extern "C" void func_80271E70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80271E70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80271E70 func_80271E70 preserves=true fpr_mask=0x00000000

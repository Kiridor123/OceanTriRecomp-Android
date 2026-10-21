#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D0600(CpuContext* ctx);
extern "C" uint64_t func_804D0600_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D5AA0(CpuContext* ctx);
extern "C" uint32_t func_804D5AA0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5BC0(CpuContext* ctx);
extern "C" uint32_t func_804D5BC0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D5C30(CpuContext* ctx);
extern "C" uint64_t func_804D5C30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D0EA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804D0EA0u);
    goto loc_804D0EA0;

loc_804D0EA0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804D0EB8:
{
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D0EF8;
    }
}

loc_804D0ED4:
{
}

loc_804D0ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_804D0F10;
    }
}

loc_804D0EDC:
{
}

loc_804D0EE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_804D0F94;
    }
}

loc_804D0EE4:
{
}

loc_804D0EE8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_804D0FA8;
    }
}

loc_804D0EEC:
{
}

loc_804D0EF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_804D0FBC;
    }
}

loc_804D0EF4:
{
    goto loc_804D0FD0;
}

loc_804D0EF8:
{
    r30 = MemoryInline::FlatRead8(r4);
    r31 = MemoryInline::FlatRead32((r13 + -15052));
}

loc_804D0F04:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804D0FD0;
    }
}

loc_804D0F08:
{
    r27 = (r4 + 1);
    goto loc_804D0FD0;
}

loc_804D0F10:
{
    r30 = MemoryInline::FlatRead8(r4);
    r31 = MemoryInline::FlatRead32((r13 + -15056));
}

loc_804D0F1C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804D0FD0;
    }
}

loc_804D0F20:
{
}

loc_804D0F24:
{
    r27 = (r4 + 1);
    r0 = 0;
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(129))) {
        goto loc_804D0F38;
    }
}

loc_804D0F30:
{
}

loc_804D0F34:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(159))) {
        goto loc_804D0F48;
    }
}

loc_804D0F38:
{
}

loc_804D0F3C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(224))) {
        goto loc_804D0F4C;
    }
}

loc_804D0F40:
{
}

loc_804D0F44:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(252))) {
        goto loc_804D0F4C;
    }
}

loc_804D0F48:
{
    r0 = 1;
}

loc_804D0F4C:
{
}

loc_804D0F50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D0FD0;
    }
}

loc_804D0F54:
{
    r3 = MemoryInline::FlatRead8(r27);
    r0 = 0;
}

loc_804D0F60:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(64))) {
        goto loc_804D0F78;
    }
}

loc_804D0F64:
{
}

loc_804D0F68:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(252))) {
        goto loc_804D0F78;
    }
}

loc_804D0F6C:
{
}

loc_804D0F70:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(127))) {
        goto loc_804D0F78;
    }
}

loc_804D0F74:
{
    r0 = 1;
}

loc_804D0F78:
{
}

loc_804D0F7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D0FD0;
    }
}

loc_804D0F80:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 16776960);
    r0_mdest_1 = (r0 & -16776961);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r27 = (r27 + 1);
    r30 = (r0 & 65535);
    goto loc_804D0FD0;
}

loc_804D0F94:
{
    r3 = r27;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804D5AA0u>(&func_804D5AA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D5AA0_155E = func_804D5AA0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804D5AA0_155E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D5AA0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = r3;
    goto loc_804D0FD0;
}

loc_804D0FA8:
{
    r3 = r27;
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x804D5BC0u>(&func_804D5BC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D5BC0_182F = func_804D5BC0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804D5BC0_182F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D5BC0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = r3;
    goto loc_804D0FD0;
}

loc_804D0FBC:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_804D0FC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D0FD0;
    }
}

loc_804D0FCC:
{
    r27 = (r4 + 4);
}

loc_804D0FD0:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804D0FD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1024;
    }
}

loc_804D0FDC:
{
    r31 = MemoryInline::FlatRead32((r13 + -15052));
    r26 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804D5C30u>(&func_804D5C30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D5C30_1CDB = func_804D5C30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804D5C30_1CDB);
        r4 = static_cast<uint32_t>(regargs_result_804D5C30_1CDB >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D5C30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = (r3 & 255);
}

loc_804D0FEC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804D1008;
    }
}

loc_804D0FF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15060));
}

loc_804D0FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D1024;
    }
}

loc_804D0FFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804D1004:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(127))) {
        goto loc_804D1024;
    }
}

loc_804D1008:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    // inline leaf 0x804D5CB0 (16 guest instruction(s))
}

loc_inl1_0x804D5CB0:
{
    r0 = 65536;
}

loc_inl1_0x804D5CB8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x804D5CC4;
    }
}

loc_inl1_0x804D5CBC:
{
    r3 = 0;
    goto loc_inl1_cont_804D5CB0;
}

loc_inl1_0x804D5CC4:
{
    r4 = 0x80630000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_3 & 1020);
    r4 = (r4 + -26152);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl1_0x804D5CD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D5CE8;
    }
}

loc_inl1_0x804D5CDC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 510);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
    goto loc_inl1_cont_804D5CB0;
}

loc_inl1_0x804D5CE8:
{
    r3 = 0;
}

loc_inl1_cont_804D5CB0:
{
    // end of inlined leaf 0x804D5CB0
    r0 = (r3 & 65535);
}

loc_804D1014:
{
    r30 = r3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D1024;
    }
}

loc_804D101C:
{
    r26 = 1;
    r31 = MemoryInline::FlatRead32((r13 + -15056));
}

loc_804D1024:
{
    MemoryInline::FlatWrite32(r28, r31);
    r3 = r26;
    r4 = (r30 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x804D0600u>(&func_804D0600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D0600_2739 = func_804D0600_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804D0600_2739);
        r4 = static_cast<uint32_t>(regargs_result_804D0600_2739 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804D0600u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r29, r3);
    r11 = (r1 + 48);
    r3 = r27;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D0EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D0EA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D0EA0 func_804D0EA0 preserves=true fpr_mask=0x00000000

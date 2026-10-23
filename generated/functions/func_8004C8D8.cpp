#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E790(CpuContext* ctx);
extern "C" uint64_t func_8027E790_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027E820(CpuContext* ctx);
extern "C" uint32_t func_8027E820_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027E8F0(CpuContext* ctx);
extern "C" uint64_t func_8027E8F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8004C8D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8004C8D8;

loc_8004C8D8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r5;
    r28 = r6;
    r0 = (r4 & 255);
}

loc_8004C900:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8004C928;
    }
}

loc_8004C904:
{
}

loc_8004C908:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8004C934;
    }
}

loc_8004C90C:
{
}

loc_8004C910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8004C940;
    }
}

loc_8004C914:
{
}

loc_8004C918:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8004C94C;
    }
}

loc_8004C91C:
{
}

loc_8004C920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8004C958;
    }
}

loc_8004C924:
{
    goto loc_8004C9EC;
}

loc_8004C928:
{
    r30 = MemoryInline::FlatRead16((r3 + 146));
    r29 = (r3 + 68);
    goto loc_8004C968;
}

loc_8004C934:
{
    r30 = MemoryInline::FlatRead16((r3 + 148));
    r29 = (r3 + 80);
    goto loc_8004C968;
}

loc_8004C940:
{
    r30 = MemoryInline::FlatRead16((r3 + 150));
    r29 = (r3 + 92);
    goto loc_8004C968;
}

loc_8004C94C:
{
    r30 = MemoryInline::FlatRead16((r3 + 152));
    r29 = (r3 + 104);
    goto loc_8004C968;
}

loc_8004C958:
{
    r30 = MemoryInline::FlatRead16((r3 + 154));
    r29 = (r3 + 116);
}

loc_8004C968:
{
    r3 = r29;
    ctx->lr = 0x8004C970u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x8027E854u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
}

loc_8004C974:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8004C9EC;
    }
}

loc_8004C978:
{
    r0 = (r28 & 255);
}

loc_8004C980:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8004C9D4;
    }
}

loc_8004C984:
{
    r3 = r29;
    ctx->lr = 0x8004C98Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027E820u>(&func_8027E820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027E820_F28 = func_8027E820_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027E820_F28;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E820u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8027E790u>(&func_8027E790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E790_11FA = func_8027E790_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027E790_11FA);
        r4 = static_cast<uint32_t>(regargs_result_8027E790_11FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = MemoryInline::FlatRead8((r1 + 14));
    r0 = (r0 & 248);
    r4 = (static_cast<int32_t>(r0) >> 3);
    r0 = MemoryInline::FlatRead8((r1 + 12));
    r0 = (r0 & 248);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    r0 = (r0 & 252);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r27 = (r0 & 65535);
}

loc_8004C9D4:
{
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r27));
    r0 = (r30 * 12);
    r3 = (r31 + r0);
    r3 = (r3 + 3584);
    r4 = (r27 & 65535);
    ctx->lr = 0x8004C9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8027E8F0u>(&func_8027E8F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E8F0_1A15 = func_8027E8F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E8F0_1A15);
        r4 = static_cast<uint32_t>(regargs_result_8027E8F0_1A15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E8F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8004C9EC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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

extern "C" void func_8004C8D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004C8D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004C8D8 func_8004C8D8 preserves=true fpr_mask=0x00000000

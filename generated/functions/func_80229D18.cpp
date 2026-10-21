#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027EC0C(CpuContext* ctx);
extern "C" uint64_t func_8027EC0C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_80229D18_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = arg_r6;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80229D18u);
    goto loc_80229D18;

loc_80229D18:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r4 = (r3 + 356);
    ctx->lr = 0x80229D40u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_6D9 = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_6D9);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_6D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
    r3 = r31;
    r4 = (r31 + 344);
    ctx->lr = 0x80229D50u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_A15 = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_A15);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_A15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = r3;
    r3 = r31;
    r4 = (r31 + 320);
    ctx->lr = 0x80229D60u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_D51 = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_D51);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_D51 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = r3;
    r3 = r31;
    r4 = (r31 + 332);
    ctx->lr = 0x80229D70u;
    if constexpr (KnownRegArgsCpuCall<0x8027EC0Cu>(&func_8027EC0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027EC0C_108D = func_8027EC0C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EC0C_108D);
        r4 = static_cast<uint32_t>(regargs_result_8027EC0C_108D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027EC0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80229D74:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_80229D94;
    }
}

loc_80229D78:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x80790000u;
    r4 = (r4 + 14480);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r4_addr_1 = (r4 + r28);
    r5 = MemoryInline::FlatRead8(r4_addr_1);
    goto loc_80229D98;
}

loc_80229D94:
{
    r5 = 0;
}

loc_80229D98:
{
}

loc_80229D9C:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80229DBC;
    }
}

loc_80229DA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 0x80790000u;
    r4 = (r4 + 14472);
    r4_addr_4 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_4);
    r4_addr_5 = (r4 + r29);
    r6 = MemoryInline::FlatRead8(r4_addr_5);
    goto loc_80229DC0;
}

loc_80229DBC:
{
    r6 = 0;
}

loc_80229DC0:
{
}

loc_80229DC4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_80229DE4;
    }
}

loc_80229DC8:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = 0x80790000u;
    r4 = (r4 + 14464);
    r4_addr_7 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_7);
    r4_addr_8 = (r4 + r30);
    r7 = MemoryInline::FlatRead8(r4_addr_8);
    goto loc_80229DE8;
}

loc_80229DE4:
{
    r7 = 0;
}

loc_80229DE8:
{
}

loc_80229DEC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80229E0C;
    }
}

loc_80229DF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = 0x80790000u;
    r4 = (r4 + 14488);
    r4_addr_10 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_10);
    r4_addr_11 = (r4 + r3);
    r0 = MemoryInline::FlatRead8(r4_addr_11);
    goto loc_80229E10;
}

loc_80229E0C:
{
    r0 = 0;
}

loc_80229E10:
{
}

loc_80229E14:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r6))) {
        goto loc_80229E1C;
    }
}

loc_80229E18:
{
    r6 = 0;
}

loc_80229E1C:
{
}

loc_80229E20:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r7))) {
        goto loc_80229E28;
    }
}

loc_80229E24:
{
    r7 = 0;
}

loc_80229E28:
{
}

loc_80229E2C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_80229E34;
    }
}

loc_80229E30:
{
    r7 = 0;
}

loc_80229E34:
{
    r3 = MemoryInline::FlatRead32((r31 + 2804));
    MemoryInline::FlatWrite8((r3 + 2621), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r31 + 2804));
    MemoryInline::FlatWrite8((r3 + 2622), static_cast<uint8_t>(r6));
    r3 = MemoryInline::FlatRead32((r31 + 2804));
    MemoryInline::FlatWrite8((r3 + 2623), static_cast<uint8_t>(r7));
    r3 = MemoryInline::FlatRead32((r31 + 2804));
    MemoryInline::FlatWrite8((r3 + 2624), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_80229D18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80229D18_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020EB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80229D18 func_80229D18 preserves=true fpr_mask=0x00000000

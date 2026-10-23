#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004BDBC(CpuContext* ctx);
extern "C" uint64_t func_8004BDBC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A9920(CpuContext* ctx);
extern "C" uint64_t func_802A9920_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801ECFD8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801ECFD8;

loc_801ECFD8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r28 = (r4 + 384);
    r29 = (r3 + 952);
    r3 = r29;
    r4 = 0;
    r5 = 404;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r27 = 0;
}

loc_801ED00C:
{
    r3 = r29;
    r4 = 101;
    r5 = MemoryInline::FlatRead16(r28);
    r6 = MemoryInline::FlatRead16((r28 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (r1 + 8);
    ctx->lr = 0x801ED024u;
    if constexpr (KnownRegArgsCpuCall<0x8004BDBCu>(&func_8004BDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004BDBC_897 = func_8004BDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BDBC_897);
        r4 = static_cast<uint32_t>(regargs_result_8004BDBC_897 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004BDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_801ED030:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(101))) {
        goto loc_801ED00C;
    }
}

loc_801ED034:
{
    r3 = r29;
    r4 = 101;
    ctx->lr = 0x801ED040u;
    if constexpr (KnownRegArgsCpuCall<0x802A9920u>(&func_802A9920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802A9920_D79 = func_802A9920_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A9920_D79);
        r4 = static_cast<uint32_t>(regargs_result_802A9920_D79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802A9920u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801ED048u;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_1106 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_1106;
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
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = 0;
    r31 = (r3 & 65535);
    goto loc_801ED088;
}

loc_801ED054:
{
    MemoryInline::FlatWrite16((r29 + 400), static_cast<uint16_t>(r30));
    MemoryInline::FlatWrite16((r29 + 402), static_cast<uint16_t>(r30));
    r3 = r29;
    r4 = 101;
    r5 = MemoryInline::FlatRead16(r28);
    r6 = MemoryInline::FlatRead16((r28 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = (r1 + 8);
    ctx->lr = 0x801ED074u;
    if constexpr (KnownRegArgsCpuCall<0x8004BDBCu>(&func_8004BDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8004BDBC_15E2 = func_8004BDBC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BDBC_15E2);
        r4 = static_cast<uint32_t>(regargs_result_8004BDBC_15E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004BDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r3 = r29;
    r4 = 101;
    ctx->lr = 0x801ED080u;
    if constexpr (KnownRegArgsCpuCall<0x802A9920u>(&func_802A9920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_802A9920_1A04 = func_802A9920_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802A9920_1A04);
        r4 = static_cast<uint32_t>(regargs_result_802A9920_1A04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x802A9920u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r27 = (r27 + 1);
    r28 = (r28 + 4);
}

loc_801ED088:
{
    r0 = (r27 & 65535);
}

loc_801ED090:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_801ED054;
    }
}

loc_801ED094:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801ECFD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801ECFD8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801ECFD8 func_801ECFD8 preserves=true fpr_mask=0x00000000

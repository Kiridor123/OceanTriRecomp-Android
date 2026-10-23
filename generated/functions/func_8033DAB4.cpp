#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033DA84(CpuContext* ctx);
extern "C" uint64_t func_8033DA84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8033DAB4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033DAB4;

loc_8033DAB4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r4;
    r31 = 0;
    r29 = 0x805E0000u;
    r3 = (r29 + 31216);
    r4 = (r4 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_514 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_514);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_514 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DAE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DB1C;
    }
}

loc_8033DAEC:
{
    r28 = 0;
}

loc_8033DAF0:
{
    r3 = (r29 + 31216);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_8E2 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_8E2);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_8E2 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DB08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DB10;
    }
}

loc_8033DB0C:
{
    r31 = (r31 | 2);
}

loc_8033DB10:
{
    r28 = (r28 + 1);
}

loc_8033DB18:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_8033DAF0;
    }
}

loc_8033DB1C:
{
    r3 = (r13 + -24044);
    r4 = (r27 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_CF8 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_CF8);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_CF8 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DB2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DB64;
    }
}

loc_8033DB30:
{
    r29 = 0;
}

loc_8033DB34:
{
    r3 = (r13 + -24044);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_10C7 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_10C7);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_10C7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DB4C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DB58;
    }
}

loc_8033DB50:
{
    r0 = (r31 | 4);
    r31 = (r0 & 65535);
}

loc_8033DB58:
{
    r29 = (r29 + 1);
}

loc_8033DB60:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_8033DB34;
    }
}

loc_8033DB64:
{
    r3 = (r13 + -24040);
    r4 = (r27 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_14F8 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_14F8);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_14F8 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DB74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DBAC;
    }
}

loc_8033DB78:
{
    r29 = 0;
}

loc_8033DB7C:
{
    r3 = (r13 + -24040);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_18CA = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_18CA);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_18CA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DB94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DBA0;
    }
}

loc_8033DB98:
{
    r0 = (r31 | 8);
    r31 = (r0 & 65535);
}

loc_8033DBA0:
{
    r29 = (r29 + 1);
}

loc_8033DBA8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_8033DB7C;
    }
}

loc_8033DBAC:
{
    r0 = (r27 & 255);
}

loc_8033DBB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8033DBC4;
    }
}

loc_8033DBB8:
{
}

loc_8033DBBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8033DC08;
    }
}

loc_8033DBC0:
{
    goto loc_8033DC4C;
}

loc_8033DBC4:
{
    r28 = 0;
    r29 = 0;
}

loc_8033DBCC:
{
    r3 = (r13 + -24056);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_1F05 = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_1F05);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_1F05 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DBE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DBEC;
    }
}

loc_8033DBE8:
{
    r28 = 1;
}

loc_8033DBEC:
{
    r29 = (r29 + 1);
}

loc_8033DBF4:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_8033DBCC;
    }
}

loc_8033DBF8:
{
}

loc_8033DBFC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8033DC4C;
    }
}

loc_8033DC00:
{
    r31 = (r31 | 16);
    goto loc_8033DC4C;
}

loc_8033DC08:
{
    r28 = 0;
    r29 = 0;
}

loc_8033DC10:
{
    r3 = (r13 + -24048);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r4 = (r30 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x8033DA84u>(&func_8033DA84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8033DA84_248D = func_8033DA84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DA84_248D);
        r4 = static_cast<uint32_t>(regargs_result_8033DA84_248D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8033DA84u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8033DC28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8033DC30;
    }
}

loc_8033DC2C:
{
    r28 = 1;
}

loc_8033DC30:
{
    r29 = (r29 + 1);
}

loc_8033DC38:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(3))) {
        goto loc_8033DC10;
    }
}

loc_8033DC3C:
{
}

loc_8033DC40:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8033DC4C;
    }
}

loc_8033DC44:
{
    r0 = (r31 | 32);
    r31 = (r0 & 65535);
}

loc_8033DC4C:
{
    r3 = r31;
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033DAB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033DAB4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033DAB4 func_8033DAB4 preserves=true fpr_mask=0x00000000

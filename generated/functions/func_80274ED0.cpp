#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80274ED0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80274ED0;

loc_80274ED0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r5;
    r30 = r6;
    r0 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r31 = 0;
}

loc_80274F08:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80274F34;
    }
}

loc_80274F0C:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80274F14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80274F34;
    }
}

loc_80274F18:
{
    r3 = r4;
    ctx->lr = 0x80274F20u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_606 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_606);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_606 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80274F2C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80274F34;
    }
}

loc_80274F30:
{
    r31 = 1;
}

loc_80274F34:
{
}

loc_80274F38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80274F5C;
    }
}

loc_80274F3C:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80274F44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80274F5C;
    }
}

loc_80274F48:
{
    r3 = r29;
    ctx->lr = 0x80274F50u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_B50 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_B50);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_B50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r3 + 7));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
}

loc_80274F5C:
{
}

loc_80274F60:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80275034;
    }
}

loc_80274F64:
{
    r3 = r28;
    r4 = 45;
    ctx->lr = 0x80274F70u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80274F74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274F88;
    }
}

loc_80274F78:
{
    r31 = (r31 + 2);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_80274FCC;
}

loc_80274F88:
{
    r3 = r28;
    r4 = 46;
    ctx->lr = 0x80274F94u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80274F98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274FAC;
    }
}

loc_80274F9C:
{
    r31 = (r31 + 3);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_80274FCC;
}

loc_80274FAC:
{
    r3 = r28;
    r4 = 47;
    ctx->lr = 0x80274FB8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80274FBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274FCC;
    }
}

loc_80274FC0:
{
    r31 = (r31 + 4);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80274FCC:
{
    r3 = r28;
    r4 = 48;
    ctx->lr = 0x80274FD8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80274FDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80274FF0;
    }
}

loc_80274FE0:
{
    r31 = (r31 + -1);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_80275034;
}

loc_80274FF0:
{
    r3 = r28;
    r4 = 49;
    ctx->lr = 0x80274FFCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80275000:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80275014;
    }
}

loc_80275004:
{
    r31 = (r31 + -2);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_80275034;
}

loc_80275014:
{
    r3 = r28;
    r4 = 50;
    ctx->lr = 0x80275020u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80275024:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80275034;
    }
}

loc_80275028:
{
    r31 = (r31 + -3);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80275034:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_8027503C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80275044;
    }
}

loc_80275040:
{
    r31 = 0;
}

loc_80275044:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_8027504C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(6))) {
        goto loc_80275054;
    }
}

loc_80275050:
{
    r31 = 6;
}

loc_80275054:
{
    r3 = (r31 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80274ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80274ED0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80274ED0 func_80274ED0 preserves=true fpr_mask=0x00000000

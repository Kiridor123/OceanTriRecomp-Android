#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DC2CC(CpuContext* ctx);
extern "C" uint64_t func_802DC2CC_ra38_1f6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802DDACC(CpuContext* ctx);
extern "C" uint64_t func_802DDACC_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_8034CAE0(CpuContext* ctx);
extern "C" uint64_t func_8034CAE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802DBBF4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802DBBF4;

loc_802DBBF4:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r3 = 0x806C0000u;
    r30 = (r3 + -376);
    r3 = 0;
    MemoryInline::FlatWriteRam8((r30 + 25), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r30 + 35));
}

loc_802DBC24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBC34;
    }
}

loc_802DBC28:
{
    MemoryInline::FlatWriteRam8((r30 + 39), static_cast<uint8_t>(r3));
    r3 = 0;
    goto loc_802DBFF8;
}

loc_802DBC34:
{
    r0 = MemoryInline::FlatRead8((r30 + 24));
}

loc_802DBC3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBC4C;
    }
}

loc_802DBC40:
{
}

loc_802DBC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802DBFEC;
    }
}

loc_802DBC48:
{
    goto loc_802DBFF4;
}

loc_802DBC4C:
{
    r3 = MemoryInline::FlatRead16((r30 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = MemoryInline::FlatRead16((r30 + 6));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = 10;
    r6 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8034CAE0u>(&func_8034CAE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_8034CAE0_CC5 = func_8034CAE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8034CAE0_CC5);
        r4 = static_cast<uint32_t>(regargs_result_8034CAE0_CC5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8034CAE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r31 = r3;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802DBC6C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_802DBFF4;
    }
}

loc_802DBC70:
{
    // inline leaf 0x8034CBB8 (12 guest instruction(s))
}

loc_inl0_0x8034CBB8:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -4792);
    r4 = MemoryInline::FlatRead32((r4 + 804));
}

loc_inl0_0x8034CBC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8034CBD4;
    }
}

loc_inl0_0x8034CBCC:
{
    r3 = 0;
    goto loc_inl0_cont_8034CBB8;
}

loc_inl0_0x8034CBD4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 36);
    r3 = (r4 + r0);
    r3 = (r3 + 20);
}

loc_inl0_cont_8034CBB8:
{
    // end of inlined leaf 0x8034CBB8
    r29 = r3;
}

loc_802DBC7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DBFF4;
    }
}

loc_802DBC80:
{
    r3 = (r30 + 60);
    r4 = r29;
    // inline leaf 0x8004EB58 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 4), r5);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x8004EB58
    r0 = MemoryInline::FlatRead32(r29);
}

loc_802DBC94:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_802DBFDC;
    }
}

loc_802DBC98:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 23888);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802DBFDCu:
        goto loc_802DBFDC;
        break;
    case 0x802DBCB0u:
        goto loc_802DBCB0;
        break;
    case 0x802DBD28u:
        goto loc_802DBD28;
        break;
    case 0x802DBDA0u:
        goto loc_802DBDA0;
        break;
    case 0x802DBE18u:
        goto loc_802DBE18;
        break;
    case 0x802DBE90u:
        goto loc_802DBE90;
        break;
    case 0x802DBEFCu:
        goto loc_802DBEFC;
        break;
    case 0x802DBF6Cu:
        goto loc_802DBF6C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802DBCB0:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBCB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBCD8;
    }
}

loc_802DBCBC:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBCC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBCD8;
    }
}

loc_802DBCC8:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 8));
}

loc_802DBCD4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBCFC;
    }
}

loc_802DBCD8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    r3 = 0;
    r4 = (r1 + 56);
    ctx->lr = 0x802DBCECu;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_1FC5 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_1FC5);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_1FC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 60);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBCFC:
{
    r3 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 8));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 25), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r30 + 39), static_cast<uint8_t>(r3));
    goto loc_802DBFE4;
}

loc_802DBD28:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBD30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBD50;
    }
}

loc_802DBD34:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBD3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBD50;
    }
}

loc_802DBD40:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 6));
}

loc_802DBD4C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBD74;
    }
}

loc_802DBD50:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r3 = 0;
    r4 = (r1 + 48);
    ctx->lr = 0x802DBD64u;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_2B79 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_2B79);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_2B79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 52);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBD74:
{
    r3 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 6));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 25), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r30 + 39), static_cast<uint8_t>(r3));
    goto loc_802DBFE4;
}

loc_802DBDA0:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBDA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBDC4;
    }
}

loc_802DBDAC:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBDB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBDC4;
    }
}

loc_802DBDB8:
{
    r0 = MemoryInline::FlatRead16((r30 + 42));
}

loc_802DBDC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_802DBDE8;
    }
}

loc_802DBDC4:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = 0;
    r4 = (r1 + 40);
    ctx->lr = 0x802DBDD8u;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_3701 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_3701);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_3701 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 44);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBDE8:
{
    r4 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 25), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r30 + 39), static_cast<uint8_t>(r4));
    goto loc_802DBFE4;
}

loc_802DBE18:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBE20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBE40;
    }
}

loc_802DBE24:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBE2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DBE40;
    }
}

loc_802DBE30:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 10));
}

loc_802DBE3C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBE64;
    }
}

loc_802DBE40:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = 0;
    r4 = (r1 + 32);
    ctx->lr = 0x802DBE54u;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_42AD = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_42AD);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_42AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 36);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBE64:
{
    r3 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 10));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 25), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r30 + 39), static_cast<uint8_t>(r3));
    goto loc_802DBFE4;
}

loc_802DBE90:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBE98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBEB8;
    }
}

loc_802DBE9C:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBEA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802DBEB8;
    }
}

loc_802DBEA8:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_802DBEB4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBEDC;
    }
}

loc_802DBEB8:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = 1;
    r4 = (r1 + 24);
    ctx->lr = 0x802DBECCu;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_4E64 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_4E64);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_4E64 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 28);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBEDC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 4));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    goto loc_802DBFE4;
}

loc_802DBEFC:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBF04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBF24;
    }
}

loc_802DBF08:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBF10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802DBF24;
    }
}

loc_802DBF14:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_802DBF20:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBF48;
    }
}

loc_802DBF24:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = 2;
    r4 = (r1 + 16);
    ctx->lr = 0x802DBF38u;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_597D = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_597D);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_597D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 20);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBF48:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 4));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    goto loc_802DBFE4;
}

loc_802DBF6C:
{
    r0 = MemoryInline::FlatRead8((r30 + 40));
}

loc_802DBF74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DBF94;
    }
}

loc_802DBF78:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_802DBF80:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802DBF94;
    }
}

loc_802DBF84:
{
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_802DBF90:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_802DBFB8;
    }
}

loc_802DBF94:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 3;
    r4 = (r1 + 8);
    ctx->lr = 0x802DBFA8u;
    if constexpr (KnownRegArgsCpuCall<0x802DDACCu>(&func_802DDACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802DDACC_64A1 = func_802DDACC_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802DDACC_64A1);
        r4 = static_cast<uint32_t>(regargs_result_802DDACC_64A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x802DDACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r30 + 44);
    r4 = (r1 + 12);
    // inline leaf 0x8005275C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8005275C
}

loc_802DBFB8:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 40), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r29 + 4));
    MemoryInline::FlatWriteRam16((r30 + 42), static_cast<uint16_t>(r0));
    r0 = (r31 & 255);
    MemoryInline::FlatWriteRam8((r30 + 48), static_cast<uint8_t>(r0));
    goto loc_802DBFE4;
}

loc_802DBFDC:
{
    r3 = 0;
    goto loc_802DBFF8;
}

loc_802DBFE4:
{
    r3 = 1;
    goto loc_802DBFF8;
}

loc_802DBFEC:
{
    ctx->lr = 0x802DBFF0u;
    if constexpr (KnownRegArgsCpuCall<0x802DC2CCu>(&func_802DC2CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        const auto regargs_result_802DC2CC_6D5C = func_802DC2CC_ra38_1f6_18_0(ctx, r3, r4, r5, f1.d, f2.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802DC2CC_6D5C);
        r4 = static_cast<uint32_t>(regargs_result_802DC2CC_6D5C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802DC2CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802DBFF8;
}

loc_802DBFF4:
{
    r3 = 0;
}

loc_802DBFF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DBBF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DBBF4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xC00003FF fpr_write=0xC00007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802DBBF4 func_802DBBF4 preserves=true fpr_mask=0x00000000

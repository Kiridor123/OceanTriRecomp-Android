#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802672D4(CpuContext* ctx);
extern "C" uint64_t func_802672D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8024BA60_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8024BA60;

loc_8024BA60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 774));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(39));
}

loc_8024BA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024BB1C;
    }
}

loc_8024BA88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024BAB4;
    }
}

loc_8024BA8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(36));
}

loc_8024BA90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024BAEC;
    }
}

loc_8024BA94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024BAA8;
    }
}

loc_8024BA98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(34));
}

loc_8024BA9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024BACC;
    }
}

loc_8024BAA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024BADC;
    }
}

loc_8024BAA4:
{
    goto loc_8024BCF8;
}

loc_8024BAA8:
{
}

loc_8024BAAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(38))) {
        goto loc_8024BB0C;
    }
}

loc_8024BAB0:
{
    goto loc_8024BAFC;
}

loc_8024BAB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(388));
}

loc_8024BAB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8024BB3C;
    }
}

loc_8024BABC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024BCF8;
    }
}

loc_8024BAC0:
{
}

loc_8024BAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(194))) {
        goto loc_8024BB2C;
    }
}

loc_8024BAC8:
{
    goto loc_8024BCF8;
}

loc_8024BACC:
{
    r0 = 0;
    r4 = 0;
    r30 = 3;
    goto loc_8024BB50;
}

loc_8024BADC:
{
    r0 = 0;
    r4 = 1;
    r30 = 10;
    goto loc_8024BB50;
}

loc_8024BAEC:
{
    r0 = 0;
    r4 = 2;
    r30 = 15;
    goto loc_8024BB50;
}

loc_8024BAFC:
{
    r0 = 1;
    r4 = 0;
    r30 = 3;
    goto loc_8024BB50;
}

loc_8024BB0C:
{
    r0 = 1;
    r4 = 1;
    r30 = 10;
    goto loc_8024BB50;
}

loc_8024BB1C:
{
    r0 = 1;
    r4 = 2;
    r30 = 15;
    goto loc_8024BB50;
}

loc_8024BB2C:
{
    r0 = 2;
    r4 = 1;
    r30 = 10;
    goto loc_8024BB50;
}

loc_8024BB3C:
{
    r0 = 2;
    r4 = 2;
    r30 = 15;
}

loc_8024BB50:
{
}

loc_8024BB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024BB6C;
    }
}

loc_8024BB58:
{
}

loc_8024BB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8024BB78;
    }
}

loc_8024BB60:
{
}

loc_8024BB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8024BB84;
    }
}

loc_8024BB68:
{
    goto loc_8024BB8C;
}

loc_8024BB6C:
{
    r3 = (r3 + r4);
    r31 = (r3 + 1147);
    goto loc_8024BB8C;
}

loc_8024BB78:
{
    r3 = (r3 + r4);
    r31 = (r3 + 1150);
    goto loc_8024BB8C;
}

loc_8024BB84:
{
    r3 = (r3 + r4);
    r31 = (r3 + 1153);
}

loc_8024BB8C:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r13 + -28128);
    r3_addr_1 = (r3 + r4);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8024BBA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_8024BCF8;
    }
}

loc_8024BBAC:
{
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 143;
    ctx->lr = 0x8024BBC4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024BBC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024BBF0;
    }
}

loc_8024BBCC:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_8024BBE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024BBF0;
    }
}

loc_8024BBE4:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r0 = (r3 + 1);
    r30 = (r0 & 65535);
}

loc_8024BBF0:
{
    r3 = r29;
    r4 = 144;
    ctx->lr = 0x8024BBFCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024BC00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024BC28;
    }
}

loc_8024BC04:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_8024BC18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024BC28;
    }
}

loc_8024BC1C:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(31));
    r3 = (r3_rot_3 & 2147483647);
    r0 = (r3 + 1);
    r30 = (r0 & 65535);
}

loc_8024BC28:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_5 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r3 = (r3 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r30));
    r0 = (r0 * r30);
    r0 = (r3 - r0);
}

loc_8024BC44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8024BCF8;
    }
}

loc_8024BC48:
{
    r3 = r29;
    r4 = 141;
    ctx->lr = 0x8024BC54u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024BC58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024BC74;
    }
}

loc_8024BC5C:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_2F0D = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_2F0D;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_8024BC70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024BCF8;
    }
}

loc_8024BC74:
{
    r3 = r29;
    r4 = 142;
    ctx->lr = 0x8024BC80u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8024BC84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024BCA0;
    }
}

loc_8024BC88:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_3497 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_3497;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_8024BC9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024BCF8;
    }
}

loc_8024BCA0:
{
    r3 = r29;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_38A8 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_38A8);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_38A8 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8024BCB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8024BCCC;
    }
}

loc_8024BCB4:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_3C59 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_3C59;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_8024BCC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8024BCF8;
    }
}

loc_8024BCCC:
{
    r3 = r29;
    r4 = 2;
    r5 = 22;
    r6 = MemoryInline::FlatRead16((r29 + 774));
    ctx->lr = 0x8024BCE0u;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_802672D4_40DF = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_40DF);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_40DF >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r29 + 774));
    r5 = -1;
    ctx->lr = 0x8024BCF0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x80272E94u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_8024BCF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8024BA60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8024BA60_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8024BA60 func_8024BA60 preserves=true fpr_mask=0x00000000

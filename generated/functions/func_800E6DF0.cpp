#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E5784(CpuContext* ctx);
extern "C" uint64_t func_800E5784_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_800E6FE0(CpuContext* ctx);
extern "C" uint32_t func_800E6FE0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E70DC(CpuContext* ctx);
extern "C" uint64_t func_800E70DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E9670(CpuContext* ctx);
extern "C" uint32_t func_800E9670_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800ED8F0(CpuContext* ctx);
extern "C" uint64_t func_800ED8F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800E6DF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800E6DF0;

loc_800E6DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457468 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    // end of inlined leaf 0x80457468
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r4 = r23;
    r5 = r24;
    ctx->lr = 0x800E6E24u;
    if constexpr (KnownRegArgsCpuCall<0x800E70DCu>(&func_800E70DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800E70DC_E9D = func_800E70DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E70DC_E9D);
        r4 = static_cast<uint32_t>(regargs_result_800E70DC_E9D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E70DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_800E6E28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6FC8;
    }
}

loc_800E6E2C:
{
    r29 = 0;
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(24));
    r30 = (r30_rot_1 & -16777216);
    r31 = 1;
    r20 = 0x800E0000u;
    goto loc_800E6FB4;
}

loc_800E6E40:
{
    r3 = r22;
    r4 = r29;
    // inline leaf 0x800E709C (16 guest instruction(s))
}

loc_inl1_0x800E709C:
{
    r3 = (r3 + 8);
}

loc_inl1_0x800E70A4:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl1_0x800E70AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800E70B8;
    }
}

loc_inl1_0x800E70B0:
{
    r3 = 0;
    goto loc_inl1_cont_800E709C;
}

loc_inl1_0x800E70B8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl1_0x800E70C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_inl1_0x800E70CC;
    }
}

loc_inl1_0x800E70C4:
{
    r3 = 0;
    goto loc_inl1_cont_800E709C;
}

loc_inl1_0x800E70CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 * 20);
    r3 = (r3 + r0);
}

loc_inl1_cont_800E709C:
{
    // end of inlined leaf 0x800E709C
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r23 + 8));
    r4 = MemoryInline::FlatRead8((r3 + 17));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800E6E5C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_800E6FC8;
    }
}

loc_800E6E60:
{
    r4 = MemoryInline::FlatRead8((r23 + 9));
    r0 = MemoryInline::FlatRead16((r3 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E6E6C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_800E6FB0;
    }
}

loc_800E6E70:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E6E78:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_800E6FB0;
    }
}

loc_800E6E7C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_800E6FB0;
    }
}

loc_800E6E80:
{
    r3 = r22;
    r4 = MemoryInline::FlatRead8((r28 + 16));
    // inline leaf 0x800E705C (16 guest instruction(s))
}

loc_inl2_0x800E705C:
{
    r3 = (r3 + 16);
}

loc_inl2_0x800E7064:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800E706C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800E7078;
    }
}

loc_inl2_0x800E7070:
{
    r3 = 0;
    goto loc_inl2_cont_800E705C;
}

loc_inl2_0x800E7078:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl2_0x800E7080:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_inl2_0x800E708C;
    }
}

loc_inl2_0x800E7084:
{
    r3 = 0;
    goto loc_inl2_cont_800E705C;
}

loc_inl2_0x800E708C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_inl2_cont_800E705C:
{
    // end of inlined leaf 0x800E705C
    r27 = r3;
}

loc_800E6E94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6FB0;
    }
}

loc_800E6E98:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800E6EA0u;
    if constexpr (KnownRegArgsCpuCall<0x800ED8F0u>(&func_800ED8F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800ED8F0_20D6 = func_800ED8F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800ED8F0_20D6);
        r4 = static_cast<uint32_t>(regargs_result_800ED8F0_20D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800ED8F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r26 = r3;
}

loc_800E6EA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6FB0;
    }
}

loc_800E6EAC:
{
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r31));
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5F7Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r21 + 120));
    MemoryInline::FlatWrite32((r26 + 16), r0);
    r0 = MemoryInline::FlatRead8((r23 + 3));
    MemoryInline::FlatWrite8((r26 + 24), static_cast<uint8_t>(r0));
    r0 = (r24 & 255);
    MemoryInline::FlatWrite8((r26 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r23 + 6));
    r0 = (r0 & 1);
}

loc_800E6EDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E6EFC;
    }
}

loc_800E6EE0:
{
    r0 = MemoryInline::FlatRead8((r23 + 11));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r23 + 10));
    r0 = (r0 | -16711680);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r26 + 20), r0);
    goto loc_800E6F14;
}

loc_800E6EFC:
{
    r0 = MemoryInline::FlatRead8((r23 + 10));
    r3 = (r0 | r30);
    r0 = MemoryInline::FlatRead8((r23 + 11));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r26 + 20), r0);
}

loc_800E6F14:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r19 = r3;
    r3 = r22;
    r4 = MemoryInline::FlatRead16(r27);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x800E701C (16 guest instruction(s))
}

loc_inl3_0x800E701C:
{
    r3 = (r3 + 24);
}

loc_inl3_0x800E7024:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x800E702C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800E7038;
    }
}

loc_inl3_0x800E7030:
{
    r3 = 0;
    goto loc_inl3_cont_800E701C;
}

loc_inl3_0x800E7038:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl3_0x800E7040:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_inl3_0x800E704C;
    }
}

loc_inl3_0x800E7044:
{
    r3 = 0;
    goto loc_inl3_cont_800E701C;
}

loc_inl3_0x800E704C:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_inl3_cont_800E701C:
{
    // end of inlined leaf 0x800E701C
    MemoryInline::FlatWrite32((r19 + 64), r3);
    r3 = MemoryInline::FlatRead32((r25 + 20));
}

loc_800E6F38:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_800E6F40;
    }
}

loc_800E6F3C:
{
    r3 = MemoryInline::FlatRead8(r28);
}

loc_800E6F40:
{
    r4 = (r20 + 22328);
    r5 = r26;
    ctx->lr = 0x800E6F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8046EEE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r19 + 68), r3);
    r3 = MemoryInline::FlatRead32((r19 + 68));
}

loc_800E6F58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6F98;
    }
}

loc_800E6F5C:
{
    r0 = MemoryInline::FlatRead32((r19 + 64));
}

loc_800E6F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E6F98;
    }
}

loc_800E6F68:
{
    r3 = r22;
    r4 = MemoryInline::FlatRead8((r28 + 17));
    if constexpr (KnownRegArgsCpuCall<0x800E6FE0u>(&func_800E6FE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E6FE0_3585 = func_800E6FE0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_800E6FE0_3585;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E6FE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = r3;
    r3 = r19;
    r5 = r28;
    r6 = r27;
    r7 = r23;
    r8 = r25;
    r9 = r21;
    ctx->lr = 0x800E6F94u;
    if constexpr (KnownRegArgsCpuCall<0x800E5784u>(&func_800E5784)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800E5784_3944 = func_800E5784_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800E5784_3944);
        r4 = static_cast<uint32_t>(regargs_result_800E5784_3944 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E5784u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_800E6FB0;
}

loc_800E6F98:
{
}

loc_800E6F9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6FA4;
    }
}

loc_800E6FA0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
}

loc_800E6FA4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDAECu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E6FB0:
{
    r29 = (r29 + 1);
}

loc_800E6FB4:
{
    r3 = r22;
    r4 = 3;
    ctx->lr = 0x800E6FC0u;
    if constexpr (KnownRegArgsCpuCall<0x800E9670u>(&func_800E9670)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800E9670_416F = func_800E9670_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800E9670_416F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E9670u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_800E6FC4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r3))) {
        goto loc_800E6E40;
    }
}

loc_800E6FC8:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E6DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E6DF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E6DF0 func_800E6DF0 preserves=true fpr_mask=0x00000000

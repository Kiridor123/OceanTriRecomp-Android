#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80226AB0(CpuContext* ctx);
extern "C" uint64_t func_80226AB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80226CD4(CpuContext* ctx);
extern "C" uint64_t func_80226CD4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_8027492C(CpuContext* ctx);
extern "C" uint64_t func_8027492C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027EE88(CpuContext* ctx);
extern "C" uint64_t func_8027EE88_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80227DF0_ra38_32_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227DF0;

loc_80227DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r27 = (r29 + 200);
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80227E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227E64;
    }
}

loc_80227E3C:
{
    r3 = r27;
    r4 = r28;
    r5 = 7;
    r6 = 1;
    ctx->lr = 0x80227E50u;
    if constexpr (KnownRegArgsCpuCall<0x80226AB0u>(&func_80226AB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80226AB0_BFD = func_80226AB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80226AB0_BFD);
        r4 = static_cast<uint32_t>(regargs_result_80226AB0_BFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226AB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15620));
    MemoryInline::FlatWriteFloat32((r29 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15756));
    MemoryInline::FlatWriteFloat32((r29 + 172), f0.d);
    goto loc_80227E78;
}

loc_80227E64:
{
    r3 = r27;
    r4 = r28;
    r5 = 7;
    r6 = 2;
    ctx->lr = 0x80227E78u;
    if constexpr (KnownRegArgsCpuCall<0x80226CD4u>(&func_80226CD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80226CD4_1167 = func_80226CD4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80226CD4_1167);
        r4 = static_cast<uint32_t>(regargs_result_80226CD4_1167 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226CD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80227E78:
{
    r3 = (r28 + 464);
    ctx->lr = 0x80227E80u;
    if constexpr (KnownRegArgsCpuCall<0x8027EE88u>(&func_8027EE88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027EE88_157D = func_8027EE88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027EE88_157D);
        r4 = static_cast<uint32_t>(regargs_result_8027EE88_157D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027EE88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r3 = (r3 + 276);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80227E94:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(6))) {
        goto loc_80227ED8;
    }
}

loc_80227E98:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80227EA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227EC8;
    }
}

loc_80227EA4:
{
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80227EB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80227EC8;
    }
}

loc_80227EB4:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 6;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
    goto loc_80227ED8;
}

loc_80227EC8:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r4 = 6;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E3154u>(ctx);
}

loc_80227ED8:
{
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80227EE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227EF0;
    }
}

loc_80227EE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    goto loc_802281B0;
}

loc_80227EF0:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80227EF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80227F0C;
    }
}

loc_80227EFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15792));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
}

loc_80227F0C:
{
    r3 = MemoryInline::FlatRead32((r28 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80227F1C:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r27 = (r0 & 255);
    r3 = r28;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80227F38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80227F48;
    }
}

loc_80227F3C:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80227F44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80227F60;
    }
}

loc_80227F48:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 164), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 172), f0.d);
    goto loc_80227FD0;
}

loc_80227F60:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x8027492Cu>(&func_8027492C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027492C_264E = func_8027492C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027492C_264E);
        r4 = static_cast<uint32_t>(regargs_result_8027492C_264E >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027492Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80227F70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80227F94;
    }
}

loc_80227F74:
{
}

loc_80227F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80227FA4;
    }
}

loc_80227F7C:
{
}

loc_80227F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80227FB4;
    }
}

loc_80227F84:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    goto loc_80227FC0;
}

loc_80227F94:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15616));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    goto loc_80227FC0;
}

loc_80227FA4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15612));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
    goto loc_80227FC0;
}

loc_80227FB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15636));
    MemoryInline::FlatWriteFloat32((r29 + 128), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 136), f0.d);
}

loc_80227FC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15620));
    MemoryInline::FlatWriteFloat32((r29 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15756));
    MemoryInline::FlatWriteFloat32((r29 + 172), f0.d);
}

loc_80227FD0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    r0 = (r30 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1051));
}

loc_80227FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022808C;
    }
}

loc_80227FE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228020;
    }
}

loc_80227FE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1002));
}

loc_80227FE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022808C;
    }
}

loc_80227FEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228008;
    }
}

loc_80227FF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(356));
}

loc_80227FF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228050;
    }
}

loc_80227FF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022817C;
    }
}

loc_80227FFC:
{
}

loc_80228000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(313))) {
        goto loc_80228050;
    }
}

loc_80228004:
{
    goto loc_8022817C;
}

loc_80228008:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_8022800C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802280C8;
    }
}

loc_80228010:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022817C;
    }
}

loc_80228014:
{
}

loc_80228018:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1004))) {
        goto loc_8022817C;
    }
}

loc_8022801C:
{
    goto loc_802280C8;
}

loc_80228020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1115));
}

loc_80228024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228140;
    }
}

loc_80228028:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228044;
    }
}

loc_8022802C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80228030:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802280C8;
    }
}

loc_80228034:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8022817C;
    }
}

loc_80228038:
{
}

loc_8022803C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1053))) {
        goto loc_8022817C;
    }
}

loc_80228040:
{
    goto loc_802280C8;
}

loc_80228044:
{
}

loc_80228048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1161))) {
        goto loc_80228140;
    }
}

loc_8022804C:
{
    goto loc_8022817C;
}

loc_80228050:
{
}

loc_80228054:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228080;
    }
}

loc_80228058:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10560);
    ctx->lr = 0x80228068u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_3AD5 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3AD5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10520);
    ctx->lr = 0x8022807Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_3F82 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3F82;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_802281B0;
}

loc_80228080:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    goto loc_802281B0;
}

loc_8022808C:
{
}

loc_80228090:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_802280BC;
    }
}

loc_80228094:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10480);
    ctx->lr = 0x802280A4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_455B = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_455B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10424);
    ctx->lr = 0x802280B8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_4A08 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4A08;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_802281B0;
}

loc_802280BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    goto loc_802281B0;
}

loc_802280C8:
{
}

loc_802280CC:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228134;
    }
}

loc_802280D0:
{
    r0 = (r30 & 65535);
}

loc_802280D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1003))) {
        goto loc_802280E4;
    }
}

loc_802280DC:
{
}

loc_802280E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1052))) {
        goto loc_8022810C;
    }
}

loc_802280E4:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10392);
    ctx->lr = 0x802280F4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_512A = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_512A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10328);
    ctx->lr = 0x80228108u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_55D7 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_55D7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_802281B0;
}

loc_8022810C:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10264);
    ctx->lr = 0x8022811Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_5A7B = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_5A7B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10200);
    ctx->lr = 0x80228130u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_5F28 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_5F28;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_802281B0;
}

loc_80228134:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    goto loc_802281B0;
}

loc_80228140:
{
}

loc_80228144:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80228170;
    }
}

loc_80228148:
{
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10136);
    ctx->lr = 0x80228158u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_6501 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_6501;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    r3 = r28;
    r4 = 0x805C0000u;
    r4 = (r4 + -10096);
    ctx->lr = 0x8022816Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_69AE = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_69AE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    goto loc_802281B0;
}

loc_80228170:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    MemoryInline::FlatWriteFloat32((r29 + 100), f0.d);
    goto loc_802281B0;
}

loc_8022817C:
{
    r3 = r28;
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_8022818C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022819C;
    }
}

loc_80228190:
{
    r0 = MemoryInline::FlatRead8((r29 + 17));
}

loc_80228198:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802281A8;
    }
}

loc_8022819C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
    goto loc_802281B0;
}

loc_802281A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    MemoryInline::FlatWriteFloat32((r29 + 100), f1.d);
}

loc_802281B0:
{
}

loc_802281B4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(9))) {
        goto loc_802281DC;
    }
}

loc_802281B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15648));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15768));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15792));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 164), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15756));
    MemoryInline::FlatWriteFloat32((r29 + 172), f0.d);
}

loc_802281DC:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80227DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80227DF0_ra38_32_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000033 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80227DF0 func_80227DF0 preserves=true fpr_mask=0x00000000

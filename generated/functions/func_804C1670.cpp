#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468848(CpuContext* ctx);
extern "C" uint64_t func_80468848_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_804EBC50(CpuContext* ctx);
extern "C" uint32_t func_804EBC50_ra70_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EDD00(CpuContext* ctx);
extern "C" uint64_t func_804EDD00_ra0_0_18_0(CpuContext*);
extern "C" void func_804EEE30(CpuContext* ctx);
extern "C" uint64_t func_804EEE30_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804EF250(CpuContext* ctx);
extern "C" uint64_t func_804EF250_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804F1A30(CpuContext* ctx);
extern "C" uint64_t func_804F1A30_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804F2BA0(CpuContext* ctx);
extern "C" uint64_t func_804F2BA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804C1670_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804C1670u);
    goto loc_804C1670;

loc_804C1670:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = 0x80750000u;
    r7 = 1127219200;
    r31 = (r31 + -26112);
    r5 = MemoryInline::FlatRead32((r2 + -2120));
    r0 = MemoryInline::FlatRead16((r2 + -2116));
    r6 = (r3 * 1400);
    r4 = (r31 + 0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r7);
    r28 = r3;
    r30 = (r4 + r6);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r7);
    r4 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r5);
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r1 + 16), static_cast<uint16_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C16D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_804C1D98;
    }
}

loc_804C16D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 1216));
    r27 = MemoryInline::FlatRead8((r30 + 314));
    r0 = (r3 + 16);
}

loc_804C16E8:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_804C16F0;
    }
}

loc_804C16EC:
{
    r27 = 0;
}

loc_804C16F0:
{
}

loc_804C16F4:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(16))) {
        goto loc_804C170C;
    }
}

loc_804C16F8:
{
    r0 = (r27 + -16);
    r3 = MemoryInline::FlatRead32((r30 + 1212));
    r0 = (r0 * 56);
    r29 = (r3 + r0);
    goto loc_804C1718;
}

loc_804C170C:
{
    r0 = (r27 * 56);
    r3 = (r30 + r0);
    r29 = (r3 + 316);
}

loc_804C1718:
{
    r3 = r28;
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF9D0u>(ctx);
    r3 = r28;
    ctx->lr = 0x804C172Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EF250u>(&func_804EF250)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EF250_1576 = func_804EF250_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EF250_1576);
        r4 = static_cast<uint32_t>(regargs_result_804EF250_1576 >> 32);
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
        InvokeDirectCpu<0x804EF250u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite8((r29 + 54), static_cast<uint8_t>(r3));
    r0 = (r27 + 1);
    MemoryInline::FlatWrite8((r30 + 314), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 1216));
    r4 = MemoryInline::FlatRead8((r30 + 315));
    r0 = (r3 + 16);
}

loc_804C1748:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_804C1754;
    }
}

loc_804C174C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r30 + 315), static_cast<uint8_t>(r0));
}

loc_804C1754:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 1392));
}

loc_804C1760:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_804C1774;
    }
}

loc_804C1764:
{
}

loc_804C1768:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_804C1774;
    }
}

loc_804C176C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1396), static_cast<uint8_t>(r0));
}

loc_804C1774:
{
    r0 = MemoryInline::FlatRead8((r30 + 1396));
}

loc_804C177C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C18A0;
    }
}

loc_804C1780:
{
    r3 = r28;
    r5 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x804C1790u;
    if constexpr (KnownRegArgsCpuCall<0x804EEE30u>(&func_804EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804EEE30_1DB1 = func_804EEE30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EEE30_1DB1);
        r4 = static_cast<uint32_t>(regargs_result_804EEE30_1DB1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 16));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 * r5);
    r0 = (r0 * r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C17FC;
    }
}

loc_804C17A8:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r4 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 1296), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 1300), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 1304), f0.d);
    goto loc_804C180C;
}

loc_804C17FC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2112));
    MemoryInline::FlatWriteFloat32((r30 + 1296), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 1300), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 1304), f0.d);
}

loc_804C180C:
{
    r3 = r28;
    r5 = (r1 + 12);
    r4 = 1;
    ctx->lr = 0x804C181Cu;
    if constexpr (KnownRegArgsCpuCall<0x804EEE30u>(&func_804EEE30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_804EEE30_2901 = func_804EEE30_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EEE30_2901);
        r4 = static_cast<uint32_t>(regargs_result_804EEE30_2901 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x804EEE30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r1 + 16));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16((r1 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 * r5);
    r0 = (r0 * r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1888;
    }
}

loc_804C1834:
{
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r3 ^ -2147483648);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = (r4 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 1308), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 1312), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 1316), f0.d);
    goto loc_804C1898;
}

loc_804C1888:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2108));
    MemoryInline::FlatWriteFloat32((r30 + 1308), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 1312), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 1316), f0.d);
}

loc_804C1898:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1396), static_cast<uint8_t>(r0));
}

loc_804C18A0:
{
    r0 = MemoryInline::FlatRead8((r30 + 1372));
}

loc_804C18A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1960;
    }
}

loc_804C18AC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1373));
}

loc_804C18B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C18D8;
    }
}

loc_804C18B8:
{
    ctx->lr = 0x804C18BCu;
    if constexpr (KnownRegArgsCpuCall<0x804EDD00u>(&func_804EDD00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804EDD00_35F8 = func_804EDD00_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804EDD00_35F8);
        r4 = static_cast<uint32_t>(regargs_result_804EDD00_35F8 >> 32);
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
        InvokeDirectCpu<0x804EDD00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_804C18C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804C18D0;
    }
}

loc_804C18C8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2104));
    goto loc_804C18DC;
}

loc_804C18D0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2100));
    goto loc_804C18DC;
}

loc_804C18D8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
}

loc_804C18DC:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    f2.d = (-(f0.d));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2188));
    f1.d = PpcFmulsInline(f30.d, f30.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    f0.d = PpcFmulsInline(f31.d, f31.d);
    MemoryInline::FlatWriteFloat32((r30 + 228), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 232), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80468848u>(&func_80468848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80468848_3D31 = func_80468848_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80468848_3D31);
        r4 = static_cast<uint32_t>(regargs_result_80468848_3D31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
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
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80468848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f2.d = MemoryInline::FlatReadFloat32((r30 + 228));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_804C1914:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C1920;
    }
}

loc_804C1918:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f2.d));
    goto loc_804C1924;
}

loc_804C1920:
{
    f30.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f2.d));
}

loc_804C1924:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 232));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804C1930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C193C;
    }
}

loc_804C1934:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    goto loc_804C1940;
}

loc_804C193C:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
}

loc_804C1940:
{
    SetCRFloatResident(cr, 0, f30.d, f31.d);
}

loc_804C1944:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C194C;
    }
}

loc_804C1948:
{
    goto loc_804C1950;
}

loc_804C194C:
{
    f30.d = f31.d;
}

loc_804C1950:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f30.d));
    r0 = 0;
    MemoryInline::FlatWriteFloat32((r30 + 236), f0.d);
    MemoryInline::FlatWrite8((r30 + 1372), static_cast<uint8_t>(r0));
}

loc_804C1960:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_804C1968:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C19E8;
    }
}

loc_804C196C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C1998;
    }
}

loc_804C1970:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_804C1974:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C19D0;
    }
}

loc_804C1978:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C198C;
    }
}

loc_804C197C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804C1980:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C19C0;
    }
}

loc_804C1984:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C19C8;
    }
}

loc_804C1988:
{
    goto loc_804C1D98;
}

loc_804C198C:
{
}

loc_804C1990:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_804C1D98;
    }
}

loc_804C1994:
{
    goto loc_804C19E0;
}

loc_804C1998:
{
}

loc_804C199C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(253))) {
        goto loc_804C19B4;
    }
}

loc_804C19A0:
{
}

loc_804C19A4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(251))) {
        goto loc_804C19C0;
    }
}

loc_804C19A8:
{
}

loc_804C19AC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(18))) {
        goto loc_804C1D98;
    }
}

loc_804C19B0:
{
    goto loc_804C19D8;
}

loc_804C19B4:
{
}

loc_804C19B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_804C19C0;
    }
}

loc_804C19BC:
{
    goto loc_804C1D98;
}

loc_804C19C0:
{
    r27 = 0;
    goto loc_804C19EC;
}

loc_804C19C8:
{
    r27 = 2;
    goto loc_804C19EC;
}

loc_804C19D0:
{
    r27 = 4;
    goto loc_804C19EC;
}

loc_804C19D8:
{
    r27 = 6;
    goto loc_804C19EC;
}

loc_804C19E0:
{
    r27 = 8;
    goto loc_804C19EC;
}

loc_804C19E8:
{
    r27 = 10;
}

loc_804C19EC:
{
    r0 = MemoryInline::FlatRead8((r30 + 1366));
}

loc_804C19F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C19FC;
    }
}

loc_804C19F8:
{
    r27 = (r27 + 1);
}

loc_804C19FC:
{
    r3 = r28;
    ctx->lr = 0x804C1A04u;
    if constexpr (KnownRegArgsCpuCall<0x804F1A30u>(&func_804F1A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804F1A30_516F = func_804F1A30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804F1A30_516F);
        r4 = static_cast<uint32_t>(regargs_result_804F1A30_516F >> 32);
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
        InvokeDirectCpu<0x804F1A30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804C1A08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C1A14;
    }
}

loc_804C1A0C:
{
    r4 = MemoryInline::FlatRead8((r30 + 1369));
    goto loc_804C1A18;
}

loc_804C1A14:
{
    r4 = 0;
}

loc_804C1A18:
{
    r3 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + -18776);
    r27 = (r3 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_804C1A30:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_804C1AAC;
    }
}

loc_804C1A34:
{
    r0 = MemoryInline::FlatRead32((r30 + 1292));
}

loc_804C1A3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1A70;
    }
}

loc_804C1A40:
{
    r0 = MemoryInline::FlatRead8((r30 + 1370));
}

loc_804C1A48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1A70;
    }
}

loc_804C1A4C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1370), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 0;
    r12 = MemoryInline::FlatRead32((r30 + 1292));
    ctr = r12;
    ctx->lr = 0x804C1A68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 1371), static_cast<uint8_t>(r0));
}

loc_804C1A70:
{
    r0 = MemoryInline::FlatRead8((r30 + 1368));
}

loc_804C1A78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1AC4;
    }
}

loc_804C1A7C:
{
    r0 = 1;
    r5 = 0x804C0000u;
    MemoryInline::FlatWrite8((r30 + 1368), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = MemoryInline::FlatRead8(r27);
    r5 = (r5 + 5584);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804F1B20u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C1A9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1AC4;
    }
}

loc_804C1AA0:
{
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8((r30 + 1369), static_cast<uint8_t>(r0));
    goto loc_804C1AC4;
}

loc_804C1AAC:
{
    r4 = MemoryInline::FlatRead8((r27 + 1));
    r0 = MemoryInline::FlatRead8((r29 + 54));
}

loc_804C1AB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_804C1AC4;
    }
}

loc_804C1ABC:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF2A0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C1AC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804C1ACC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_804C1D98;
    }
}

loc_804C1AD0:
{
    r3 = MemoryInline::FlatRead8((r13 + -15250));
}

loc_804C1AD8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1B10;
    }
}

loc_804C1ADC:
{
    r0 = MemoryInline::FlatRead8((r13 + -15251));
}

loc_804C1AE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1B10;
    }
}

loc_804C1AE8:
{
    r5 = 0x804C0000u;
    r3 = r28;
    r5 = (r5 + 5520);
    r4 = 170;
    ctx->lr = 0x804C1AFCu;
    if constexpr (KnownRegArgsCpuCall<0x804F2BA0u>(&func_804F2BA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804F2BA0_6531 = func_804F2BA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804F2BA0_6531);
        r4 = static_cast<uint32_t>(regargs_result_804F2BA0_6531 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804F2BA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804C1B00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1B04:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r0));
    goto loc_804C1D98;
}

loc_804C1B10:
{
    r0 = MemoryInline::FlatRead8((r13 + -15251));
}

loc_804C1B18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1B64;
    }
}

loc_804C1B1C:
{
    r0 = MemoryInline::FlatRead8((r13 + -15252));
}

loc_804C1B24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1B64;
    }
}

loc_804C1B28:
{
}

loc_804C1B2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1B48;
    }
}

loc_804C1B30:
{
    // inline leaf 0x804EBBF0 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x804EBBF0
}

loc_804C1B38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1B3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r0));
    goto loc_804C1D98;
}

loc_804C1B48:
{
    // inline leaf 0x804EBC00 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x804EBC00
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r13 + -15252), static_cast<uint8_t>(r3));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r0));
    goto loc_804C1D98;
}

loc_804C1B64:
{
}

loc_804C1B68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1B6C:
{
    r0 = MemoryInline::FlatRead8((r13 + -15252));
}

loc_804C1B74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1B78:
{
    r0 = MemoryInline::FlatRead8((r13 + -15254));
}

loc_804C1B80:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_804C1D98;
    }
}

loc_804C1B84:
{
}

loc_804C1B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C1BA0;
    }
}

loc_804C1B8C:
{
}

loc_804C1B90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804C1BC8;
    }
}

loc_804C1B94:
{
}

loc_804C1B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804C1C50;
    }
}

loc_804C1B9C:
{
    goto loc_804C1D98;
}

loc_804C1BA0:
{
    r5 = 0x804C0000u;
    r3 = r28;
    r5 = (r5 + 5552);
    r4 = 0;
    ctx->lr = 0x804C1BB4u;
    if constexpr (KnownRegArgsCpuCall<0x804F2BA0u>(&func_804F2BA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804F2BA0_7836 = func_804F2BA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804F2BA0_7836);
        r4 = static_cast<uint32_t>(regargs_result_804F2BA0_7836 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804F2BA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804C1BB8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1BBC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -15250), static_cast<uint8_t>(r0));
    goto loc_804C1D98;
}

loc_804C1BC8:
{
    r0 = MemoryInline::FlatRead8((r29 + 50));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804C1BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(127))) {
        goto loc_804C1BE0;
    }
}

loc_804C1BD8:
{
}

loc_804C1BDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-128))) {
        goto loc_804C1C20;
    }
}

loc_804C1BE0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2152));
    r4 = (r31 + 5648);
    r3 = (r31 + 5680);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r13 + -15253), static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 5648), 0, 64u, false, true);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 0u, (r31 + 5648), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 32u, (r31 + 5680), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 8u, (r4 + 8), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 40u, (r3 + 8), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 16u, (r4 + 16), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r3 + 16), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 24u, (r4 + 24), f0.d);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 56u, (r3 + 24), f0.d);
    goto loc_804C1D98;
}

loc_804C1C20:
{
    r3 = MemoryInline::FlatRead16((r13 + -15256));
    r0 = MemoryInline::FlatRead8((r13 + -20264));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
}

loc_804C1C38:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_804C1D98;
    }
}

loc_804C1C3C:
{
    r3 = 2;
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r0));
    goto loc_804C1D98;
}

loc_804C1C50:
{
    r0 = MemoryInline::FlatRead8((r29 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1D98;
    }
}

loc_804C1C5C:
{
    r4 = MemoryInline::FlatRead16((r13 + -15256));
    r3 = (r31 + 5648);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
    f2.d = MemoryInline::FlatReadFloat64((r31 + 5648));
    r4 = (r5 + -1);
    r0 = MemoryInline::FlatRead16((r29 + 42));
    r4 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2136));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f4.d = (f3.d - f1.d);
    f6.d = MemoryInline::FlatReadFloat64((r3 + 8));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f7.d = (f4.d * f2.d);
    f5.d = MemoryInline::FlatReadFloat64((r3 + 16));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f3.d = (f3.d - f0.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f4.d = (f2.d - f0.d);
    f8.d = (f7.d + f3.d);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f3.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f7.d = (f2.d - f1.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f8.d = (f8.d / f4.d);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r13 + -20260));
    MemoryInline::FlatWriteRamFloat64((r31 + 5648), f8.d);
    f8.d = (f7.d * f6.d);
    r0 = MemoryInline::FlatRead16((r29 + 44));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f7.d = (f4.d - f0.d);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f6.d = (f4.d - f0.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f8.d = (f8.d + f6.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f6.d = (f4.d - f1.d);
    f7.d = (f8.d / f7.d);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRamFloat64((r3 + 8), f7.d);
    f7.d = (f6.d * f5.d);
    r0 = MemoryInline::FlatRead16((r29 + 46));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f5.d = (f4.d - f0.d);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = (f4.d - f0.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f6.d = (f7.d + f6.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r5);
    f4.d = (f4.d - f1.d);
    f5.d = (f6.d / f5.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRamFloat64((r3 + 16), f5.d);
    f5.d = (f4.d * f3.d);
    r0 = MemoryInline::FlatRead16((r29 + 48));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f3.d = (f1.d - f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = (f1.d - f0.d);
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f4.d = (f5.d + f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = (f4.d / f3.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_804C1D84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804C1D98;
    }
}

loc_804C1D88:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r0));
    r4 = 4;
    ctx->lr = 0x804C1D98u;
    if constexpr (KnownRegArgsCpuCall<0x804EBC50u>(&func_804EBC50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804EBC50_9718 = func_804EBC50_ra70_1fe_8_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804EBC50_9718;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EBC50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_804C1D98:
{
    r12 = MemoryInline::FlatRead32((r30 + 1356));
}

loc_804C1DA0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_804C1DB0;
    }
}

loc_804C1DA4:
{
    r3 = r28;
    ctr = r12;
    ctx->lr = 0x804C1DB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804C1DB0:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 64));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C1670(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C1670_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C1670 func_804C1670 preserves=true fpr_mask=0x00000000

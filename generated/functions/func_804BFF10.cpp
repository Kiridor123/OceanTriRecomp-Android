#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EBC20(CpuContext* ctx);
extern "C" uint32_t func_804EBC20_ra70_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804EBC80(CpuContext* ctx);
extern "C" uint32_t func_804EBC80_ra70_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804BFF10_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804BFF10u);
    goto loc_804BFF10;

loc_804BFF10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = 0x804C0000u;
    r31 = (r31 + -1104);
    r30 = (r3 + 96);
    r29 = r4;
    r0 = MemoryInline::FlatRead32((r13 + -15288));
    stackword5 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
}

loc_804BFF48:
{
    stackword6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BFF58;
    }
}

loc_804BFF50:
{
    r31 = 0x804C0000u;
    r31 = (r31 + -800);
}

loc_804BFF58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 40), 0, 15u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 40));
}

loc_804BFF60:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(1))) {
        goto loc_804BFFE8;
    }
}

loc_804BFF64:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 54));
    r0 = (r5 + 253);
    r0 = (r0 & 255);
}

loc_804BFF74:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_804BFFE8;
    }
}

loc_804BFF78:
{
    r0 = MemoryInline::FlatRead8((r3 + 1365));
}

loc_804BFF80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BFFBC;
    }
}

loc_804BFF84:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r0));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r3 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2200));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWrite32(r30, r3);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWriteFloat32((r30 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f2.d);
}

loc_804BFFBC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r4 + 48));
    r12 = r31;
    r5 = MemoryInline::FlatRead8((r29 + 49));
    r3 = r30;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r6 = MemoryInline::FlatRead32((r13 + -20304));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r7 = MemoryInline::FlatRead32((r13 + -20300));
    ctr = r12;
    ctx->lr = 0x804BFFE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_804C07C4;
}

loc_804BFFE8:
{
}

loc_804BFFEC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(2))) {
        goto loc_804C0170;
    }
}

loc_804BFFF0:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 54));
    r0 = (r5 + 250);
    r0 = (r0 & 255);
}

loc_804C0000:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_804C0170;
    }
}

loc_804C0004:
{
    r0 = MemoryInline::FlatRead8((r3 + 1365));
}

loc_804C000C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C005C;
    }
}

loc_804C0010:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r7));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r5 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    guest_range_1 = MemoryInline::ResolveRangeHost(r30, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r30 + 16), r0);
    r0 = MemoryInline::FlatRead16((r3 + 1284));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r30 + 12), r5);
    r6 = MemoryInline::FlatRead32((r13 + -15272));
    r5 = MemoryInline::FlatRead32((r13 + -15268));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r30 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r30 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 4), r7);
    }
    MemoryInline::WriteResolved32(guest_range_1, 0u, r30, r7);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r0));
}

loc_804C005C:
{
    r12 = r31;
    r3 = (r30 + 12);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r29 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -20296));
    r7 = MemoryInline::FlatRead32((r13 + -20292));
    ctr = r12;
    ctx->lr = 0x804C007Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = r31;
    r3 = (r30 + 20);
    r4 = MemoryInline::FlatRead16((r29 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r29 + 50));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -20296));
    r7 = MemoryInline::FlatRead32((r13 + -20292));
    ctr = r12;
    ctx->lr = 0x804C009Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -20288));
    r3 = MemoryInline::FlatRead8((r29 + 52));
    r0 = MemoryInline::FlatRead32((r13 + -20284));
}

loc_804C00AC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C00BC;
    }
}

loc_804C00B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0104;
}

loc_804C00BC:
{
}

loc_804C00C0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C00D0;
    }
}

loc_804C00C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0104;
}

loc_804C00D0:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_804C0104:
{
    r4 = MemoryInline::FlatRead32((r13 + -20288));
    r3 = MemoryInline::FlatRead8((r29 + 53));
    r0 = MemoryInline::FlatRead32((r13 + -20284));
}

loc_804C0114:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C0124;
    }
}

loc_804C0118:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C0124:
{
}

loc_804C0128:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0138;
    }
}

loc_804C012C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C0138:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C0170:
{
}

loc_804C0174:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(17))) {
        goto loc_804C03A0;
    }
}

loc_804C0178:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 54));
}

loc_804C0180:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_804C03A0;
    }
}

loc_804C0184:
{
    r0 = MemoryInline::FlatRead8((r3 + 1365));
}

loc_804C018C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C01DC;
    }
}

loc_804C0190:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r7));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r5 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    guest_range_2 = MemoryInline::ResolveRangeHost(r30, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r30 + 16), r0);
    r0 = MemoryInline::FlatRead16((r3 + 1284));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r30 + 12), r5);
    r6 = MemoryInline::FlatRead32((r13 + -15272));
    r5 = MemoryInline::FlatRead32((r13 + -15268));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r30 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r30 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r30 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r30 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r30 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r30 + 4), r7);
    }
    MemoryInline::WriteResolved32(guest_range_2, 0u, r30, r7);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r0));
}

loc_804C01DC:
{
    r12 = r31;
    r3 = (r30 + 12);
    r4 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r29 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead32((r13 + -20296));
    r7 = MemoryInline::FlatRead32((r13 + -20292));
    ctr = r12;
    ctx->lr = 0x804C01FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -15280));
    r3 = MemoryInline::FlatRead16((r29 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r13 + -20268));
}

loc_804C020C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C021C;
    }
}

loc_804C0210:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    goto loc_804C0264;
}

loc_804C021C:
{
}

loc_804C0220:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0230;
    }
}

loc_804C0224:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    goto loc_804C0264;
}

loc_804C0230:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
}

loc_804C0264:
{
    r4 = MemoryInline::FlatRead32((r13 + -15280));
    r3 = MemoryInline::FlatRead16((r29 + 50));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r13 + -20268));
}

loc_804C0274:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C0284;
    }
}

loc_804C0278:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    goto loc_804C02CC;
}

loc_804C0284:
{
}

loc_804C0288:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0298;
    }
}

loc_804C028C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    goto loc_804C02CC;
}

loc_804C0298:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
}

loc_804C02CC:
{
    r4 = MemoryInline::FlatRead32((r13 + -15284));
    r3 = MemoryInline::FlatRead8((r29 + 52));
    r0 = MemoryInline::FlatRead32((r13 + -20272));
}

loc_804C02DC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C02EC;
    }
}

loc_804C02E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0334;
}

loc_804C02EC:
{
}

loc_804C02F0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0300;
    }
}

loc_804C02F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0334;
}

loc_804C0300:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_804C0334:
{
    r4 = MemoryInline::FlatRead32((r13 + -15284));
    r3 = MemoryInline::FlatRead8((r29 + 53));
    r0 = MemoryInline::FlatRead32((r13 + -20272));
}

loc_804C0344:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r4))) {
        goto loc_804C0354;
    }
}

loc_804C0348:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C0354:
{
}

loc_804C0358:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0368;
    }
}

loc_804C035C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C0368:
{
    r3 = (r3 - r4);
    r0 = (r0 - r4);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C03A0:
{
}

loc_804C03A4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(16))) {
        goto loc_804C04F0;
    }
}

loc_804C03A8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 54));
}

loc_804C03B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_804C04F0;
    }
}

loc_804C03B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1365));
}

loc_804C03BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C040C;
    }
}

loc_804C03C0:
{
    r7 = 0;
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r7));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    r5 = MemoryInline::FlatRead32((r13 + -15272));
    r0 = MemoryInline::FlatRead32((r13 + -15268));
    guest_range_3 = MemoryInline::ResolveRangeHost(r30, 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 16u, (r30 + 16), r0);
    r0 = MemoryInline::FlatRead16((r3 + 1284));
    MemoryInline::WriteResolved32(guest_range_3, 12u, (r30 + 12), r5);
    r6 = MemoryInline::FlatRead32((r13 + -15272));
    r5 = MemoryInline::FlatRead32((r13 + -15268));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r30 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r30 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r30 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r30 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r30 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r30 + 4), r7);
    }
    MemoryInline::WriteResolved32(guest_range_3, 0u, r30, r7);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r0));
}

loc_804C040C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
    r5 = MemoryInline::FlatRead32((r13 + -15284));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 44));
    r0 = MemoryInline::FlatRead32((r13 + -20272));
}

loc_804C0430:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r5))) {
        goto loc_804C043C;
    }
}

loc_804C0434:
{
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0484;
}

loc_804C043C:
{
}

loc_804C0440:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C0450;
    }
}

loc_804C0444:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    goto loc_804C0484;
}

loc_804C0450:
{
    r3 = (r3 - r5);
    r0 = (r0 - r5);
    r3 = (r3 ^ -2147483648);
    stackword19 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword19));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
}

loc_804C0484:
{
    r5 = MemoryInline::FlatRead32((r13 + -15284));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r4 + 45));
    r0 = MemoryInline::FlatRead32((r13 + -20272));
}

loc_804C0494:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r5))) {
        goto loc_804C04A4;
    }
}

loc_804C0498:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2208));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C04A4:
{
}

loc_804C04A8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_804C04B8;
    }
}

loc_804C04AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C04B8:
{
    r3 = (r3 - r5);
    r0 = (r0 - r5);
    r3 = (r3 ^ -2147483648);
    stackword21 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword21));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword22));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    goto loc_804C07C4;
}

loc_804C04F0:
{
}

loc_804C04F4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(3))) {
        goto loc_804C07C4;
    }
}

loc_804C04F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r4 + 54));
}

loc_804C0500:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_804C07C4;
    }
}

loc_804C0504:
{
    r0 = MemoryInline::FlatRead8((r3 + 1365));
}

loc_804C050C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C0558;
    }
}

loc_804C0510:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1365), static_cast<uint8_t>(r0));
    r7 = 0x80750000u;
    r6 = 0x80750000u;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2152));
    r5 = (r7 + -20464);
    r3 = (r6 + -20432);
    MemoryInline::FlatWrite8((r13 + -15254), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r13 + -15253), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRamFloat64((r7 + -20464), f0.d);
    MemoryInline::FlatWriteRamFloat64((r6 + -20432), f0.d);
    MemoryInline::FlatWriteRamFloat64((r5 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat64((r5 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat64((r5 + 24), f0.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 24), f0.d);
}

loc_804C0558:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r4 + 51));
    // inline leaf 0x804EBC10 (2 guest instruction(s))
    r3 = 0;
    // end of inlined leaf 0x804EBC10
}

loc_804C0564:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C0574;
    }
}

loc_804C0568:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 72), r0);
    goto loc_804C07C4;
}

loc_804C0574:
{
    r0 = MemoryInline::FlatRead8((r13 + -15254));
}

loc_804C057C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_804C058C;
    }
}

loc_804C0580:
{
    r0 = -2;
    MemoryInline::FlatWrite32((r30 + 72), r0);
    goto loc_804C07C4;
}

loc_804C058C:
{
    r0 = MemoryInline::FlatRead8((r29 + 50));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804C0598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(127))) {
        goto loc_804C05A4;
    }
}

loc_804C059C:
{
}

loc_804C05A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-128))) {
        goto loc_804C05B0;
    }
}

loc_804C05A4:
{
    r0 = -3;
    MemoryInline::FlatWrite32((r30 + 72), r0);
    goto loc_804C07C4;
}

loc_804C05B0:
{
    r3 = r29;
    r4 = (r30 + 8);
    r5 = 4;
    ctx->lr = 0x804C05C0u;
    if constexpr (KnownRegArgsCpuCall<0x804EBC20u>(&func_804EBC20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_804EBC20_7CEF = func_804EBC20_ra70_1fe_8_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804EBC20_7CEF;
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EBC20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_804C05C4:
{
    MemoryInline::FlatWrite32((r30 + 72), r3);
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_804C078C;
    }
}

loc_804C05CC:
{
    r4 = 0x80750000u;
    r0 = MemoryInline::FlatRead8((r13 + -15253));
    f1.d = MemoryInline::FlatReadFloat32((r13 + -20260));
    r3 = (r4 + -20432);
    f0.d = MemoryInline::FlatReadFloat64((r4 + -20432));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804C05E4:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2196));
    r6 = (r30 + 16);
    f5.d = (f1.d * f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r30 + 8));
    f4.d = MemoryInline::FlatReadFloat64((r3 + 8));
    r7 = (r30 + 24);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f3.d = MemoryInline::FlatReadFloat64((r3 + 16));
    f5.d = (f5.d + f0.d);
    f2.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f6.d = (f1.d * f4.d);
    r8 = (r30 + 32);
    f4.d = (f5.d / f7.d);
    MemoryInline::FlatWriteRamFloat64((r4 + -20432), f4.d);
    f4.d = (f1.d * f3.d);
    f5.d = MemoryInline::FlatReadFloat64((r30 + 16));
    f3.d = (f1.d * f2.d);
    f2.d = (f6.d + f5.d);
    f2.d = (f2.d / f7.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 8), f2.d);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 24));
    f2.d = (f4.d + f2.d);
    f2.d = (f2.d / f7.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 16), f2.d);
    f2.d = MemoryInline::FlatReadFloat64((r30 + 32));
    f2.d = (f3.d + f2.d);
    f2.d = (f2.d / f7.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 24), f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804C078C;
    }
}

loc_804C0658:
{
    r5 = MemoryInline::FlatRead16((r13 + -15256));
    r4 = 0x80750000u;
    f11.d = MemoryInline::FlatReadFloat64((r2 + -2176));
    r3 = (r4 + -20464);
    r5 = (r5 + 1);
    f4.d = MemoryInline::FlatReadFloat64((r4 + -20464));
    r9 = (r5 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    r0 = (r9 + -1);
    f10.d = MemoryInline::FlatReadFloat64((r2 + -2136));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = (f2.d - f10.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f5.d = (f3.d - f11.d);
    f3.d = MemoryInline::FlatReadFloat64((r3 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f8.d = (f5.d * f4.d);
    f5.d = MemoryInline::FlatReadFloat64((r3 + 16));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f7.d = (f2.d - f10.d);
    MemoryInline::FlatWrite16((r13 + -15256), static_cast<uint16_t>(r5));
    f2.d = (f4.d - f11.d);
    f9.d = (f8.d + f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    f8.d = (f2.d * f3.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    f4.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f9.d = (f9.d / f6.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f6.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r9);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f6.d = (f6.d - f11.d);
    MemoryInline::FlatWriteRamFloat64((r4 + -20464), f9.d);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f4.d = (f4.d - f10.d);
    f2.d = (f2.d - f10.d);
    f5.d = (f6.d * f5.d);
    f6.d = MemoryInline::FlatReadFloat64(r6);
    f3.d = (f3.d - f11.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r9);
    f6.d = (f8.d + f6.d);
    f3.d = (f3.d * f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f6.d = (f6.d / f7.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 8), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f10.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804C072C:
{
    f0.d = MemoryInline::FlatReadFloat64(r7);
    f0.d = (f5.d + f0.d);
    f4.d = (f0.d / f4.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 16), f4.d);
    f0.d = MemoryInline::FlatReadFloat64(r8);
    f0.d = (f3.d + f0.d);
    f1.d = (f0.d / f2.d);
    MemoryInline::FlatWriteRamFloat64((r3 + 24), f1.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804C078C;
    }
}

loc_804C0750:
{
    f0.d = (f9.d + f6.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -15253), static_cast<uint8_t>(r0));
    r4 = r29;
    r3 = (r13 + -15264);
    f0.d = (f4.d + f0.d);
    f1.d = (f1.d + f0.d);
    ctx->lr = 0x804C0770u;
    if constexpr (KnownRegArgsCpuCall<0x804EBC80u>(&func_804EBC80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_804EBC80_92FA = func_804EBC80_ra70_1fe_8_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804EBC80_92FA;
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804EBC80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r30 + 72), r3);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2144));
    f1.d = MemoryInline::FlatReadFloat64((r13 + -15264));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804C0780:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804C078C;
    }
}

loc_804C0784:
{
    r0 = -4;
    MemoryInline::FlatWrite32((r30 + 72), r0);
}

loc_804C078C:
{
    r3 = 0x80750000u;
    f0.d = MemoryInline::FlatReadFloat64((r3 + -20432));
    r3 = (r3 + -20432);
    MemoryInline::FlatWriteFloat64((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 8));
    MemoryInline::FlatWriteFloat64((r30 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 16));
    MemoryInline::FlatWriteFloat64((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r3 + 24));
    MemoryInline::FlatWriteFloat64((r30 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r13 + -15264));
    MemoryInline::FlatWriteFloat64(r30, f0.d);
    r0 = MemoryInline::FlatRead8((r13 + -15253));
    MemoryInline::FlatWrite32((r30 + 76), r0);
}

loc_804C07C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BFF10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BFF10_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BFF10 func_804BFF10 preserves=true fpr_mask=0x00000000

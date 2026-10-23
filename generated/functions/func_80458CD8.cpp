#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456D8C(CpuContext* ctx);
extern "C" uint64_t func_80456D8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80456DA4(CpuContext* ctx);
extern "C" uint64_t func_80456DA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457C1C(CpuContext* ctx);
extern "C" uint64_t func_80457C1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80457DCC(CpuContext* ctx);
extern "C" uint64_t func_80457DCC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804584D0(CpuContext* ctx);
extern "C" uint64_t func_804584D0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80458BD4(CpuContext* ctx);
extern "C" uint32_t func_80458BD4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80458CD8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;

    goto loc_80458CD8;

loc_80458CD8:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r4 = (r1 + 16);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 656));
    ctx->lr = 0x80458CF8u;
    if constexpr (KnownRegArgsCpuCall<0x80457C1Cu>(&func_80457C1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80457C1C_C2B = func_80457C1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457C1C_C2B);
        r4 = static_cast<uint32_t>(regargs_result_80457C1C_C2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80457C1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_80458D00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458D08;
    }
}

loc_80458D04:
{
    ctx->lr = 0x80458D08u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80456D8C_1152 = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_1152);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_1152 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80458D08:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 1);
}

loc_80458D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458D20;
    }
}

loc_80458D18:
{
    r8 = MemoryInline::FlatRead32((r30 + 636));
    goto loc_80458D24;
}

loc_80458D20:
{
    r8 = MemoryInline::FlatRead32((r30 + 644));
}

loc_80458D24:
{
    r0 = MemoryInline::FlatRead32((r30 + 660));
    MemoryInline::FlatWrite32((r30 + 648), r8);
}

loc_80458D30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458E00;
    }
}

loc_80458D34:
{
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r6 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80458D44:
{
    r4 = MemoryInline::FlatRead32((r1 + 28));
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 40), r7);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 44), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 52), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 60), r0);
    }
    r0 = MemoryInline::FlatRead32((r30 + 644));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 68), r8);
    }
    r0 = MemoryInline::FlatRead32((r30 + 636));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 72), r0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80458D88;
    }
}

loc_80458D80:
{
    r3 = 0;
    goto loc_80458D90;
}

loc_80458D88:
{
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (r0 & 127);
}

loc_80458D90:
{
    r3 = (r3 & 255);
    r0 = (r3 + -2);
}

loc_80458D9C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_80458DC4;
    }
}

loc_80458DA0:
{
    r0 = (r3 + -15);
}

loc_80458DA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80458DC4;
    }
}

loc_80458DAC:
{
}

loc_80458DB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_80458DD0;
    }
}

loc_80458DB4:
{
}

loc_80458DB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80458DC4;
    }
}

loc_80458DBC:
{
    ctx->lr = 0x80458DC0u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80456D8C_25F6 = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_25F6);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_25F6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80458DD0;
}

loc_80458DC4:
{
    r3 = (r1 + 40);
    ctx->lr = 0x80458DCCu;
    if constexpr (KnownRegArgsCpuCall<0x80457DCCu>(&func_80457DCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80457DCC_2D26 = func_80457DCC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457DCC_2D26);
        r4 = static_cast<uint32_t>(regargs_result_80457DCC_2D26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80457DCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80458D90;
}

loc_80458DD0:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = 0;
    r4 = MemoryInline::FlatRead32((r1 + 68));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r30 + 660), r3);
    r3 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r30 + 664), r3);
    MemoryInline::FlatWrite32((r30 + 668), r0);
    MemoryInline::FlatWrite32((r30 + 672), r4);
    goto loc_80458E08;
}

loc_80458E00:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 672), r0);
}

loc_80458E08:
{
    r5 = MemoryInline::FlatRead32((r1 + 24));
    r7 = MemoryInline::FlatRead32((r1 + 16));
    r6 = MemoryInline::FlatRead32((r1 + 20));
}

loc_80458E18:
{
    r4 = MemoryInline::FlatRead32((r1 + 28));
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 40), r7);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 44), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 52), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 56), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 60), r0);
    }
    r0 = MemoryInline::FlatRead32((r30 + 644));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r30 + 648));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 68), r0);
    r0 = MemoryInline::FlatRead32((r30 + 636));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 72), r0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80458E60;
    }
}

loc_80458E58:
{
    r27 = 0;
    goto loc_80458E68;
}

loc_80458E60:
{
    r0 = MemoryInline::FlatRead8(r5);
    r27 = (r0 & 127);
}

loc_80458E68:
{
    r3 = (r27 & 255);
    r0 = (r3 + -2);
}

loc_80458E74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9))) {
        goto loc_80458F94;
    }
}

loc_80458E78:
{
}

loc_80458E7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_80458EA4;
    }
}

loc_80458E80:
{
}

loc_80458E84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_80458EC4;
    }
}

loc_80458E88:
{
}

loc_80458E8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(15))) {
        goto loc_80458EE4;
    }
}

loc_80458E90:
{
}

loc_80458E94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80458F94;
    }
}

loc_80458E98:
{
}

loc_80458E9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_80458F94;
    }
}

loc_80458EA0:
{
    goto loc_80458F8C;
}

loc_80458EA4:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = (r1 + 12);
    r3 = MemoryInline::FlatRead32((r30 + 660));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    if constexpr (KnownRegArgsCpuCall<0x80456DA4u>(&func_80456DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80456DA4_42E3 = func_80456DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80456DA4_42E3);
        r4 = static_cast<uint32_t>(regargs_result_80456DA4_42E3 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80456DA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458FA4;
    }
}

loc_80458EC0:
{
    goto loc_80458F94;
}

loc_80458EC4:
{
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = (r1 + 12);
    r3 = MemoryInline::FlatRead32((r30 + 660));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    if constexpr (KnownRegArgsCpuCall<0x80456DA4u>(&func_80456DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80456DA4_47E0 = func_80456DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80456DA4_47E0);
        r4 = static_cast<uint32_t>(regargs_result_80456DA4_47E0 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80456DA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458FA4;
    }
}

loc_80458EE0:
{
    goto loc_80458F94;
}

loc_80458EE4:
{
    r29 = MemoryInline::FlatRead32((r1 + 48));
    r28 = 0;
    r31 = MemoryInline::FlatRead32((r30 + 660));
    r27 = r29;
    goto loc_80458F20;
}

loc_80458EF8:
{
    r4 = MemoryInline::FlatRead32((r27 + 12));
    r3 = r31;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80456DA4u>(&func_80456DA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80456DA4_4D3C = func_80456DA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80456DA4_4D3C);
        r4 = static_cast<uint32_t>(regargs_result_80456DA4_4D3C >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80456DA4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80458F18;
    }
}

loc_80458F10:
{
    r0 = 1;
    goto loc_80458F30;
}

loc_80458F18:
{
    r27 = (r27 + 4);
    r28 = (r28 + 1);
}

loc_80458F20:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
}

loc_80458F28:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80458EF8;
    }
}

loc_80458F2C:
{
    r0 = 0;
}

loc_80458F30:
{
}

loc_80458F34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80458F94;
    }
}

loc_80458F38:
{
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r3 = r30;
    r4 = (r1 + 16);
    r5 = r28;
    ctx->lr = 0x80458F4Cu;
    if constexpr (KnownRegArgsCpuCall<0x804584D0u>(&func_804584D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804584D0_53FA = func_804584D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804584D0_53FA);
        r4 = static_cast<uint32_t>(regargs_result_804584D0_53FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804584D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r5 = MemoryInline::FlatRead32((r30 + 648));
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r28 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 664));
    r4_addr_2 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_2, r0);
    r4 = r4_addr_2;
    r0 = MemoryInline::FlatRead32((r30 + 660));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 668));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite32((r4 + 20), r28);
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r28 + 4));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r5 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80458BD4u>(&func_80458BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        const auto regargs_result_80458BD4_5E06 = func_80458BD4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80458BD4_5E06;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80458BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    goto loc_80458F94;
}

loc_80458F8C:
{
    ctx->lr = 0x80458F90u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80456D8C_634D = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_634D);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_634D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80458FA4;
}

loc_80458F94:
{
    r3 = (r1 + 40);
    ctx->lr = 0x80458F9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80457DCCu>(&func_80457DCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80457DCC_6A7D = func_80457DCC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457DCC_6A7D);
        r4 = static_cast<uint32_t>(regargs_result_80457DCC_6A7D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80457DCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r27 = r3;
    goto loc_80458E68;
}

loc_80458FA4:
{
    r0 = (r27 & 255);
}

loc_80458FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80459040;
    }
}

loc_80458FB0:
{
    r31 = MemoryInline::FlatRead32((r1 + 48));
    r3 = r30;
    r4 = (r1 + 16);
    r5 = r31;
    ctx->lr = 0x80458FC4u;
    if constexpr (KnownRegArgsCpuCall<0x804584D0u>(&func_804584D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804584D0_72ED = func_804584D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804584D0_72ED);
        r4 = static_cast<uint32_t>(regargs_result_804584D0_72ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804584D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead32((r30 + 648));
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 664));
    r4_addr_3 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_3, r0);
    r4 = r4_addr_3;
    r0 = MemoryInline::FlatRead32((r30 + 660));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 668));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 660));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80458FF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_80459014;
    }
}

loc_80458FF4:
{
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 664));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_80459024;
}

loc_80459014:
{
    r3 = MemoryInline::FlatRead32((r30 + 664));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80459024:
{
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r5 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80458BD4u>(&func_80458BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        const auto regargs_result_80458BD4_7FB0 = func_80458BD4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80458BD4_7FB0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80458BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    goto loc_804590CC;
}

loc_80459040:
{
    r31 = MemoryInline::FlatRead32((r1 + 48));
    r3 = r30;
    r4 = (r1 + 16);
    r5 = r31;
    ctx->lr = 0x80459054u;
    if constexpr (KnownRegArgsCpuCall<0x804584D0u>(&func_804584D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804584D0_855A = func_804584D0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804584D0_855A);
        r4 = static_cast<uint32_t>(regargs_result_804584D0_855A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804584D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead32((r30 + 648));
    r3 = MemoryInline::FlatRead16((r31 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r30 + 664));
    r4_addr_4 = (r4 + r3);
    MemoryInline::FlatWrite32(r4_addr_4, r0);
    r4 = r4_addr_4;
    r0 = MemoryInline::FlatRead32((r30 + 660));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r0 = MemoryInline::FlatRead32((r30 + 668));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 660));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80459080:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_804590A4;
    }
}

loc_80459084:
{
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 664));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    goto loc_804590B4;
}

loc_804590A4:
{
    r3 = MemoryInline::FlatRead32((r30 + 664));
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_804590B4:
{
    r5 = MemoryInline::FlatRead32((r1 + 20));
    r3 = r30;
    r0 = MemoryInline::FlatRead16((r31 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 36));
    r5 = (r5 + r0);
    if constexpr (KnownRegArgsCpuCall<0x80458BD4u>(&func_80458BD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        const auto regargs_result_80458BD4_925F = func_80458BD4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80458BD4_925F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80458BD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
}

loc_804590CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80458CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80458CD8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80458CD8 func_80458CD8 preserves=true fpr_mask=0x00000000

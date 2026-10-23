#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126388(CpuContext* ctx);
extern "C" uint64_t func_80126388_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801304DC(CpuContext* ctx);
extern "C" uint64_t func_801304DC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802F8C00_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802F8C00;

loc_802F8C00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r28 = 0;
    MemoryInline::FlatWrite32((r3 + 448), r28);
    r4 = 2;
    ctx->lr = 0x802F8C38u;
    if constexpr (KnownRegArgsCpuCall<0x801304DCu>(&func_801304DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801304DC_7C9 = func_801304DC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801304DC_7C9);
        r4 = static_cast<uint32_t>(regargs_result_801304DC_7C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x801304DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 10), 0, 472u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 470u, (r29 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_802F8C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F8C60;
    }
}

loc_802F8C4C:
{
}

loc_802F8C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F8D68;
    }
}

loc_802F8C54:
{
}

loc_802F8C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_802F8EB0;
    }
}

loc_802F8C5C:
{
    goto loc_802F8F3C;
}

loc_802F8C60:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 10));
}

loc_802F8C68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802F8C80;
    }
}

loc_802F8C6C:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F8C8C;
}

loc_802F8C80:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r28));
}

loc_802F8C8C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 471u, (r29 + 481));
}

loc_802F8C94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_802F8CA4;
    }
}

loc_802F8C98:
{
}

loc_802F8C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_802F8CEC;
    }
}

loc_802F8CA0:
{
    goto loc_802F8D34;
}

loc_802F8CA4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 10));
}

loc_802F8CAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802F8CD4;
    }
}

loc_802F8CB0:
{
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    r4 = 0;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl1_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl1_cont_8012FD28;
}

loc_inl1_return:
{
}

loc_inl1_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12224));
    r4 = 20;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl2_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl2_cont_8012FD28;
}

loc_inl2_return:
{
}

loc_inl2_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    goto loc_802F8F68;
}

loc_802F8CD4:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8CE8u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_1C5D = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_1C5D);
        r4 = static_cast<uint32_t>(regargs_result_80126388_1C5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802F8F68;
}

loc_802F8CEC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 10));
}

loc_802F8CF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802F8D1C;
    }
}

loc_802F8CF8:
{
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    r4 = 0;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl3_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl3_cont_8012FD28;
}

loc_inl3_return:
{
}

loc_inl3_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12224));
    r4 = 30;
    // inline leaf 0x8012FD28 (8 guest instruction(s))
}

loc_inl4_0x8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl4_0x8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    goto loc_inl4_cont_8012FD28;
}

loc_inl4_return:
{
}

loc_inl4_cont_8012FD28:
{
    // end of inlined leaf 0x8012FD28
    goto loc_802F8F68;
}

loc_802F8D1C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8D30u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_2A50 = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_2A50);
        r4 = static_cast<uint32_t>(regargs_result_80126388_2A50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802F8F68;
}

loc_802F8D34:
{
    r28 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r28));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r29 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::FlatWrite32((r29 + 452), r28);
    MemoryInline::FlatWrite32((r29 + 448), r28);
    MemoryInline::FlatWrite32((r29 + 444), r28);
    goto loc_802F8F68;
}

loc_802F8D68:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 10));
    r0 = (r3 + -5);
}

loc_802F8D74:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802F8D80;
    }
}

loc_802F8D78:
{
}

loc_802F8D7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_802F8D94;
    }
}

loc_802F8D80:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F8DA0;
}

loc_802F8D94:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r28));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_802F8DA0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 471u, (r29 + 481));
}

loc_802F8DA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802F8DD0;
    }
}

loc_802F8DAC:
{
}

loc_802F8DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802F8DF4;
    }
}

loc_802F8DB4:
{
}

loc_802F8DB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802F8E18;
    }
}

loc_802F8DBC:
{
}

loc_802F8DC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802F8E3C;
    }
}

loc_802F8DC4:
{
}

loc_802F8DC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802F8E5C;
    }
}

loc_802F8DCC:
{
    goto loc_802F8E7C;
}

loc_802F8DD0:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8DE4u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_3A37 = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_3A37);
        r4 = static_cast<uint32_t>(regargs_result_80126388_3A37 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8DF4:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8E08u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_416D = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_416D);
        r4 = static_cast<uint32_t>(regargs_result_80126388_416D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 65536;
    r0 = (r3 + -32768);
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8E18:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_48A4 = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_48A4);
        r4 = static_cast<uint32_t>(regargs_result_80126388_48A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 65536;
    r0 = (r3 + -19456);
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8E3C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8E50u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_4FDB = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_4FDB);
        r4 = static_cast<uint32_t>(regargs_result_80126388_4FDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 3072;
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8E5C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8E70u;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_56F8 = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_56F8);
        r4 = static_cast<uint32_t>(regargs_result_80126388_56F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 1024;
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8E7C:
{
    r28 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r28));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r29 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::FlatWrite32((r29 + 452), r28);
    MemoryInline::FlatWrite32((r29 + 448), r28);
    MemoryInline::FlatWrite32((r29 + 444), r28);
    goto loc_802F8F68;
}

loc_802F8EB0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r29 + 10));
}

loc_802F8EB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802F8ED0;
    }
}

loc_802F8EBC:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    goto loc_802F8EDC;
}

loc_802F8ED0:
{
    r0 = 12;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r28));
}

loc_802F8EDC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 471u, (r29 + 481));
}

loc_802F8EE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802F8F08;
    }
}

loc_802F8EE8:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    ctx->lr = 0x802F8EFCu;
    if constexpr (KnownRegArgsCpuCall<0x80126388u>(&func_80126388)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80126388_63FC = func_80126388_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80126388_63FC);
        r4 = static_cast<uint32_t>(regargs_result_80126388_63FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80126388u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 23552;
    MemoryInline::FlatWrite32((r29 + 448), r0);
    goto loc_802F8F68;
}

loc_802F8F08:
{
    r28 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r28));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r29 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::FlatWrite32((r29 + 452), r28);
    MemoryInline::FlatWrite32((r29 + 448), r28);
    MemoryInline::FlatWrite32((r29 + 444), r28);
    goto loc_802F8F68;
}

loc_802F8F3C:
{
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r28));
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r29 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12272));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::FlatWrite32((r29 + 452), r28);
    MemoryInline::FlatWrite32((r29 + 448), r28);
    MemoryInline::FlatWrite32((r29 + 444), r28);
}

loc_802F8F68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F8C00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F8C00_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFD fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F8C00 func_802F8C00 preserves=true fpr_mask=0x00000000

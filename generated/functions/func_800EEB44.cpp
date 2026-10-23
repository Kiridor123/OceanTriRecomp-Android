#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4A88(CpuContext* ctx);
extern "C" uint64_t func_800E4A88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E8794(CpuContext* ctx);
extern "C" uint64_t func_800E8794_ra70_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E8844(CpuContext* ctx);
extern "C" void func_800E8844_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800E8848(CpuContext* ctx);
extern "C" uint32_t func_800E8848_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800EEF58(CpuContext* ctx);
extern "C" uint64_t func_800EEF58_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2560(CpuContext* ctx);
extern "C" void func_804D2560_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_800E8844_statefree(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800EEB44_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_800EEB44;

loc_800EEB44:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2392));
    MemoryInline::FlatWrite32((r13 + -17396), r3);
    r4 = 0;
    r5 = 65536;
    r5 = (r5 + -26696);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -17408));
}

loc_800EEB78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EEB94;
    }
}

loc_800EEB7C:
{
    r3 = 0x92B80000u;
    r3 = (r3 + -32768);
    r4 = 524288;
    r5 = 4;
    ctx->lr = 0x800EEB90u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C27A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r13 + -17408), r3);
}

loc_800EEB94:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 13728);
    ctx->lr = 0x800EEBA0u;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r3 = 0x806A0000u;
    r3 = (r3 + 13712);
    r4 = MemoryInline::FlatRead32((r13 + -17408));
    r5 = 8;
    // inline leaf 0x804C2B20 (7 guest instruction(s))
    r6 = (r2 + -2096);
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r6);
    MemoryInline::FlatWriteRam32((r3 + 4), r4);
    MemoryInline::FlatWriteRam32((r3 + 8), r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    // end of inlined leaf 0x804C2B20
    r3 = MemoryInline::FlatRead32((r13 + -17408));
    ctx->lr = 0x800EEBBCu;
    if constexpr (KnownRegArgsCpuCall<0x800EEF58u>(&func_800EEF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_800EEF58_1377 = func_800EEF58_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EEF58_1377);
        r4 = static_cast<uint32_t>(regargs_result_800EEF58_1377 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800EEF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32((r13 + -17404), r3);
    MemoryInline::FlatWrite32((r13 + -17400), r3);
    ctx->lr = 0x800EEBC8u;
    if constexpr (KnownRegArgsCpuCall<0x800E8794u>(&func_800E8794)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_800E8794_1B4E = func_800E8794_ra70_1fe_18_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E8794_1B4E);
        r4 = static_cast<uint32_t>(regargs_result_800E8794_1B4E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E8794u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800EEBF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EEC04;
    }
}

loc_800EEBF8:
{
}

loc_800EEBFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800EEC0C;
    }
}

loc_800EEC00:
{
    goto loc_800EEC28;
}

loc_800EEC04:
{
    r3 = 0;
    goto loc_800EEC2C;
}

loc_800EEC0C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_800EEC14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800EEC20;
    }
}

loc_800EEC18:
{
    r3 = 2;
    goto loc_800EEC2C;
}

loc_800EEC20:
{
    r3 = 3;
    goto loc_800EEC2C;
}

loc_800EEC28:
{
    r3 = 1;
}

loc_800EEC2C:
{
    ctx->lr = 0x800EEC30u;
    if constexpr (KnownRegArgsCpuCall<0x800E8848u>(&func_800E8848)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E8848_26B3 = func_800E8848_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800E8848_26B3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800E8848u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = 0x92C00000u;
    r3 = (r3 + -32768);
    r4 = 393216;
    r5 = 3;
    ctx->lr = 0x800EEC44u;
    if constexpr (KnownRegArgsCpuCall<0x800E4A88u>(&func_800E4A88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_800E4A88_2984 = func_800E4A88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E4A88_2984);
        r4 = static_cast<uint32_t>(regargs_result_800E4A88_2984 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E4A88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = 0x800F0000u;
    r3 = (r3 + -5552);
    r4 = 0x800F0000u;
    r4 = (r4 + -5488);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800E8844u) && KnownTranslatedCpuCall<0x800E8844u>::kAvailable && !KnownTranslatedCpuCall<0x800E8844u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800E8844u>()) {
        func_800E8844_statefree(r3, r4, r13);
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800E8844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r6 = 0;
    r5 = 0;
    r4 = -1;
    r0 = 0;
    r3 = 7;
    ctr = r3;
}

loc_800EEC70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 4u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r6 + 65536);
    r3 = (r3 + -26850);
    r7_addr_2 = (r7 + r3);
    MemoryInline::FlatWrite8(r7_addr_2, static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 16), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 212), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 408), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 604), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r3);
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 20), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 216), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 412), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 608), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r3);
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 24), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 220), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 416), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 612), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r3);
    MemoryInline::FlatWrite8((r7 + 3), static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 28), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 224), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 420), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 616), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r3);
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 32), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 228), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 424), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 620), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r3);
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r4));
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 36), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 232), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 428), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r7 = (r7 + r5);
    MemoryInline::FlatWrite32((r7 + 624), r0);
    r7 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r7 + r3);
    MemoryInline::FlatWrite8((r3 + 6), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite32((r3 + 236), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite32((r3 + 432), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + r5);
    MemoryInline::FlatWrite32((r3 + 628), r0);
    r5 = (r5 + 28);
    r6 = (r6 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EEC70;
    }
}

loc_800EEE24:
{
    r3 = 0x805A0000u;
    r6 = MemoryInline::FlatRead32((r3 + -26840));
    r4 = 0x92D20000u;
    r5 = (r4 + 24576);
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 212), r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r5 = (r5 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 408), r5);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 604), r0);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r5 = (r5 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 8), r5);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 12), r5);
    r3 = 0x92C00000u;
    r0 = (r3 + -32768);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26800), r0);
    r0 = 1179648;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26796), r0);
    r0 = (r4 + -32768);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26792), r0);
    r0 = 24576;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26788), r0);
    r3 = 0x92B80000u;
    r0 = (r3 + -32768);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26784), r0);
    r0 = 524288;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26780), r0);
    r4 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26776), r4);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26772), r4);
    r0 = 255;
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26711), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26710), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26712), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26706), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26705), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EEB44(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EEB44_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800EEB44 func_800EEB44 preserves=true fpr_mask=0x00000000

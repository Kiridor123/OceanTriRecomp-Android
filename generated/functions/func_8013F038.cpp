#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80137834(CpuContext* ctx);
extern "C" uint64_t func_80137834_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013BE48(CpuContext* ctx);
extern "C" uint64_t func_8013BE48_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801407DC(CpuContext* ctx);
extern "C" uint64_t func_801407DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80140B5C(CpuContext* ctx);
extern "C" uint64_t func_80140B5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027D850(CpuContext* ctx);
extern "C" uint32_t func_8027D850_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027E0D0(CpuContext* ctx);
extern "C" uint32_t func_8027E0D0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8013F038_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_8013F038;

loc_8013F038:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r4);
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), static_cast<uint16_t>(r0));
    r31 = 0;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8013F070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F088;
    }
}

loc_8013F074:
{
}

loc_8013F078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F5BC;
    }
}

loc_8013F07C:
{
}

loc_8013F080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8013F5F8;
    }
}

loc_8013F084:
{
    goto loc_8013F5EC;
}

loc_8013F088:
{
    r28 = MemoryInline::FlatRead8((r4 + 1));
    r30 = MemoryInline::FlatRead8((r4 + 2));
}

loc_8013F094:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(11))) {
        goto loc_8013F580;
    }
}

loc_8013F098:
{
    r4 = 0x805A0000u;
    r4 = (r4 + 8716);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8013F0B0u:
        goto loc_8013F0B0;
        break;
    case 0x8013F160u:
        goto loc_8013F160;
        break;
    case 0x8013F1ECu:
        goto loc_8013F1EC;
        break;
    case 0x8013F220u:
        goto loc_8013F220;
        break;
    case 0x8013F2D8u:
        goto loc_8013F2D8;
        break;
    case 0x8013F3B4u:
        goto loc_8013F3B4;
        break;
    case 0x8013F4A0u:
        goto loc_8013F4A0;
        break;
    case 0x8013F4D8u:
        goto loc_8013F4D8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
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

loc_8013F0B0:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F0B8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F0BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F0C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013F0DC;
    }
}

loc_8013F0C8:
{
}

loc_8013F0CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013F0F8;
    }
}

loc_8013F0D0:
{
}

loc_8013F0D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F12C;
    }
}

loc_8013F0D8:
{
    goto loc_8013F580;
}

loc_8013F0DC:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F0E4u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_1AD5 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_1AD5);
        r4 = static_cast<uint32_t>(regargs_result_80137834_1AD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_8013F0EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8013F580;
    }
}

loc_8013F0F0:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F0F8:
{
    r0 = (r30 & 64);
}

loc_8013F100:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F104:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r29 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 482));
}

loc_8013F120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8013F580;
    }
}

loc_8013F124:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F12C:
{
    r0 = (r30 & 128);
}

loc_8013F134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F138:
{
    r3 = 0x806C0000u;
    r4 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8013F148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F14C:
{
    r0 = MemoryInline::FlatRead8((r4 + 368));
}

loc_8013F154:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8013F580;
    }
}

loc_8013F158:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F160:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F168:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F16C:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F174:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F178:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F180u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_2981 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_2981);
        r4 = static_cast<uint32_t>(regargs_result_80137834_2981 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8013F184:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_8013F1AC;
    }
}

loc_8013F188:
{
}

loc_8013F18C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_8013F1B4;
    }
}

loc_8013F190:
{
}

loc_8013F194:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_8013F1BC;
    }
}

loc_8013F198:
{
}

loc_8013F19C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_8013F1C4;
    }
}

loc_8013F1A0:
{
}

loc_8013F1A4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(5))) {
        goto loc_8013F1CC;
    }
}

loc_8013F1A8:
{
    goto loc_8013F1D4;
}

loc_8013F1AC:
{
    r4 = 1024;
    goto loc_8013F1D8;
}

loc_8013F1B4:
{
    r4 = 2048;
    goto loc_8013F1D8;
}

loc_8013F1BC:
{
    r4 = 4096;
    goto loc_8013F1D8;
}

loc_8013F1C4:
{
    r4 = 8192;
    goto loc_8013F1D8;
}

loc_8013F1CC:
{
    r4 = 16384;
    goto loc_8013F1D8;
}

loc_8013F1D4:
{
    r4 = 0;
}

loc_8013F1D8:
{
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279130
}

loc_8013F1E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F1E4:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F1EC:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F1F4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F1F8:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F204:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F20Cu;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_354A = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_354A);
        r4 = static_cast<uint32_t>(regargs_result_80137834_354A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    // inline leaf 0x8027DD0C (14 guest instruction(s))
}

loc_inl2_0x8027DD0C:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_inl2_0x8027DD14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_inl2_0x8027DD3C;
    }
}

loc_inl2_0x8027DD18:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 + -52);
}

loc_inl2_0x8027DD24:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_inl2_0x8027DD34;
    }
}

loc_inl2_0x8027DD28:
{
    r0 = (r3 + -61);
}

loc_inl2_0x8027DD30:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_inl2_0x8027DD3C;
    }
}

loc_inl2_0x8027DD34:
{
    r3 = 1;
    goto loc_inl2_cont_8027DD0C;
}

loc_inl2_0x8027DD3C:
{
    r3 = 0;
}

loc_inl2_cont_8027DD0C:
{
    // end of inlined leaf 0x8027DD0C
}

loc_8013F214:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F218:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F220:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F228:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F22C:
{
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F238:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013F250;
    }
}

loc_8013F23C:
{
}

loc_8013F240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013F264;
    }
}

loc_8013F244:
{
}

loc_8013F248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F290;
    }
}

loc_8013F24C:
{
    goto loc_8013F2B8;
}

loc_8013F250:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F258u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_4045 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_4045);
        r4 = static_cast<uint32_t>(regargs_result_80137834_4045 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r3 + 1446));
    r28 = (r0 & 127);
    goto loc_8013F2B8;
}

loc_8013F264:
{
    r0 = (r30 & 64);
}

loc_8013F26C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F2B8;
    }
}

loc_8013F270:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl3_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl3_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CFB10;
    }
}

loc_inl3_0x800CFB08:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl3_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl3_0x800CFB24;
    }
}

loc_inl3_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl3_cont_800CFAF4;
}

loc_inl3_0x800CFB24:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl3_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r29 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r28 = r3;
    goto loc_8013F2B8;
}

loc_8013F290:
{
    r0 = (r30 & 128);
}

loc_8013F298:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F2B8;
    }
}

loc_8013F29C:
{
    r3 = 0x806C0000u;
    r4 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8013F2AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F2B8;
    }
}

loc_8013F2B0:
{
    r0 = MemoryInline::FlatRead8((r4 + 806));
    r28 = (r0 & 127);
}

loc_8013F2B8:
{
    r3 = r29;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r3 = (r3 & 255);
    r0 = (r28 & 255);
}

loc_8013F2CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8013F580;
    }
}

loc_8013F2D0:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F2D8:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F2E0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F2E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F2EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013F304;
    }
}

loc_8013F2F0:
{
}

loc_8013F2F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013F324;
    }
}

loc_8013F2F8:
{
}

loc_8013F2FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F35C;
    }
}

loc_8013F300:
{
    goto loc_8013F580;
}

loc_8013F304:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F30Cu;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_50AD = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_50AD);
        r4 = static_cast<uint32_t>(regargs_result_80137834_50AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = 2;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279118
}

loc_8013F318:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F31C:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F324:
{
    r0 = (r30 & 64);
}

loc_8013F32C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F330:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl7_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl7_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x800CFB10;
    }
}

loc_inl7_0x800CFB08:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl7_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl7_0x800CFB24;
    }
}

loc_inl7_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl7_cont_800CFAF4;
}

loc_inl7_0x800CFB24:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl7_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r29 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    r4 = 0;
    ctx->lr = 0x8013F34Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F368_5B12 = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_5B12);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_5B12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8013F350:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F354:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F35C:
{
    r0 = (r30 & 128);
}

loc_8013F364:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F368:
{
    r3 = 0x806C0000u;
    r29 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8013F378:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F37C:
{
    r3 = r29;
    r4 = 4;
    r5 = 10;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl8_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl8_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x802D2BC4;
    }
}

loc_inl8_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl8_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl8_0x802D2BC4;
    }
}

loc_inl8_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl8_cont_802D2B9C;
}

loc_inl8_0x802D2BC4:
{
    r3 = 0;
}

loc_inl8_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_8013F390:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8013F3AC;
    }
}

loc_8013F394:
{
    r3 = r29;
    r4 = 4;
    r5 = 21;
    // inline leaf 0x802D2B9C (12 guest instruction(s))
}

loc_inl9_0x802D2B9C:
{
    r6 = MemoryInline::FlatRead8((r3 + 369));
    r0 = (r4 & 255);
}

loc_inl9_0x802D2BA8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x802D2BC4;
    }
}

loc_inl9_0x802D2BAC:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r5 & 65535);
}

loc_inl9_0x802D2BB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl9_0x802D2BC4;
    }
}

loc_inl9_0x802D2BBC:
{
    r3 = 1;
    goto loc_inl9_cont_802D2B9C;
}

loc_inl9_0x802D2BC4:
{
    r3 = 0;
}

loc_inl9_cont_802D2B9C:
{
    // end of inlined leaf 0x802D2B9C
}

loc_8013F3A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F3AC:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F3B4:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F3BC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F3C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013F3E0;
    }
}

loc_8013F3CC:
{
}

loc_8013F3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013F428;
    }
}

loc_8013F3D4:
{
}

loc_8013F3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F464;
    }
}

loc_8013F3DC:
{
    goto loc_8013F580;
}

loc_8013F3E0:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F3E8u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_6AEB = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_6AEB);
        r4 = static_cast<uint32_t>(regargs_result_80137834_6AEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8013F3F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8013F580;
    }
}

loc_8013F3F4:
{
}

loc_8013F3F8:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8013F404;
    }
}

loc_8013F3FC:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F404:
{
    r0 = (r30 & 1);
}

loc_8013F40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F410:
{
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8027E0D0u>(&func_8027E0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E0D0_708D = func_8027E0D0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027E0D0_708D;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E0D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8013F41C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F420:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F428:
{
    r0 = (r30 & 64);
}

loc_8013F430:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F434:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl10_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl10_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl10_0x800CFB10;
    }
}

loc_inl10_0x800CFB08:
{
    r3 = 0;
    goto loc_inl10_cont_800CFAF4;
}

loc_inl10_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl10_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl10_0x800CFB24;
    }
}

loc_inl10_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl10_cont_800CFAF4;
}

loc_inl10_0x800CFB24:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl10_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r29 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8013F450:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_8013F580;
    }
}

loc_8013F454:
{
}

loc_8013F458:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F45C:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F464:
{
    r0 = (r30 & 128);
}

loc_8013F46C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F470:
{
    r3 = 0x806C0000u;
    r4 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8013F480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F484:
{
    r0 = MemoryInline::FlatRead8((r4 + 369));
}

loc_8013F48C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8013F580;
    }
}

loc_8013F490:
{
}

loc_8013F494:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8013F580;
    }
}

loc_8013F498:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F4A0:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F4A8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F4AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F4B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F4B8:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F4C0u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_7EE9 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_7EE9);
        r4 = static_cast<uint32_t>(regargs_result_80137834_7EE9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027D850u>(&func_8027D850)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027D850_824F = func_8027D850_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027D850_824F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027D850u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_8013F4CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8013F580;
    }
}

loc_8013F4D0:
{
    r31 = 1;
    goto loc_8013F580;
}

loc_8013F4D8:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_8013F4E0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_8013F580;
    }
}

loc_8013F4E4:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_8013F4F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013F508;
    }
}

loc_8013F4F4:
{
}

loc_8013F4F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013F51C;
    }
}

loc_8013F4FC:
{
}

loc_8013F500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013F548;
    }
}

loc_8013F504:
{
    goto loc_8013F570;
}

loc_8013F508:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x8013F510u;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80137834_8872 = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_8872);
        r4 = static_cast<uint32_t>(regargs_result_80137834_8872 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead8((r3 + 1446));
    r5 = (r0 & 127);
    goto loc_8013F570;
}

loc_8013F51C:
{
    r0 = (r30 & 64);
}

loc_8013F524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F570;
    }
}

loc_8013F528:
{
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl11_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl11_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x800CFB10;
    }
}

loc_inl11_0x800CFB08:
{
    r3 = 0;
    goto loc_inl11_cont_800CFAF4;
}

loc_inl11_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl11_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl11_0x800CFB24;
    }
}

loc_inl11_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl11_cont_800CFAF4;
}

loc_inl11_0x800CFB24:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl11_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r0 = MemoryInline::FlatRead8((r29 + 898));
    r0 = (r0 * 2840);
    r3 = (r3 + r0);
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r5 = r3;
    goto loc_8013F570;
}

loc_8013F548:
{
    r0 = (r30 & 128);
}

loc_8013F550:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8013F570;
    }
}

loc_8013F554:
{
    r3 = 0x806C0000u;
    r4 = (r3 + -2080);
    r0 = MemoryInline::FlatRead8((r3 + -2080));
}

loc_8013F564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013F570;
    }
}

loc_8013F568:
{
    r0 = MemoryInline::FlatRead8((r4 + 806));
    r5 = (r0 & 127);
}

loc_8013F570:
{
    r0 = (r5 & 255);
}

loc_8013F578:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8013F580;
    }
}

loc_8013F57C:
{
    r31 = 1;
}

loc_8013F580:
{
}

loc_8013F584:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8013F5F8;
    }
}

loc_8013F588:
{
    r3 = 75;
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead8(r4);
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_95B8 = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_95B8;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    r4 = 75;
    r5 = (r1 + 12);
    ctx->lr = 0x8013F5B8u;
    if constexpr (KnownRegArgsCpuCall<0x8013BE48u>(&func_8013BE48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8013BE48_98B1 = func_8013BE48_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013BE48_98B1);
        r4 = static_cast<uint32_t>(regargs_result_8013BE48_98B1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x8013BE48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8013F5F8;
}

loc_8013F5BC:
{
    r3 = 75;
    r4 = r0;
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_9D29 = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_9D29;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r4 = 75;
    r5 = 1;
    ctx->lr = 0x8013F5E4u;
    if constexpr (KnownRegArgsCpuCall<0x801407DCu>(&func_801407DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801407DC_A006 = func_801407DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801407DC_A006);
        r4 = static_cast<uint32_t>(regargs_result_801407DC_A006 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x801407DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r3));
    goto loc_8013F5F8;
}

loc_8013F5EC:
{
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80140B5Cu>(&func_80140B5C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80140B5C_A4C5 = func_80140B5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80140B5C_A4C5);
        r4 = static_cast<uint32_t>(regargs_result_80140B5C_A4C5 >> 32);
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80140B5Cu>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8013F5F8:
{
    r3 = MemoryInline::FlatRead16((r1 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013F038(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013F038_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013F038 func_8013F038 preserves=true fpr_mask=0x00000000

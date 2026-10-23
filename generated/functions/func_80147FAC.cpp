#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80130FD8(CpuContext* ctx);
extern "C" uint64_t func_80130FD8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80135CC0(CpuContext* ctx);
extern "C" uint64_t func_80135CC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80147F64(CpuContext* ctx);
extern "C" uint64_t func_80147F64_ra38_4_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_80147FAC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80147FAC;

loc_80147FAC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r6 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 507), 0, 401u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 400u, (r3 + 907), static_cast<uint8_t>(r6));
    r0 = (r4 & 255);
}

loc_80147FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80147FD8;
    }
}

loc_80147FD4:
{
    MemoryInline::WriteResolved8(guest_range_0, 347u, (r3 + 854), static_cast<uint8_t>(r6));
}

loc_80147FD8:
{
    r0 = (r4 & 255);
}

loc_80147FE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80147FF0;
    }
}

loc_80147FE4:
{
    r0 = (r5 & 255);
}

loc_80147FEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80147FF8;
    }
}

loc_80147FF0:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 349u, (r3 + 856), static_cast<uint8_t>(r0));
}

loc_80147FF8:
{
    r0 = (r4 & 255);
}

loc_80148000:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(13))) {
        goto loc_80148228;
    }
}

loc_80148004:
{
    r4 = 0x805A0000u;
    r4 = (r4 + 10400);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80148228u:
        goto loc_80148228;
        break;
    case 0x8014801Cu:
        goto loc_8014801C;
        break;
    case 0x80148094u:
        goto loc_80148094;
        break;
    case 0x801480D4u:
        goto loc_801480D4;
        break;
    case 0x80148124u:
        goto loc_80148124;
        break;
    case 0x8014815Cu:
        goto loc_8014815C;
        break;
    case 0x80148168u:
        goto loc_80148168;
        break;
    case 0x80148214u:
        goto loc_80148214;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[31] = r31;
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
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8014801C:
{
    r0 = (r5 & 255);
}

loc_80148024:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80148044;
    }
}

loc_80148028:
{
}

loc_8014802C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80148050;
    }
}

loc_80148030:
{
}

loc_80148034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8014805C;
    }
}

loc_80148038:
{
}

loc_8014803C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80148088;
    }
}

loc_80148040:
{
    goto loc_80148228;
}

loc_80148044:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 347u, (r3 + 854), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_80148050:
{
    r3 = r31;
    ctx->lr = 0x80148058u;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_80130FD8_16C2 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_16C2);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_16C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80148228;
}

loc_8014805C:
{
    r3 = r31;
    ctx->lr = 0x80148064u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8012ED54_1C64 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_1C64;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80148068:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80148078;
    }
}

loc_8014806C:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80148078u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_218E = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_218E);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_218E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80148078:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80148084u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_2706 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_2706);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_2706 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80148228;
}

loc_80148088:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80137718_2C39 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_2C39;
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
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    goto loc_80148228;
}

loc_80148094:
{
    r4 = (r5 & 255);
    r0 = (r4 + -22);
}

loc_801480A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801480C4;
    }
}

loc_801480A4:
{
}

loc_801480A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_801480B8;
    }
}

loc_801480AC:
{
}

loc_801480B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(14))) {
        goto loc_801480C4;
    }
}

loc_801480B4:
{
    goto loc_80148228;
}

loc_801480B8:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 507), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_801480C4:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 400u, (r3 + 907), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 349u, (r3 + 856), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_801480D4:
{
    r0 = (r5 & 255);
}

loc_801480DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801480EC;
    }
}

loc_801480E0:
{
}

loc_801480E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_801480F8;
    }
}

loc_801480E8:
{
    goto loc_80148228;
}

loc_801480EC:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 347u, (r3 + 854), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_801480F8:
{
    r3 = r31;
    ctx->lr = 0x80148100u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_8012ED54_3556 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_3556;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80148104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80148114;
    }
}

loc_80148108:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80148114u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_3A80 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_3A80);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_3A80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_80148114:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80148120u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_3FF8 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_3FF8);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_3FF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80148228;
}

loc_80148124:
{
    r0 = (r5 & 255);
}

loc_8014812C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80148150;
    }
}

loc_80148130:
{
}

loc_80148134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80148150;
    }
}

loc_80148138:
{
}

loc_8014813C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(31))) {
        goto loc_80148150;
    }
}

loc_80148140:
{
}

loc_80148144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_80148150;
    }
}

loc_80148148:
{
}

loc_8014814C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(45))) {
        goto loc_80148228;
    }
}

loc_80148150:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 347u, (r3 + 854), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_8014815C:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 347u, (r3 + 854), static_cast<uint8_t>(r0));
    goto loc_80148228;
}

loc_80148168:
{
    r0 = (r5 & 255);
}

loc_80148170:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(168))) {
        goto loc_801481A8;
    }
}

loc_80148174:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(35));
}

loc_80148178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801481F8;
    }
}

loc_8014817C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80148194;
    }
}

loc_80148180:
{
}

loc_80148184:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(28))) {
        goto loc_80148228;
    }
}

loc_80148188:
{
}

loc_8014818C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(26))) {
        goto loc_801481F8;
    }
}

loc_80148190:
{
    goto loc_80148228;
}

loc_80148194:
{
}

loc_80148198:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(128))) {
        goto loc_80148228;
    }
}

loc_8014819C:
{
}

loc_801481A0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(126))) {
        goto loc_801481F8;
    }
}

loc_801481A4:
{
    goto loc_80148228;
}

loc_801481A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(182));
}

loc_801481AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801481F8;
    }
}

loc_801481B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801481C0;
    }
}

loc_801481B4:
{
}

loc_801481B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(170))) {
        goto loc_80148228;
    }
}

loc_801481BC:
{
    goto loc_801481F8;
}

loc_801481C0:
{
}

loc_801481C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(202))) {
        goto loc_801481CC;
    }
}

loc_801481C8:
{
    goto loc_80148228;
}

loc_801481CC:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x801481D8u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_50EF = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_50EF);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_50EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x801481E4u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_5650 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_5650);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_5650 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801481F4u;
    if constexpr (KnownRegArgsCpuCall<0x80135CC0u>(&func_80135CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80135CC0_5BA3 = func_80135CC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80135CC0_5BA3);
        r4 = static_cast<uint32_t>(regargs_result_80135CC0_5BA3 >> 32);
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
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80135CC0u>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80148228;
}

loc_801481F8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80148204u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_6345 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_6345);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_6345 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80148210u;
    if constexpr (KnownRegArgsCpuCall<0x80147F64u>(&func_80147F64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80147F64_68A6 = func_80147F64_ra38_4_18_0(ctx, r3, r4, r5, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80147F64_68A6);
        r4 = static_cast<uint32_t>(regargs_result_80147F64_68A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80147F64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    goto loc_80148228;
}

loc_80148214:
{
    r0 = (r5 & 255);
}

loc_8014821C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(7))) {
        goto loc_80148228;
    }
}

loc_80148220:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 348u, (r3 + 855), static_cast<uint8_t>(r0));
}

loc_80148228:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->ctr = ctr;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80147FAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80147FAC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80147FAC func_80147FAC preserves=true fpr_mask=0x00000000

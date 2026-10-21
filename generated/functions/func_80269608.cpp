#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80269428(CpuContext* ctx);
extern "C" uint64_t func_80269428_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EE88(CpuContext* ctx);
extern "C" uint64_t func_8027EE88_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027EF34(CpuContext* ctx);
extern "C" uint64_t func_8027EF34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80269608_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
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
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80269608u);
    goto loc_80269608;

loc_80269608:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r27 = r4;
    r24 = r5;
    r4 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80269630:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8026963C;
    }
}

loc_80269634:
{
    r3 = 0;
    goto loc_802699E4;
}

loc_8026963C:
{
    r26 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 * 332);
    r26 = (r26 + r0);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 * 2848);
    r4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r4 + 316));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 2506), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2507), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2508), static_cast<uint8_t>(r0));
    r28 = 0;
    r3 = r27;
    r4 = r24;
    ctx->lr = 0x80269678u;
    if constexpr (KnownRegArgsCpuCall<0x8027EF34u>(&func_8027EF34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027EF34_D7F = func_8027EF34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EF34_D7F);
        r4 = static_cast<uint32_t>(regargs_result_8027EF34_D7F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027EF34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = r27;
    ctx->lr = 0x80269684u;
    if constexpr (KnownRegArgsCpuCall<0x8027EE88u>(&func_8027EE88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027EE88_112D = func_8027EE88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027EE88_112D);
        r4 = static_cast<uint32_t>(regargs_result_8027EE88_112D >> 32);
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
    r27 = (r3 & 65535);
}

loc_8026968C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80269698;
    }
}

loc_80269690:
{
    r3 = 65536;
    r27 = (r3 + -1);
}

loc_80269698:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_802696A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026977C;
    }
}

loc_802696A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802696C0;
    }
}

loc_802696A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_802696AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026977C;
    }
}

loc_802696B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802696D4;
    }
}

loc_802696B4:
{
}

loc_802696B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802696D4;
    }
}

loc_802696BC:
{
    goto loc_802699D8;
}

loc_802696C0:
{
}

loc_802696C4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(9))) {
        goto loc_802699D8;
    }
}

loc_802696C8:
{
}

loc_802696CC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_802696D4;
    }
}

loc_802696D0:
{
    goto loc_80269868;
}

loc_802696D4:
{
    r0 = MemoryInline::FlatRead32((r26 + 184));
    r4 = (r0 & 16777215);
    r0 = (r0 & -16777216);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & 255);
    r0 = (r31 & 255);
}

loc_802696EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_802696FC;
    }
}

loc_802696F0:
{
    r0 = (r27 & 65535);
}

loc_802696F8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_80269738;
    }
}

loc_802696FC:
{
    r5 = (r27 & 65535);
}

loc_80269704:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_8026971C;
    }
}

loc_80269708:
{
    r3 = r25;
    r4 = 7;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_1C10 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_1C10);
        r4 = static_cast<uint32_t>(regargs_result_80269428_1C10 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_80269734;
}

loc_8026971C:
{
    r3 = r25;
    r4 = 7;
    r0 = (r31 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_9 & -16777216);
    r5 = (r0 | r5);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_1FD7 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_1FD7);
        r4 = static_cast<uint32_t>(regargs_result_80269428_1FD7 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80269734:
{
    r28 = 1;
}

loc_80269738:
{
    r0 = MemoryInline::FlatRead32((r26 + 188));
}

loc_80269740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80269758;
    }
}

loc_80269744:
{
    r3 = r25;
    r4 = 8;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_23CC = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_23CC);
        r4 = static_cast<uint32_t>(regargs_result_80269428_23CC >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r28 = (r28 + 1);
}

loc_80269758:
{
    r0 = MemoryInline::FlatRead32((r26 + 192));
}

loc_80269760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_802699D8;
    }
}

loc_80269764:
{
    r3 = r25;
    r4 = 9;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_27B6 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_27B6);
        r4 = static_cast<uint32_t>(regargs_result_80269428_27B6 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r28 = (r28 + 1);
    goto loc_802699D8;
}

loc_8026977C:
{
    r0 = MemoryInline::FlatRead32((r26 + 184));
    r4 = (r0 & 16777215);
    r0 = (r0 & -16777216);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_5 & 255);
    r0 = (r31 & 255);
}

loc_80269794:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_802697A4;
    }
}

loc_80269798:
{
    r0 = (r27 & 65535);
}

loc_802697A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_802697E0;
    }
}

loc_802697A4:
{
    r5 = (r27 & 65535);
}

loc_802697AC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_802697C4;
    }
}

loc_802697B0:
{
    r3 = r25;
    r4 = 7;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_2DB9 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_2DB9);
        r4 = static_cast<uint32_t>(regargs_result_80269428_2DB9 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_802697DC;
}

loc_802697C4:
{
    r3 = r25;
    r4 = 7;
    r0 = (r31 & 255);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_12 & -16777216);
    r5 = (r0 | r5);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_3182 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_3182);
        r4 = static_cast<uint32_t>(regargs_result_80269428_3182 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802697DC:
{
    r28 = 1;
}

loc_802697E0:
{
    r0 = MemoryInline::FlatRead32((r26 + 188));
    r4 = (r0 & 16777215);
    r0 = (r0 & -16777216);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_6 & 255);
    r0 = (r31 & 255);
}

loc_802697F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80269808;
    }
}

loc_802697FC:
{
    r0 = (r27 & 65535);
}

loc_80269804:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_80269844;
    }
}

loc_80269808:
{
    r5 = (r27 & 65535);
}

loc_80269810:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_80269828;
    }
}

loc_80269814:
{
    r3 = r25;
    r4 = 8;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_3779 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_3779);
        r4 = static_cast<uint32_t>(regargs_result_80269428_3779 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_80269840;
}

loc_80269828:
{
    r3 = r25;
    r4 = 8;
    r0 = (r31 & 255);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_15 & -16777216);
    r5 = (r0 | r5);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_3B42 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_3B42);
        r4 = static_cast<uint32_t>(regargs_result_80269428_3B42 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80269840:
{
    r28 = (r28 + 1);
}

loc_80269844:
{
    r0 = MemoryInline::FlatRead32((r26 + 192));
}

loc_8026984C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_802699D8;
    }
}

loc_80269850:
{
    r3 = r25;
    r4 = 9;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_3F3F = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_3F3F);
        r4 = static_cast<uint32_t>(regargs_result_80269428_3F3F >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r28 = (r28 + 1);
    goto loc_802699D8;
}

loc_80269868:
{
    r3 = r24;
    ctx->lr = 0x80269870u;
    if constexpr (KnownRegArgsCpuCall<0x8027EE88u>(&func_8027EE88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027EE88_4289 = func_8027EE88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027EE88_4289);
        r4 = static_cast<uint32_t>(regargs_result_8027EE88_4289 >> 32);
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
    r30 = (r3 & 65535);
    r3 = (r24 + 12);
    ctx->lr = 0x8026987Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027EE88u>(&func_8027EE88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027EE88_45C9 = func_8027EE88_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027EE88_45C9);
        r4 = static_cast<uint32_t>(regargs_result_8027EE88_45C9 >> 32);
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
    r29 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r26 + 184));
    r4 = (r0 & 16777215);
    r0 = (r0 & -16777216);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & 255);
    r0 = (r31 & 255);
}

loc_80269898:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_802698A8;
    }
}

loc_8026989C:
{
    r0 = (r27 & 65535);
}

loc_802698A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_802698EC;
    }
}

loc_802698A8:
{
    r5 = (r27 & 65535);
}

loc_802698B0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65535))) {
        goto loc_802698C8;
    }
}

loc_802698B4:
{
    r3 = r25;
    r4 = 7;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_4BBB = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_4BBB);
        r4 = static_cast<uint32_t>(regargs_result_80269428_4BBB >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_802698E0;
}

loc_802698C8:
{
    r3 = r25;
    r4 = 7;
    r0 = (r31 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & -16777216);
    r5 = (r0 | r5);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_4F82 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_4F82);
        r4 = static_cast<uint32_t>(regargs_result_80269428_4F82 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802698E0:
{
    r28 = 1;
    r27 = 1;
    goto loc_802698F0;
}

loc_802698EC:
{
    r27 = 0;
}

loc_802698F0:
{
    r24 = MemoryInline::FlatRead32((r26 + 188));
    r4 = (r24 & 16777215);
    r0 = (r24 & -16777216);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & 255);
    r0 = (r31 & 255);
}

loc_80269908:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8026991C;
    }
}

loc_8026990C:
{
}

loc_80269910:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r30))) {
        goto loc_8026991C;
    }
}

loc_80269914:
{
}

loc_80269918:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_80269964;
    }
}

loc_8026991C:
{
}

loc_80269920:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(65535))) {
        goto loc_80269938;
    }
}

loc_80269924:
{
    r3 = r25;
    r4 = 8;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_561B = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_561B);
        r4 = static_cast<uint32_t>(regargs_result_80269428_561B >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_80269960;
}

loc_80269938:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 188), r0);
    r3 = r25;
    r4 = 8;
    r0 = (r31 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & -16777216);
    r5 = (r0 | r30);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_5A37 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_5A37);
        r4 = static_cast<uint32_t>(regargs_result_80269428_5A37 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r26 + 188), r24);
}

loc_80269960:
{
    r28 = (r28 + 1);
}

loc_80269964:
{
    r24 = MemoryInline::FlatRead32((r26 + 192));
    r4 = (r24 & 16777215);
    r0 = (r24 & -16777216);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & 255);
    r0 = (r31 & 255);
}

loc_8026997C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80269990;
    }
}

loc_80269980:
{
}

loc_80269984:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r29))) {
        goto loc_80269990;
    }
}

loc_80269988:
{
}

loc_8026998C:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_802699D8;
    }
}

loc_80269990:
{
}

loc_80269994:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(65535))) {
        goto loc_802699AC;
    }
}

loc_80269998:
{
    r3 = r25;
    r4 = 9;
    r5 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_60C5 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_60C5);
        r4 = static_cast<uint32_t>(regargs_result_80269428_60C5 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    goto loc_802699D4;
}

loc_802699AC:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r26 + 192), r0);
    r3 = r25;
    r4 = 9;
    r0 = (r31 & 255);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & -16777216);
    r5 = (r0 | r29);
    if constexpr (KnownRegArgsCpuCall<0x80269428u>(&func_80269428)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80269428_64E1 = func_80269428_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80269428_64E1);
        r4 = static_cast<uint32_t>(regargs_result_80269428_64E1 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80269428u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r26 + 192), r24);
}

loc_802699D4:
{
    r28 = (r28 + 1);
}

loc_802699D8:
{
    r0 = (0 - r28);
    r0 = (r0 | r28);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
}

loc_802699E4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80269608(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80269608_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80269608 func_80269608 preserves=true fpr_mask=0x00000000

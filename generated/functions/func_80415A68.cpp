#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804155BC(CpuContext* ctx);
extern "C" void func_804155BC_ra10_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80415760(CpuContext* ctx);
extern "C" uint32_t func_80415760_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8041589C(CpuContext* ctx);
extern "C" uint64_t func_8041589C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80415910(CpuContext* ctx);
extern "C" uint32_t func_80415910_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80415A68_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r16_addr_0 = 0;
    uint32_t r16_addr_1 = 0;
    uint32_t r16_addr_2 = 0;
    uint32_t r16_addr_3 = 0;
    uint32_t r16_addr_4 = 0;
    uint32_t r16_addr_5 = 0;
    uint32_t r16_addr_6 = 0;
    uint32_t r16_addr_7 = 0;
    uint32_t r16_addr_8 = 0;
    uint32_t r16_addr_9 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r17_addr_3 = 0;
    uint32_t r17_addr_4 = 0;
    uint32_t r17_addr_5 = 0;
    uint32_t r17_addr_6 = 0;
    uint32_t r17_addr_7 = 0;
    uint32_t r17_addr_8 = 0;
    uint32_t r17_addr_9 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r26_addr_6 = 0;
    uint32_t r26_addr_7 = 0;
    uint32_t r26_addr_8 = 0;
    uint32_t r26_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80415A68u);
    goto loc_80415A68;

loc_80415A68:
{
    MemoryInline::FlatWriteRam32((r1 + -640), r1);
    r1 = (r1 + -640);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 644), r0);
    r11 = (r1 + 640);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r16 = r4;
    r25 = 0;
}

loc_80415A8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80415AA8;
    }
}

loc_80415A90:
{
}

loc_80415A94:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80415AD0;
    }
}

loc_80415A98:
{
}

loc_80415A9C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_80415AF8;
    }
}

loc_80415AA0:
{
    r3 = 0;
    goto loc_80416428;
}

loc_80415AA8:
{
    r0 = (r3 + 2980);
    MemoryInline::FlatWriteRam32((r1 + 552), r0);
    r0 = 1024;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r18 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 544), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 540), r0);
    goto loc_80415B1C;
}

loc_80415AD0:
{
    r0 = (r3 + 11172);
    MemoryInline::FlatWriteRam32((r1 + 552), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r18 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 544), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 540), r0);
    goto loc_80415B1C;
}

loc_80415AF8:
{
    r0 = (r3 + 7076);
    MemoryInline::FlatWriteRam32((r1 + 552), r0);
    r0 = 1024;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r18 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 544), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 540), r0);
}

loc_80415B1C:
{
    r19 = 0;
    r17 = MemoryInline::FlatRead32((r1 + 552));
    r14 = 0;
    goto loc_80415B7C;
}

loc_80415B2C:
{
    r4 = MemoryInline::FlatRead32(r17);
    MemoryInline::FlatWriteRam32((r1 + 20), r14);
    MemoryInline::FlatWriteRam32((r1 + 16), r14);
}

loc_80415B3C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80415B48;
    }
}

loc_80415B40:
{
    MemoryInline::FlatWriteRam32((r1 + 548), r19);
    goto loc_80415B88;
}

loc_80415B48:
{
    r3 = r15;
    r5 = (r1 + 20);
    r6 = (r1 + 16);
    if constexpr (KnownRegArgsCpuCall<0x80415910u>(&func_80415910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80415910_1965 = func_80415910_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80415910_1965;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80415910u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
}

loc_80415B5C:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r3))) {
        goto loc_80415B64;
    }
}

loc_80415B60:
{
    r18 = r3;
}

loc_80415B64:
{
    r0 = MemoryInline::FlatRead32((r1 + 544));
}

loc_80415B6C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_80415B74;
    }
}

loc_80415B70:
{
    MemoryInline::FlatWriteRam32((r1 + 544), r3);
}

loc_80415B74:
{
    r17 = (r17 + 4);
    r19 = (r19 + 1);
}

loc_80415B7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 548));
}

loc_80415B84:
{
    if ((static_cast<int32_t>(r19) < static_cast<int32_t>(r0))) {
        goto loc_80415B2C;
    }
}

loc_80415B88:
{
    r3 = r16;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_1EDA = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_1EDA);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_1EDA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r14 = r3;
    r23 = 0;
    r0 = (256 - r18);
    MemoryInline::FlatWriteRam32((r1 + 556), r0);
    r30 = 42;
    r29 = (r1 + 24);
    goto loc_8041641C;
}

loc_80415BAC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 536), r0);
    r0 = (r14 - r23);
}

loc_80415BBC:
{
    r22 = 256;
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(256))) {
        goto loc_80415BC8;
    }
}

loc_80415BC4:
{
    r22 = r0;
}

loc_80415BC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 544));
}

loc_80415BD0:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r0))) {
        goto loc_80416424;
    }
}

loc_80415BD4:
{
    r17 = 0;
    goto loc_80415C2C;
}

loc_80415BDC:
{
    r3 = r15;
    r4 = (r1 + 280);
    r4 = (r4 + r17);
    r0 = (r23 + r17);
    r5 = (r16 + r0);
    r6 = (256 - r17);
    r7 = (r22 - r17);
    r8 = MemoryInline::FlatRead32((r1 + 540));
    if constexpr (KnownRegArgsCpuCall<0x80415760u>(&func_80415760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80415760_2501 = func_80415760_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80415760_2501;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80415760u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_80415C04:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80415C24;
    }
}

loc_80415C08:
{
    r0 = MemoryInline::FlatRead32((r1 + 556));
}

loc_80415C10:
{
    if ((static_cast<uint32_t>(r17) > static_cast<uint32_t>(r0))) {
        goto loc_80415C1C;
    }
}

loc_80415C14:
{
    r0 = (r17 + r3);
    MemoryInline::FlatWriteRam32((r1 + 536), r0);
}

loc_80415C1C:
{
    r17 = (r17 + r3);
    goto loc_80415C2C;
}

loc_80415C24:
{
    r22 = (r22 + r3);
    goto loc_80415C34;
}

loc_80415C2C:
{
}

loc_80415C30:
{
    if ((static_cast<uint32_t>(r17) < static_cast<uint32_t>(r22))) {
        goto loc_80415BDC;
    }
}

loc_80415C34:
{
    r24 = (r16 + r23);
    r3 = (r1 + 24);
    r4 = r24;
    r5 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r21 = 0;
    r27 = MemoryInline::FlatRead32((r1 + 552));
    goto loc_804162A8;
}

loc_80415C54:
{
    r20 = MemoryInline::FlatRead32(r27);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r15;
    r4 = r20;
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80415910u>(&func_80415910)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80415910_2CDF = func_80415910_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80415910_2CDF;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80415910u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r28 = r3;
}

loc_80415C84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804162A0;
    }
}

loc_80415C88:
{
}

loc_80415C8C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r3))) {
        goto loc_804162A0;
    }
}

loc_80415C90:
{
    r19 = (r22 - r3);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r4 & 4);
}

loc_80415CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80415E30;
    }
}

loc_80415CA4:
{
    r17 = 0;
    goto loc_80415E24;
}

loc_80415CAC:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r20 + r0);
    r5 = (r1 + 280);
    r5 = (r5 + r17);
    ctr = r28;
}

loc_80415CC8:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(0))) {
        goto loc_80415CF4;
    }
}

loc_80415CCC:
{
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80415CE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80415CF4;
    }
}

loc_80415CE4:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415CCC;
    }
}

loc_80415CF4:
{
}

loc_80415CF8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r28))) {
        goto loc_80415E04;
    }
}

loc_80415CFC:
{
    r0 = (r23 + r17);
}

loc_80415D04:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80415D24;
    }
}

loc_80415D08:
{
    r3 = r15;
    r4 = (r16 + r0);
    r4 = MemoryInline::FlatRead8((r4 + -1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80415D20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80415E04;
    }
}

loc_80415D24:
{
    r26 = 0;
}

loc_80415D2C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80415DAC;
    }
}

loc_80415D30:
{
    r3 = (r28 + -8);
}

loc_80415D38:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_80415D84;
    }
}

loc_80415D3C:
{
    r4 = (r1 + 24);
    r4 = (r4 + r17);
    r0 = (r3 + 7);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_80415D54:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80415D84;
    }
}

loc_80415D58:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r4, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 7), static_cast<uint8_t>(r30));
    r4 = (r4 + 8);
    r26 = (r26 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415D58;
    }
}

loc_80415D84:
{
    r0 = (r26 + r17);
    r3 = (r29 + r0);
    r0 = (r28 - r26);
    ctr = r0;
}

loc_80415D98:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r28))) {
        goto loc_80415DAC;
    }
}

loc_80415D9C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    r3 = (r3 + 1);
    r26 = (r26 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415D9C;
    }
}

loc_80415DAC:
{
    r0 = (r24 + r17);
    r18 = (r26 + r0);
    r0 = (r26 + r17);
    r25 = (r29 + r0);
    goto loc_80415DE8;
}

loc_80415DC0:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8(r18);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80415DD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80415DF4;
    }
}

loc_80415DD8:
{
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r30));
    r18 = (r18 + 1);
    r25 = (r25 + 1);
    r26 = (r26 + 1);
}

loc_80415DE8:
{
    r0 = (r17 + r26);
}

loc_80415DF0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_80415DC0;
    }
}

loc_80415DF4:
{
    r3 = (r17 + r26);
    r17 = (r3 + 1);
    r25 = 1;
    goto loc_80415E24;
}

loc_80415E04:
{
}

loc_80415E08:
{
    if ((static_cast<uint32_t>(r17) >= static_cast<uint32_t>(r22))) {
        goto loc_80415E24;
    }
}

loc_80415E0C:
{
    r3 = r15;
    r0 = (r23 + r17);
    r4 = (r16 + r0);
    ctx->lr = 0x80415E1Cu;
    if constexpr (KnownRegArgsCpuCall<0x8041589Cu>(&func_8041589C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041589C_4651 = func_8041589C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8041589C_4651);
        r4 = static_cast<uint32_t>(regargs_result_8041589C_4651 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041589Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 + r17);
    r17 = (r3 + 1);
}

loc_80415E24:
{
}

loc_80415E28:
{
    if ((static_cast<uint32_t>(r17) <= static_cast<uint32_t>(r19))) {
        goto loc_80415CAC;
    }
}

loc_80415E2C:
{
    goto loc_804162A0;
}

loc_80415E30:
{
    r0 = (r4 & 8);
}

loc_80415E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80415FA4;
    }
}

loc_80415E3C:
{
    r18 = 0;
    r26 = (r16 + r3);
    goto loc_80415F98;
}

loc_80415E48:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r20 + r0);
    r5 = (r1 + 280);
    r5 = (r5 + r18);
    ctr = r28;
}

loc_80415E64:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(0))) {
        goto loc_80415E90;
    }
}

loc_80415E68:
{
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80415E7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80415E90;
    }
}

loc_80415E80:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415E68;
    }
}

loc_80415E90:
{
}

loc_80415E94:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r28))) {
        goto loc_80415F94;
    }
}

loc_80415E98:
{
    r17 = (r23 + r18);
    r0 = (r17 + r28);
}

loc_80415EA4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r22))) {
        goto loc_80415EC0;
    }
}

loc_80415EA8:
{
    r3 = r15;
    r26_addr_4 = (r26 + r17);
    r4 = MemoryInline::FlatRead8(r26_addr_4);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80415EBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80415F94;
    }
}

loc_80415EC0:
{
    r17 = (r17 + -1);
    r25 = (r1 + 24);
    r25 = (r25 + r17);
    r31 = (r16 + r17);
    goto loc_80415EFC;
}

loc_80415ED4:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8(r31);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80415EE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80415F04;
    }
}

loc_80415EEC:
{
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r30));
    r25 = (r25 + -1);
    r17 = (r17 + -1);
    r31 = (r31 + -1);
}

loc_80415EFC:
{
}

loc_80415F00:
{
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_80415ED4;
    }
}

loc_80415F04:
{
    r5 = 0;
}

loc_80415F0C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80415F8C;
    }
}

loc_80415F10:
{
    r3 = (r28 + -8);
}

loc_80415F18:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_80415F64;
    }
}

loc_80415F1C:
{
    r4 = (r1 + 24);
    r4 = (r4 + r18);
    r0 = (r3 + 7);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_8 & 536870911);
    ctr = r0;
}

loc_80415F34:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80415F64;
    }
}

loc_80415F38:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r4, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 7), static_cast<uint8_t>(r30));
    r4 = (r4 + 8);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415F38;
    }
}

loc_80415F64:
{
    r0 = (r5 + r18);
    r3 = (r29 + r0);
    r0 = (r28 - r5);
    ctr = r0;
}

loc_80415F78:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r28))) {
        goto loc_80415F8C;
    }
}

loc_80415F7C:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    r3 = (r3 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415F7C;
    }
}

loc_80415F8C:
{
    r18 = (r18 + r5);
    r25 = 1;
}

loc_80415F94:
{
    r18 = (r18 + 1);
}

loc_80415F98:
{
}

loc_80415F9C:
{
    if ((static_cast<uint32_t>(r18) <= static_cast<uint32_t>(r19))) {
        goto loc_80415E48;
    }
}

loc_80415FA0:
{
    goto loc_804162A0;
}

loc_80415FA4:
{
    r0 = (r4 & 3);
}

loc_80415FAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80416138;
    }
}

loc_80415FB0:
{
    r17 = 0;
    goto loc_8041612C;
}

loc_80415FB8:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r20 + r0);
    r5 = (r1 + 280);
    r5 = (r5 + r17);
    ctr = r28;
}

loc_80415FD4:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(0))) {
        goto loc_80416000;
    }
}

loc_80415FD8:
{
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80415FEC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80416000;
    }
}

loc_80415FF0:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80415FD8;
    }
}

loc_80416000:
{
}

loc_80416004:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r28))) {
        goto loc_80416128;
    }
}

loc_80416008:
{
    r26 = (r23 + r17);
    r26 = (r26 + -1);
    r25 = (r1 + 24);
    r25 = (r25 + r26);
    r18 = (r16 + r26);
    goto loc_80416048;
}

loc_80416020:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8(r18);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80416034:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80416050;
    }
}

loc_80416038:
{
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r30));
    r25 = (r25 + -1);
    r26 = (r26 + -1);
    r18 = (r18 + -1);
}

loc_80416048:
{
}

loc_8041604C:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(0))) {
        goto loc_80416020;
    }
}

loc_80416050:
{
    r26 = 0;
}

loc_80416058:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804160D8;
    }
}

loc_8041605C:
{
    r3 = (r28 + -8);
}

loc_80416064:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_804160B0;
    }
}

loc_80416068:
{
    r4 = (r1 + 24);
    r4 = (r4 + r17);
    r0 = (r3 + 7);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_13 & 536870911);
    ctr = r0;
}

loc_80416080:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_804160B0;
    }
}

loc_80416084:
{
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, r4, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 7), static_cast<uint8_t>(r30));
    r4 = (r4 + 8);
    r26 = (r26 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80416084;
    }
}

loc_804160B0:
{
    r0 = (r26 + r17);
    r3 = (r29 + r0);
    r0 = (r28 - r26);
    ctr = r0;
}

loc_804160C4:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(r28))) {
        goto loc_804160D8;
    }
}

loc_804160C8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    r3 = (r3 + 1);
    r26 = (r26 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804160C8;
    }
}

loc_804160D8:
{
    r0 = (r24 + r17);
    r18 = (r26 + r0);
    r0 = (r26 + r17);
    r25 = (r29 + r0);
    goto loc_80416114;
}

loc_804160EC:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8(r18);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80416100:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80416120;
    }
}

loc_80416104:
{
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r30));
    r18 = (r18 + 1);
    r25 = (r25 + 1);
    r26 = (r26 + 1);
}

loc_80416114:
{
    r0 = (r17 + r26);
}

loc_8041611C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r22))) {
        goto loc_804160EC;
    }
}

loc_80416120:
{
    r17 = (r17 + r26);
    r25 = 1;
}

loc_80416128:
{
    r17 = (r17 + 1);
}

loc_8041612C:
{
}

loc_80416130:
{
    if ((static_cast<uint32_t>(r17) <= static_cast<uint32_t>(r19))) {
        goto loc_80415FB8;
    }
}

loc_80416134:
{
    goto loc_804162A0;
}

loc_80416138:
{
    r18 = 0;
    r17 = (r16 + r3);
    goto loc_80416298;
}

loc_80416144:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r20 + r0);
    r5 = (r1 + 280);
    r5 = (r5 + r18);
    ctr = r28;
}

loc_80416160:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(0))) {
        goto loc_8041618C;
    }
}

loc_80416164:
{
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80416178:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8041618C;
    }
}

loc_8041617C:
{
    r4 = (r4 + 1);
    r5 = (r5 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80416164;
    }
}

loc_8041618C:
{
}

loc_80416190:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r28))) {
        goto loc_80416278;
    }
}

loc_80416194:
{
    r26 = (r23 + r18);
}

loc_8041619C:
{
    if ((static_cast<int32_t>(r26) <= static_cast<int32_t>(0))) {
        goto loc_804161BC;
    }
}

loc_804161A0:
{
    r3 = r15;
    r4 = (r16 + r26);
    r4 = MemoryInline::FlatRead8((r4 + -1));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804161B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80416278;
    }
}

loc_804161BC:
{
    r0 = (r26 + r28);
}

loc_804161C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r22))) {
        goto loc_804161E0;
    }
}

loc_804161C8:
{
    r3 = r15;
    r17_addr_4 = (r17 + r26);
    r4 = MemoryInline::FlatRead8(r17_addr_4);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if constexpr (KnownRegArgsCpuCall<0x804155BCu>(&func_804155BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        func_804155BC_ra10_0_0_0(ctx, r4);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804155BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_804161DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80416278;
    }
}

loc_804161E0:
{
    r5 = 0;
}

loc_804161E8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_80416268;
    }
}

loc_804161EC:
{
    r3 = (r28 + -8);
}

loc_804161F4:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(8))) {
        goto loc_80416240;
    }
}

loc_804161F8:
{
    r4 = (r1 + 24);
    r4 = (r4 + r18);
    r0 = (r3 + 7);
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_18 & 536870911);
    ctr = r0;
}

loc_80416210:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_80416240;
    }
}

loc_80416214:
{
    guest_range_5 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, r4, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r4 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r4 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r4 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r4 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r4 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r4 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r4 + 7), static_cast<uint8_t>(r30));
    r4 = (r4 + 8);
    r5 = (r5 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80416214;
    }
}

loc_80416240:
{
    r0 = (r5 + r18);
    r3 = (r29 + r0);
    r0 = (r28 - r5);
    ctr = r0;
}

loc_80416254:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r28))) {
        goto loc_80416268;
    }
}

loc_80416258:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r30));
    r3 = (r3 + 1);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80416258;
    }
}

loc_80416268:
{
    r3 = (r18 + r5);
    r18 = (r3 + 1);
    r25 = 1;
    goto loc_80416298;
}

loc_80416278:
{
}

loc_8041627C:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(r22))) {
        goto loc_80416298;
    }
}

loc_80416280:
{
    r3 = r15;
    r0 = (r23 + r18);
    r4 = (r16 + r0);
    ctx->lr = 0x80416290u;
    if constexpr (KnownRegArgsCpuCall<0x8041589Cu>(&func_8041589C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8041589C_890C = func_8041589C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8041589C_890C);
        r4 = static_cast<uint32_t>(regargs_result_8041589C_890C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8041589Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r3 + r18);
    r18 = (r3 + 1);
}

loc_80416298:
{
}

loc_8041629C:
{
    if ((static_cast<uint32_t>(r18) <= static_cast<uint32_t>(r19))) {
        goto loc_80416144;
    }
}

loc_804162A0:
{
    r27 = (r27 + 4);
    r21 = (r21 + 1);
}

loc_804162A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 548));
}

loc_804162B0:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_80415C54;
    }
}

loc_804162B4:
{
    r17 = 0;
    r3 = 0;
    goto loc_80416404;
}

loc_804162C0:
{
    r5 = (r1 + 24);
    r5 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804162D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(42))) {
        goto loc_80416400;
    }
}

loc_804162D8:
{
    r4 = 0;
    r19 = r3;
    goto loc_8041630C;
}

loc_804162E4:
{
    r0 = (r23 + r19);
    r0 = (r0 - r17);
    r16_addr_4 = (r16 + r0);
    r0 = MemoryInline::FlatRead8(r16_addr_4);
}

loc_804162F4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(128))) {
        goto loc_80416300;
    }
}

loc_804162F8:
{
}

loc_804162FC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(192))) {
        goto loc_80416304;
    }
}

loc_80416300:
{
    r4 = (r4 + 1);
}

loc_80416304:
{
    r5 = (r5 + 1);
    r19 = (r19 + 1);
}

loc_8041630C:
{
}

loc_80416310:
{
    if ((static_cast<uint32_t>(r19) >= static_cast<uint32_t>(r22))) {
        goto loc_80416324;
    }
}

loc_80416314:
{
    r0 = MemoryInline::FlatRead8(r5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80416320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(42))) {
        goto loc_804162E4;
    }
}

loc_80416324:
{
    r7 = 0;
}

loc_8041632C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804163B8;
    }
}

loc_80416330:
{
    r5 = (r4 + -8);
}

loc_80416338:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_80416388;
    }
}

loc_8041633C:
{
    r0 = (r23 + r3);
    r0 = (r0 - r17);
    r6 = (r16 + r0);
    r0 = (r5 + 7);
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_23 & 536870911);
    ctr = r0;
}

loc_80416358:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_80416388;
    }
}

loc_8041635C:
{
    guest_range_6 = MemoryInline::ResolveRangeHost(r6, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, r6, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r6 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r6 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r6 + 3), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r6 + 4), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r6 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r6 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r6 + 7), static_cast<uint8_t>(r30));
    r6 = (r6 + 8);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8041635C;
    }
}

loc_80416388:
{
    r0 = (r23 + r3);
    r5 = (r0 - r17);
    r0 = (r7 + r16);
    r5 = (r5 + r0);
    r0 = (r4 - r7);
    ctr = r0;
}

loc_804163A4:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r4))) {
        goto loc_804163B8;
    }
}

loc_804163A8:
{
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r30));
    r5 = (r5 + 1);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804163A8;
    }
}

loc_804163B8:
{
    r7 = (r19 - r3);
    r18 = (r7 - r4);
}

loc_804163C4:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_804163FC;
    }
}

loc_804163C8:
{
    r5 = (r23 + r3);
    r6 = (r5 - r17);
    r0 = (r16 + r4);
    r3 = (r6 + r0);
    r0 = (r7 + r6);
    r4 = (r16 + r0);
    r0 = (r7 + r5);
    r5 = (r14 - r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
    r17 = (r17 + r18);
    r3 = (r14 - r17);
    r0 = 0;
    r16_addr_5 = (r16 + r3);
    MemoryInline::FlatWrite8(r16_addr_5, static_cast<uint8_t>(r0));
}

loc_804163FC:
{
    r3 = (r19 + -1);
}

loc_80416400:
{
    r3 = (r3 + 1);
}

loc_80416404:
{
}

loc_80416408:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r22))) {
        goto loc_804162C0;
    }
}

loc_8041640C:
{
    r0 = MemoryInline::FlatRead32((r1 + 536));
}

loc_80416414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80416424;
    }
}

loc_80416418:
{
    r23 = (r23 + r0);
}

loc_8041641C:
{
}

loc_80416420:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r14))) {
        goto loc_80415BAC;
    }
}

loc_80416424:
{
    r3 = r25;
}

loc_80416428:
{
    r11 = (r1 + 640);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 644));
    ctx->lr = r0;
    r1 = (r1 + 640);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80415A68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80415A68_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80415A68 func_80415A68 preserves=true fpr_mask=0x00000000

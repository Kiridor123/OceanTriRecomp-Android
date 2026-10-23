#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802743D4(CpuContext* ctx);
extern "C" uint64_t func_802743D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80316E40_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80316E40;

loc_80316E40:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r26 = r3;
    r27 = r5;
    r28 = r6;
    r24 = MemoryInline::FlatRead32(r4);
    r23 = MemoryInline::FlatRead32((r4 + 4));
    r22 = MemoryInline::FlatRead32((r4 + 8));
    r25 = MemoryInline::FlatRead32((r4 + 12));
    r21 = MemoryInline::FlatRead32((r4 + 16));
    r20 = MemoryInline::FlatRead32((r4 + 20));
    r31 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r30 = 0;
    r29 = 0;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_9AE = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_9AE;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = (r3 & 255);
}

loc_80316E9C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(5))) {
        goto loc_80316EB4;
    }
}

loc_80316EA0:
{
}

loc_80316EA4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(3))) {
        goto loc_80316F70;
    }
}

loc_80316EA8:
{
}

loc_80316EAC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_80316EC8;
    }
}

loc_80316EB0:
{
    goto loc_80317078;
}

loc_80316EB4:
{
}

loc_80316EB8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(9))) {
        goto loc_80317078;
    }
}

loc_80316EBC:
{
}

loc_80316EC0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(7))) {
        goto loc_80317048;
    }
}

loc_80316EC4:
{
    goto loc_80317024;
}

loc_80316EC8:
{
    r3 = MemoryInline::FlatRead8(r25);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80316ED8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80316EE4;
    }
}

loc_80316EDC:
{
    r26 = 0;
    goto loc_80316EF4;
}

loc_80316EE4:
{
}

loc_80316EE8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_80316EF0;
    }
}

loc_80316EEC:
{
    goto loc_80316EF4;
}

loc_80316EF0:
{
    r26 = 0;
}

loc_80316EF4:
{
    r3 = r26;
    r4 = r25;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x80316F0Cu;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_1237 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_1237);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_1237 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29 = r3;
    r25 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r3 = 0;
    r4 = r24;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x80316F30u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_17AD = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_17AD);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_17AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
}

loc_80316F38:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80316F68;
    }
}

loc_80316F3C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80316F44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316F68;
    }
}

loc_80316F48:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11108);
    r4 = 8881;
    r5 = 0x805E0000u;
    r5 = (r5 + -11088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80316F64u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
}

loc_80316F68:
{
    r31 = (r31 | 1);
    goto loc_80317078;
}

loc_80316F70:
{
}

loc_80316F74:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(3))) {
        goto loc_80316F7C;
    }
}

loc_80316F78:
{
    goto loc_80316F80;
}

loc_80316F7C:
{
    r26 = 0;
}

loc_80316F80:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80316F88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80316FA8;
    }
}

loc_80316F8C:
{
    r3 = r26;
    r4 = r25;
    r5 = r21;
    r6 = r20;
    r7 = (r1 + 8);
    ctx->lr = 0x80316FA4u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_22CD = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_22CD);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_22CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_80316FC0;
}

loc_80316FA8:
{
    r3 = r26;
    r4 = r25;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x80316FC0u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_2810 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_2810);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_2810 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80316FC0:
{
    r29 = r3;
    r25 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
    r3 = r26;
    r4 = r24;
    r5 = r23;
    r6 = r22;
    r7 = (r1 + 8);
    ctx->lr = 0x80316FE4u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_2DA3 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_2DA3);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_2DA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
}

loc_80316FEC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8031701C;
    }
}

loc_80316FF0:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80316FF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031701C;
    }
}

loc_80316FFC:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11108);
    r4 = 8904;
    r5 = 0x805E0000u;
    r5 = (r5 + -11088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80317018u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r25));
}

loc_8031701C:
{
    r31 = (r31 | 1);
    goto loc_80317078;
}

loc_80317024:
{
    r3 = 0;
    r4 = r24;
    r5 = 0;
    r6 = 0;
    r7 = (r1 + 8);
    ctx->lr = 0x8031703Cu;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_3716 = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_3716);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_3716 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
    r31 = (r31 | 1);
    goto loc_80317078;
}

loc_80317048:
{
}

loc_8031704C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(7))) {
        goto loc_80317058;
    }
}

loc_80317050:
{
    r3 = r26;
    goto loc_8031705C;
}

loc_80317058:
{
    r3 = 0;
}

loc_8031705C:
{
    r4 = r24;
    r5 = r23;
    r6 = r22;
    r7 = (r1 + 8);
    ctx->lr = 0x80317070u;
    if constexpr (KnownRegArgsCpuCall<0x802743D4u>(&func_802743D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802743D4_3D6A = func_802743D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802743D4_3D6A);
        r4 = static_cast<uint32_t>(regargs_result_802743D4_3D6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x802743D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
    r31 = (r31 | 1);
}

loc_80317078:
{
    r0 = (r31 & 255);
    r0 = (r0 & 1);
}

loc_80317084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803170FC;
    }
}

loc_80317088:
{
    r3 = (r27 & 255);
    r0 = (r3 & 8);
}

loc_80317094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803170C4;
    }
}

loc_80317098:
{
    r0 = (r3 & 1);
}

loc_803170A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803170C4;
    }
}

loc_803170A4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803170B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803170C4;
    }
}

loc_803170B4:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803170C0;
    }
}

loc_803170BC:
{
    r0 = 2;
}

loc_803170C0:
{
    r31 = (r31 | r0);
}

loc_803170C4:
{
    r0 = (r27 & 255);
    r0 = (r0 & 4);
}

loc_803170D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803170F8;
    }
}

loc_803170D4:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_803170DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803170EC;
    }
}

loc_803170E0:
{
}

loc_803170E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803170F4;
    }
}

loc_803170E8:
{
    goto loc_803170F8;
}

loc_803170EC:
{
    r31 = (r31 | 8);
    goto loc_803170F8;
}

loc_803170F4:
{
    r31 = (r31 | 16);
}

loc_803170F8:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r30));
}

loc_803170FC:
{
    r3 = r31;
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80316E40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80316E40_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80316E40 func_80316E40 preserves=true fpr_mask=0x00000000

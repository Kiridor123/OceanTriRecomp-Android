#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D130(CpuContext* ctx);
extern "C" uint64_t func_8005D130_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800640C0(CpuContext* ctx);
extern "C" uint64_t func_800640C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80077ED4(CpuContext* ctx);
extern "C" uint64_t func_80077ED4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800788DC(CpuContext* ctx);
extern "C" uint32_t func_800788DC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007892C(CpuContext* ctx);
extern "C" uint32_t func_8007892C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800789EC(CpuContext* ctx);
extern "C" uint32_t func_800789EC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078A28(CpuContext* ctx);
extern "C" uint64_t func_80078A28_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078A94(CpuContext* ctx);
extern "C" uint64_t func_80078A94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80078E24(CpuContext* ctx);
extern "C" uint64_t func_80078E24_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800788DC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800789EC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_80078B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r21_addr_0 = 0;
    uint32_t r21_addr_1 = 0;
    uint32_t r21_addr_2 = 0;
    uint32_t r21_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80078B00;

loc_80078B00:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r22 = r3;
    r23 = r4;
    r24 = r5;
    r26 = r6;
    r3 = (r1 + 52);
    r4 = 0;
    ctx->lr = 0x80078B30u;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078A94_E4C = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_E4C);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_E4C >> 32);
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
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 48);
    r4 = 0;
    ctx->lr = 0x80078B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078A94_11EB = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_11EB);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_11EB >> 32);
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
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 44);
    r4 = 0;
    ctx->lr = 0x80078B48u;
    if constexpr (KnownRegArgsCpuCall<0x80078A28u>(&func_80078A28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078A28_158D = func_80078A28_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A28_158D);
        r4 = static_cast<uint32_t>(regargs_result_80078A28_158D >> 32);
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
        InvokeDirectCpu<0x80078A28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = (r1 + 40);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8005D210u>(ctx);
    r3 = (r1 + 56);
    ctx->lr = 0x80078B5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80078E24u>(&func_80078E24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80078E24_19B1 = func_80078E24_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078E24_19B1);
        r4 = static_cast<uint32_t>(regargs_result_80078E24_19B1 >> 32);
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
        InvokeDirectCpu<0x80078E24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r24 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80078B80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078B98;
    }
}

loc_80078B84:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80078B90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078B98;
    }
}

loc_80078B94:
{
    r9 = 0;
}

loc_80078B98:
{
}

loc_80078B9C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80078BB4;
    }
}

loc_80078BA0:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80078BAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078BB4;
    }
}

loc_80078BB0:
{
    r8 = 0;
}

loc_80078BB4:
{
}

loc_80078BB8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80078BCC;
    }
}

loc_80078BBC:
{
    r0 = (r10 + 1073741824);
}

loc_80078BC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078BCC;
    }
}

loc_80078BC8:
{
    r7 = 0;
}

loc_80078BCC:
{
}

loc_80078BD0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80078BE8;
    }
}

loc_80078BD4:
{
    r3 = (r24 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80078BE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078BE8;
    }
}

loc_80078BE4:
{
    r6 = 0;
}

loc_80078BE8:
{
}

loc_80078BEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80078C04;
    }
}

loc_80078BF0:
{
    r3 = (r24 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80078BFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078C04;
    }
}

loc_80078C00:
{
    r5 = 0;
}

loc_80078C04:
{
}

loc_80078C08:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80078C20;
    }
}

loc_80078C0C:
{
    r3 = (r24 & -16384);
    r0 = (r3 + 536870912);
}

loc_80078C18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80078C20;
    }
}

loc_80078C1C:
{
    r4 = 0;
}

loc_80078C20:
{
}

loc_80078C24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80078C48;
    }
}

loc_80078C28:
{
    r3 = 0x80590000u;
    r3 = (r3 + -4032);
    r4 = 330;
    r5 = 0x80590000u;
    r5 = (r5 + -3876);
    r6 = r24;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80078C48u;
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
}

loc_80078C48:
{
    r25 = 1;
    r0 = (r26 & 8);
}

loc_80078C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078C5C;
    }
}

loc_80078C58:
{
    r25 = (r25 | 8);
}

loc_80078C5C:
{
    r0 = (r26 & 4);
}

loc_80078C64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80078C6C;
    }
}

loc_80078C68:
{
    r25 = (r25 | 16);
}

loc_80078C6C:
{
    r26 = (r25 | 16);
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    r29 = (r1 + 8);
    r28 = (r1 + 12);
    r27 = (r1 + 16);
    goto loc_80078E00;
}

loc_80078C88:
{
}

loc_80078C8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_80078CA4;
    }
}

loc_80078C90:
{
    r3 = (r30 + -4032);
    r4 = 340;
    r5 = (r31 + -3824);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80078CA4u;
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
}

loc_80078CA4:
{
    r3 = r22;
    r0 = MemoryInline::FlatRead8((r23 + 5));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r23 + 6));
    r4 = (r4 | r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 36);
    ctx->lr = 0x80078CCCu;
    if constexpr (KnownRegArgsCpuCall<0x8005D130u>(&func_8005D130)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005D130_30D2 = func_8005D130_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005D130_30D2);
        r4 = static_cast<uint32_t>(regargs_result_8005D130_30D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005D130u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r22;
    r0 = MemoryInline::FlatRead8((r23 + 3));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & -256);
    r0 = MemoryInline::FlatRead8((r23 + 4));
    r4 = (r4 | r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098914u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 32);
    ctx->lr = 0x80078CF4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800789ECu) && KnownTranslatedCpuCall<0x800789ECu>::kAvailable && !KnownTranslatedCpuCall<0x800789ECu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800789ECu>()) {
        const auto state_free_result_800789EC_35EF = func_800789EC_statefree(r1, r3, r4, 0x80078CF4u);
        r0 = static_cast<uint32_t>(state_free_result_800789EC_35EF[0]);
        r1 = static_cast<uint32_t>(state_free_result_800789EC_35EF[1]);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800789ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r21 = MemoryInline::FlatRead32((r24 + 4));
}

loc_80078CFC:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80078D1C;
    }
}

loc_80078D00:
{
    r3 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8005D0B4u>(ctx);
    r3 = ctx->gpr[3];
    r21_addr_2 = (r21 + r3);
    r3 = MemoryInline::FlatRead8(r21_addr_2);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    goto loc_80078D24;
}

loc_80078D1C:
{
    r3 = (r1 + 40);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80078968u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80078D24:
{
}

loc_80078D28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80078DFC;
    }
}

loc_80078D2C:
{
    r3 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800776A8u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80078D38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80078DFC;
    }
}

loc_80078D3C:
{
    r3 = r22;
    r0 = MemoryInline::FlatRead8((r23 + 1));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r4 = (r4_rot_4 & -256);
    r0 = MemoryInline::FlatRead8((r23 + 2));
    r4 = (r4 | r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800987FCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 28);
    ctx->lr = 0x80078D64u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_40BA = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_40BA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    ctx->lr = 0x80078D6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800640C0u>(&func_800640C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800640C0_436F = func_800640C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800640C0_436F);
        r4 = static_cast<uint32_t>(regargs_result_800640C0_436F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800640C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r5 = r3;
    r3 = (r1 + 56);
    r4 = r24;
    ctx->lr = 0x80078D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80077ED4u>(&func_80077ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80077ED4_4869 = func_80077ED4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80077ED4_4869);
        r4 = static_cast<uint32_t>(regargs_result_80077ED4_4869 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80077ED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 52);
    r4 = (r1 + 48);
    ctx->lr = 0x80078DA0u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800788DCu) && KnownTranslatedCpuCall<0x800788DCu>::kAvailable && !KnownTranslatedCpuCall<0x800788DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800788DCu>()) {
        const auto state_free_result_800788DC_4F8B = func_800788DC_statefree(r1, r3, r4, 0x80078DA0u);
        r1 = static_cast<uint32_t>(state_free_result_800788DC_4F8B[0]);
        r3 = static_cast<uint32_t>(state_free_result_800788DC_4F8B[1]);
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800788DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
}

loc_80078DA4:
{
    r21 = r25;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80078DB0;
    }
}

loc_80078DAC:
{
    r21 = r26;
}

loc_80078DB0:
{
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = r27;
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80077814u>(ctx);
    r3 = ctx->gpr[3];
    r9 = r3;
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    r5 = 0;
    r6 = 0;
    r7 = r21;
    r8 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80076A58u>(ctx);
    r3 = (r1 + 48);
    r4 = (r1 + 52);
    ctx->lr = 0x80078DFCu;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_57BB = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_57BB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80078DFC:
{
    r23 = (r23 + 8);
}

loc_80078E00:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_80078E08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80078C88;
    }
}

loc_80078E0C:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80078B00 func_80078B00 preserves=true fpr_mask=0x00000000

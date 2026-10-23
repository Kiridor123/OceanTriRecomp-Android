#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802232BC(CpuContext* ctx);
extern "C" uint64_t func_802232BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8022376C(CpuContext* ctx);
extern "C" uint64_t func_8022376C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802237C0(CpuContext* ctx);
extern "C" uint64_t func_802237C0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80223894(CpuContext* ctx);
extern "C" uint64_t func_80223894_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80224884(CpuContext* ctx);
extern "C" uint64_t func_80224884_ra30_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_802249A8(CpuContext* ctx);
extern "C" uint32_t func_802249A8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80226DF4(CpuContext* ctx);
extern "C" uint64_t func_80226DF4_ra38_3e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_8025F058(CpuContext* ctx);
extern "C" uint64_t func_8025F058_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8026FDF8(CpuContext* ctx);
extern "C" uint32_t func_8026FDF8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80224B28_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
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
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_80224B28;

loc_80224B28:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead8((r3 + 1));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80224B54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80224B90;
    }
}

loc_80224B58:
{
    r3 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80224B60u;
    if constexpr (KnownRegArgsCpuCall<0x8026FDF8u>(&func_8026FDF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026FDF8_E7E = func_8026FDF8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026FDF8_E7E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026FDF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80224B64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80224B6C;
    }
}

loc_80224B68:
{
    r30 = 0;
}

loc_80224B6C:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_80224B78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80224B90;
    }
}

loc_80224B7C:
{
    r3 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80224B84u;
    if constexpr (KnownRegArgsCpuCall<0x8025F058u>(&func_8025F058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_8025F058_1313 = func_8025F058_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8025F058_1313);
        r4 = static_cast<uint32_t>(regargs_result_8025F058_1313 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8025F058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_80224B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80224B90;
    }
}

loc_80224B8C:
{
    r30 = 0;
}

loc_80224B90:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80224BA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80224BA8;
    }
}

loc_80224BA4:
{
    r30 = 0;
}

loc_80224BA8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80224BB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80224BE4;
    }
}

loc_80224BB4:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_80224BC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80224BE4;
    }
}

loc_80224BC4:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_80224BCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80224BE4;
    }
}

loc_80224BD0:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead8((r3 + 2820));
}

loc_80224BDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224BE4;
    }
}

loc_80224BE0:
{
    r30 = 0;
}

loc_80224BE4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 2503u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2496u, (r29 + 2496));
}

loc_80224BEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224BF8;
    }
}

loc_80224BF0:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224BF8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2497u, (r29 + 2497));
}

loc_80224C00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C0C;
    }
}

loc_80224C04:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224C0C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2498u, (r29 + 2498));
}

loc_80224C14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C20;
    }
}

loc_80224C18:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224C20:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2499u, (r29 + 2499));
}

loc_80224C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C34;
    }
}

loc_80224C2C:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224C34:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2500u, (r29 + 2500));
}

loc_80224C3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C48;
    }
}

loc_80224C40:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224C48:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2501u, (r29 + 2501));
}

loc_80224C50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C5C;
    }
}

loc_80224C54:
{
    r30 = 0;
    goto loc_80224C6C;
}

loc_80224C5C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2502u, (r29 + 2502));
}

loc_80224C64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80224C6C;
    }
}

loc_80224C68:
{
    r30 = 0;
}

loc_80224C6C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80224C78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80224C8C;
    }
}

loc_80224C7C:
{
    r3 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80224C84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E3BA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r31 = (r3 | 512);
    goto loc_80224C90;
}

loc_80224C8C:
{
    r31 = 0;
}

loc_80224C90:
{
    r24 = (r29 + 4);
    r25 = 0;
}

loc_80224C98:
{
    r0 = MemoryInline::FlatRead32((r24 + 280));
}

loc_80224CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224D20;
    }
}

loc_80224CA4:
{
    MemoryInline::FlatWrite8((r24 + 52), static_cast<uint8_t>(r30));
}

loc_80224CAC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80224CBC;
    }
}

loc_80224CB0:
{
    r3 = (r29 + r25);
    r0 = MemoryInline::FlatRead8((r3 + 2496));
    MemoryInline::FlatWrite8((r24 + 52), static_cast<uint8_t>(r0));
}

loc_80224CBC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = r25;
    ctx->lr = 0x80224CC8u;
    if constexpr (KnownRegArgsCpuCall<0x802232BCu>(&func_802232BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802232BC_2CC9 = func_802232BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802232BC_2CC9);
        r4 = static_cast<uint32_t>(regargs_result_802232BC_2CC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802232BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r24 + 52));
}

loc_80224CD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224D00;
    }
}

loc_80224CD4:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r29);
    r4 = (r4 + 604);
    r5 = r25;
    ctx->lr = 0x80224CE8u;
    if constexpr (KnownRegArgsCpuCall<0x8022376Cu>(&func_8022376C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8022376C_310C = func_8022376C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8022376C_310C);
        r4 = static_cast<uint32_t>(regargs_result_8022376C_310C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8022376Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80224CEC:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(5))) {
        goto loc_80224D00;
    }
}

loc_80224CF0:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead32(r29);
    r4 = (r4 + 600);
    ctx->lr = 0x80224D00u;
    if constexpr (KnownRegArgsCpuCall<0x80223894u>(&func_80223894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223894_3514 = func_80223894_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223894_3514);
        r4 = static_cast<uint32_t>(regargs_result_80223894_3514 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80223894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80224D00:
{
    r3 = r29;
    r4 = r24;
    r5 = MemoryInline::FlatRead32(r29);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    ctx->lr = 0x80224D14u;
    if constexpr (KnownRegArgsCpuCall<0x80224884u>(&func_80224884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80224884_38D0 = func_80224884_ra30_2_18_0(ctx, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80224884_38D0);
        r4 = static_cast<uint32_t>(regargs_result_80224884_38D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80224884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r24;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224D20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80224D20:
{
    r24 = (r24 + 356);
    r25 = (r25 + 1);
}

loc_80224D2C:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(7))) {
        goto loc_80224C98;
    }
}

loc_80224D30:
{
    r23 = (r29 + 2580);
    r25 = 0;
    r27 = r29;
    r26 = (r29 + 4656);
    r28 = 0;
}

loc_80224D44:
{
    r0 = MemoryInline::FlatRead32((r23 + 280));
}

loc_80224D4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224DE8;
    }
}

loc_80224D50:
{
    MemoryInline::FlatWrite8((r23 + 52), static_cast<uint8_t>(r30));
}

loc_80224D58:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80224D68;
    }
}

loc_80224D5C:
{
    r3 = (r29 + r25);
    r0 = MemoryInline::FlatRead8((r3 + 2503));
    MemoryInline::FlatWrite8((r23 + 52), static_cast<uint8_t>(r0));
}

loc_80224D68:
{
    r3 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80224D70u;
    if constexpr (KnownRegArgsCpuCall<0x802249A8u>(&func_802249A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802249A8_41E7 = func_802249A8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802249A8_41E7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802249A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80224D74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80224D7C;
    }
}

loc_80224D78:
{
    MemoryInline::FlatWrite8((r23 + 52), static_cast<uint8_t>(r28));
}

loc_80224D7C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead8((r3 + 30));
}

loc_80224D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224D90;
    }
}

loc_80224D8C:
{
    MemoryInline::FlatWrite8((r23 + 52), static_cast<uint8_t>(r28));
}

loc_80224D90:
{
    r24 = MemoryInline::FlatRead8((r27 + 4672));
    r0 = MemoryInline::FlatRead8((r23 + 52));
}

loc_80224D9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224DAC;
    }
}

loc_80224DA0:
{
    r3 = r29;
    r4 = r25;
    ctx->lr = 0x80224DACu;
    if constexpr (KnownRegArgsCpuCall<0x802237C0u>(&func_802237C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802237C0_4763 = func_802237C0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802237C0_4763);
        r4 = static_cast<uint32_t>(regargs_result_802237C0_4763 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802237C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80224DAC:
{
    r3 = r29;
    r4 = r25;
    r5 = r24;
    ctx->lr = 0x80224DBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x80225498u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = r29;
    r4 = r23;
    r5 = MemoryInline::FlatRead32(r29);
    ctx->lr = 0x80224DCCu;
    if constexpr (KnownRegArgsCpuCall<0x80224884u>(&func_80224884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80224884_4D3D = func_80224884_ra30_2_18_0(ctx, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80224884_4D3D);
        r4 = static_cast<uint32_t>(regargs_result_80224884_4D3D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80224884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r23;
    r4 = (r31 & 65535);
    ctx->lr = 0x80224DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    r3 = r29;
    r4 = r26;
    r5 = r24;
    ctx->lr = 0x80224DE8u;
    if constexpr (KnownRegArgsCpuCall<0x80226DF4u>(&func_80226DF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80226DF4_52E5 = func_80226DF4_ra38_3e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80226DF4_52E5);
        r4 = static_cast<uint32_t>(regargs_result_80226DF4_52E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x80226DF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
}

loc_80224DE8:
{
    r23 = (r23 + 356);
    r27 = (r27 + 272);
    r26 = (r26 + 272);
    r25 = (r25 + 1);
}

loc_80224DFC:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(3))) {
        goto loc_80224D44;
    }
}

loc_80224E00:
{
}

loc_80224E04:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80224E74;
    }
}

loc_80224E08:
{
    r26 = 0;
    r28 = r29;
}

loc_80224E10:
{
    r4 = MemoryInline::FlatRead32((r28 + 284));
}

loc_80224E18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80224E30;
    }
}

loc_80224E1C:
{
    r0 = MemoryInline::FlatRead8((r28 + 56));
}

loc_80224E24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224E30;
    }
}

loc_80224E28:
{
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    ctx->lr = 0x80224E30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80224E30:
{
    r28 = (r28 + 356);
    r26 = (r26 + 1);
}

loc_80224E3C:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(7))) {
        goto loc_80224E10;
    }
}

loc_80224E40:
{
    r26 = 0;
}

loc_80224E44:
{
    r4 = MemoryInline::FlatRead32((r29 + 2860));
}

loc_80224E4C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80224E64;
    }
}

loc_80224E50:
{
    r0 = MemoryInline::FlatRead8((r29 + 2632));
}

loc_80224E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80224E64;
    }
}

loc_80224E5C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    ctx->lr = 0x80224E64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8007F130u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
}

loc_80224E64:
{
    r29 = (r29 + 356);
    r26 = (r26 + 1);
}

loc_80224E70:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(3))) {
        goto loc_80224E44;
    }
}

loc_80224E74:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80224B28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80224B28_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80224B28 func_80224B28 preserves=true fpr_mask=0x00000000

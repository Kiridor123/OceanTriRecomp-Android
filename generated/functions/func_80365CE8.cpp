#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021433C(CpuContext* ctx);
extern "C" uint64_t func_8021433C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80214F54(CpuContext* ctx);
extern "C" uint64_t func_80214F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021501C(CpuContext* ctx);
extern "C" uint64_t func_8021501C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80215140(CpuContext* ctx);
extern "C" uint64_t func_80215140_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802151D4(CpuContext* ctx);
extern "C" uint64_t func_802151D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80217A38(CpuContext* ctx);
extern "C" uint64_t func_80217A38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217FB0(CpuContext* ctx);
extern "C" uint64_t func_80217FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027F21C(CpuContext* ctx);
extern "C" uint32_t func_8027F21C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F280(CpuContext* ctx);
extern "C" uint32_t func_8027F280_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80365CE8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    goto loc_80365CE8;

loc_80365CE8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r4 = 65536;
    r31 = (r4 + -1);
    r30 = r31;
    r29 = 6263;
    r28 = 2;
    r27 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 964u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_80365D20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80365D48;
    }
}

loc_80365D24:
{
}

loc_80365D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_80365EF0;
    }
}

loc_80365D2C:
{
}

loc_80365D30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80366110;
    }
}

loc_80365D34:
{
}

loc_80365D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_803661F8;
    }
}

loc_80365D3C:
{
}

loc_80365D40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80366308;
    }
}

loc_80365D44:
{
    goto loc_80366420;
}

loc_80365D48:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80365D50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365D80;
    }
}

loc_80365D54:
{
}

loc_80365D58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80365DFC;
    }
}

loc_80365D5C:
{
}

loc_80365D60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80365E28;
    }
}

loc_80365D64:
{
}

loc_80365D68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80365EA0;
    }
}

loc_80365D6C:
{
}

loc_80365D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80365EB4;
    }
}

loc_80365D74:
{
}

loc_80365D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80365EC0;
    }
}

loc_80365D7C:
{
    goto loc_80366420;
}

loc_80365D80:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
}

loc_80365D88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365D94;
    }
}

loc_80365D8C:
{
    r31 = 84;
    goto loc_80366420;
}

loc_80365D94:
{
    r31 = 92;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 24);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 614));
    r0 = (r3 & 2);
}

loc_80365DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365DBC;
    }
}

loc_80365DB4:
{
    r30 = 81;
    goto loc_80366420;
}

loc_80365DBC:
{
    r0 = (r3 & 8);
}

loc_80365DC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365DE4;
    }
}

loc_80365DC8:
{
    r0 = (r3 & 4);
}

loc_80365DD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365DDC;
    }
}

loc_80365DD4:
{
    r30 = 93;
    goto loc_80366420;
}

loc_80365DDC:
{
    r30 = 94;
    goto loc_80366420;
}

loc_80365DE4:
{
    r0 = (r3 & 4);
}

loc_80365DEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80365DF0:
{
    r30 = 82;
    r27 = 2;
    goto loc_80366420;
}

loc_80365DFC:
{
    r3 = 6263;
    r4 = 95;
    r0 = MemoryInline::FlatRead16((r26 + 22));
    r0 = (r0 * 24);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 620));
    ctx->lr = 0x80365E18u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021501C_1DB8 = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_1DB8);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_1DB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x80365E24u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_24E9 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_24E9);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_24E9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_80365E28:
{
    r31 = 77;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x80365E38u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_2C58 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_2C58);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_2C58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 24);
    r5 = (r26 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 612));
    r0 = (r4 + -12);
}

loc_80365E50:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80365E68;
    }
}

loc_80365E54:
{
    r3 = (r1 + 8);
    r4 = 11;
    r5 = 1;
    ctx->lr = 0x80365E64u;
    if constexpr (KnownRegArgsCpuCall<0x80217FB0u>(&func_80217FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217FB0_34D0 = func_80217FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217FB0_34D0);
        r4 = static_cast<uint32_t>(regargs_result_80217FB0_34D0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    goto loc_80365E74;
}

loc_80365E68:
{
    r3 = (r1 + 8);
    r5 = MemoryInline::FlatRead16((r5 + 616));
    ctx->lr = 0x80365E74u;
    if constexpr (KnownRegArgsCpuCall<0x80217FB0u>(&func_80217FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217FB0_3905 = func_80217FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217FB0_3905);
        r4 = static_cast<uint32_t>(regargs_result_80217FB0_3905 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_80365E74:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_3D4F = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_3D4F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80365E84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80366420;
    }
}

loc_80365E88:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80365E90u;
    if constexpr (KnownRegArgsCpuCall<0x80217A38u>(&func_80217A38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217A38_42ED = func_80217A38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217A38_42ED);
        r4 = static_cast<uint32_t>(regargs_result_80217A38_42ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217A38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80365E94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80365E98:
{
    r30 = 78;
    goto loc_80366420;
}

loc_80365EA0:
{
    r31 = 79;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x80365EB0u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_476A = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_476A);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_476A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_80365EB4:
{
    r31 = 80;
    r29 = 6264;
    goto loc_80366420;
}

loc_80365EC0:
{
    r29 = 6263;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 158u, (r3 + 158));
    r0 = (r4 + -1);
}

loc_80365ED0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80366420;
    }
}

loc_80365ED4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80365EDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80365EE8;
    }
}

loc_80365EE0:
{
    r31 = 120;
    goto loc_80366420;
}

loc_80365EE8:
{
    r31 = 121;
    goto loc_80366420;
}

loc_80365EF0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80365EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365F20;
    }
}

loc_80365EFC:
{
}

loc_80365F00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80365FB0;
    }
}

loc_80365F04:
{
}

loc_80365F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8036607C;
    }
}

loc_80365F0C:
{
}

loc_80365F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803660A8;
    }
}

loc_80365F14:
{
}

loc_80365F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803660FC;
    }
}

loc_80365F1C:
{
    goto loc_80366420;
}

loc_80365F20:
{
    r3 = (r3 + 932);
    // inline leaf 0x801F0898 (10 guest instruction(s))
}

loc_inl1_0x801F0898:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_inl1_0x801F08A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x801F08B0;
    }
}

loc_inl1_0x801F08A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 35));
}

loc_inl1_0x801F08AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x801F08B8;
    }
}

loc_inl1_0x801F08B0:
{
    r3 = 1;
    goto loc_inl1_cont_801F0898;
}

loc_inl1_0x801F08B8:
{
    r3 = 0;
}

loc_inl1_cont_801F0898:
{
    // end of inlined leaf 0x801F0898
}

loc_80365F2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80365F30:
{
    r29 = 6264;
    r0 = MemoryInline::FlatRead16((r26 + 160));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80365F3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80365F4C;
    }
}

loc_80365F40:
{
    r31 = 96;
    r25 = 0;
    goto loc_80365F54;
}

loc_80365F4C:
{
    r31 = 97;
    r25 = 1;
}

loc_80365F54:
{
    r3 = (r26 + 932);
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r3);
    r3 = (r1 + 8);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80365F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80365F84:
{
    r3 = (r1 + 8);
    r4 = r25;
    r5 = (r26 + 524);
    r6 = (r26 + 572);
    ctx->lr = 0x80365F98u;
    if constexpr (KnownRegArgsCpuCall<0x8021433Cu>(&func_8021433C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        const auto regargs_result_8021433C_60AF = func_8021433C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021433C_60AF);
        r4 = static_cast<uint32_t>(regargs_result_8021433C_60AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8021433Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        xer = ctx->xer;
    }
    r0 = (r3 & 65535);
}

loc_80365FA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80365FA4:
{
    r30 = 98;
    r27 = 2;
    goto loc_80366420;
}

loc_80365FB0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
}

loc_80365FB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365FC4;
    }
}

loc_80365FBC:
{
    r31 = 84;
    goto loc_80366420;
}

loc_80365FC4:
{
    r31 = 99;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 296u, (r3 + 296));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r3 + r0);
    r26 = MemoryInline::FlatRead16((r4 + 588));
    r0 = (r26 & 8);
}

loc_80365FE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366000;
    }
}

loc_80365FE4:
{
    r0 = (r26 & 4);
}

loc_80365FEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80365FF8;
    }
}

loc_80365FF0:
{
    r30 = 100;
    goto loc_80366420;
}

loc_80365FF8:
{
    r30 = 101;
    goto loc_80366420;
}

loc_80366000:
{
    r0 = (r26 & 4);
}

loc_80366008:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366018;
    }
}

loc_8036600C:
{
    r30 = 82;
    r27 = 2;
    goto loc_80366420;
}

loc_80366018:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 962u, (r3 + 962));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 3584);
    r25 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r25);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_6CA5 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_6CA5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_8036603C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80366420;
    }
}

loc_80366040:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80366048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80366420;
    }
}

loc_8036604C:
{
    r0 = (r26 & 256);
}

loc_80366054:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366060;
    }
}

loc_80366058:
{
    r30 = 123;
    goto loc_80366420;
}

loc_80366060:
{
    r3 = r25;
    ctx->lr = 0x80366068u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F21C_7400 = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_7400;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8036606C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366070:
{
    r30 = 122;
    r28 = 5;
    goto loc_80366420;
}

loc_8036607C:
{
    r3 = 6263;
    r4 = 102;
    r0 = MemoryInline::FlatRead16((r26 + 296));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 572));
    ctx->lr = 0x80366098u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021501C_793B = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_793B);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_793B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x803660A4u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_806C = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_806C);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_806C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_803660A8:
{
    r31 = 77;
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead16((r26 + 296));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 12);
    r4 = (r26 + r0);
    r4 = (r4 + 524);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = MemoryInline::FlatRead8((r1 + 8));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_8BB3 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_8BB3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_803660D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803660EC;
    }
}

loc_803660D8:
{
    r3 = (r1 + 8);
    ctx->lr = 0x803660E0u;
    if constexpr (KnownRegArgsCpuCall<0x80217A38u>(&func_80217A38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217A38_9151 = func_80217A38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217A38_9151);
        r4 = static_cast<uint32_t>(regargs_result_80217A38_9151 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217A38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803660E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803660EC;
    }
}

loc_803660E8:
{
    r30 = 78;
}

loc_803660EC:
{
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x803660F8u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_95A7 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_95A7);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_95A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_803660FC:
{
    r31 = 79;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x8036610Cu;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_9D16 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_9D16);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_9D16 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_80366110:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80366118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366130;
    }
}

loc_8036611C:
{
}

loc_80366120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8036619C;
    }
}

loc_80366124:
{
}

loc_80366128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_803661C8;
    }
}

loc_8036612C:
{
    goto loc_80366420;
}

loc_80366130:
{
    r31 = 103;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 24);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 614));
    r0 = (r3 & 2);
}

loc_8036614C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036615C;
    }
}

loc_80366150:
{
    r30 = 48;
    r27 = 2;
    goto loc_80366420;
}

loc_8036615C:
{
    r0 = (r3 & 8);
}

loc_80366164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366184;
    }
}

loc_80366168:
{
    r0 = (r3 & 4);
}

loc_80366170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8036617C;
    }
}

loc_80366174:
{
    r30 = 93;
    goto loc_80366420;
}

loc_8036617C:
{
    r30 = 94;
    goto loc_80366420;
}

loc_80366184:
{
    r0 = (r3 & 4);
}

loc_8036618C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366190:
{
    r30 = 82;
    r27 = 2;
    goto loc_80366420;
}

loc_8036619C:
{
    r3 = 6263;
    r4 = 95;
    r0 = MemoryInline::FlatRead16((r26 + 22));
    r0 = (r0 * 24);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 620));
    ctx->lr = 0x803661B8u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021501C_ABAD = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_ABAD);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_ABAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x803661C4u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_B2DE = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_B2DE);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_B2DE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366458;
}

loc_803661C8:
{
    r29 = 6263;
    r4 = MemoryInline::ReadResolved8(guest_range_0, 158u, (r3 + 158));
    r0 = (r4 + -1);
}

loc_803661D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80366420;
    }
}

loc_803661DC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803661E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803661F0;
    }
}

loc_803661E8:
{
    r31 = 120;
    goto loc_80366420;
}

loc_803661F0:
{
    r31 = 121;
    goto loc_80366420;
}

loc_803661F8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80366200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366218;
    }
}

loc_80366204:
{
}

loc_80366208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8036627C;
    }
}

loc_8036620C:
{
}

loc_80366210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803662DC;
    }
}

loc_80366214:
{
    goto loc_80366420;
}

loc_80366218:
{
    r3 = (r3 + 932);
    // inline leaf 0x801F0898 (10 guest instruction(s))
}

loc_inl5_0x801F0898:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_inl5_0x801F08A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x801F08B0;
    }
}

loc_inl5_0x801F08A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 35));
}

loc_inl5_0x801F08AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x801F08B8;
    }
}

loc_inl5_0x801F08B0:
{
    r3 = 1;
    goto loc_inl5_cont_801F0898;
}

loc_inl5_0x801F08B8:
{
    r3 = 0;
}

loc_inl5_cont_801F0898:
{
    // end of inlined leaf 0x801F0898
}

loc_80366224:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366228:
{
    r29 = 6264;
    r31 = 104;
    r3 = (r26 + 932);
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r3);
    r3 = (r1 + 8);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8036625C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366260:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80366268u;
    if constexpr (KnownRegArgsCpuCall<0x8027F280u>(&func_8027F280)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F280_C8C3 = func_8027F280_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F280_C8C3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F280u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
}

loc_8036626C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366270:
{
    r30 = 105;
    r27 = 2;
    goto loc_80366420;
}

loc_8036627C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
}

loc_80366284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366290;
    }
}

loc_80366288:
{
    r31 = 84;
    goto loc_80366420;
}

loc_80366290:
{
    r31 = 106;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8036629C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_803662A0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 818));
    r0 = (r3 & 32);
}

loc_803662B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803662C4;
    }
}

loc_803662BC:
{
    r30 = 107;
    goto loc_80366420;
}

loc_803662C4:
{
    r0 = (r3 & 4);
}

loc_803662CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_803662D0:
{
    r30 = 82;
    r27 = 2;
    goto loc_80366420;
}

loc_803662DC:
{
    r3 = 6263;
    r4 = 108;
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 808));
    ctx->lr = 0x803662F8u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021501C_D38B = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_D38B);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_D38B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x80366304u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_DABC = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_DABC);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_DABC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_80366308:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80366310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366330;
    }
}

loc_80366314:
{
}

loc_80366318:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80366394;
    }
}

loc_8036631C:
{
}

loc_80366320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803663EC;
    }
}

loc_80366324:
{
}

loc_80366328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80366418;
    }
}

loc_8036632C:
{
    goto loc_80366420;
}

loc_80366330:
{
    r3 = (r3 + 932);
    // inline leaf 0x801F0898 (10 guest instruction(s))
}

loc_inl8_0x801F0898:
{
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_inl8_0x801F08A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl8_0x801F08B0;
    }
}

loc_inl8_0x801F08A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 35));
}

loc_inl8_0x801F08AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x801F08B8;
    }
}

loc_inl8_0x801F08B0:
{
    r3 = 1;
    goto loc_inl8_cont_801F0898;
}

loc_inl8_0x801F08B8:
{
    r3 = 0;
}

loc_inl8_cont_801F0898:
{
    // end of inlined leaf 0x801F0898
}

loc_8036633C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366340:
{
    r29 = 6264;
    r31 = 111;
    r3 = (r26 + 932);
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r0 * 12);
    r0 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r0 + r3);
    r3 = (r1 + 8);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80366374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366378:
{
    r3 = (r1 + 8);
    ctx->lr = 0x80366380u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027F21C_EE98 = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_EE98;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80366384:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_80366388:
{
    r30 = 112;
    r27 = 2;
    goto loc_80366420;
}

loc_80366394:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
}

loc_8036639C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803663A8;
    }
}

loc_803663A0:
{
    r31 = 84;
    goto loc_80366420;
}

loc_803663A8:
{
    r31 = 113;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 818));
    r0 = (r3 & 2);
}

loc_803663C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803663D4;
    }
}

loc_803663C8:
{
    r30 = 114;
    r27 = 2;
    goto loc_80366420;
}

loc_803663D4:
{
    r0 = (r3 & 4);
}

loc_803663DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80366420;
    }
}

loc_803663E0:
{
    r30 = 82;
    r27 = 2;
    goto loc_80366420;
}

loc_803663EC:
{
    r3 = 6263;
    r4 = 115;
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r5 = (r26 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 808));
    ctx->lr = 0x80366408u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021501C_F81F = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_F81F);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_F81F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021501Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r26 + 512));
    ctx->lr = 0x80366414u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_802151D4_FF50 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_FF50);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_FF50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802151D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    goto loc_80366420;
}

loc_80366418:
{
    r29 = 6264;
    r31 = 118;
}

loc_80366420:
{
    r0 = (r31 & 65535);
}

loc_80366428:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80366458;
    }
}

loc_8036642C:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    ctx->lr = 0x80366438u;
    if constexpr (KnownRegArgsCpuCall<0x80214F54u>(&func_80214F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80214F54_107A5 = func_80214F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80214F54_107A5);
        r4 = static_cast<uint32_t>(regargs_result_80214F54_107A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80214F54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    r0 = (r30 & 65535);
}

loc_80366440:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80366458;
    }
}

loc_80366444:
{
    r3 = r29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r5 = r28;
    r6 = r27;
    ctx->lr = 0x80366458u;
    if constexpr (KnownRegArgsCpuCall<0x80215140u>(&func_80215140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80215140_10FB4 = func_80215140_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80215140_10FB4);
        r4 = static_cast<uint32_t>(regargs_result_80215140_10FB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80215140u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_80366458:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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

extern "C" void func_80365CE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80365CE8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80365CE8 func_80365CE8 preserves=true fpr_mask=0x00000000

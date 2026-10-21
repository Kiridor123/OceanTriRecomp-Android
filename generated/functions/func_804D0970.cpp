#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D0600(CpuContext* ctx);
extern "C" uint64_t func_804D0600_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D0740(CpuContext* ctx);
extern "C" void func_804D0740_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D3840(CpuContext* ctx);
extern "C" uint64_t func_804D3840_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D0970_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r10_ca_0 = 0;
    uint32_t r10_ca_1 = 0;
    uint32_t r10_ca_2 = 0;
    uint32_t r10_ca_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r11_addze_src_0 = 0;
    uint32_t r11_addze_src_1 = 0;
    uint32_t r11_addze_src_2 = 0;
    uint32_t r11_addze_src_3 = 0;
    uint32_t r11_ca_0 = 0;
    uint32_t r11_ca_1 = 0;
    uint32_t r11_ca_2 = 0;
    uint32_t r11_ca_3 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_ca_0 = 0;
    uint32_t r12_ca_1 = 0;
    uint32_t r12_ca_2 = 0;
    uint32_t r12_ca_3 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r3_addze_src_0 = 0;
    uint32_t r3_addze_src_1 = 0;
    uint32_t r3_addze_src_2 = 0;
    uint32_t r3_addze_src_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_10 = 0;
    uint32_t r6_rot_11 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;
    uint32_t r6_rot_9 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addze_src_0 = 0;
    uint32_t r7_addze_src_1 = 0;
    uint32_t r7_addze_src_2 = 0;
    uint32_t r7_addze_src_3 = 0;
    uint32_t r7_addze_src_4 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_ca_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t r9_rot_3 = 0;
    uint32_t r9_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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

    MKW_GUEST_ENTER(0x804D0970u);
    goto loc_804D0970;

loc_804D0970:
{
    guest_range_1 = MemoryAlias::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryAlias::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
}

loc_804D0988:
{
    r28 = r3;
    r29 = r4;
    r30 = r5;
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(1))) {
        goto loc_804D09F0;
    }
}

loc_804D0998:
{
    r4 = 1769472;
    r3 = 327680;
    r31 = r28;
    r26 = (r4 + -256);
    r27 = (r3 + -12288);
    goto loc_804D09E4;
}

loc_804D09B0:
{
}

loc_804D09B4:
{
    r25 = 256;
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(256))) {
        goto loc_804D09C0;
    }
}

loc_804D09BC:
{
    r25 = r27;
}

loc_804D09C0:
{
    r27 = (r27 - r25);
}

loc_804D09C4:
{
    r3 = r31;
    r4 = r25;
    r5 = r26;
    ctx->lr = 0x804D09D4u;
    if constexpr (KnownRegArgsCpuCall<0x804D3840u>(&func_804D3840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804D3840_186F = func_804D3840_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D3840_186F);
        r4 = static_cast<uint32_t>(regargs_result_804D3840_186F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D3840u>(ctx);
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
        r12 = ctx->gpr[12];
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

loc_804D09D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D09C4;
    }
}

loc_804D09DC:
{
    r26 = (r26 + r25);
    r31 = (r31 + r25);
}

loc_804D09E4:
{
}

loc_804D09E8:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(0))) {
        goto loc_804D09B0;
    }
}

loc_804D09EC:
{
    goto loc_804D0A40;
}

loc_804D09F0:
{
    r3 = 2097152;
    r26 = r28;
    r31 = (r3 + -12544);
    r27 = 12288;
    goto loc_804D0A38;
}

loc_804D0A04:
{
}

loc_804D0A08:
{
    r25 = 256;
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(256))) {
        goto loc_804D0A14;
    }
}

loc_804D0A10:
{
    r25 = r27;
}

loc_804D0A14:
{
    r27 = (r27 - r25);
}

loc_804D0A18:
{
    r3 = r26;
    r4 = r25;
    r5 = r31;
    ctx->lr = 0x804D0A28u;
    if constexpr (KnownRegArgsCpuCall<0x804D3840u>(&func_804D3840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        const auto regargs_result_804D3840_246D = func_804D3840_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D3840_246D);
        r4 = static_cast<uint32_t>(regargs_result_804D3840_246D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D3840u>(ctx);
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
        r12 = ctx->gpr[12];
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

loc_804D0A2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D0A18;
    }
}

loc_804D0A30:
{
    r31 = (r31 + r25);
    r26 = (r26 + r25);
}

loc_804D0A38:
{
}

loc_804D0A3C:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(0))) {
        goto loc_804D0A04;
    }
}

loc_804D0A40:
{
    r0 = MemoryAlias::FlatRead8(r28);
}

loc_804D0A48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(89))) {
        goto loc_804D0A6C;
    }
}

loc_804D0A4C:
{
    r0 = MemoryAlias::FlatRead8((r28 + 1));
}

loc_804D0A54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(97))) {
        goto loc_804D0A6C;
    }
}

loc_804D0A58:
{
    r0 = MemoryAlias::FlatRead8((r28 + 2));
}

loc_804D0A60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(121))) {
        goto loc_804D0A6C;
    }
}

loc_804D0A64:
{
    r31 = MemoryAlias::FlatRead32((r28 + 4));
    goto loc_804D0A70;
}

loc_804D0A6C:
{
    r31 = 0;
}

loc_804D0A70:
{
}

loc_804D0A74:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804D0A80;
    }
}

loc_804D0A78:
{
    r3 = 0;
    goto loc_804D0C68;
}

loc_804D0A80:
{
    r3 = r28;
    r4 = r30;
    ctx->lr = 0x804D0A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D0740u>(&func_804D0740)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        func_804D0740_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        xer = ctx->xer;
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
        ctx->gpr[12] = r12;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D0740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        xer = ctx->xer;
    }
}

loc_804D0A90:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_804D0C64;
    }
}

loc_804D0A94:
{
    r5 = MemoryAlias::FlatRead32((r2 + -1928));
    r3 = r29;
    r0 = MemoryAlias::FlatRead32((r2 + -1924));
    r4 = 84;
    MemoryAlias::FlatWriteRam32((r1 + 8), r5);
    MemoryAlias::FlatWriteRam32((r1 + 12), r0);
    if constexpr (KnownRegArgsCpuCall<0x804D0600u>(&func_804D0600)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_804D0600_383A = func_804D0600_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804D0600_383A);
        r4 = static_cast<uint32_t>(regargs_result_804D0600_383A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->xer = xer;
        InvokeDirectCpu<0x804D0600u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    guest_range_0 = MemoryAlias::ResolveRangeHost((r30 + 16), 0, 24u, true, false);
    {
        const auto resolved_pair = MemoryAlias::ReadResolvedPair16(guest_range_0, 10u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r11 = MemoryAlias::ReadResolved16(guest_range_0, 10u, (r30 + 26));
            r4 = MemoryAlias::ReadResolved16(guest_range_0, 12u, (r30 + 28));
        }
    }
    r0 = MemoryAlias::ReadResolved16(guest_range_0, 14u, (r30 + 30));
    r9 = (r11 * r4);
    r5 = MemoryAlias::ReadResolved32(guest_range_0, 20u, (r30 + 36));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -32);
    r6 = MemoryAlias::ReadResolved16(guest_range_0, 2u, (r30 + 18));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    r7 = MemoryAlias::ReadResolved16(guest_range_0, 0u, (r30 + 16));
    r25 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r9));
    r0 = (r0 + r4);
    r10 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r30 + 20));
    r4 = (r30 + r5);
    r28 = (static_cast<int32_t>(r0) >> 1);
    r8 = MemoryAlias::FlatRead16((r1 + 8));
    r0 = (r25 * r9);
    r9 = MemoryAlias::FlatRead16((r1 + 10));
    r3 = (r3 - r0);
    r5 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r11));
    r0 = (r5 * r11);
    r5 = (r5 * r6);
    r26 = (r3 - r0);
    r6 = (r5 + 4);
    r26 = (r26 * r7);
    r11 = (r5 + 5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r6);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r6) >> 3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & -536870912);
    r12_ca_1 = (xer >> 29) & 1u;
    r12 = (r3 + r12_ca_1);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & 1);
    r29 = (r25 * r10);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r26);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r26) >> 3);
    r0 = (r0 - r7);
    r10_ca_1 = (xer >> 29) & 1u;
    r10 = (r3 + r10_ca_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & -536870912);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & 1);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(31));
    r29 = (r29_rot_1 & 2147483647);
    r12 = (r28 * r12);
    r7 = (r3 + r7);
    r0 = (r0 - r6);
    r4 = (r4 + r29);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r6);
    r12 = (r4 + r12);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r10 = (r10_rot_1 & -2);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(29));
    r6 = (r6_rot_2 & -536870912);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r3 = (static_cast<int32_t>(r3) >> 2);
    r12 = (r12 + r0);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r6 = (r6 - r7);
    r3_addze_src_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_addze_src_1 + r3_ca_1);
    r12 = (r12 + r10);
    r12_addr_1 = (r12 + r3);
    MemoryAlias::FlatWrite16(r12_addr_1, static_cast<uint16_t>(r8));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -1);
    r6 = (r6 + r7);
    r8 = (r5 + 6);
    r12 = MemoryAlias::ReadResolved16(guest_range_0, 14u, (r30 + 30));
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & -2);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_4 & -536870912);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(2));
    r28 = (r28_rot_1 & -32);
    r12_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_1 & 1);
    r12 = (r12 + r28);
    r6 = (r6 - r7);
    r12 = (static_cast<int32_t>(r12) >> 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r11);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r11 = (static_cast<int32_t>(r11) >> 3);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_5 & -1);
    r11_addze_src_1 = r11;
    r11_ca_1 = (xer >> 29) & 1u;
    r11 = (r11_addze_src_1 + r11_ca_1);
    r6 = (r6 + r7);
    r11 = (r12 * r11);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_6 & -2);
    r7 = (r4 + r11);
    r7 = (r7 + r0);
    r7 = (r7 + r10);
    r7_addr_1 = (r7 + r3);
    MemoryAlias::FlatWrite16(r7_addr_1, static_cast<uint16_t>(r9));
    r7 = MemoryAlias::ReadResolved16(guest_range_0, 14u, (r30 + 30));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r9 = (r9_rot_1 & -32);
    r7_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r7 = (r7_rot_4 & 1);
    r7 = (r7 + r9);
    r9 = (static_cast<int32_t>(r7) >> 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r8) >> 3);
    r7_addze_src_1 = r7;
    r7_ca_1 = (xer >> 29) & 1u;
    r7 = (r7_addze_src_1 + r7_ca_1);
    r7 = (r9 * r7);
    r7 = (r4 + r7);
    r7 = (r7 + r0);
    r7 = (r7 + r6);
    r6 = MemoryAlias::FlatRead16((r1 + 12));
    r8 = (r5 + 7);
    r7_addr_2 = (r7 + r3);
    MemoryAlias::FlatWrite16(r7_addr_2, static_cast<uint16_t>(r6));
    r6_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(29));
    r6 = (r6_rot_7 & -536870912);
    r7_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r7 = (r7_rot_5 & 1);
    r5 = MemoryAlias::FlatRead16((r1 + 14));
    r9 = MemoryAlias::ReadResolved16(guest_range_0, 14u, (r30 + 30));
    r6 = (r6 - r7);
    r6_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r6 = (r6_rot_8 & -1);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r10 = (r10_rot_3 & -32);
    r9_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r9 = (r9_rot_2 & 1);
    r9 = (r9 + r10);
    r6 = (r6 + r7);
    r9 = (static_cast<int32_t>(r9) >> 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r8);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r8) >> 3);
    r6_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_9 & -2);
    r7_addze_src_2 = r7;
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r7_addze_src_2 + r7_ca_2);
    r7 = (r9 * r7);
    r4 = (r4 + r7);
    r4 = (r4 + r0);
    r4 = (r4 + r6);
    r4_addr_1 = (r4 + r3);
    MemoryAlias::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r5));
}

loc_804D0C64:
{
    r3 = r31;
}

loc_804D0C68:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryAlias::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryAlias::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D0970(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D0970_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D0970 func_804D0970 preserves=true fpr_mask=0x00000000

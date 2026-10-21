#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A40C(CpuContext* ctx);
extern "C" uint32_t func_8026A40C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8026F96C(CpuContext* ctx);
extern "C" uint64_t func_8026F96C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80264024_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80264258_loc_0 = 0;
    uint32_t addr_psqx_80264264_loc_0 = 0;
    uint32_t addr_psqx_80264270_loc_0 = 0;
    uint32_t addr_psqx_8026427C_loc_0 = 0;
    uint32_t addr_psqx_80264288_loc_0 = 0;
    uint32_t addr_psqx_80264294_loc_0 = 0;
    uint32_t addr_psqx_802642A0_loc_0 = 0;
    uint32_t addr_psqx_802642AC_loc_0 = 0;
    uint32_t addr_psqx_802642B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80264024u);
    goto loc_80264024;

loc_80264024:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026F96C_AA8 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_AA8);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_AA8 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_80264038:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80264118;
    }
}

loc_8026403C:
{
    r3 = r15;
    ctx->lr = 0x80264044u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026A40C_E78 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_E78;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r4 = MemoryInline::FlatRead32((r15 + 88));
    r3 = MemoryInline::FlatRead32((r15 + 168));
    r0 = (r3 + 65536);
    r0 = (r0 - r4);
    r3 = (r0 & 65535);
    r0 = (r3 + -24576);
}

loc_80264060:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16384))) {
        goto loc_80264118;
    }
}

loc_80264064:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r0));
}

loc_80264118:
{
    r0 = (r19 & 65535);
}

loc_80264120:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80264134;
    }
}

loc_80264124:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
    MemoryInline::FlatWrite16((r15 + 774), static_cast<uint16_t>(r19));
    goto loc_80264158;
}

loc_80264134:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_8026413C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264158;
    }
}

loc_80264140:
{
    r3 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r3 + -167);
}

loc_8026414C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80264158;
    }
}

loc_80264150:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    MemoryInline::FlatWrite32((r15 + 168), r0);
}

loc_80264158:
{
    r0 = MemoryInline::FlatRead16((r21 + 6));
    r0 = (r0 & 16384);
}

loc_80264164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026418C;
    }
}

loc_80264168:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026F96C_1738 = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_1738);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_1738 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_8026417C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_80264180:
{
    r3 = r15;
    ctx->lr = 0x80264188u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026A40C_1B0B = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_1B0B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_802641D4;
}

loc_8026418C:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80264194:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802641D4;
    }
}

loc_80264198:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802641B4;
    }
}

loc_802641A4:
{
}

loc_802641A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802641B4;
    }
}

loc_802641AC:
{
}

loc_802641B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_802641D4;
    }
}

loc_802641B4:
{
    r3 = r15;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8026F96Cu>(&func_8026F96C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026F96C_1FED = func_8026F96C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026F96C_1FED);
        r4 = static_cast<uint32_t>(regargs_result_8026F96C_1FED >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8026F96Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (r3 & 255);
}

loc_802641C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_802641D4;
    }
}

loc_802641CC:
{
    r3 = r15;
    ctx->lr = 0x802641D4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A40Cu>(&func_8026A40C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8026A40C_23C0 = func_8026A40C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8026A40C_23C0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8026A40Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802641D4:
{
    r3 = MemoryInline::FlatRead8((r1 + 8));
}

loc_802641DC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802641EC;
    }
}

loc_802641E0:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(20))) {
        goto loc_80264200;
    }
}

loc_802641EC:
{
}

loc_802641F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80264208;
    }
}

loc_802641F4:
{
    r0 = MemoryInline::FlatRead16((r1 + 16));
}

loc_802641FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(158))) {
        goto loc_80264208;
    }
}

loc_80264200:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 1623), static_cast<uint8_t>(r0));
}

loc_80264208:
{
    r0 = MemoryInline::FlatRead16((r1 + 14));
    r0 = (r0 & 32);
}

loc_80264214:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264220;
    }
}

loc_80264218:
{
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite16((r15 + 182), static_cast<uint16_t>(r0));
}

loc_80264220:
{
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    r5 = MemoryInline::FlatRead16((r1 + 16));
    r6 = MemoryInline::FlatRead16((r1 + 14));
    ctx->lr = 0x80264234u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80275754u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    mkw_gqr0 = ctx->gqr[0];
    r3 = 1;
}

loc_80264254:
{
    r0 = 296;
    addr_psqx_80264258_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264258_loc_0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 160), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 128u, (r1 + 288));
    r0 = 280;
    addr_psqx_80264264_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264264_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 112u, (r1 + 272));
    r0 = 264;
    addr_psqx_80264270_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264270_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 96u, (r1 + 256));
    r0 = 248;
    addr_psqx_8026427C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8026427C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 80u, (r1 + 240));
    r0 = 232;
    addr_psqx_80264288_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264288_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 224));
    r0 = 216;
    addr_psqx_80264294_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80264294_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 208));
    r0 = 200;
    addr_psqx_802642A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642A0_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 192));
    r0 = 184;
    addr_psqx_802642AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642AC_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 176));
    r0 = 168;
    addr_psqx_802642B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802642B8_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 148u, (r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80264024(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80264024_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0028BFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80264024 func_80264024 preserves=false fpr_mask=0xFF800000

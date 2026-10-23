#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214F54(CpuContext* ctx);
extern "C" uint64_t func_80214F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80215140(CpuContext* ctx);
extern "C" uint64_t func_80215140_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802151D4(CpuContext* ctx);
extern "C" uint64_t func_802151D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80359338(CpuContext* ctx);
extern "C" uint64_t func_80359338_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803A50D4(CpuContext* ctx);
extern "C" uint64_t func_803A50D4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803C1E64_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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

    goto loc_803C1E64;

loc_803C1E64:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r4 = 65536;
    r31 = (r4 + -1);
    r30 = r31;
    r29 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 172u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803C1EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_803C20B0;
    }
}

loc_803C1EA4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803C1EB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C1EC8;
    }
}

loc_803C1EB4:
{
}

loc_803C1EB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C1EF8;
    }
}

loc_803C1EBC:
{
}

loc_803C1EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C1F30;
    }
}

loc_803C1EC4:
{
    goto loc_803C20B0;
}

loc_803C1EC8:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 40u, (r3 + 40));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 448);
    r31 = (r0 & 65535);
}

loc_803C1ED8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C1EDC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 42u, (r3 + 42));
    r0 = (r0 & 1);
}

loc_803C1EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C1EEC:
{
    r30 = 450;
    r29 = 2;
    goto loc_803C20B0;
}

loc_803C1EF8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803C1F04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C1F14;
    }
}

loc_803C1F08:
{
}

loc_803C1F0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C1F1C;
    }
}

loc_803C1F10:
{
    goto loc_803C20B0;
}

loc_803C1F14:
{
    r31 = 452;
    goto loc_803C20B0;
}

loc_803C1F1C:
{
    r31 = 453;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r28 + 232));
    ctx->lr = 0x803C1F2Cu;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802151D4_125A = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_125A);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_125A >> 32);
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
        InvokeDirectCpu<0x802151D4u>(ctx);
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
    }
    goto loc_803C20B0;
}

loc_803C1F30:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803C1F3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C1F64;
    }
}

loc_803C1F40:
{
}

loc_803C1F44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C1F94;
    }
}

loc_803C1F48:
{
}

loc_803C1F4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C203C;
    }
}

loc_803C1F50:
{
}

loc_803C1F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803C2050;
    }
}

loc_803C1F58:
{
}

loc_803C1F5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_803C207C;
    }
}

loc_803C1F60:
{
    goto loc_803C20B0;
}

loc_803C1F64:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 72u, (r3 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 457);
    r31 = (r0 & 65535);
    r3 = MemoryInline::ReadResolved16(guest_range_0, 74u, (r3 + 74));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
}

loc_803C1F84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C1F88:
{
    r30 = 459;
    r29 = 2;
    goto loc_803C20B0;
}

loc_803C1F94:
{
    r31 = 454;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 170u, (r3 + 170));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 147));
}

loc_803C1FA8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_803C1FB4;
    }
}

loc_803C1FAC:
{
    r3 = 0;
    goto loc_803C1FC8;
}

loc_803C1FB4:
{
    r3 = 0x806B0000u;
    r0 = (r3 + -12348);
    r3 = (r0 + r4);
    r3 = MemoryInline::FlatRead8((r3 + 308));
    if constexpr (KnownRegArgsCpuCall<0x803A50D4u>(&func_803A50D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A50D4_20B4 = func_803A50D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A50D4_20B4);
        r4 = static_cast<uint32_t>(regargs_result_803A50D4_20B4 >> 32);
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
        InvokeDirectCpu<0x803A50D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C1FC8:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r28 + 170));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r28 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 155));
    r0 = (r0 & 2);
}

loc_803C1FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C2000;
    }
}

loc_803C1FE4:
{
    r0 = (r3 & 65535);
}

loc_803C1FEC:
{
    r30 = 455;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C1FF8;
    }
}

loc_803C1FF4:
{
    r30 = 459;
}

loc_803C1FF8:
{
    r29 = 2;
    goto loc_803C20B0;
}

loc_803C2000:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r4 + 147));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 308));
    if constexpr (KnownRegArgsCpuCall<0x803A50D4u>(&func_803A50D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803A50D4_2772 = func_803A50D4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803A50D4_2772);
        r4 = static_cast<uint32_t>(regargs_result_803A50D4_2772 >> 32);
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
        InvokeDirectCpu<0x803A50D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r3));
    r3 = (r3 & 65535);
    r4 = 1;
    ctx->lr = 0x803C2028u;
    if constexpr (KnownRegArgsCpuCall<0x80359338u>(&func_80359338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80359338_2B39 = func_80359338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80359338_2B39);
        r4 = static_cast<uint32_t>(regargs_result_80359338_2B39 >> 32);
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
        InvokeDirectCpu<0x80359338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C202C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C2030:
{
    r30 = 455;
    r29 = 2;
    goto loc_803C20B0;
}

loc_803C203C:
{
    r31 = 456;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r28 + 232));
    ctx->lr = 0x803C204Cu;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802151D4_2FF9 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_2FF9);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_2FF9 >> 32);
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
        InvokeDirectCpu<0x802151D4u>(ctx);
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
    }
    goto loc_803C20B0;
}

loc_803C2050:
{
    r31 = 460;
    r5 = MemoryInline::ReadResolved16(guest_range_0, 106u, (r3 + 106));
    r4 = 1;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 104u, (r3 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 & r0);
}

loc_803C206C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C2070:
{
    r30 = 461;
    r29 = 2;
    goto loc_803C20B0;
}

loc_803C207C:
{
    r31 = 454;
    r3 = (r1 + 8);
    r4 = 0;
    // inline leaf 0x80359594 (14 guest instruction(s))
}

loc_inl0_0x80359594:
{
    r5 = 0x806C0000u;
    r6 = (r5 + 6120);
}

loc_inl0_0x803595A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803595B8;
    }
}

loc_inl0_0x803595A4:
{
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r6 + r0);
    r0 = MemoryInline::FlatRead16((r5 + 16));
    MemoryInline::FlatWriteRam16(r3, static_cast<uint16_t>(r0));
}

loc_inl0_0x803595B8:
{
}

loc_inl0_0x803595BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803595C0:
{
    r0 = MemoryInline::FlatRead16((r6 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam32(r4, r0);
    goto loc_inl0_cont_80359594;
}

loc_inl0_return:
{
}

loc_inl0_cont_80359594:
{
    // end of inlined leaf 0x80359594
    r3 = MemoryInline::FlatRead16((r1 + 8));
}

loc_803C2094:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C2098:
{
    r4 = 1;
    ctx->lr = 0x803C20A0u;
    if constexpr (KnownRegArgsCpuCall<0x80359338u>(&func_80359338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80359338_3DD3 = func_80359338_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80359338_3DD3);
        r4 = static_cast<uint32_t>(regargs_result_80359338_3DD3 >> 32);
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
        InvokeDirectCpu<0x80359338u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803C20A4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_803C20B0;
    }
}

loc_803C20A8:
{
    r30 = 455;
    r29 = 2;
}

loc_803C20B0:
{
    r0 = (r31 & 65535);
}

loc_803C20B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803C20E8;
    }
}

loc_803C20BC:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    ctx->lr = 0x803C20C8u;
    if constexpr (KnownRegArgsCpuCall<0x80214F54u>(&func_80214F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80214F54_4329 = func_80214F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80214F54_4329);
        r4 = static_cast<uint32_t>(regargs_result_80214F54_4329 >> 32);
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
        InvokeDirectCpu<0x80214F54u>(ctx);
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
    }
    r0 = (r30 & 65535);
}

loc_803C20D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803C20E8;
    }
}

loc_803C20D4:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r5 = 2;
    r6 = r29;
    ctx->lr = 0x803C20E8u;
    if constexpr (KnownRegArgsCpuCall<0x80215140u>(&func_80215140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80215140_4A8E = func_80215140_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80215140_4A8E);
        r4 = static_cast<uint32_t>(regargs_result_80215140_4A8E >> 32);
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
        InvokeDirectCpu<0x80215140u>(ctx);
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
    }
}

loc_803C20E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C1E64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C1E64_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C1E64 func_803C1E64 preserves=true fpr_mask=0x00000000

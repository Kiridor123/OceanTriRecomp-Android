#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80214F54(CpuContext* ctx);
extern "C" uint64_t func_80214F54_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021501C(CpuContext* ctx);
extern "C" uint64_t func_8021501C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80215140(CpuContext* ctx);
extern "C" uint64_t func_80215140_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802151D4(CpuContext* ctx);
extern "C" uint64_t func_802151D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803C7BFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803C7BFC;

loc_803C7BFC:
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
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 34u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_803C7C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C7C4C;
    }
}

loc_803C7C38:
{
}

loc_803C7C3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C7C90;
    }
}

loc_803C7C40:
{
}

loc_803C7C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803C7D88;
    }
}

loc_803C7C48:
{
    goto loc_803C7DFC;
}

loc_803C7C4C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 16);
    r31 = (r0 & 65535);
}

loc_803C7C5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_803C7DFC;
    }
}

loc_803C7C60:
{
    // inline leaf 0x803C5C94 (13 guest instruction(s))
}

loc_inl0_0x803C5C94:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18392));
}

loc_inl0_0x803C5CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_inl0_0x803C5CB0;
    }
}

loc_inl0_0x803C5CA4:
{
}

loc_inl0_0x803C5CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803C5CB8;
    }
}

loc_inl0_0x803C5CAC:
{
    goto loc_inl0_0x803C5CC0;
}

loc_inl0_0x803C5CB0:
{
    r3 = 2;
    goto loc_inl0_cont_803C5C94;
}

loc_inl0_0x803C5CB8:
{
    r3 = 0;
    goto loc_inl0_cont_803C5C94;
}

loc_inl0_0x803C5CC0:
{
    r3 = 1;
}

loc_inl0_cont_803C5C94:
{
    // end of inlined leaf 0x803C5C94
    r0 = (r3 & 255);
}

loc_803C7C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C7C7C;
    }
}

loc_803C7C70:
{
}

loc_803C7C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C7C88;
    }
}

loc_803C7C78:
{
    goto loc_803C7DFC;
}

loc_803C7C7C:
{
    r30 = 20;
    r29 = 2;
    goto loc_803C7DFC;
}

loc_803C7C88:
{
    r31 = 19;
    goto loc_803C7DFC;
}

loc_803C7C90:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_803C7C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7CB0;
    }
}

loc_803C7C9C:
{
}

loc_803C7CA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C7D4C;
    }
}

loc_803C7CA4:
{
}

loc_803C7CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C7D54;
    }
}

loc_803C7CAC:
{
    goto loc_803C7DFC;
}

loc_803C7CB0:
{
    r4 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r3 + 32));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803C7CB8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803C7CC8;
    }
}

loc_803C7CBC:
{
    r31 = 21;
    r29 = 1;
    goto loc_803C7CD0;
}

loc_803C7CC8:
{
    r31 = 22;
    r29 = 2;
}

loc_803C7CD0:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 364));
    r0 = (r3 & 128);
}

loc_803C7CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7D1C;
    }
}

loc_803C7CEC:
{
    r0 = (r3 & 2);
}

loc_803C7CF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7D10;
    }
}

loc_803C7CF8:
{
}

loc_803C7CFC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_803C7D08;
    }
}

loc_803C7D00:
{
    r30 = 48;
    goto loc_803C7D14;
}

loc_803C7D08:
{
    r30 = 47;
    goto loc_803C7D14;
}

loc_803C7D10:
{
    r30 = 49;
}

loc_803C7D14:
{
    r29 = 2;
    goto loc_803C7DFC;
}

loc_803C7D1C:
{
    r0 = (r3 & 8);
}

loc_803C7D24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7D34;
    }
}

loc_803C7D28:
{
    r30 = 23;
    r29 = 2;
    goto loc_803C7DFC;
}

loc_803C7D34:
{
    r0 = (r3 & 4);
}

loc_803C7D3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7DFC;
    }
}

loc_803C7D40:
{
    r30 = 82;
    r29 = 2;
    goto loc_803C7DFC;
}

loc_803C7D4C:
{
    r31 = 25;
    goto loc_803C7DFC;
}

loc_803C7D54:
{
    r3 = 6263;
    r4 = 26;
    r6 = MemoryInline::FlatRead16((r28 + 20));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r5 = (r28 + r0);
    r0 = MemoryInline::FlatRead32((r5 + 368));
    r5 = (r6 * r0);
    ctx->lr = 0x803C7D78u;
    if constexpr (KnownRegArgsCpuCall<0x8021501Cu>(&func_8021501C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8021501C_1E68 = func_8021501C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021501C_1E68);
        r4 = static_cast<uint32_t>(regargs_result_8021501C_1E68 >> 32);
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
        InvokeDirectCpu<0x8021501Cu>(ctx);
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
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r28 + 28));
    ctx->lr = 0x803C7D84u;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802151D4_24F2 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_24F2);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_24F2 >> 32);
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
    goto loc_803C7E34;
}

loc_803C7D88:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_803C7D90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C7DA8;
    }
}

loc_803C7D94:
{
}

loc_803C7D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803C7DB0;
    }
}

loc_803C7D9C:
{
}

loc_803C7DA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803C7DEC;
    }
}

loc_803C7DA4:
{
    goto loc_803C7DFC;
}

loc_803C7DA8:
{
    r31 = 27;
    goto loc_803C7DFC;
}

loc_803C7DB0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_803C7DB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C7DE4;
    }
}

loc_803C7DBC:
{
    r31 = 28;
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 128));
}

loc_803C7DD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803C7DFC;
    }
}

loc_803C7DD8:
{
    r30 = 29;
    r29 = 2;
    goto loc_803C7DFC;
}

loc_803C7DE4:
{
    r31 = 30;
    goto loc_803C7DFC;
}

loc_803C7DEC:
{
    r31 = 31;
    r3 = 6265;
    r4 = MemoryInline::FlatRead32((r28 + 28));
    ctx->lr = 0x803C7DFCu;
    if constexpr (KnownRegArgsCpuCall<0x802151D4u>(&func_802151D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802151D4_3166 = func_802151D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802151D4_3166);
        r4 = static_cast<uint32_t>(regargs_result_802151D4_3166 >> 32);
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
}

loc_803C7DFC:
{
    r0 = (r31 & 65535);
}

loc_803C7E04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803C7E34;
    }
}

loc_803C7E08:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    ctx->lr = 0x803C7E14u;
    if constexpr (KnownRegArgsCpuCall<0x80214F54u>(&func_80214F54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80214F54_38C6 = func_80214F54_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80214F54_38C6);
        r4 = static_cast<uint32_t>(regargs_result_80214F54_38C6 >> 32);
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

loc_803C7E1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_803C7E34;
    }
}

loc_803C7E20:
{
    r3 = 6263;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r5 = 2;
    r6 = r29;
    ctx->lr = 0x803C7E34u;
    if constexpr (KnownRegArgsCpuCall<0x80215140u>(&func_80215140)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80215140_402B = func_80215140_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80215140_402B);
        r4 = static_cast<uint32_t>(regargs_result_80215140_402B >> 32);
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

loc_803C7E34:
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

extern "C" void func_803C7BFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C7BFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C7BFC func_803C7BFC preserves=true fpr_mask=0x00000000

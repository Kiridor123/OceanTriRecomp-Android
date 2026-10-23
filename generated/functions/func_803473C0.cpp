#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8034530C(CpuContext* ctx);
extern "C" uint64_t func_8034530C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8034550C(CpuContext* ctx);
extern "C" uint64_t func_8034550C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80345654(CpuContext* ctx);
extern "C" uint64_t func_80345654_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80345718(CpuContext* ctx);
extern "C" uint64_t func_80345718_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803459F8(CpuContext* ctx);
extern "C" uint64_t func_803459F8_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345AD0(CpuContext* ctx);
extern "C" uint64_t func_80345AD0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345C54(CpuContext* ctx);
extern "C" uint64_t func_80345C54_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80345FB0(CpuContext* ctx);
extern "C" uint64_t func_80345FB0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803472BC(CpuContext* ctx);
extern "C" uint64_t func_803472BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803473C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803473C0;

loc_803473C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r28 = 0;
    r30 = (r3 & 65535);
    goto loc_8034744C;
}

loc_80347408:
{
    r3 = r29;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl2_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl2_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x8012D088;
    }
}

loc_inl2_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl2_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl2_0x8012D088;
    }
}

loc_inl2_0x8012D080:
{
    r3 = 0;
    goto loc_inl2_cont_8012D068;
}

loc_inl2_0x8012D088:
{
    r3 = 1;
}

loc_inl2_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_80347414:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80347444;
    }
}

loc_80347418:
{
    r3 = MemoryInline::FlatRead8((r31 + 20));
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_80347424:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80347444;
    }
}

loc_80347428:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x80347434u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x803443B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_80347438:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80347444;
    }
}

loc_8034743C:
{
    MemoryInline::FlatWrite32((r31 + 24), r29);
    goto loc_80347458;
}

loc_80347444:
{
    r28 = (r28 + 1);
    r29 = (r29 + 2840);
}

loc_8034744C:
{
    r0 = (r28 & 255);
}

loc_80347454:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r30))) {
        goto loc_80347408;
    }
}

loc_80347458:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_80347460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80347870;
    }
}

loc_80347464:
{
    r3 = r31;
    r4 = (r1 + 9);
    r5 = (r1 + 8);
    ctx->lr = 0x80347474u;
    if constexpr (KnownRegArgsCpuCall<0x803472BCu>(&func_803472BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803472BC_1E46 = func_803472BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803472BC_1E46);
        r4 = static_cast<uint32_t>(regargs_result_803472BC_1E46 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803472BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_8034747C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80347870;
    }
}

loc_80347480:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80347488:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80347490;
    }
}

loc_8034748C:
{
    goto loc_80347870;
}

loc_80347490:
{
    r29 = MemoryInline::FlatRead8((r31 + 8));
}

loc_80347498:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803474B0;
    }
}

loc_8034749C:
{
}

loc_803474A0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(2))) {
        goto loc_803474DC;
    }
}

loc_803474A4:
{
}

loc_803474A8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_80347520;
    }
}

loc_803474AC:
{
    goto loc_8034758C;
}

loc_803474B0:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 20));
    r5 = 0;
    ctx->lr = 0x803474C0u;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80345FB0_2548 = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_2548);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_2548 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80345FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_803474C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803474D4;
    }
}

loc_803474CC:
{
    r29 = 2;
    goto loc_8034758C;
}

loc_803474D4:
{
    r29 = 0;
    goto loc_8034758C;
}

loc_803474DC:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 20));
    r5 = 0;
    ctx->lr = 0x803474ECu;
    if constexpr (KnownRegArgsCpuCall<0x80345FB0u>(&func_80345FB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80345FB0_29DA = func_80345FB0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345FB0_29DA);
        r4 = static_cast<uint32_t>(regargs_result_80345FB0_29DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80345FB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_803474F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80347518;
    }
}

loc_803474F8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 54));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10048));
    ctx->lr = 0x80347508u;
    if constexpr (KnownRegArgsCpuCall<0x80345C54u>(&func_80345C54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80345C54_2E55 = func_80345C54_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345C54_2E55);
        r4 = static_cast<uint32_t>(regargs_result_80345C54_2E55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80345C54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8034750C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8034758C;
    }
}

loc_80347510:
{
    r29 = 3;
    goto loc_8034758C;
}

loc_80347518:
{
    r29 = 0;
    goto loc_8034758C;
}

loc_80347520:
{
    r0 = MemoryInline::FlatRead16((r31 + 34));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80347528:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(300))) {
        goto loc_8034758C;
    }
}

loc_8034752C:
{
    r28 = MemoryInline::FlatRead8((r31 + 54));
    r30 = 0;
    goto loc_80347568;
}

loc_80347538:
{
    r28 = (r28 + 1);
    r0 = (r28 & 255);
}

loc_80347544:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8034754C;
    }
}

loc_80347548:
{
    r28 = 0;
}

loc_8034754C:
{
    r3 = r31;
    r4 = (r28 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10048));
    ctx->lr = 0x8034755Cu;
    if constexpr (KnownRegArgsCpuCall<0x80345C54u>(&func_80345C54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80345C54_371D = func_80345C54_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345C54_371D);
        r4 = static_cast<uint32_t>(regargs_result_80345C54_371D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80345C54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80347560:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80347578;
    }
}

loc_80347564:
{
    r30 = (r30 + 1);
}

loc_80347568:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r30 & 255);
}

loc_80347574:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80347538;
    }
}

loc_80347578:
{
    r3 = (r30 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_80347584:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_8034758C;
    }
}

loc_80347588:
{
    r29 = 2;
}

loc_8034758C:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
    r4 = (r29 & 255);
}

loc_80347598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_803475AC;
    }
}

loc_8034759C:
{
    r3 = r31;
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r6 = 0;
    ctx->lr = 0x803475ACu;
    if constexpr (KnownRegArgsCpuCall<0x8034530Cu>(&func_8034530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8034530C_3FDD = func_8034530C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034530C_3FDD);
        r4 = static_cast<uint32_t>(regargs_result_8034530C_3FDD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8034530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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

loc_803475AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 8));
}

loc_803475B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803475CC;
    }
}

loc_803475B8:
{
}

loc_803475BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80347708;
    }
}

loc_803475C0:
{
}

loc_803475C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8034785C;
    }
}

loc_803475C8:
{
    goto loc_80347870;
}

loc_803475CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 58));
}

loc_803475D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803475F4;
    }
}

loc_803475D8:
{
    r0 = MemoryInline::FlatRead8((r31 + 11));
}

loc_803475E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803475F4;
    }
}

loc_803475E4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
}

loc_803475F4:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_803475FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034764C;
    }
}

loc_80347600:
{
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80347608:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1800))) {
        goto loc_8034762C;
    }
}

loc_8034760C:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 54));
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r5 = (r5 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10064));
    ctx->lr = 0x80347624u;
    if constexpr (KnownRegArgsCpuCall<0x80345AD0u>(&func_80345AD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80345AD0_4D8D = func_80345AD0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345AD0_4D8D);
        r4 = static_cast<uint32_t>(regargs_result_80345AD0_4D8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80345AD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80347628:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803476EC;
    }
}

loc_8034762C:
{
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    goto loc_803476EC;
}

loc_8034764C:
{
    r3 = MemoryInline::FlatRead16((r31 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80347654:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1800))) {
        goto loc_803476E4;
    }
}

loc_80347658:
{
    r3 = r31;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_80347664:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803476BC;
    }
}

loc_80347668:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 54));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r0 + r3);
}

loc_80347694:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8034769C;
    }
}

loc_80347698:
{
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r3));
}

loc_8034769C:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 54));
    ctx->lr = 0x803476A8u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803459F8_59A5 = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_59A5);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_59A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    r4 = 4;
    r5 = MemoryInline::FlatRead8((r31 + 54));
    ctx->lr = 0x803476B8u;
    if constexpr (KnownRegArgsCpuCall<0x8034550Cu>(&func_8034550C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8034550C_5EA0 = func_8034550C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034550C_5EA0);
        r4 = static_cast<uint32_t>(regargs_result_8034550C_5EA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8034550Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803476EC;
}

loc_803476BC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 16));
    r0 = MemoryInline::FlatRead8((r31 + 54));
}

loc_803476D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_803476EC;
    }
}

loc_803476D4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
    goto loc_803476EC;
}

loc_803476E4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
}

loc_803476EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_803476F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80347870;
    }
}

loc_803476F8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 16));
    ctx->lr = 0x80347704u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803459F8_68EC = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_68EC);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_68EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80347870;
}

loc_80347708:
{
    r0 = MemoryInline::FlatRead8((r31 + 58));
}

loc_80347710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803477F8;
    }
}

loc_80347714:
{
    r0 = MemoryInline::FlatRead8((r31 + 11));
}

loc_8034771C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803477F8;
    }
}

loc_80347720:
{
    r3 = r31;
    // inline leaf 0x80343B4C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x80343B4C
}

loc_8034772C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803477CC;
    }
}

loc_80347730:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r29 = MemoryInline::FlatRead8((r31 + 54));
    r30 = 0;
    goto loc_80347798;
}

loc_80347744:
{
    r29 = (r29 + 1);
    r0 = (r29 & 255);
}

loc_80347750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80347758;
    }
}

loc_80347754:
{
    r29 = 0;
}

loc_80347758:
{
    r3 = r31;
    r4 = (r29 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10048));
    ctx->lr = 0x80347768u;
    if constexpr (KnownRegArgsCpuCall<0x80345C54u>(&func_80345C54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80345C54_7287 = func_80345C54_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345C54_7287);
        r4 = static_cast<uint32_t>(regargs_result_80345C54_7287 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80345C54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8034776C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80347794;
    }
}

loc_80347770:
{
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x8034777Cu;
    if constexpr (KnownRegArgsCpuCall<0x80345718u>(&func_80345718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80345718_780B = func_80345718_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80345718_780B);
        r4 = static_cast<uint32_t>(regargs_result_80345718_780B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80345718u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    r4 = (r31 + 36);
    ctx->lr = 0x80347788u;
    if constexpr (KnownRegArgsCpuCall<0x80345654u>(&func_80345654)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80345654_7B6B = func_80345654_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80345654_7B6B);
        r4 = static_cast<uint32_t>(regargs_result_80345654_7B6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80345654u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    goto loc_803477A8;
}

loc_80347794:
{
    r30 = (r30 + 1);
}

loc_80347798:
{
    r3 = MemoryInline::FlatRead8((r1 + 9));
    r0 = (r30 & 255);
}

loc_803477A4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80347744;
    }
}

loc_803477A8:
{
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r29));
    r3 = r31;
    r4 = (r29 & 255);
    ctx->lr = 0x803477B8u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803459F8_81FD = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_81FD);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_81FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = r31;
    r4 = 4;
    r5 = (r29 & 255);
    ctx->lr = 0x803477C8u;
    if constexpr (KnownRegArgsCpuCall<0x8034550Cu>(&func_8034550C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8034550C_86E0 = func_8034550C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8034550C_86E0);
        r4 = static_cast<uint32_t>(regargs_result_8034550C_86E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8034550Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80347840;
}

loc_803477CC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 16));
    r0 = MemoryInline::FlatRead8((r31 + 54));
}

loc_803477E0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80347840;
    }
}

loc_803477E4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r0));
    goto loc_80347840;
}

loc_803477F8:
{
    r0 = MemoryInline::FlatRead8((r31 + 11));
}

loc_80347800:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80347840;
    }
}

loc_80347804:
{
    r0 = MemoryInline::FlatRead16((r31 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8034780C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(1800))) {
        goto loc_80347830;
    }
}

loc_80347810:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 54));
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r5 = (r5 + 392);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -10064));
    ctx->lr = 0x80347828u;
    if constexpr (KnownRegArgsCpuCall<0x80345AD0u>(&func_80345AD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        const auto regargs_result_80345AD0_9267 = func_80345AD0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80345AD0_9267);
        r4 = static_cast<uint32_t>(regargs_result_80345AD0_9267 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80345AD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_8034782C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80347840;
    }
}

loc_80347830:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 58), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 11), static_cast<uint8_t>(r0));
}

loc_80347840:
{
    r0 = MemoryInline::FlatRead8((r31 + 15));
}

loc_80347848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80347870;
    }
}

loc_8034784C:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r31 + 16));
    ctx->lr = 0x80347858u;
    if constexpr (KnownRegArgsCpuCall<0x803459F8u>(&func_803459F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_803459F8_99D7 = func_803459F8_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803459F8_99D7);
        r4 = static_cast<uint32_t>(regargs_result_803459F8_99D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x803459F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_80347870;
}

loc_8034785C:
{
    r3 = MemoryInline::FlatRead16((r31 + 34));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80347864:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(300))) {
        goto loc_80347870;
    }
}

loc_80347868:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 34), static_cast<uint16_t>(r0));
}

loc_80347870:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
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

extern "C" void func_803473C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803473C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803473C0 func_803473C0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80276880(CpuContext* ctx);
extern "C" uint32_t func_80276880_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B05FC(CpuContext* ctx);
extern "C" uint64_t func_802B05FC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E741C(CpuContext* ctx);
extern "C" uint64_t func_802E741C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802E746C(CpuContext* ctx);
extern "C" uint64_t func_802E746C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E75AC(CpuContext* ctx);
extern "C" uint64_t func_802E75AC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E76F4(CpuContext* ctx);
extern "C" uint64_t func_802E76F4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_802E77EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x802E77ECu);
    goto loc_802E77EC;

loc_802E77EC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r29 + 22));
    ctx->lr = 0x802E7818u;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B05FC_79B = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_79B);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_79B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B05FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    r0 = (r3 & 255);
}

loc_802E7824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802E7830;
    }
}

loc_802E7828:
{
}

loc_802E782C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_802E7848;
    }
}

loc_802E7830:
{
    r3 = MemoryInline::FlatRead16((r31 + 318));
    r4 = (r30 & 255);
    r5 = r29;
    ctx->lr = 0x802E7840u;
    if constexpr (KnownRegArgsCpuCall<0x802E746Cu>(&func_802E746C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E746C_BDA = func_802E746C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802E746C_BDA);
        r4 = static_cast<uint32_t>(regargs_result_802E746C_BDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E746Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 318), static_cast<uint16_t>(r3));
    goto loc_802E7858;
}

loc_802E7848:
{
    r3 = MemoryInline::FlatRead16((r31 + 318));
    r4 = r29;
    ctx->lr = 0x802E7854u;
    if constexpr (KnownRegArgsCpuCall<0x802E741Cu>(&func_802E741C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E741C_F93 = func_802E741C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802E741C_F93);
        r4 = static_cast<uint32_t>(regargs_result_802E741C_F93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802E741Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite16((r31 + 318), static_cast<uint16_t>(r3));
}

loc_802E7858:
{
    r3 = (r31 + 324);
    r4 = 0x805D0000u;
    r4 = (r4 + 25672);
    r5 = 0x805D0000u;
    r5 = (r5 + 25688);
    r6 = MemoryInline::FlatRead16((r31 + 318));
    ctx->lr = 0x802E7874u;
    if constexpr (KnownRegArgsCpuCall<0x802E76F4u>(&func_802E76F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E76F4_135F = func_802E76F4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E76F4_135F);
        r4 = static_cast<uint32_t>(regargs_result_802E76F4_135F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802E76F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r29;
    ctx->lr = 0x802E787Cu;
    if constexpr (KnownRegArgsCpuCall<0x80276880u>(&func_80276880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276880_169A = func_80276880_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80276880_169A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80276880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802E7880:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E798C;
    }
}

loc_802E7884:
{
    r3 = r29;
    r4 = 204;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80279130
}

loc_802E7894:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E7924;
    }
}

loc_802E7898:
{
    r0 = MemoryInline::FlatRead16((r29 + 888));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802E78A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(150))) {
        goto loc_802E78F8;
    }
}

loc_802E78A4:
{
    r0 = (r30 & 255);
}

loc_802E78AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802E78C4;
    }
}

loc_802E78B0:
{
}

loc_802E78B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802E78C4;
    }
}

loc_802E78B8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 320), static_cast<uint16_t>(r0));
    goto loc_802E78D8;
}

loc_802E78C4:
{
    r3 = MemoryInline::FlatRead16((r31 + 320));
    r4 = (r30 & 255);
    r5 = r29;
    ctx->lr = 0x802E78D4u;
    if constexpr (KnownRegArgsCpuCall<0x802E75ACu>(&func_802E75AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E75AC_1E0E = func_802E75AC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802E75AC_1E0E);
        r4 = static_cast<uint32_t>(regargs_result_802E75AC_1E0E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802E75ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r31 + 320), static_cast<uint16_t>(r3));
}

loc_802E78D8:
{
    r3 = (r31 + 340);
    r4 = 0x805D0000u;
    r4 = (r4 + 25700);
    r5 = 0x805D0000u;
    r5 = (r5 + 25736);
    r6 = MemoryInline::FlatRead16((r31 + 320));
    ctx->lr = 0x802E78F4u;
    if constexpr (KnownRegArgsCpuCall<0x802E76F4u>(&func_802E76F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E76F4_222F = func_802E76F4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E76F4_222F);
        r4 = static_cast<uint32_t>(regargs_result_802E76F4_222F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802E76F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    goto loc_802E79B0;
}

loc_802E78F8:
{
    r3 = MemoryInline::FlatRead16((r31 + 320));
    r0 = (r3 + 1456);
    MemoryInline::FlatWrite16((r31 + 320), static_cast<uint16_t>(r0));
    r3 = (r31 + 340);
    r4 = 0x805D0000u;
    r4 = (r4 + 25712);
    r5 = 0x805D0000u;
    r5 = (r5 + 25724);
    r6 = (r0 & 65535);
    ctx->lr = 0x802E7920u;
    if constexpr (KnownRegArgsCpuCall<0x802E76F4u>(&func_802E76F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E76F4_26B4 = func_802E76F4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E76F4_26B4);
        r4 = static_cast<uint32_t>(regargs_result_802E76F4_26B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802E76F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    goto loc_802E79B0;
}

loc_802E7924:
{
    r30 = 512;
    r3 = 0x805D0000u;
    r28 = (r3 + 25776);
    r3 = r29;
    r4 = 192;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279130
}

loc_802E7940:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802E794C;
    }
}

loc_802E7944:
{
    r3 = 0x805D0000u;
    r28 = (r3 + 25788);
}

loc_802E794C:
{
    r3 = r29;
    r4 = 136;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279130
}

loc_802E795C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802E7964;
    }
}

loc_802E7960:
{
    r30 = 768;
}

loc_802E7964:
{
    r0 = MemoryInline::FlatRead16((r31 + 320));
    r0 = (r0 + r30);
    MemoryInline::FlatWrite16((r31 + 320), static_cast<uint16_t>(r0));
    r3 = (r31 + 340);
    r4 = 0x805D0000u;
    r4 = (r4 + 25700);
    r5 = r28;
    r6 = (r0 & 65535);
    ctx->lr = 0x802E7988u;
    if constexpr (KnownRegArgsCpuCall<0x802E76F4u>(&func_802E76F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E76F4_2F6B = func_802E76F4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E76F4_2F6B);
        r4 = static_cast<uint32_t>(regargs_result_802E76F4_2F6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802E76F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    goto loc_802E79B0;
}

loc_802E798C:
{
    r3 = MemoryInline::FlatRead16((r31 + 320));
    r0 = (r3 + 1024);
    MemoryInline::FlatWrite16((r31 + 320), static_cast<uint16_t>(r0));
    r3 = (r31 + 340);
    r4 = 0x805D0000u;
    r4 = (r4 + 25752);
    r5 = (r4 + 12);
    r6 = (r0 & 65535);
    ctx->lr = 0x802E79B0u;
    if constexpr (KnownRegArgsCpuCall<0x802E76F4u>(&func_802E76F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802E76F4_33D7 = func_802E76F4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E76F4_33D7);
        r4 = static_cast<uint32_t>(regargs_result_802E76F4_33D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802E76F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_802E79B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x800000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E77EC func_802E77EC preserves=true fpr_mask=0x00000000

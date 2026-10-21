#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF448(CpuContext* ctx);
extern "C" uint64_t func_800CF448_ra380_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8005B2DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x8005B2DCu);
    goto loc_8005B2DC;

loc_8005B2DC:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80590000u;
    r29 = (r3 + -17592);
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r0 = MemoryAlias::FlatRead32((r30 + 2372));
    MemoryAlias::FlatWrite32((r13 + -17736), r0);
}

loc_8005B310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005B320;
    }
}

loc_8005B314:
{
    ctx->lr = 0x8005B318u;
    if constexpr (KnownRegArgsCpuCall<0x800CF448u>(&func_800CF448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800CF448_83A = func_800CF448_ra380_1fe_18_0(ctx, r7, r8, r9, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF448_83A);
        r4 = static_cast<uint32_t>(regargs_result_800CF448_83A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryAlias::FlatRead32((r30 + 2372));
    MemoryAlias::FlatWrite32((r13 + -17736), r0);
}

loc_8005B320:
{
    r3 = 0x80670000u;
    r3 = (r3 + -11552);
    r4 = 0;
    r5 = 20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = MemoryAlias::FlatRead32((r13 + -17736));
    r3 = (r30 + 65536);
    r0 = MemoryAlias::FlatRead32((r3 + 20612));
}

loc_8005B344:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8005B510;
    }
}

loc_8005B348:
{
    r3 = r30;
    r4 = 0;
    r31 = 65536;
    r5 = (r31 + 28880);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x81630000u;
    r0 = (r3 + 26112);
    MemoryAlias::FlatWrite32((r30 + 56), r0);
    r3 = MemoryAlias::FlatRead32((r30 + 56));
    ctx->lr = 0x8005B370u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8004119Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = MemoryAlias::FlatRead32((r30 + 56));
    r4 = 254;
    ctx->lr = 0x8005B37Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800D0174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r4 = (r30 + 65536);
    r3 = MemoryAlias::FlatRead32((r4 + 20564));
    r0 = (r3 + 131072);
    MemoryAlias::FlatWrite32((r4 + 20564), r0);
    guest_range_0 = MemoryAlias::ResolveRangeHost(r29, 0, 68u, true, false);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 0u, r29);
    MemoryAlias::FlatWrite32((r30 + 4), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 4u, (r29 + 4));
    MemoryAlias::FlatWrite32((r30 + 8), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 8u, (r29 + 8));
    MemoryAlias::FlatWrite32((r30 + 12), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 12u, (r29 + 12));
    MemoryAlias::FlatWrite32((r30 + 16), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 16u, (r29 + 16));
    MemoryAlias::FlatWrite32((r30 + 20), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 20u, (r29 + 20));
    MemoryAlias::FlatWrite32((r30 + 24), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 36u, (r29 + 36));
    MemoryAlias::FlatWrite32((r30 + 28), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 40u, (r29 + 40));
    MemoryAlias::FlatWrite32((r30 + 32), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 28u, (r29 + 28));
    MemoryAlias::FlatWrite32((r30 + 36), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 48u, (r29 + 48));
    MemoryAlias::FlatWrite32((r30 + 40), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 52u, (r29 + 52));
    MemoryAlias::FlatWrite32((r30 + 44), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 56u, (r29 + 56));
    MemoryAlias::FlatWrite32((r30 + 48), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 60u, (r29 + 60));
    MemoryAlias::FlatWrite32((r4 + 26816), r0);
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 64u, (r29 + 64));
    MemoryAlias::FlatWrite32((r4 + 26820), r0);
    r0 = 1024;
    MemoryAlias::FlatWrite32((r4 + 20568), r0);
    r29 = 0;
    MemoryAlias::FlatWrite32((r4 + 20572), r29);
    r0 = MemoryAlias::FlatRead32((r30 + 8));
    MemoryAlias::FlatWrite32((r4 + 20576), r0);
    r0 = MemoryAlias::FlatRead32((r30 + 12));
    MemoryAlias::FlatWrite32((r4 + 20580), r0);
    MemoryAlias::FlatWrite32((r4 + 20584), r29);
    MemoryAlias::FlatWrite32((r4 + 20588), r29);
    r0 = -2;
    MemoryAlias::FlatWrite32((r4 + 20592), r0);
    MemoryAlias::FlatWrite32((r4 + 20596), r29);
    r3 = -1061093376;
    r0 = (r3 + -16129);
    MemoryAlias::FlatWrite32((r4 + 20600), r0);
    MemoryAlias::FlatWrite32((r4 + 20604), r29);
    MemoryAlias::FlatWrite32((r4 + 20608), r29);
    MemoryAlias::FlatWrite32((r4 + 20616), r29);
    MemoryAlias::FlatWrite32((r4 + 20620), r29);
    MemoryAlias::FlatWrite32((r30 + 80), r29);
    r3 = (r30 + 84);
    MemoryAlias::FlatWrite32((r30 + 64), r3);
    r4 = MemoryAlias::FlatRead32((r30 + 80));
    r0 = (r31 + 20480);
    r0 = (r4 * r0);
    r4 = (r30 + r0);
    r0 = (r4 + 84);
    MemoryAlias::FlatWrite32((r30 + 68), r0);
    r0 = 84;
    MemoryAlias::FlatWrite32((r30 + 72), r0);
    r0 = MemoryAlias::FlatRead32((r30 + 72));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & -1024);
    MemoryAlias::FlatWrite32((r30 + 76), r0);
    r4 = 0;
    r5 = MemoryAlias::FlatRead32((r30 + 76));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r30 + 65536);
    MemoryAlias::FlatWrite32((r4 + 24728), r29);
    r3 = 768;
    r0 = MemoryAlias::FlatRead32((r4 + 26816));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryAlias::FlatWrite32((r4 + 26784), r0);
    r3 = 384;
    r0 = MemoryAlias::FlatRead32((r4 + 26820));
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    MemoryAlias::FlatWrite32((r4 + 26788), r0);
    r3 = MemoryAlias::FlatRead32((r4 + 26784));
    r0 = MemoryAlias::FlatRead32((r4 + 26788));
    r0 = (r3 * r0);
    MemoryAlias::FlatWrite32((r4 + 24732), r0);
    r0 = 96;
    MemoryAlias::FlatWrite32((r4 + 26800), r0);
    r0 = 48;
    MemoryAlias::FlatWrite32((r4 + 26804), r0);
    r0 = MemoryAlias::FlatRead32((r4 + 26816));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    MemoryAlias::FlatWrite32((r4 + 26808), r0);
    r0 = MemoryAlias::FlatRead32((r4 + 26820));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    MemoryAlias::FlatWrite32((r4 + 26812), r0);
    ctx->lr = 0x8005B4F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8005B52Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r0 = 1;
    r3 = (r30 + 65536);
    MemoryAlias::FlatWrite32((r3 + 20612), r0);
    r0 = 228;
    MemoryAlias::FlatWrite32((r30 + 28), r0);
    r0 = 24;
    MemoryAlias::FlatWrite32((r3 + 20576), r0);
}

loc_8005B510:
{
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_8005B2DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005B2DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005B2DC func_8005B2DC preserves=true fpr_mask=0x00000000

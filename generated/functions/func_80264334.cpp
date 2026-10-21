#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801005FC(CpuContext* ctx);
extern "C" uint64_t func_801005FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801072B4(CpuContext* ctx);
extern "C" uint64_t func_801072B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80260A7C(CpuContext* ctx);
extern "C" uint32_t func_80260A7C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276514(CpuContext* ctx);
extern "C" uint64_t func_80276514_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80276578(CpuContext* ctx);
extern "C" uint64_t func_80276578_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8027D470(CpuContext* ctx);
extern "C" uint64_t func_8027D470_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E284(CpuContext* ctx);
extern "C" uint64_t func_8027E284_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B05FC(CpuContext* ctx);
extern "C" uint64_t func_802B05FC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80264334_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    MKW_GUEST_ENTER(0x80264334u);
    goto loc_80264334;

loc_80264334:
{
    MemoryAlias::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryAlias::FlatRead8((r3 + 10));
}

loc_80264354:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_8026498C;
    }
}

loc_80264358:
{
    r0 = 0;
    MemoryAlias::FlatWrite8((r3 + 905), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264368:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026459C;
    }
}

loc_8026436C:
{
    r4 = MemoryAlias::FlatRead16((r31 + 1002));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80264374:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802643EC;
    }
}

loc_80264378:
{
    r3 = MemoryAlias::FlatRead16((r31 + 1006));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2149991288);
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r31 + 1006), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8026438C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802643EC;
    }
}

loc_80264390:
{
    r0 = (r4 + -1);
    MemoryAlias::FlatWrite16((r31 + 1002), static_cast<uint16_t>(r0));
    r30 = -1;
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802643B4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802643B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802643C0;
    }
}

loc_802643BC:
{
    r30 = -2;
}

loc_802643C0:
{
    r0 = 30;
    MemoryAlias::FlatWrite16((r31 + 1006), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802643D4u;
    if constexpr (KnownRegArgsCpuCall<0x801072B4u>(&func_801072B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801072B4_141A = func_801072B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801072B4_141A);
        r4 = static_cast<uint32_t>(regargs_result_801072B4_141A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801072B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x802643E4u;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276514_180B = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_180B);
        r4 = static_cast<uint32_t>(regargs_result_80276514_180B >> 32);
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
        InvokeDirectCpu<0x80276514u>(ctx);
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

loc_802643E8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_802643EC:
{
    r0 = MemoryAlias::FlatRead8((r31 + 9));
}

loc_802643F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80264410;
    }
}

loc_802643F8:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80264400:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_802644D8;
    }
}

loc_80264404:
{
    r0 = 1;
    MemoryAlias::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    goto loc_802644D8;
}

loc_80264410:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1444));
    r0 = (r0 & 6);
}

loc_8026441C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802644D8;
    }
}

loc_80264420:
{
    r0 = MemoryAlias::FlatRead8((r31 + 10));
}

loc_80264428:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264438;
    }
}

loc_8026442C:
{
}

loc_80264430:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802644B4;
    }
}

loc_80264434:
{
    goto loc_802644D8;
}

loc_80264438:
{
    r3 = MemoryAlias::FlatRead16((r31 + 12));
    r0 = (r3 + -15);
}

loc_80264444:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80264468;
    }
}

loc_80264448:
{
    r0 = (r3 + -8);
}

loc_80264450:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8026449C;
    }
}

loc_80264454:
{
}

loc_80264458:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(62))) {
        goto loc_8026449C;
    }
}

loc_8026445C:
{
}

loc_80264460:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(181))) {
        goto loc_8026449C;
    }
}

loc_80264464:
{
    goto loc_802644D8;
}

loc_80264468:
{
    r0 = MemoryAlias::FlatRead8((r31 + 2));
}

loc_80264470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802644D8;
    }
}

loc_80264474:
{
}

loc_80264478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802644D8;
    }
}

loc_8026447C:
{
}

loc_80264480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802644D8;
    }
}

loc_80264484:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026448C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_802644D8;
    }
}

loc_80264490:
{
    r0 = 1;
    MemoryAlias::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    goto loc_802644D8;
}

loc_8026449C:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802644A4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_802644D8;
    }
}

loc_802644A8:
{
    r0 = 1;
    MemoryAlias::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    goto loc_802644D8;
}

loc_802644B4:
{
    r3 = MemoryAlias::FlatRead16((r31 + 12));
    r0 = (r3 + -72);
}

loc_802644C0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802644D8;
    }
}

loc_802644C4:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802644CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1))) {
        goto loc_802644D8;
    }
}

loc_802644D0:
{
    r0 = 1;
    MemoryAlias::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
}

loc_802644D8:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802644E0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802645EC;
    }
}

loc_802644E4:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
    r3 = r31;
    ctx->lr = 0x802644F8u;
    if constexpr (KnownRegArgsCpuCall<0x8027E284u>(&func_8027E284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E284_2DFD = func_8027E284_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027E284_2DFD);
        r4 = static_cast<uint32_t>(regargs_result_8027E284_2DFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E284u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802644FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802645EC;
    }
}

loc_80264500:
{
    r3 = MemoryAlias::FlatRead16((r31 + 1028));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2149991680);
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r31 + 1028), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 2;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryAlias::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279130
}

loc_8026451C:
{
    r30 = -2;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264528;
    }
}

loc_80264524:
{
    r30 = -4;
}

loc_80264528:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1028));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80264530:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80264540;
    }
}

loc_80264534:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 & -4);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
}

loc_80264540:
{
    r4 = MemoryAlias::FlatRead16((r31 + 1028));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = -1240793088;
    r0 = (r3 + 24759);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 6);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 90);
    r0 = (r4 - r0);
}

loc_8026456C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802645EC;
    }
}

loc_80264570:
{
    r3 = r31;
    // inline leaf 0x8027E248 (15 guest instruction(s))
}

loc_inl1_0x8027E248:
{
    r0 = MemoryAlias::FlatRead16((r3 + 850));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x8027E250:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E274;
    }
}

loc_inl1_0x8027E254:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryAlias::FlatRead8((r4 + 42));
}

loc_inl1_0x8027E264:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E274;
    }
}

loc_inl1_0x8027E268:
{
    r0 = MemoryAlias::FlatRead8((r3 + 1135));
}

loc_inl1_0x8027E270:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8027E27C;
    }
}

loc_inl1_0x8027E274:
{
    r3 = 1;
    goto loc_inl1_cont_8027E248;
}

loc_inl1_0x8027E27C:
{
    r3 = 0;
}

loc_inl1_cont_8027E248:
{
    // end of inlined leaf 0x8027E248
}

loc_8026457C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802645EC;
    }
}

loc_80264580:
{
    r3 = r31;
    r4 = r30;
    r5 = 0;
    ctx->lr = 0x80264590u;
    if constexpr (KnownRegArgsCpuCall<0x80276578u>(&func_80276578)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276578_3CE2 = func_80276578_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276578_3CE2);
        r4 = static_cast<uint32_t>(regargs_result_80276578_3CE2 >> 32);
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
        InvokeDirectCpu<0x80276578u>(ctx);
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

loc_80264594:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802645EC;
    }
}

loc_80264598:
{
    goto loc_8026498C;
}

loc_8026459C:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryAlias::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80279118
}

loc_802645AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802645EC;
    }
}

loc_802645B0:
{
    r4 = MH3_HookedLoad32(r31, 32, 2149991856);
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 30);
    r0 = (r4 - r0);
}

loc_802645DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802645EC;
    }
}

loc_802645E0:
{
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x802645ECu;
    if constexpr (KnownRegArgsCpuCall<0x801072B4u>(&func_801072B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801072B4_47F8 = func_801072B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801072B4_47F8);
        r4 = static_cast<uint32_t>(regargs_result_801072B4_47F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801072B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
    }
}

loc_802645EC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802645F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802646C4;
    }
}

loc_802645FC:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8027D470u>(&func_8027D470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027D470_4CC8 = func_8027D470_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027D470_4CC8);
        r4 = static_cast<uint32_t>(regargs_result_8027D470_4CC8 >> 32);
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
        InvokeDirectCpu<0x8027D470u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r4 = r3;
}

loc_8026460C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80264658;
    }
}

loc_80264610:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
    r3 = MH3_HookedLoad32(r31, 32, 2149991964);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & -134217728);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r0 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -1);
    r0 = (r0 + r3);
}

loc_80264638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264658;
    }
}

loc_8026463C:
{
    r3 = r31;
    r0 = (0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x80264650u;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276514_53B4 = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_53B4);
        r4 = static_cast<uint32_t>(regargs_result_80276514_53B4 >> 32);
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
        InvokeDirectCpu<0x80276514u>(ctx);
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

loc_80264654:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_80264658:
{
    r3 = r31;
    ctx->lr = 0x80264660u;
    if constexpr (KnownRegArgsCpuCall<0x80260A7Cu>(&func_80260A7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80260A7C_5A63 = func_80260A7C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_80260A7C_5A63;
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
        InvokeDirectCpu<0x80260A7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80264668:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_802646C4;
    }
}

loc_8026466C:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
    r4 = MH3_HookedLoad32(r31, 32, 2149992056);
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 60);
    r0 = (r4 - r0);
}

loc_802646A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802646C4;
    }
}

loc_802646A8:
{
    r3 = r31;
    r0 = (0 - r5);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = 0;
    ctx->lr = 0x802646BCu;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276514_613C = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_613C);
        r4 = static_cast<uint32_t>(regargs_result_80276514_613C >> 32);
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
        InvokeDirectCpu<0x80276514u>(ctx);
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

loc_802646C0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_802646C4:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802646D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_802646D4:
{
    r3 = MemoryAlias::FlatRead8((r31 + 22));
    ctx->lr = 0x802646DCu;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B05FC_68F2 = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_68F2);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_68F2 >> 32);
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
    r30 = (r3 & 255);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_802646E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802646F4;
    }
}

loc_802646EC:
{
}

loc_802646F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80264848;
    }
}

loc_802646F4:
{
    r0 = MemoryAlias::FlatRead16((r31 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802646FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80264848;
    }
}

loc_80264700:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_80264708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80264734;
    }
}

loc_8026470C:
{
    r3 = r31;
    r4 = 124;
    ctx->lr = 0x80264718u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8026471C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80264848;
    }
}

loc_80264720:
{
    r3 = r31;
    r4 = 125;
    ctx->lr = 0x8026472Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264730:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80264848;
    }
}

loc_80264734:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_8026473C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_80264754;
    }
}

loc_80264740:
{
    r3 = r31;
    r4 = 125;
    ctx->lr = 0x8026474Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264750:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80264848;
    }
}

loc_80264754:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
    r3 = MemoryAlias::FlatRead16((r31 + 1122));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2149992288);
    r0 = (r3 + -1);
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80264774:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80264848;
    }
}

loc_80264778:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_80264780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_802647CC;
    }
}

loc_80264784:
{
    r0 = 90;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 126;
    ctx->lr = 0x80264798u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8026479C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802647AC;
    }
}

loc_802647A0:
{
    r0 = 60;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    goto loc_80264830;
}

loc_802647AC:
{
    r3 = r31;
    r4 = 127;
    ctx->lr = 0x802647B8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802647BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264830;
    }
}

loc_802647C0:
{
    r0 = 45;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    goto loc_80264830;
}

loc_802647CC:
{
    r0 = 60;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 126;
    ctx->lr = 0x802647E0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802647E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802647F4;
    }
}

loc_802647E8:
{
    r0 = 40;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    goto loc_80264830;
}

loc_802647F4:
{
    r3 = r31;
    r4 = 127;
    ctx->lr = 0x80264800u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264804:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264814;
    }
}

loc_80264808:
{
    r0 = 30;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
    goto loc_80264830;
}

loc_80264814:
{
    r3 = r31;
    r4 = 124;
    ctx->lr = 0x80264820u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264824:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80264830;
    }
}

loc_80264828:
{
    r0 = 180;
    MemoryAlias::FlatWrite16((r31 + 1122), static_cast<uint16_t>(r0));
}

loc_80264830:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x80264840u;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276514_7FD3 = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_7FD3);
        r4 = static_cast<uint32_t>(regargs_result_80276514_7FD3 >> 32);
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
        InvokeDirectCpu<0x80276514u>(ctx);
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

loc_80264844:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_80264848:
{
    r3 = r31;
    r4 = 125;
    ctx->lr = 0x80264854u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80264858:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_8026485C:
{
    r3 = MemoryAlias::FlatRead16((r31 + 1444));
    r0 = (r3 & 512);
}

loc_80264868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80264950;
    }
}

loc_8026486C:
{
    r3 = r31;
    r4 = 47;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_8868 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_8868);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_8868 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8026487C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026488C;
    }
}

loc_80264880:
{
    r0 = MemoryAlias::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryAlias::FlatWrite32((r31 + 988), r0);
}

loc_8026488C:
{
    r3 = MemoryAlias::FlatRead8((r31 + 10));
}

loc_80264894:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(6))) {
        goto loc_8026498C;
    }
}

loc_80264898:
{
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_802648A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802648AC;
    }
}

loc_802648A8:
{
    goto loc_8026498C;
}

loc_802648AC:
{
    r0 = MemoryAlias::FlatRead8((r31 + 9));
}

loc_802648B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8026498C;
    }
}

loc_802648B8:
{
    r3 = r31;
    ctx->lr = 0x802648C0u;
    if constexpr (KnownRegArgsCpuCall<0x8027E284u>(&func_8027E284)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E284_8E5D = func_8027E284_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027E284_8E5D);
        r4 = static_cast<uint32_t>(regargs_result_8027E284_8E5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E284u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802648C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_802648C8:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 905), static_cast<uint8_t>(r0));
    r3 = MH3_HookedLoad32(r31, 32, 2149992656);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & -536870912);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
    r0 = (r0 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -1);
    r0 = (r0 + r3);
}

loc_802648EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026491C;
    }
}

loc_802648F0:
{
    r3 = r31;
    r4 = 47;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_942A = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_942A);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_942A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80264900:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026491C;
    }
}

loc_80264904:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x80264914u;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80276514_977A = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_977A);
        r4 = static_cast<uint32_t>(regargs_result_80276514_977A >> 32);
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
        InvokeDirectCpu<0x80276514u>(ctx);
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

loc_80264918:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8026498C;
    }
}

loc_8026491C:
{
    r0 = MH3_HookedLoad32(r31, 32, 2149992732);
    r0 = (r0 & 15);
}

loc_80264928:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026498C;
    }
}

loc_8026492C:
{
    r3 = r31;
    r4 = 39;
    r5 = 255;
    f1.d = MemoryAlias::FlatReadFloat32((r2 + -15512));
    f2.d = MemoryAlias::FlatReadFloat32((r2 + -15520));
    f3.d = f2.d;
    r6 = 0;
    ctx->lr = 0x8026494Cu;
    if constexpr (KnownRegArgsCpuCall<0x801005FCu>(&func_801005FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801005FC_9F9F = func_801005FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801005FC_9F9F);
        r4 = static_cast<uint32_t>(regargs_result_801005FC_9F9F >> 32);
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
        InvokeDirectCpu<0x801005FCu>(ctx);
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
    goto loc_8026498C;
}

loc_80264950:
{
    r0 = (r3 & 1024);
}

loc_80264958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026498C;
    }
}

loc_8026495C:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80264968u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8026496C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026498C;
    }
}

loc_80264970:
{
    r0 = 1;
    MemoryAlias::FlatWrite8((r31 + 905), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead16((r31 + 1002));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80264980:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_8026498C;
    }
}

loc_80264984:
{
    r0 = 10;
    MemoryAlias::FlatWrite16((r31 + 1002), static_cast<uint16_t>(r0));
}

loc_8026498C:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

extern "C" void func_80264334(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80264334_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80264334 func_80264334 preserves=true fpr_mask=0x00000000

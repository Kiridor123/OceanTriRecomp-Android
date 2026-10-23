#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80270020(CpuContext* ctx);
extern "C" uint32_t func_80270020_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80270458(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_80270458;

loc_80270458:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r5;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r31 = (r4 & 65535);
    r0 = 0;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027049C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027076C;
    }
}

loc_802704A0:
{
    r3 = r29;
    r4 = 598;
    ctx->lr = 0x802704ACu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_837 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_837);
        r4 = static_cast<uint32_t>(regargs_result_80273218_837 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802704B0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802704C0;
    }
}

loc_802704B4:
{
    r31 = (r31 + 8);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_802704C0:
{
    r3 = r29;
    r4 = 599;
    ctx->lr = 0x802704CCu;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_C66 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_C66);
        r4 = static_cast<uint32_t>(regargs_result_80273218_C66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802704D0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802704E0;
    }
}

loc_802704D4:
{
    r31 = (r31 + 12);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_802704E0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1100));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r29 + 1101));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r31 = (r31 + r0);
    r3 = r29;
    r4 = 80;
    ctx->lr = 0x80270504u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270508:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027051C;
    }
}

loc_8027050C:
{
    r31 = (r31 + 10);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027066C;
}

loc_8027051C:
{
    r3 = r29;
    r4 = 81;
    ctx->lr = 0x80270528u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027052C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270568;
    }
}

loc_80270530:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14928));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword0;
    r31 = (r31 + 10);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027066C;
}

loc_80270568:
{
    r3 = r29;
    r4 = 82;
    ctx->lr = 0x80270574u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270578:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802705B4;
    }
}

loc_8027057C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14944));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword1;
    r31 = (r31 + 10);
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027066C;
}

loc_802705B4:
{
    r3 = r29;
    r4 = 83;
    ctx->lr = 0x802705C0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802705C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802705D8;
    }
}

loc_802705C8:
{
    r31 = (r31 + -10);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027066C;
}

loc_802705D8:
{
    r3 = r29;
    r4 = 84;
    ctx->lr = 0x802705E4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802705E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270624;
    }
}

loc_802705EC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14924));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword2;
    r31 = (r31 + -10);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_8027066C;
}

loc_80270624:
{
    r3 = r29;
    r4 = 85;
    ctx->lr = 0x80270630u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270634:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027066C;
    }
}

loc_80270638:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14920));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r31 = fctiwzword3;
    r31 = (r31 + -10);
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8027066C:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80270020u>(&func_80270020)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80270020_2525 = func_80270020_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80270020_2525;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80270020u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80270678:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802706D4;
    }
}

loc_8027067C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = r29;
    r4 = 165;
    ctx->lr = 0x80270690u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80270694:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802706A0;
    }
}

loc_80270698:
{
    r31 = (r31 + 21);
    goto loc_802706D4;
}

loc_802706A0:
{
    r3 = r29;
    r4 = 163;
    ctx->lr = 0x802706ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802706B0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802706C8;
    }
}

loc_802706B4:
{
    r3 = r29;
    r4 = 164;
    ctx->lr = 0x802706C0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802706C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802706D0;
    }
}

loc_802706C8:
{
    r31 = (r31 + 45);
    goto loc_802706D4;
}

loc_802706D0:
{
    r31 = (r31 + 30);
}

loc_802706D4:
{
    r0 = MemoryInline::FlatRead16((r29 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802706DC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_80270724;
    }
}

loc_802706E0:
{
    r3 = r29;
    r4 = 18;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_2EE5 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_2EE5);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_2EE5 >> 32);
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

loc_802706F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270724;
    }
}

loc_802706F4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r31 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14916));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    r31 = fctiwzword4;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_80270724:
{
}

loc_80270728:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(0))) {
        goto loc_80270730;
    }
}

loc_8027072C:
{
    r31 = 1;
}

loc_80270730:
{
    r0 = MemoryInline::FlatRead16((r29 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80270738:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027076C;
    }
}

loc_8027073C:
{
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r31))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r31 = (r31 - r0);
}

loc_8027075C:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_80270764;
    }
}

loc_80270760:
{
    r31 = 1;
}

loc_80270764:
{
    r0 = 2;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_8027076C:
{
    r3 = (r31 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80270458 func_80270458 preserves=true fpr_mask=0x00000000

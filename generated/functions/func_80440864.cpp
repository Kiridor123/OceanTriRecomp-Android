#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049F00(CpuContext* ctx);
extern "C" uint64_t func_80049F00_ra148_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_803BEE08(CpuContext* ctx);
extern "C" uint64_t func_803BEE08_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80440864(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80440864u);
    goto loc_80440864;

loc_80440864:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x806E0000u;
    r31 = (r3 + -30960);
    r30 = MemoryInline::FlatRead32((r31 + 84));
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80440898:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-2))) {
        goto loc_80440940;
    }
}

loc_8044089C:
{
    r3 = r30;
    r4 = 0;
    r5 = 65536;
    r5 = (r5 + 16384);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r29 = 0;
    r28 = (r30 + 72);
}

loc_804408B8:
{
    r3 = r28;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r28 = (r28 + 24576);
    r29 = (r29 + 1);
}

loc_804408D4:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(3))) {
        goto loc_804408B8;
    }
}

loc_804408D8:
{
    r3 = (r30 + 40);
    ctx->lr = 0x804408E0u;
    if constexpr (KnownRegArgsCpuCall<0x803BEE08u>(&func_803BEE08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803BEE08_C17 = func_803BEE08_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_803BEE08_C17);
        r4 = static_cast<uint32_t>(regargs_result_803BEE08_C17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803BEE08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r28 = 0;
    MemoryInline::FlatWrite8((r30 + 26), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r30 + 27), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r30 + 28), static_cast<uint8_t>(r28));
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r28));
    r3 = (r30 + 8);
    r4 = (r13 + -21176);
    r0 = MemoryInline::FlatRead8((r31 + 256));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = (r5 + 1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80440910u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_137F = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_137F);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_137F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = 0x80660000u;
    r4 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r31 + 256));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r0 = (r0 + r3);
    r3 = (r4 + r0);
    r3 = (r3 + 2026);
    r4 = (r30 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_1ABC = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_1ABC;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r30, r28);
    goto loc_80440A0C;
}

loc_80440940:
{
    r0 = MemoryInline::FlatRead32((r31 + 268));
}

loc_80440948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80440960;
    }
}

loc_8044094C:
{
    r3 = r30;
    r4 = 0;
    r5 = 65536;
    r5 = (r5 + 16384);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80440960:
{
    r3 = 0x80660000u;
    r28 = (r3 + -21920);
    r3 = (r28 + 2322);
    r29 = 0x80660000u;
    r4 = (r29 + -19184);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 40);
    r4 = (r29 + -19184);
    r5 = 31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 62), static_cast<uint8_t>(r0));
    r3 = (r30 + 8);
    r0 = MemoryInline::FlatRead8((r31 + 256));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r0 = (r0 + r4);
    r4 = (r28 + r0);
    r4 = (r4 + 2026);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_2379 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2379;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r4 = 1;
    MemoryInline::FlatWrite32(r30, r4);
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804409C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_80440A0C;
    }
}

loc_804409CC:
{
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 26), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r31 + 257));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 24576);
    r3 = (r30 + r0);
    r29 = (r3 + 72);
    r3 = r29;
    r4 = 0;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 24576;
    ctx->lr = 0x80440A04u;
    if constexpr (KnownRegArgsCpuCall<0x80049F00u>(&func_80049F00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80049F00_2A14 = func_80049F00_ra148_1e_18_0(ctx, r3, r6, r8, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80049F00_2A14);
        r4 = static_cast<uint32_t>(regargs_result_80049F00_2A14 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80049F00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r8 = ctx->gpr[8];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r28 + 2321));
    MemoryInline::FlatWrite8((r30 + 25), static_cast<uint8_t>(r0));
}

loc_80440A0C:
{
    r3 = MemoryInline::FlatRead32((r31 + 84));
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = (r3 + 8);
    r0 = 10239;
    ctr = r0;
}

loc_80440A24:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80440A24;
    }
}

loc_80440AAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80440864 func_80440864 preserves=true fpr_mask=0x00000000

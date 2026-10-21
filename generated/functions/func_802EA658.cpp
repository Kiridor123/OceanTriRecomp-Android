#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803A8844(CpuContext* ctx);
extern "C" uint32_t func_803A8844_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A88BC(CpuContext* ctx);
extern "C" uint32_t func_803A88BC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_802EA658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x802EA658u);
    goto loc_802EA658;

loc_802EA658:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r3 = r30;
    r4 = 151;
    ctx->lr = 0x802EA68Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802EA690:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA69C;
    }
}

loc_802EA694:
{
    r31 = 4;
    goto loc_802EA79C;
}

loc_802EA69C:
{
    r3 = MemoryInline::FlatRead32((r29 + 72));
    // inline leaf 0x802D7E18 (15 guest instruction(s))
}

loc_inl0_0x802D7E18:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl0_0x802D7E20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802D7E2C;
    }
}

loc_inl0_0x802D7E24:
{
    r3 = 0;
    goto loc_inl0_cont_802D7E18;
}

loc_inl0_0x802D7E2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 1056));
}

loc_inl0_0x802D7E34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_inl0_0x802D7E40;
    }
}

loc_inl0_0x802D7E38:
{
    r3 = 0;
    goto loc_inl0_cont_802D7E18;
}

loc_inl0_0x802D7E40:
{
    r3 = MemoryInline::FlatRead16((r3 + 1058));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_802D7E18:
{
    // end of inlined leaf 0x802D7E18
}

loc_802EA6A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA6B4;
    }
}

loc_802EA6AC:
{
    r31 = 4;
    goto loc_802EA79C;
}

loc_802EA6B4:
{
    r3 = r30;
    r4 = 150;
    ctx->lr = 0x802EA6C0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802EA6C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA79C;
    }
}

loc_802EA6C8:
{
    r31 = 2;
    r3 = MemoryInline::FlatRead32((r29 + 392));
}

loc_802EA6D4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802EA6E0;
    }
}

loc_802EA6D8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 392), r0);
}

loc_802EA6E0:
{
    r3 = MemoryInline::FlatRead32((r29 + 388));
}

loc_802EA6E8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_802EA71C;
    }
}

loc_802EA6EC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12676));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12612));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r29 + 388), r0);
    goto loc_802EA79C;
}

loc_802EA71C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 388), r0);
}

loc_802EA728:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802EA79C;
    }
}

loc_802EA72C:
{
    r3 = 0x80660000u;
    r28 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12676));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12612));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r29 + 388), r0);
    // inline leaf 0x8045E620 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -20792));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -20792), r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_3 & 32767);
    // end of inlined leaf 0x8045E620
    r4 = 1431633920;
    r0 = (r4 + 21846);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r4 + r0);
    r0 = (r0 * 3);
    r0 = (r3 - r0);
}

loc_802EA77C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802EA79C;
    }
}

loc_802EA780:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12608));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite32((r29 + 392), r0);
}

loc_802EA79C:
{
    r3 = r30;
    // inline leaf 0x8027E034 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1120));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8027E034
}

loc_802EA7A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA7B4;
    }
}

loc_802EA7AC:
{
    r31 = (r31 | 1);
    goto loc_802EA814;
}

loc_802EA7B4:
{
    r3 = r30;
    r4 = 49;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80272B14_1C3D = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1C3D);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1C3D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802EA7C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802EA814;
    }
}

loc_802EA7C8:
{
    ctx->lr = 0x802EA7CCu;
    if constexpr (KnownRegArgsCpuCall<0x803A88BCu>(&func_803A88BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A88BC_1FC0 = func_803A88BC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A88BC_1FC0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803A88BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r29 = r3;
    ctx->lr = 0x802EA7D4u;
    if constexpr (KnownRegArgsCpuCall<0x803A8844u>(&func_803A8844)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_803A8844_22B0 = func_803A8844_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A8844_22B0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x803A8844u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r29 - r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12608));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802EA80C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802EA814;
    }
}

loc_802EA810:
{
    r31 = (r31 | 1);
}

loc_802EA814:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EA658 func_802EA658 preserves=true fpr_mask=0x00000000

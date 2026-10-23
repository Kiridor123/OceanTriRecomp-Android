#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804685F4(CpuContext* ctx);
extern "C" uint64_t func_804685F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_808443E0_statefree(uint32_t, uint32_t);

extern "C" void func_8081E7A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_8081E7A0;

loc_8081E7A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80840000u;
    r31 = (r31 + 17600);
    r0 = MemoryInline::FlatRead32((r3 + -32328));
}

loc_8081E7D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E8A0;
    }
}

loc_8081E7D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8081E7DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8081E7EC;
    }
}

loc_8081E7E4:
{
    r29 = -904;
    goto loc_8081E810;
}

loc_8081E7EC:
{
    ctx->lr = 0x8081E7F0u;
    if constexpr (KnownRegArgsCpuCall<0x804685F4u>(&func_804685F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_804685F4_8AE = func_804685F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804685F4_8AE);
        r4 = static_cast<uint32_t>(regargs_result_804685F4_8AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x804685F4u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r29 = fctiwzword0;
}

loc_8081E810:
{
}

loc_8081E814:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(60))) {
        goto loc_8081E81C;
    }
}

loc_8081E818:
{
    r29 = 60;
}

loc_8081E81C:
{
}

loc_8081E820:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(-904))) {
        goto loc_8081E828;
    }
}

loc_8081E824:
{
    r29 = -904;
}

loc_8081E828:
{
    r28 = 0;
    r30 = 0;
    r31 = 0x80870000u;
}

loc_8081E834:
{
    r0 = MemoryInline::FlatRead32((r31 + -32328));
    r3 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 11804));
}

loc_8081E844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E850;
    }
}

loc_8081E848:
{
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x808443E0u) && KnownTranslatedCpuCall<0x808443E0u>::kAvailable && !KnownTranslatedCpuCall<0x808443E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x808443E0u>()) {
        const auto state_free_result_808443E0_1357 = func_808443E0_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_808443E0_1357[0]);
        r3 = static_cast<uint32_t>(state_free_result_808443E0_1357[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x808443E0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_8081E850:
{
    r28 = (r28 + 1);
    r30 = (r30 + 11820);
}

loc_8081E85C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_8081E834;
    }
}

loc_8081E860:
{
    r28 = 0;
    r30 = 0;
    r31 = 0x80870000u;
}

loc_8081E86C:
{
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r0 = (r3 + 65536);
    r3 = (r0 + r30);
    r3 = (r3 + -18256);
    r0 = MemoryInline::FlatRead8((r3 + 11804));
}

loc_8081E884:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8081E890;
    }
}

loc_8081E888:
{
    r4 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x808443E0u) && KnownTranslatedCpuCall<0x808443E0u>::kAvailable && !KnownTranslatedCpuCall<0x808443E0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x808443E0u>()) {
        const auto state_free_result_808443E0_1A51 = func_808443E0_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_808443E0_1A51[0]);
        r3 = static_cast<uint32_t>(state_free_result_808443E0_1A51[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x808443E0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
}

loc_8081E890:
{
    r28 = (r28 + 1);
    r30 = (r30 + 11820);
}

loc_8081E89C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_8081E86C;
    }
}

loc_8081E8A0:
{
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

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x80001FFF fpr_write=0x80001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081E7A0 func_8081E7A0 preserves=true fpr_mask=0x00000000

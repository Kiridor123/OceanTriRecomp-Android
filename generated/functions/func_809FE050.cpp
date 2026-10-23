#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AAF18(CpuContext* ctx);
extern "C" uint32_t func_802AAF18_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802AB2A4(CpuContext* ctx);
extern "C" uint64_t func_802AB2A4_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" MkwStateFreeResult2 func_802AAF18_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802AAF18_statefree_v0(uint32_t, uint32_t);

extern "C" void func_809FE050(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t xer = ctx->xer;

    goto loc_809FE050;

loc_809FE050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 256));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AAF18u) && KnownTranslatedCpuCall<0x802AAF18u>::kAvailable && !KnownTranslatedCpuCall<0x802AAF18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AAF18u>()) {
        const auto state_free_result_802AAF18_6AB = func_802AAF18_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802AAF18_6AB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AAF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_809FE074:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809FE08C;
    }
}

loc_809FE078:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE08C:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_809FE094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FE0A4;
    }
}

loc_809FE098:
{
}

loc_809FE09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809FE120;
    }
}

loc_809FE0A0:
{
    goto loc_809FE194;
}

loc_809FE0A4:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_809FE0AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809FE0C4;
    }
}

loc_809FE0B0:
{
}

loc_809FE0B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_809FE10C;
    }
}

loc_809FE0B8:
{
}

loc_809FE0BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_809FE0E8;
    }
}

loc_809FE0C0:
{
    goto loc_809FE10C;
}

loc_809FE0C4:
{
    r3 = r31;
    ctx->lr = 0x809FE0CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809FD4A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
}

loc_809FE0D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FE1A8;
    }
}

loc_809FE0D4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE0E8:
{
    r3 = r31;
    ctx->lr = 0x809FE0F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809FD6E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
}

loc_809FE0F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FE1A8;
    }
}

loc_809FE0F8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE10C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE120:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r3 + -5);
}

loc_809FE12C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_809FE15C;
    }
}

loc_809FE130:
{
}

loc_809FE134:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_809FE180;
    }
}

loc_809FE138:
{
    r3 = r31;
    ctx->lr = 0x809FE140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809FD9A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
}

loc_809FE144:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FE1A8;
    }
}

loc_809FE148:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE15C:
{
    r3 = r31;
    ctx->lr = 0x809FE164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809FDCF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    xer = ctx->xer;
}

loc_809FE168:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809FE1A8;
    }
}

loc_809FE16C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE180:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE194:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_809FE1B4;
}

loc_809FE1A8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x809FE1B4u;
    if constexpr (KnownRegArgsCpuCall<0x802AB2A4u>(&func_802AB2A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB2A4_2070 = func_802AB2A4_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB2A4_2070);
        r4 = static_cast<uint32_t>(regargs_result_802AB2A4_2070 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB2A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
}

loc_809FE1B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FE050 func_809FE050 preserves=true fpr_mask=0x00000000

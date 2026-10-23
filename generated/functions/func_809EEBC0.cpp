#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AAAF4(CpuContext* ctx);
extern "C" uint64_t func_802AAAF4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AB8B4(CpuContext* ctx);
extern "C" uint64_t func_802AB8B4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802ABC84(CpuContext* ctx);
extern "C" uint64_t func_802ABC84_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809EEBC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_809EEBC0;

loc_809EEBC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead8((r3 + 9));
}

loc_809EEBE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EEBF8;
    }
}

loc_809EEBEC:
{
}

loc_809EEBF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_809EEC74;
    }
}

loc_809EEBF4:
{
    goto loc_809EECA0;
}

loc_809EEBF8:
{
    ctx->lr = 0x809EEBFCu;
    if constexpr (KnownRegArgsCpuCall<0x802ABC84u>(&func_802ABC84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802ABC84_7C2 = func_802ABC84_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802ABC84_7C2);
        r4 = static_cast<uint32_t>(regargs_result_802ABC84_7C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802ABC84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r29;
    ctx->lr = 0x809EEC04u;
    if constexpr (KnownRegArgsCpuCall<0x802AB8B4u>(&func_802AB8B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB8B4_A9D = func_802AB8B4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AB8B4_A9D);
        r4 = static_cast<uint32_t>(regargs_result_802AB8B4_A9D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AB8B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EEC14:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EECA0;
    }
}

loc_809EEC18:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_809EEC20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EECA0;
    }
}

loc_809EEC24:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -7);
}

loc_809EEC30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_809EEC54;
    }
}

loc_809EEC34:
{
    r0 = (r3 + -2);
}

loc_809EEC3C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EEC64;
    }
}

loc_809EEC40:
{
    r0 = (r3 + -5);
}

loc_809EEC48:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EEC64;
    }
}

loc_809EEC4C:
{
}

loc_809EEC50:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EECA0;
    }
}

loc_809EEC54:
{
    r3 = MemoryInline::FlatRead8((r30 + 781));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r30 + 781), static_cast<uint8_t>(r0));
    goto loc_809EECA0;
}

loc_809EEC64:
{
    r3 = MemoryInline::FlatRead8((r30 + 782));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r30 + 782), static_cast<uint8_t>(r0));
    goto loc_809EECA0;
}

loc_809EEC74:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_809EEC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EECA0;
    }
}

loc_809EEC84:
{
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r3 + -14);
}

loc_809EEC90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_809EECA0;
    }
}

loc_809EEC94:
{
    r3 = MemoryInline::FlatRead8((r4 + 1093));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r4 + 1093), static_cast<uint8_t>(r0));
}

loc_809EECA0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x809EECACu;
    if constexpr (KnownRegArgsCpuCall<0x802AAAF4u>(&func_802AAAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AAAF4_1623 = func_802AAAF4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AAAF4_1623);
        r4 = static_cast<uint32_t>(regargs_result_802AAAF4_1623 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x802AAAF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EEBC0 func_809EEBC0 preserves=true fpr_mask=0x00000000

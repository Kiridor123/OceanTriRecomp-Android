#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AB61C(CpuContext* ctx);
extern "C" uint64_t func_802AB61C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802ABA78(CpuContext* ctx);
extern "C" uint64_t func_802ABA78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_809EE964(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    MKW_GUEST_ENTER(0x809EE964u);
    goto loc_809EE964;

loc_809EE964:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r28 = r4;
    r3 = (r4 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 22));
    r5 = r31;
    r6 = 0;
    ctx->lr = 0x809EE99Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x809EE890u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = r3;
}

loc_809EE9A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809EEAF0;
    }
}

loc_809EE9A8:
{
    r3 = (r28 & 255);
    r0 = (r3 + -7);
}

loc_809EE9B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_809EE9D8;
    }
}

loc_809EE9B8:
{
    r0 = (r3 + -2);
}

loc_809EE9C0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EEA54;
    }
}

loc_809EE9C4:
{
    r0 = (r3 + -5);
}

loc_809EE9CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_809EEA54;
    }
}

loc_809EE9D0:
{
}

loc_809EE9D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EEA88;
    }
}

loc_809EE9D8:
{
    r0 = (r28 & 255);
}

loc_809EE9E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_809EE9FC;
    }
}

loc_809EE9E4:
{
}

loc_809EE9E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_809EEA04;
    }
}

loc_809EE9EC:
{
}

loc_809EE9F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_809EEA0C;
    }
}

loc_809EE9F4:
{
    r4 = 0;
    goto loc_809EEA10;
}

loc_809EE9FC:
{
    r4 = 1;
    goto loc_809EEA10;
}

loc_809EEA04:
{
    r4 = 2;
    goto loc_809EEA10;
}

loc_809EEA0C:
{
    r4 = 3;
}

loc_809EEA10:
{
    r3 = r30;
    r5 = MemoryInline::FlatRead8((r31 + 8));
    ctx->lr = 0x809EEA1Cu;
    if constexpr (KnownRegArgsCpuCall<0x802ABA78u>(&func_802ABA78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802ABA78_C87 = func_802ABA78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802ABA78_C87);
        r4 = static_cast<uint32_t>(regargs_result_802ABA78_C87 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802ABA78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r30;
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r31 + 8));
    ctx->lr = 0x809EEA2Cu;
    if constexpr (KnownRegArgsCpuCall<0x802AB61Cu>(&func_802AB61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB61C_FD8 = func_802AB61C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AB61C_FD8);
        r4 = static_cast<uint32_t>(regargs_result_802AB61C_FD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EEA38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EEA88;
    }
}

loc_809EEA3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 781));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 781), static_cast<uint8_t>(r0));
    goto loc_809EEA88;
}

loc_809EEA54:
{
    r3 = r30;
    r4 = 4;
    r5 = MemoryInline::FlatRead8((r31 + 8));
    ctx->lr = 0x809EEA64u;
    if constexpr (KnownRegArgsCpuCall<0x802AB61Cu>(&func_802AB61C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AB61C_152A = func_802AB61C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AB61C_152A);
        r4 = static_cast<uint32_t>(regargs_result_802AB61C_152A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AB61Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EEA70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EEA88;
    }
}

loc_809EEA74:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 782));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 782), static_cast<uint8_t>(r0));
}

loc_809EEA88:
{
    r29 = MemoryInline::FlatRead32((r30 + 256));
    r3 = (r28 & 255);
    r30 = (r3 + -10);
}

loc_809EEA98:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(12))) {
        goto loc_809EEAA8;
    }
}

loc_809EEA9C:
{
    r0 = (r3 + -1);
}

loc_809EEAA4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(5))) {
        goto loc_809EEAC8;
    }
}

loc_809EEAA8:
{
    r3 = r31;
    r4 = 67;
    ctx->lr = 0x809EEAB4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809EEAB8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EEAC8;
    }
}

loc_809EEABC:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
}

loc_809EEAC8:
{
}

loc_809EEACC:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(1))) {
        goto loc_809EEAF0;
    }
}

loc_809EEAD0:
{
    r3 = r31;
    r4 = 42;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1E08 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1E08);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1E08 >> 32);
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

loc_809EEAE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809EEAF0;
    }
}

loc_809EEAE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
}

loc_809EEAF0:
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

// RECOMP_GUEST_ABI gpr_read=0x00003FBF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EE964 func_809EE964 preserves=true fpr_mask=0x00000000

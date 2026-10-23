#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_809F917C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_809F917C;

loc_809F917C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r3 = r31;
    r4 = 51;
    ctx->lr = 0x809F91ACu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F91B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F91C0;
    }
}

loc_809F91B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F91C0:
{
    r3 = r31;
    r4 = 52;
    ctx->lr = 0x809F91CCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F91D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F91E0;
    }
}

loc_809F91D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F91E0:
{
    r3 = r31;
    r4 = 53;
    ctx->lr = 0x809F91ECu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F91F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9200;
    }
}

loc_809F91F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9200:
{
    r3 = r31;
    r4 = 63;
    ctx->lr = 0x809F920Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F9210:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9220;
    }
}

loc_809F9214:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9220:
{
    r3 = r31;
    r4 = 64;
    ctx->lr = 0x809F922Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F9230:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9240;
    }
}

loc_809F9234:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9240:
{
    r3 = r31;
    r4 = 65;
    ctx->lr = 0x809F924Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F9250:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9260;
    }
}

loc_809F9254:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9260:
{
    r3 = r31;
    r4 = 66;
    ctx->lr = 0x809F926Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F9270:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9280;
    }
}

loc_809F9274:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9280:
{
    r3 = r31;
    r4 = 67;
    ctx->lr = 0x809F928Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_809F9290:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F92A0;
    }
}

loc_809F9294:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F92A0:
{
    r3 = r31;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_12C0 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_12C0);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_12C0 >> 32);
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

loc_809F92B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F92C0;
    }
}

loc_809F92B4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F92C0:
{
    r3 = r31;
    r4 = 43;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_167D = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_167D);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_167D >> 32);
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

loc_809F92D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F92E0;
    }
}

loc_809F92D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F92E0:
{
    r3 = r31;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1A39 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1A39);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1A39 >> 32);
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

loc_809F92F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9300;
    }
}

loc_809F92F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9300:
{
    r3 = r31;
    r4 = 30;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_1DF6 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_1DF6);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_1DF6 >> 32);
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

loc_809F9310:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9320;
    }
}

loc_809F9314:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9320:
{
    r3 = r31;
    r4 = 40;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_21B4 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_21B4);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_21B4 >> 32);
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

loc_809F9330:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_809F9340;
    }
}

loc_809F9334:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r30 + 32), r0);
}

loc_809F9340:
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

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F917C func_809F917C preserves=true fpr_mask=0x00000000

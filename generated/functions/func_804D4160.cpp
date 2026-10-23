#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D40B0(CpuContext* ctx);
extern "C" uint32_t func_804D40B0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804D4160_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804D4160;

loc_804D4160:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 712));
}

loc_804D4184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804D419C;
    }
}

loc_804D4188:
{
}

loc_804D418C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_804D4208;
    }
}

loc_804D4190:
{
}

loc_804D4194:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804D42E0;
    }
}

loc_804D4198:
{
    goto loc_804D42EC;
}

loc_804D419C:
{
    if constexpr (KnownRegArgsCpuCall<0x804D40B0u>(&func_804D40B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804D40B0_763 = func_804D40B0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804D40B0_763;
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
        InvokeDirectCpu<0x804D40B0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0x80750000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = (r3 + -400);
    MemoryInline::FlatWrite32((r30 + 720), r31);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 732), r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804D41C0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D41CC;
    }
}

loc_804D41C4:
{
    MemoryInline::FlatWrite32(r3, r30);
    goto loc_804D41D0;
}

loc_804D41CC:
{
    MemoryInline::FlatWrite32((r4 + 736), r30);
}

loc_804D41D0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 740), r4);
    r4 = MemoryInline::FlatRead32((r30 + 732));
    r3 = 1;
    MemoryInline::FlatWrite32((r30 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r30);
    r0 = MemoryInline::FlatRead32((r30 + 720));
    r4 = MemoryInline::FlatRead32((r13 + -14984));
    r0_subfic_ra_1 = r0;
    r0 = (31 - r0_subfic_ra_1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r13 + -14984), r0);
    MemoryInline::FlatWrite32((r13 + -14988), r3);
    goto loc_804D42EC;
}

loc_804D4208:
{
    r6 = MemoryInline::FlatRead32((r3 + 736));
    r7 = MemoryInline::FlatRead32((r3 + 740));
}

loc_804D4214:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804D4224;
    }
}

loc_804D4218:
{
    r5 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32((r5 + 4), r7);
    goto loc_804D4228;
}

loc_804D4224:
{
    MemoryInline::FlatWrite32((r6 + 740), r7);
}

loc_804D4228:
{
}

loc_804D422C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804D423C;
    }
}

loc_804D4230:
{
    r5 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32(r5, r6);
    goto loc_804D4240;
}

loc_804D423C:
{
    MemoryInline::FlatWrite32((r7 + 736), r6);
}

loc_804D4240:
{
    MemoryInline::FlatWrite32((r3 + 720), r4);
    r5 = MemoryInline::FlatRead32((r3 + 732));
    r6 = MemoryInline::FlatRead32(r5);
    goto loc_804D4254;
}

loc_804D4250:
{
    r6 = MemoryInline::FlatRead32((r6 + 736));
}

loc_804D4254:
{
}

loc_804D4258:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804D426C;
    }
}

loc_804D425C:
{
    r4 = MemoryInline::FlatRead32((r6 + 720));
    r0 = MemoryInline::FlatRead32((r3 + 720));
}

loc_804D4268:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_804D4250;
    }
}

loc_804D426C:
{
}

loc_804D4270:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804D42A4;
    }
}

loc_804D4274:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_804D427C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D4288;
    }
}

loc_804D4280:
{
    MemoryInline::FlatWrite32(r5, r3);
    goto loc_804D428C;
}

loc_804D4288:
{
    MemoryInline::FlatWrite32((r4 + 736), r3);
}

loc_804D428C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 740), r4);
    r4 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32((r3 + 736), r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    goto loc_804D42CC;
}

loc_804D42A4:
{
    MemoryInline::FlatWrite32((r3 + 736), r6);
    r4 = MemoryInline::FlatRead32((r6 + 740));
    MemoryInline::FlatWrite32((r6 + 740), r3);
}

loc_804D42B4:
{
    MemoryInline::FlatWrite32((r3 + 740), r4);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804D42C8;
    }
}

loc_804D42BC:
{
    r4 = MemoryInline::FlatRead32((r3 + 732));
    MemoryInline::FlatWrite32(r4, r3);
    goto loc_804D42CC;
}

loc_804D42C8:
{
    MemoryInline::FlatWrite32((r4 + 736), r3);
}

loc_804D42CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 752));
}

loc_804D42D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D42EC;
    }
}

loc_804D42D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_804D42F0;
}

loc_804D42E0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14988), r0);
    MemoryInline::FlatWrite32((r3 + 720), r4);
}

loc_804D42EC:
{
    r3 = 0;
}

loc_804D42F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D4160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D4160_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D4160 func_804D4160 preserves=true fpr_mask=0x00000000

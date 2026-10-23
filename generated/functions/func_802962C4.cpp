#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029625C(CpuContext* ctx);
extern "C" uint64_t func_8029625C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8029628C(CpuContext* ctx);
extern "C" uint32_t func_8029628C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_802962C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802962C4;

loc_802962C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r8;
    r0 = MemoryInline::FlatRead16(r3);
}

loc_802962F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80296304;
    }
}

loc_802962FC:
{
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
}

loc_80296304:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r6 & r0);
}

loc_80296310:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8029631C;
    }
}

loc_80296314:
{
    r3 = 0;
    goto loc_802963AC;
}

loc_8029631C:
{
    r4 = (r7 & 65535);
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r4 & r0);
}

loc_8029632C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80296338;
    }
}

loc_80296330:
{
    r3 = 0;
    goto loc_802963AC;
}

loc_80296338:
{
    r3 = (r9 & 255);
    // inline leaf 0x802B0B50 (6 guest instruction(s))
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 10268));
    // end of inlined leaf 0x802B0B50
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r28 + 7));
    r0 = (r0 & r3);
}

loc_80296350:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029635C;
    }
}

loc_80296354:
{
    r3 = 0;
    goto loc_802963AC;
}

loc_8029635C:
{
}

loc_80296360:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80296384;
    }
}

loc_80296364:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8029625Cu>(&func_8029625C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029625C_B55 = func_8029625C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029625C_B55);
        r4 = static_cast<uint32_t>(regargs_result_8029625C_B55 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029625Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80296378:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80296384;
    }
}

loc_8029637C:
{
    r3 = 0;
    goto loc_802963AC;
}

loc_80296384:
{
}

loc_80296388:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_802963A8;
    }
}

loc_8029638C:
{
    r3 = r28;
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8029628Cu>(&func_8029628C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8029628C_F71 = func_8029628C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8029628C_F71;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8029628Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
}

loc_8029639C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802963A8;
    }
}

loc_802963A0:
{
    r3 = 0;
    goto loc_802963AC;
}

loc_802963A8:
{
    r3 = 1;
}

loc_802963AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802962C4 func_802962C4 preserves=true fpr_mask=0x00000000

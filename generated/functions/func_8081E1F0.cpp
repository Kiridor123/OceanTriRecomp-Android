#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046E110(CpuContext* ctx);
extern "C" uint64_t func_8046E110_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8081E1F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    MKW_GUEST_ENTER(0x8081E1F0u);
    goto loc_8081E1F0;

loc_8081E1F0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r4 = 0x80870000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r1 + 8);
    r28 = r3;
    r6 = MemoryInline::FlatRead32((r4 + -32328));
    r4 = 0x80840000u;
    r4 = (r4 + 21576);
    r3 = (r6 + 65536);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = (r3 + 17228);
    ctx->lr = 0x8081E238u;
    if constexpr (KnownRegArgsCpuCall<0x8046E110u>(&func_8046E110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8046E110_73A = func_8046E110_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046E110_73A);
        r4 = static_cast<uint32_t>(regargs_result_8046E110_73A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8046E110u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8081E23C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E250;
    }
}

loc_8081E240:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046E860 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8046E860
    r30 = r3;
    goto loc_8081E254;
}

loc_8081E250:
{
    r30 = 0;
}

loc_8081E254:
{
}

loc_8081E258:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8081E30C;
    }
}

loc_8081E25C:
{
    r3 = r28;
    ctx->lr = 0x8081E264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8081DDA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = 0x80870000u;
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r31 + -32328));
    r4 = r30;
    r7 = 0;
    r6 = (r5 + 65536);
    r5 = MemoryInline::FlatRead32((r6 + 18100));
    r6 = MemoryInline::FlatRead32((r6 + 18104));
    ctx->lr = 0x8081E288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80844150u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = r29;
    r4 = 1;
    ctx->lr = 0x8081E294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80844280u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_8081E298:
{
    MemoryInline::FlatWrite32((r29 + 11816), r28);
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(4))) {
        goto loc_8081E2B0;
    }
}

loc_8081E2A0:
{
}

loc_8081E2A4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(23))) {
        goto loc_8081E2B0;
    }
}

loc_8081E2A8:
{
}

loc_8081E2AC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(25))) {
        goto loc_8081E2C4;
    }
}

loc_8081E2B0:
{
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32328));
    r4 = (r3 + 65536);
    r4 = (r4 + 17212);
    goto loc_8081E2D0;
}

loc_8081E2C4:
{
    r3 = MemoryInline::FlatRead32((r31 + -32328));
    r4 = (r3 + 65536);
    r4 = (r4 + 17204);
}

loc_8081E2D0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8081E2D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E2F4;
    }
}

loc_8081E2DC:
{
    MemoryInline::FlatWrite32(r4, r29);
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 4), r29);
    MemoryInline::FlatWrite32((r29 + 11808), r0);
    MemoryInline::FlatWrite32((r29 + 11812), r0);
    goto loc_8081E30C;
}

loc_8081E2F4:
{
    MemoryInline::FlatWrite32((r3 + 11808), r29);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r29 + 11812), r3);
    MemoryInline::FlatWrite32((r29 + 11808), r0);
    MemoryInline::FlatWrite32((r4 + 4), r29);
}

loc_8081E30C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081E1F0 func_8081E1F0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805219C0(CpuContext* ctx);
extern "C" void func_805219C0_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805228C0(CpuContext* ctx);
extern "C" uint64_t func_805228C0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_805228C0_statefree(uint32_t);

extern "C" uint64_t func_80522480_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80522480u);
    goto loc_80522480;

loc_80522480:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_8052248C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(18));
    r29 = (r29_rot_0 & 262143);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805224C4;
    }
}

loc_805224A4:
{
}

loc_805224A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805224C4;
    }
}

loc_805224AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_805224B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805224C4;
    }
}

loc_805224B8:
{
    r5 = 0;
    ctx->lr = 0x805224C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C27A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctr = ctx->ctr;
    MemoryInline::FlatWrite32((r13 + -13592), r3);
}

loc_805224C4:
{
}

loc_805224C8:
{
    r4 = 26;
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(26))) {
        goto loc_805224D4;
    }
}

loc_805224D0:
{
    r4 = r29;
}

loc_805224D4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13584));
    MemoryInline::FlatWrite32((r13 + -13600), r4);
}

loc_805224E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80522508;
    }
}

loc_805224E4:
{
    r3 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_805224EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805224F8;
    }
}

loc_805224F0:
{
    r3 = 0;
    goto loc_80522504;
}

loc_805224F8:
{
    r4 = (r4 * 320);
    r5 = 32;
    ctx->lr = 0x80522504u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2880u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctr = ctx->ctr;
}

loc_80522504:
{
    MemoryInline::FlatWrite32((r13 + -13584), r3);
}

loc_80522508:
{
    r0 = MemoryInline::FlatRead32((r13 + -13600));
}

loc_80522510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80522524;
    }
}

loc_80522514:
{
    r29 = MemoryInline::FlatRead32((r13 + -13584));
}

loc_8052251C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80522524;
    }
}

loc_80522520:
{
    goto loc_80522528;
}

loc_80522524:
{
    r29 = 0;
}

loc_80522528:
{
    r0 = (r0 * 320);
    r31 = 0;
    r30 = (r29 + r0);
    goto loc_80522564;
}

loc_80522538:
{
    r3 = r29;
    r4 = 0;
    r5 = 320;
    if constexpr (KnownRegArgsCpuCall<0x805219C0u>(&func_805219C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        func_805219C0_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805219C0u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = (r29 + 28);
}

loc_8052254C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80522560;
    }
}

loc_80522550:
{
    MemoryInline::FlatWrite32((r29 + 28), r31);
    MemoryInline::FlatWrite32((r29 + 32), r31);
    MemoryInline::FlatWrite32((r29 + 36), r31);
    MemoryInline::FlatWrite32((r29 + 40), r31);
}

loc_80522560:
{
    r29 = (r29 + 320);
}

loc_80522564:
{
}

loc_80522568:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(r30))) {
        goto loc_80522538;
    }
}

loc_8052256C:
{
    r0 = MemoryInline::FlatRead32((r13 + -13588));
    r30 = MemoryInline::FlatRead32((r13 + -13600));
}

loc_80522578:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805225C8;
    }
}

loc_8052257C:
{
    r29 = 0x80790000u;
    r31 = 0;
    r29 = (r29 + 6744);
    goto loc_805225B8;
}

loc_8052258C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13592));
}

loc_80522594:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805225A0;
    }
}

loc_80522598:
{
    r3 = 0;
    goto loc_805225AC;
}

loc_805225A0:
{
    r4 = 160;
    r5 = 32;
    ctx->lr = 0x805225ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2880u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctr = ctx->ctr;
}

loc_805225AC:
{
    MemoryInline::FlatWrite32(r29, r3);
    r29 = (r29 + 4);
    r31 = (r31 + 1);
}

loc_805225B8:
{
}

loc_805225BC:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r30))) {
        goto loc_8052258C;
    }
}

loc_805225C0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -13588), r0);
}

loc_805225C8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805228C0u) && KnownTranslatedCpuCall<0x805228C0u>::kAvailable && !KnownTranslatedCpuCall<0x805228C0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805228C0u>()) {
        const auto state_free_result_805228C0_1A49 = func_805228C0_statefree(ctr);
        ctr = static_cast<uint32_t>(state_free_result_805228C0_1A49);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805228C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        ctr = ctx->ctr;
    }
    r4 = 0;
    r3 = 2;
    r0 = 8;
    MemoryInline::FlatWrite32((r13 + -13596), r4);
    MemoryInline::FlatWrite32((r13 + -13572), r3);
    MemoryInline::FlatWrite32((r13 + -13576), r0);
    // inline leaf 0x805229B0 (1 guest instruction(s))
    // end of inlined leaf 0x805229B0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80522480(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80522480_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80522480 func_80522480 preserves=true fpr_mask=0x00000000

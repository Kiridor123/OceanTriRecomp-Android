#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045166C(CpuContext* ctx);
extern "C" uint64_t func_8045166C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804516B4(CpuContext* ctx);
extern "C" uint64_t func_804516B4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8026744C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8026744Cu);
    goto loc_8026744C;

loc_8026744C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_8026746C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80267478;
    }
}

loc_80267470:
{
    r3 = 0;
    goto loc_80267590;
}

loc_80267478:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_80267480:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80267524;
    }
}

loc_80267484:
{
    if constexpr (KnownRegArgsCpuCall<0x804516B4u>(&func_804516B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804516B4_869 = func_804516B4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804516B4_869);
        r4 = static_cast<uint32_t>(regargs_result_804516B4_869 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804516B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r3 & 255);
    r4 = 0;
    r3 = (r13 + -17140);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_8026749C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802674A4;
    }
}

loc_802674A0:
{
    r4 = 1;
}

loc_802674A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802674AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802674B4;
    }
}

loc_802674B0:
{
    r4 = (r4 + 1);
}

loc_802674B4:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_802674BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802674C4;
    }
}

loc_802674C0:
{
    r4 = (r4 + 1);
}

loc_802674C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_802674CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802674D4;
    }
}

loc_802674D0:
{
    r4 = (r4 + 1);
}

loc_802674D4:
{
}

loc_802674D8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r29))) {
        goto loc_802674E4;
    }
}

loc_802674DC:
{
    r3 = 0;
    goto loc_80267590;
}

loc_802674E4:
{
    r31 = 0;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    ctr = r29;
}

loc_802674F8:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_80267514;
    }
}

loc_802674FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 615));
}

loc_80267504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026750C;
    }
}

loc_80267508:
{
    r31 = (r31 + 1);
}

loc_8026750C:
{
    r3 = (r3 + 2848);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802674FC;
    }
}

loc_80267514:
{
}

loc_80267518:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r29))) {
        goto loc_8026758C;
    }
}

loc_8026751C:
{
    r3 = 1;
    goto loc_80267590;
}

loc_80267524:
{
    r31 = 0;
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r30 = 0;
}

loc_80267538:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80267540:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80267554;
    }
}

loc_80267544:
{
    r3 = (r30 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8045166Cu>(&func_8045166C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045166C_1A04 = func_8045166C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8045166C_1A04);
        r4 = static_cast<uint32_t>(regargs_result_8045166C_1A04 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8045166Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80267550:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026755C;
    }
}

loc_80267554:
{
    r31 = (r31 + 1);
    goto loc_8026756C;
}

loc_8026755C:
{
    r0 = MemoryInline::FlatRead8((r29 + 615));
}

loc_80267564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8026756C;
    }
}

loc_80267568:
{
    r31 = (r31 + 1);
}

loc_8026756C:
{
    r30 = (r30 + 1);
    r29 = (r29 + 2848);
}

loc_80267578:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(4))) {
        goto loc_80267538;
    }
}

loc_8026757C:
{
}

loc_80267580:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(4))) {
        goto loc_8026758C;
    }
}

loc_80267584:
{
    r3 = 1;
    goto loc_80267590;
}

loc_8026758C:
{
    r3 = 0;
}

loc_80267590:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026744C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026744C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026744C func_8026744C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021B6C0(CpuContext* ctx);
extern "C" uint64_t func_8021B6C0_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021B6F4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8021B6F4u);
    goto loc_8021B6F4;

loc_8021B6F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = 0x805C0000u;
    r29 = (r3 + -25056);
    goto loc_8021B768;
}

loc_8021B720:
{
    r0 = MemoryInline::FlatRead16((r30 + 15844));
}

loc_8021B728:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_8021B734;
    }
}

loc_8021B72C:
{
}

loc_8021B730:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8021B764;
    }
}

loc_8021B734:
{
    r28 = 0;
    goto loc_8021B754;
}

loc_8021B73C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 + r28);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x8021B6C0 (13 guest instruction(s))
}

loc_inl0_0x8021B6C0:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8021B6C8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(117))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8021B6CC:
{
    r0 = (static_cast<int32_t>(r6) >> 5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 16644));
    r3 = 1;
    r0 = (r6 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 16644), r0);
    goto loc_inl0_cont_8021B6C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8021B6C0:
{
    // end of inlined leaf 0x8021B6C0
    r28 = (r28 + 1);
}

loc_8021B754:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r0 = MemoryInline::FlatRead16((r29 + 4));
}

loc_8021B760:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021B73C;
    }
}

loc_8021B764:
{
    r29 = (r29 + 6);
}

loc_8021B768:
{
    r3 = MemoryInline::FlatRead16(r29);
}

loc_8021B770:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_8021B720;
    }
}

loc_8021B774:
{
    r3 = 0x805C0000u;
    r31 = (r3 + -25012);
    r29 = 0x805C0000u;
    r28 = (r29 + -22780);
    goto loc_8021B824;
}

loc_8021B788:
{
    r0 = (r3 + -24);
}

loc_8021B790:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8021B79C;
    }
}

loc_8021B794:
{
}

loc_8021B798:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(20))) {
        goto loc_8021B7A4;
    }
}

loc_8021B79C:
{
    r4 = (r28 + 6);
    goto loc_8021B7A8;
}

loc_8021B7A4:
{
    r4 = (r29 + -22780);
}

loc_8021B7A8:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r30 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 15040));
    r3 = MemoryInline::FlatRead16((r3 + 14784));
    r0 = (r3 + r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021B7C8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021B7E4;
    }
}

loc_8021B7CC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r4 + 2);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x8021B6C0 (13 guest instruction(s))
}

loc_inl1_0x8021B6C0:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x8021B6C8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(117))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8021B6CC:
{
    r0 = (static_cast<int32_t>(r6) >> 5);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 16644));
    r3 = 1;
    r0 = (r6 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 16644), r0);
    goto loc_inl1_cont_8021B6C0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8021B6C0:
{
    // end of inlined leaf 0x8021B6C0
    goto loc_8021B820;
}

loc_8021B7E4:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021B7EC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021B808;
    }
}

loc_8021B7F0:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r4 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // inline leaf 0x8021B6C0 (13 guest instruction(s))
}

loc_inl2_0x8021B6C0:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x8021B6C8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(117))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8021B6CC:
{
    r0 = (static_cast<int32_t>(r6) >> 5);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 16644));
    r3 = 1;
    r0 = (r6 & 31);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 16644), r0);
    goto loc_inl2_cont_8021B6C0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8021B6C0:
{
    // end of inlined leaf 0x8021B6C0
    goto loc_8021B820;
}

loc_8021B808:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8021B810:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8021B820;
    }
}

loc_8021B814:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 2));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    if constexpr (KnownRegArgsCpuCall<0x8021B6C0u>(&func_8021B6C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8021B6C0_1BB5 = func_8021B6C0_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8021B6C0_1BB5);
        r4 = static_cast<uint32_t>(regargs_result_8021B6C0_1BB5 >> 32);
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
        InvokeDirectCpu<0x8021B6C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_8021B820:
{
    r31 = (r31 + 4);
}

loc_8021B824:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_8021B82C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(65535))) {
        goto loc_8021B788;
    }
}

loc_8021B830:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021B6F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021B6F4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021B6F4 func_8021B6F4 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803C8DEC(CpuContext* ctx);
extern "C" uint64_t func_803C8DEC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045266C(CpuContext* ctx);
extern "C" uint64_t func_8045266C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803C8D84_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_803C8D84;

loc_803C8D84:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1544), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 1180));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 44);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 1196));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl0_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A8F8C;
    }
}

loc_inl0_0x802A8F84:
{
    r3 = 1;
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl0_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r31 + 1546), static_cast<uint16_t>(r3));
    r3 = 8;
    ctx->lr = 0x803C8DC4u;
    if constexpr (KnownRegArgsCpuCall<0x8045266Cu>(&func_8045266C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045266C_A35 = func_8045266C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8045266C_A35);
        r4 = static_cast<uint32_t>(regargs_result_8045266C_A35 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8045266Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r31 + 1546), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = MemoryInline::FlatRead16((r31 + 1544));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x803C8DD8u;
    if constexpr (KnownRegArgsCpuCall<0x803C8DECu>(&func_803C8DEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803C8DEC_E09 = func_803C8DEC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803C8DEC_E09);
        r4 = static_cast<uint32_t>(regargs_result_803C8DEC_E09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803C8DECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803C8D84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803C8D84_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021CA gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803C8D84 func_803C8D84 preserves=true fpr_mask=0x00000000

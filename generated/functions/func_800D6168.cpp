#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A52B4(CpuContext* ctx);
extern "C" uint64_t func_800A52B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800D623C(CpuContext* ctx);
extern "C" uint64_t func_800D623C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_805020E4(CpuContext* ctx);
extern "C" void func_805020E4_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80502274(CpuContext* ctx);
extern "C" uint32_t func_80502274_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800D6168(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800D6168;

loc_800D6168:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 + 16);
    if constexpr (KnownRegArgsCpuCall<0x800A52B4u>(&func_800A52B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800A52B4_54A = func_800A52B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800A52B4_54A);
        r4 = static_cast<uint32_t>(regargs_result_800A52B4_54A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800A52B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
}

loc_800D6194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D6220;
    }
}

loc_800D6198:
{
    r3 = (r29 + 16);
    r4 = r31;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl0_0x805022E0:
{
}

loc_inl0_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x805022F0;
    }
}

loc_inl0_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_805022E0;
}

loc_inl0_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r30 = r3;
    goto loc_800D6218;
}

loc_800D61AC:
{
    r3 = r31;
    // inline leaf 0x800A52AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x800A52AC
}

loc_800D61B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(3))) {
        goto loc_800D6204;
    }
}

loc_800D61BC:
{
    r3 = r31;
    // inline leaf 0x800D63D4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800D63D4
}

loc_800D61C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D6204;
    }
}

loc_800D61CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -16360));
    r0 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x800D623Cu>(&func_800D623C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D623C_E28 = func_800D623C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D623C_E28);
        r4 = static_cast<uint32_t>(regargs_result_800D623C_E28 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D623Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 16);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80502274u>(&func_80502274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80502274_1101 = func_80502274_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80502274_1101;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80502274u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r29 + 4);
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x805020E4u>(&func_805020E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_805020E4_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x805020E4u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
}

loc_800D6204:
{
    r31 = r30;
    r3 = (r29 + 16);
    r4 = r30;
    // inline leaf 0x805022E0 (8 guest instruction(s))
}

loc_inl3_0x805022E0:
{
}

loc_inl3_0x805022E4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x805022F0;
    }
}

loc_inl3_0x805022E8:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_805022E0;
}

loc_inl3_0x805022F0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_805022E0:
{
    // end of inlined leaf 0x805022E0
    r30 = r3;
}

loc_800D6218:
{
}

loc_800D621C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800D61AC;
    }
}

loc_800D6220:
{
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

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D6168 func_800D6168 preserves=true fpr_mask=0x00000000

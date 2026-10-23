#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FF24(CpuContext* ctx);
extern "C" void func_8026FF24_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80255354_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80255354;

loc_80255354:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r5;
    r31 = r6;
    r4 = (r4 & 65535);
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x80255388u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = (r30 & 255);
}

loc_80255390:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802553A4;
    }
}

loc_80255394:
{
    r3 = r29;
    r4 = 16;
    // inline leaf 0x8026FF24 (12 guest instruction(s))
}

loc_inl0_0x8026FF24:
{
    r0 = (r4 & -2147483648);
}

loc_inl0_0x8026FF2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8026FF40;
    }
}

loc_inl0_0x8026FF30:
{
    r0 = MemoryInline::FlatRead32((r3 + 860));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 860), r0);
    goto loc_inl0_cont_8026FF24;
}

loc_inl0_0x8026FF40:
{
    r5 = MemoryInline::FlatRead32((r3 + 864));
    r0 = (r4 & 2147483647);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite32((r3 + 864), r0);
}

loc_inl0_cont_8026FF24:
{
    // end of inlined leaf 0x8026FF24
    goto loc_802553B0;
}

loc_802553A4:
{
    r3 = r29;
    r4 = 80;
    if constexpr (KnownRegArgsCpuCall<0x8026FF24u>(&func_8026FF24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_8026FF24_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8026FF24u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
}

loc_802553B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 24), static_cast<uint8_t>(r0));
    r0 = (r31 & 255);
}

loc_802553C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802553D0;
    }
}

loc_802553C4:
{
    r3 = r29;
    r4 = 1;
    // inline leaf 0x802785C8 (5 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 904));
    r0 = (r4 & 255);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite8((r3 + 904), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802785C8
}

loc_802553D0:
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

extern "C" void func_80255354(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80255354_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80255354 func_80255354 preserves=true fpr_mask=0x00000000

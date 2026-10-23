#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A268(CpuContext* ctx);
extern "C" uint64_t func_8012A268_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8032C16C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8032C16C;

loc_8032C16C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8032C190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8032C19C;
    }
}

loc_8032C194:
{
    r3 = 0;
    goto loc_8032C24C;
}

loc_8032C19C:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 10));
    ctx->lr = 0x8032C1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    ctx->lr = 0x8032C1B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8032C1B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8032C230;
    }
}

loc_8032C1BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 1083));
}

loc_8032C1C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8032C248;
    }
}

loc_8032C1C8:
{
    r5 = MemoryInline::FlatRead8((r3 + 15));
}

loc_8032C1D0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(3))) {
        goto loc_8032C1E4;
    }
}

loc_8032C1D4:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8032C1E0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8032C1FC;
    }
}

loc_8032C1E4:
{
}

loc_8032C1E8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(3))) {
        goto loc_8032C248;
    }
}

loc_8032C1EC:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_8032C1F8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8032C248;
    }
}

loc_8032C1FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8032C204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8032C210;
    }
}

loc_8032C208:
{
    r3 = 0;
    goto loc_8032C24C;
}

loc_8032C210:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8032C24C;
}

loc_8032C230:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8012A268u>(&func_8012A268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A268_1097 = func_8012A268_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A268_1097);
        r4 = static_cast<uint32_t>(regargs_result_8012A268_1097 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012A268u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8032C23C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8032C248;
    }
}

loc_8032C240:
{
    r3 = 1;
    goto loc_8032C24C;
}

loc_8032C248:
{
    r3 = 0;
}

loc_8032C24C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8032C16C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8032C16C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8032C16C func_8032C16C preserves=true fpr_mask=0x00000000

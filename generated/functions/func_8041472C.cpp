#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80414B90(CpuContext* ctx);
extern "C" uint32_t func_80414B90_ra0_0_8_0(CpuContext*);

extern "C" uint32_t func_8041472C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8041472C;

loc_8041472C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_80414748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80414750;
    }
}

loc_8041474C:
{
    MemoryInline::FlatWrite8((r3 + 30), static_cast<uint8_t>(r0));
}

loc_80414750:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
}

loc_80414758:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8041477C;
    }
}

loc_8041475C:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x804147F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24785));
    // end of inlined leaf 0x804147F0
    r0 = (r3 & 255);
}

loc_8041476C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8041477C;
    }
}

loc_80414770:
{
}

loc_80414774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(90))) {
        goto loc_8041477C;
    }
}

loc_80414778:
{
    MemoryInline::FlatWrite8((r31 + 31), static_cast<uint8_t>(r3));
}

loc_8041477C:
{
    r0 = MemoryInline::FlatRead8((r31 + 30));
}

loc_80414784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_804147C8;
    }
}

loc_80414788:
{
    r3 = r31;
    ctx->lr = 0x80414790u;
    if constexpr (KnownRegArgsCpuCall<0x80414B90u>(&func_80414B90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80414B90_93C = func_80414B90_ra0_0_8_0(ctx);
        r3 = regargs_result_80414B90_93C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80414B90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80414794:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804147A0;
    }
}

loc_80414798:
{
    r3 = 100;
    goto loc_804147D4;
}

loc_804147A0:
{
    r31 = 0;
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
}

loc_804147AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804147BC;
    }
}

loc_804147B0:
{
    // inline leaf 0x804128A0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16744));
    // end of inlined leaf 0x804128A0
    // inline leaf 0x804147E8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 107));
    // end of inlined leaf 0x804147E8
    r31 = r3;
}

loc_804147BC:
{
    r3 = (r31 & 255);
    r3 = (r3 + 90);
    goto loc_804147D4;
}

loc_804147C8:
{
    r3 = MemoryInline::FlatRead8((r31 + 31));
    r0 = (r0 * 10);
    r3 = (r3 + r0);
}

loc_804147D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8041472C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8041472C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8041472C func_8041472C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176B0C(CpuContext* ctx);
extern "C" uint32_t func_80176B0C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80176B0C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_80176B0C_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8016CBEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8016CBECu);
    goto loc_8016CBEC;

loc_8016CBEC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
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
    r29 = r3;
    r4 = (r3 & 255);
    r28 = (r4 + -1);
}

loc_8016CC24:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(1))) {
        goto loc_8016CC38;
    }
}

loc_8016CC28:
{
}

loc_8016CC2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8016CC38;
    }
}

loc_8016CC30:
{
    r3 = 0;
    goto loc_8016CD94;
}

loc_8016CC38:
{
}

loc_8016CC3C:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(1))) {
        goto loc_8016CC4C;
    }
}

loc_8016CC40:
{
    r0 = (r3 & 255);
}

loc_8016CC48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8016CC78;
    }
}

loc_8016CC4C:
{
    r0 = MemoryInline::FlatRead8((r31 + 17));
}

loc_8016CC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016CC78;
    }
}

loc_8016CC58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    r0 = 7;
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_8016CD94;
}

loc_8016CC78:
{
    r3 = MemoryInline::FlatRead8((r31 + 3));
    r4 = MemoryInline::FlatRead8((r31 + 10));
    ctx->lr = 0x8016CC84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    xer = ctx->xer;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    ctx->lr = 0x8016CC90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    xer = ctx->xer;
    r30 = r3;
}

loc_8016CC98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8016CD90;
    }
}

loc_8016CC9C:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8016CCA4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8016CD90;
    }
}

loc_8016CCA8:
{
}

loc_8016CCAC:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(1))) {
        goto loc_8016CCBC;
    }
}

loc_8016CCB0:
{
    r0 = (r29 & 255);
}

loc_8016CCB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8016CD90;
    }
}

loc_8016CCBC:
{
    r4 = MemoryInline::FlatRead8((r31 + 1132));
    r0 = MemoryInline::FlatRead8((r3 + 23));
}

loc_8016CCC8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8016CD90;
    }
}

loc_8016CCCC:
{
    r6 = MemoryInline::FlatRead8((r3 + 8));
}

loc_8016CCD4:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(5))) {
        goto loc_8016CD30;
    }
}

loc_8016CCD8:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8016CCE4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8016CD30;
    }
}

loc_8016CCE8:
{
    r3 = r5;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80176B0Cu) && KnownTranslatedCpuCall<0x80176B0Cu>::kAvailable && !KnownTranslatedCpuCall<0x80176B0Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80176B0Cu>()) {
        const auto state_free_result_80176B0C_1459 = func_80176B0C_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80176B0C_1459);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80176B0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8016CCF4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8016CD10;
    }
}

loc_8016CCF8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 16));
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
    goto loc_8016CD28;
}

loc_8016CD10:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 16));
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
}

loc_8016CD28:
{
    r3 = 1;
    goto loc_8016CD94;
}

loc_8016CD30:
{
}

loc_8016CD34:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(5))) {
        goto loc_8016CD90;
    }
}

loc_8016CD38:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_8016CD44:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8016CD90;
    }
}

loc_8016CD48:
{
    r3 = r5;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80176B0Cu) && KnownTranslatedCpuCall<0x80176B0Cu>::kAvailable && !KnownTranslatedCpuCall<0x80176B0Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80176B0Cu>()) {
        const auto state_free_result_80176B0C_1C15 = func_80176B0C_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80176B0C_1C15);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80176B0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
}

loc_8016CD54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8016CD70;
    }
}

loc_8016CD58:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 20));
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
    goto loc_8016CD88;
}

loc_8016CD70:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 508), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 510), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 20));
    MemoryInline::FlatWrite8((r31 + 511), static_cast<uint8_t>(r0));
}

loc_8016CD88:
{
    r3 = 1;
    goto loc_8016CD94;
}

loc_8016CD90:
{
    r3 = 0;
}

loc_8016CD94:
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

extern "C" void func_8016CBEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8016CBEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8016CBEC func_8016CBEC preserves=true fpr_mask=0x00000000

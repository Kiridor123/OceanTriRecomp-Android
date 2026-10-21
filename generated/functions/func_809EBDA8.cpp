#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802AAF18(CpuContext* ctx);
extern "C" uint32_t func_802AAF18_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_802AAF18_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802AAF18_statefree_v0(uint32_t, uint32_t);

extern "C" void func_809EBDA8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x809EBDA8u);
    goto loc_809EBDA8;

loc_809EBDA8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AAF18u) && KnownTranslatedCpuCall<0x802AAF18u>::kAvailable && !KnownTranslatedCpuCall<0x802AAF18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AAF18u>()) {
        const auto state_free_result_802AAF18_4E1 = func_802AAF18_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_802AAF18_4E1);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AAF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_809EBDD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_809EBDE8;
    }
}

loc_809EBDD4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x802AB258 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 97), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB258
    goto loc_809EBE60;
}

loc_809EBDE8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_809EBDF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_809EBE00;
    }
}

loc_809EBDF4:
{
}

loc_809EBDF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(18))) {
        goto loc_809EBE28;
    }
}

loc_809EBDFC:
{
    goto loc_809EBE40;
}

loc_809EBE00:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r3 & 1);
}

loc_809EBE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EBE40;
    }
}

loc_809EBE10:
{
}

loc_809EBE14:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(5))) {
        goto loc_809EBE40;
    }
}

loc_809EBE18:
{
    r3 = (r31 + 24);
    r4 = (r31 + 60);
    ctx->lr = 0x809EBE24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    goto loc_809EBE40;
}

loc_809EBE28:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_809EBE30:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_809EBE40;
    }
}

loc_809EBE34:
{
    r3 = (r31 + 24);
    r4 = (r31 + 60);
    ctx->lr = 0x809EBE40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
}

loc_809EBE40:
{
    r0 = MemoryInline::FlatRead8((r31 + 97));
}

loc_809EBE48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EBE58;
    }
}

loc_809EBE4C:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_809EBE54:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_809EBE60;
    }
}

loc_809EBE58:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
}

loc_809EBE60:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809EBDA8 func_809EBDA8 preserves=true fpr_mask=0x00000000

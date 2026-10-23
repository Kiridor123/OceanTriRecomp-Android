#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8033C5F8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8033C5F8;

loc_8033C5F8:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = r4;
    r0 = 2;
    ctr = r0;
}

loc_8033C60C:
{
    r0 = MemoryInline::FlatRead16((r3 + 20916));
}

loc_8033C614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C62C;
    }
}

loc_8033C618:
{
    r0 = MemoryInline::FlatRead16((r3 + 20918));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C62C;
    }
}

loc_8033C624:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C62C:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 20920));
}

loc_8033C638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C650;
    }
}

loc_8033C63C:
{
    r0 = MemoryInline::FlatRead16((r3 + 20922));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C650;
    }
}

loc_8033C648:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C650:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 20924));
}

loc_8033C65C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C674;
    }
}

loc_8033C660:
{
    r0 = MemoryInline::FlatRead16((r3 + 20926));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C674;
    }
}

loc_8033C66C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C674:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 20928));
}

loc_8033C680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C698;
    }
}

loc_8033C684:
{
    r0 = MemoryInline::FlatRead16((r3 + 20930));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C68C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C698;
    }
}

loc_8033C690:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C698:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 20932));
}

loc_8033C6A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C6BC;
    }
}

loc_8033C6A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 20934));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C6B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C6BC;
    }
}

loc_8033C6B4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C6BC:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r3 + 20936));
}

loc_8033C6C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C6E0;
    }
}

loc_8033C6CC:
{
    r0 = MemoryInline::FlatRead16((r3 + 20938));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C6D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C6E0;
    }
}

loc_8033C6D8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C6E0:
{
    r3 = (r3 + 24);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8033C60C;
    }
}

loc_8033C6EC:
{
    r3 = 0;
    r0 = 5;
    ctr = r0;
}

loc_8033C6F8:
{
    r0 = MemoryInline::FlatRead16((r4 + 20964));
}

loc_8033C700:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C718;
    }
}

loc_8033C704:
{
    r0 = MemoryInline::FlatRead16((r4 + 20966));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C70C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C718;
    }
}

loc_8033C710:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C718:
{
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 20968));
}

loc_8033C724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C73C;
    }
}

loc_8033C728:
{
    r0 = MemoryInline::FlatRead16((r4 + 20970));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C73C;
    }
}

loc_8033C734:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C73C:
{
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 20972));
}

loc_8033C748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C760;
    }
}

loc_8033C74C:
{
    r0 = MemoryInline::FlatRead16((r4 + 20974));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C754:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C760;
    }
}

loc_8033C758:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C760:
{
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 20976));
}

loc_8033C76C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C784;
    }
}

loc_8033C770:
{
    r0 = MemoryInline::FlatRead16((r4 + 20978));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C778:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C784;
    }
}

loc_8033C77C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C784:
{
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 20980));
}

loc_8033C790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C7A8;
    }
}

loc_8033C794:
{
    r0 = MemoryInline::FlatRead16((r4 + 20982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C79C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C7A8;
    }
}

loc_8033C7A0:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C7A8:
{
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 20984));
}

loc_8033C7B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C7CC;
    }
}

loc_8033C7B8:
{
    r0 = MemoryInline::FlatRead16((r4 + 20986));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033C7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033C7CC;
    }
}

loc_8033C7C4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8033C7CC:
{
    r4 = (r4 + 24);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8033C6F8;
    }
}

loc_8033C7D8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033C5F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033C5F8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033C5F8 func_8033C5F8 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801476E8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801476E8u);
    goto loc_801476E8;

loc_801476E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r5 = 0x806A0000u;
    r31 = (r5 + 27152);
    r0 = (r4 & 255);
}

loc_80147710:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147744;
    }
}

loc_80147714:
{
    r3 = (r3 & 255);
    ctx->lr = 0x8014771Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80141538u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = (r3 & 255);
}

loc_80147724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_80147744;
    }
}

loc_80147728:
{
    r0 = (r0 * 24);
    r3 = (r31 + r0);
    r30 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80147738:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80147744;
    }
}

loc_8014773C:
{
    r3 = -1;
    goto loc_8014780C;
}

loc_80147744:
{
    r0 = (r30 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 3624), 0, 103u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 3624));
}

loc_80147750:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147768;
    }
}

loc_80147754:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 3626));
}

loc_8014775C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147768;
    }
}

loc_80147760:
{
    r3 = 0;
    goto loc_8014780C;
}

loc_80147768:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r31 + 3644));
}

loc_80147770:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147788;
    }
}

loc_80147774:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r31 + 3646));
}

loc_8014777C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147788;
    }
}

loc_80147780:
{
    r3 = 1;
    goto loc_8014780C;
}

loc_80147788:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r31 + 3664));
}

loc_80147790:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801477A8;
    }
}

loc_80147794:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r31 + 3666));
}

loc_8014779C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801477A8;
    }
}

loc_801477A0:
{
    r3 = 2;
    goto loc_8014780C;
}

loc_801477A8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 60u, (r31 + 3684));
}

loc_801477B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801477C8;
    }
}

loc_801477B4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 62u, (r31 + 3686));
}

loc_801477BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801477C8;
    }
}

loc_801477C0:
{
    r3 = 3;
    goto loc_8014780C;
}

loc_801477C8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 80u, (r31 + 3704));
}

loc_801477D0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801477E8;
    }
}

loc_801477D4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 82u, (r31 + 3706));
}

loc_801477DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801477E8;
    }
}

loc_801477E0:
{
    r3 = 4;
    goto loc_8014780C;
}

loc_801477E8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 100u, (r31 + 3724));
}

loc_801477F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80147808;
    }
}

loc_801477F4:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 102u, (r31 + 3726));
}

loc_801477FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80147808;
    }
}

loc_80147800:
{
    r3 = 5;
    goto loc_8014780C;
}

loc_80147808:
{
    r3 = -1;
}

loc_8014780C:
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

extern "C" void func_801476E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801476E8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801476E8 func_801476E8 preserves=true fpr_mask=0x00000000

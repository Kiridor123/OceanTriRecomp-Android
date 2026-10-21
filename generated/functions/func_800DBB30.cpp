#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800DBB30_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800DBB30u);
    goto loc_800DBB30;

loc_800DBB30:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17576));
}

loc_800DBB4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DBBC8;
    }
}

loc_800DBB50:
{
    r31 = (r3 + 196608);
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + -27108), 0, 76u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + -27108), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + -27106), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + -27105), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r31 + -27072), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + -27048), r3);
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r31 + -27034), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 75u, (r31 + -27033), static_cast<uint8_t>(r3));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + -27107), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + -27106), static_cast<uint8_t>(r0));
    r0 = 21;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r31 + -27068), r0);
    r0 = 16;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + -27064), r0);
    r0 = -1;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + -27060), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + -27056), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + -27052), r3);
    r3 = (r31 + -27104);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27104));
    MemoryInline::FlatWriteFloat32((r31 + -27092), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27100));
    MemoryInline::FlatWriteFloat32((r31 + -27088), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + -27096));
    MemoryInline::FlatWriteFloat32((r31 + -27084), f0.d);
}

loc_800DBBC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DBB30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DBB30_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DBB30 func_800DBB30 preserves=true fpr_mask=0x00000000

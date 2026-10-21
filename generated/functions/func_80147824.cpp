#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80147824(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80147824u);
    goto loc_80147824;

loc_80147824:
{
    r3 = 0x806A0000u;
    r3 = (r3 + 27152);
    r0 = MemoryInline::FlatRead8((r3 + 3504));
}

loc_80147834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014784C;
    }
}

loc_80147838:
{
    r0 = MemoryInline::FlatRead8((r3 + 3505));
}

loc_80147840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014784C;
    }
}

loc_80147844:
{
    r3 = MemoryInline::FlatRead32((r3 + 3508));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8014784C:
{
    r3 = (r3 + 3524);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 88u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_80147858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147870;
    }
}

loc_8014785C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
}

loc_80147864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147870;
    }
}

loc_80147868:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80147870:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
}

loc_80147878:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147890;
    }
}

loc_8014787C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
}

loc_80147884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80147890;
    }
}

loc_80147888:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r3 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80147890:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r3 + 40));
}

loc_80147898:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478B0;
    }
}

loc_8014789C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r3 + 41));
}

loc_801478A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478B0;
    }
}

loc_801478A8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_801478B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 60u, (r3 + 60));
}

loc_801478B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478D0;
    }
}

loc_801478BC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 61u, (r3 + 61));
}

loc_801478C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478D0;
    }
}

loc_801478C8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r3 + 64));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_801478D0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 80u, (r3 + 80));
}

loc_801478D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478F0;
    }
}

loc_801478DC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 81u, (r3 + 81));
}

loc_801478E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801478F0;
    }
}

loc_801478E8:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 84));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_801478F0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80147824_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x80147824u);
    goto loc_80147824;

loc_80147824:
{
    cached_r3 = 0x806A0000u;
    cached_r3 = (cached_r3 + 27152);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3504));
}

loc_80147834:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_8014784C;
    }
}

loc_80147838:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 3505));
}

loc_80147840:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_8014784C;
    }
}

loc_80147844:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r3 + 3508));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_8014784C:
{
    cached_r3 = (cached_r3 + 3524);
    guest_range_0 = MemoryInline::ResolveRangeHost(cached_r3, 0, 88u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, cached_r3);
}

loc_80147858:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80147870;
    }
}

loc_8014785C:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (cached_r3 + 1));
}

loc_80147864:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80147870;
    }
}

loc_80147868:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (cached_r3 + 4));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80147870:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (cached_r3 + 20));
}

loc_80147878:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80147890;
    }
}

loc_8014787C:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (cached_r3 + 21));
}

loc_80147884:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80147890;
    }
}

loc_80147888:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 24u, (cached_r3 + 24));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80147890:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 40u, (cached_r3 + 40));
}

loc_80147898:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478B0;
    }
}

loc_8014789C:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 41u, (cached_r3 + 41));
}

loc_801478A4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478B0;
    }
}

loc_801478A8:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 44u, (cached_r3 + 44));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_801478B0:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 60u, (cached_r3 + 60));
}

loc_801478B8:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478D0;
    }
}

loc_801478BC:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 61u, (cached_r3 + 61));
}

loc_801478C4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478D0;
    }
}

loc_801478C8:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 64u, (cached_r3 + 64));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_801478D0:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 80u, (cached_r3 + 80));
}

loc_801478D8:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478F0;
    }
}

loc_801478DC:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 81u, (cached_r3 + 81));
}

loc_801478E4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_801478F0;
    }
}

loc_801478E8:
{
    cached_r3 = MemoryInline::ReadResolved32(guest_range_0, 84u, (cached_r3 + 84));

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_801478F0:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80147824 symbol=func_80147824_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80147824 func_80147824 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80147824_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80147824(ctx);
    return ctx->gpr[3];
}

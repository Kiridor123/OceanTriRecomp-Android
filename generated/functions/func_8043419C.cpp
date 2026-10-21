#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043419C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8043419Cu);
    goto loc_8043419C;

loc_8043419C:
{
    r3 = 0x806D0000u;
    r3 = (r3 + 24520);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 368), 0, 2608u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_804341AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804341C4;
    }
}

loc_804341B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 371));
}

loc_804341B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_804341C4;
    }
}

loc_804341BC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804341C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 372u, (r3 + 740));
}

loc_804341CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804341E4;
    }
}

loc_804341D0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 375u, (r3 + 743));
}

loc_804341D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_804341E4;
    }
}

loc_804341DC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804341E4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 744u, (r3 + 1112));
}

loc_804341EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434204;
    }
}

loc_804341F0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 747u, (r3 + 1115));
}

loc_804341F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80434204;
    }
}

loc_804341FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80434204:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1116u, (r3 + 1484));
}

loc_8043420C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434224;
    }
}

loc_80434210:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1119u, (r3 + 1487));
}

loc_80434218:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80434224;
    }
}

loc_8043421C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80434224:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1488u, (r3 + 1856));
}

loc_8043422C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434244;
    }
}

loc_80434230:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1491u, (r3 + 1859));
}

loc_80434238:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80434244;
    }
}

loc_8043423C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80434244:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1860u, (r3 + 2228));
}

loc_8043424C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434264;
    }
}

loc_80434250:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1863u, (r3 + 2231));
}

loc_80434258:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80434264;
    }
}

loc_8043425C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80434264:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2232u, (r3 + 2600));
}

loc_8043426C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434284;
    }
}

loc_80434270:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2235u, (r3 + 2603));
}

loc_80434278:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80434284;
    }
}

loc_8043427C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80434284:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2604u, (r3 + 2972));
}

loc_8043428C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804342A4;
    }
}

loc_80434290:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2607u, (r3 + 2975));
}

loc_80434298:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_804342A4;
    }
}

loc_8043429C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_804342A4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8043419C_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    MKW_GUEST_ENTER(0x8043419Cu);
    goto loc_8043419C;

loc_8043419C:
{
    cached_r3 = 0x806D0000u;
    cached_r3 = (cached_r3 + 24520);
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 368), 0, 2608u, true, false);
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (cached_r3 + 368));
}

loc_804341AC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_804341C4;
    }
}

loc_804341B0:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (cached_r3 + 371));
}

loc_804341B8:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_804341C4;
    }
}

loc_804341BC:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804341C4:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 372u, (cached_r3 + 740));
}

loc_804341CC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_804341E4;
    }
}

loc_804341D0:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 375u, (cached_r3 + 743));
}

loc_804341D8:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_804341E4;
    }
}

loc_804341DC:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804341E4:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 744u, (cached_r3 + 1112));
}

loc_804341EC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80434204;
    }
}

loc_804341F0:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 747u, (cached_r3 + 1115));
}

loc_804341F8:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_80434204;
    }
}

loc_804341FC:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80434204:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1116u, (cached_r3 + 1484));
}

loc_8043420C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80434224;
    }
}

loc_80434210:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1119u, (cached_r3 + 1487));
}

loc_80434218:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_80434224;
    }
}

loc_8043421C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80434224:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1488u, (cached_r3 + 1856));
}

loc_8043422C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80434244;
    }
}

loc_80434230:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1491u, (cached_r3 + 1859));
}

loc_80434238:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_80434244;
    }
}

loc_8043423C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80434244:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1860u, (cached_r3 + 2228));
}

loc_8043424C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80434264;
    }
}

loc_80434250:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 1863u, (cached_r3 + 2231));
}

loc_80434258:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_80434264;
    }
}

loc_8043425C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80434264:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2232u, (cached_r3 + 2600));
}

loc_8043426C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_80434284;
    }
}

loc_80434270:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2235u, (cached_r3 + 2603));
}

loc_80434278:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_80434284;
    }
}

loc_8043427C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_80434284:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2604u, (cached_r3 + 2972));
}

loc_8043428C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_804342A4;
    }
}

loc_80434290:
{
    cached_r0 = MemoryInline::ReadResolved8(guest_range_0, 2607u, (cached_r3 + 2975));
}

loc_80434298:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(255))) {
        goto loc_804342A4;
    }
}

loc_8043429C:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_804342A4:
{
    cached_r3 = 1;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x8043419C symbol=func_8043419C_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8043419C func_8043419C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8043419C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8043419C(ctx);
    return ctx->gpr[3];
}

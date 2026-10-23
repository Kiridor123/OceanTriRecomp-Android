#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DF9AC_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    goto loc_800DF9AC;

loc_800DF9AC:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 60), 0, 2481u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 60), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 140), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 160u, (r3 + 220), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 240u, (r3 + 300), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 320u, (r3 + 380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 400u, (r3 + 460), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 480u, (r3 + 540), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 560u, (r3 + 620), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 640u, (r3 + 700), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 720u, (r3 + 780), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 800u, (r3 + 860), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 880u, (r3 + 940), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 960u, (r3 + 1020), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1040u, (r3 + 1100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1120u, (r3 + 1180), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1200u, (r3 + 1260), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1280u, (r3 + 1340), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1360u, (r3 + 1420), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1440u, (r3 + 1500), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1520u, (r3 + 1580), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1600u, (r3 + 1660), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1680u, (r3 + 1740), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1760u, (r3 + 1820), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1840u, (r3 + 1900), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1920u, (r3 + 1980), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2000u, (r3 + 2060), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2080u, (r3 + 2140), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2160u, (r3 + 2220), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2240u, (r3 + 2300), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2320u, (r3 + 2380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2400u, (r3 + 2460), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2480u, (r3 + 2540), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_800DF9AC(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800DF9AC_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DF9AC func_800DF9AC preserves=true fpr_mask=0x00000000

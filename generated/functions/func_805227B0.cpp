#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805227B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3_sthu_ea_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_805227B0;

loc_805227B0:
{
    r3 = 0x80790000u;
    r0 = 0;
    r3_sthu_ea_0 = (r3 + 6848);
    MemoryInline::FlatWriteRam16(r3_sthu_ea_0, static_cast<uint16_t>(r0));
    r3 = r3_sthu_ea_0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 16), 0, 541u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 34), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 36), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 54), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r3 + 70), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 56u, (r3 + 72), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r3 + 88), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 74u, (r3 + 90), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 90u, (r3 + 106), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 92u, (r3 + 108), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r3 + 124), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (r3 + 126), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 126u, (r3 + 142), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 128u, (r3 + 144), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 144u, (r3 + 160), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 146u, (r3 + 162), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 162u, (r3 + 178), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 164u, (r3 + 180), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 180u, (r3 + 196), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 182u, (r3 + 198), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 198u, (r3 + 214), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 200u, (r3 + 216), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 216u, (r3 + 232), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 218u, (r3 + 234), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (r3 + 250), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 236u, (r3 + 252), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 252u, (r3 + 268), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 254u, (r3 + 270), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 270u, (r3 + 286), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 272u, (r3 + 288), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 288u, (r3 + 304), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 290u, (r3 + 306), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 306u, (r3 + 322), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 308u, (r3 + 324), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 324u, (r3 + 340), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 326u, (r3 + 342), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 342u, (r3 + 358), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 344u, (r3 + 360), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 360u, (r3 + 376), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 362u, (r3 + 378), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 378u, (r3 + 394), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 380u, (r3 + 396), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 396u, (r3 + 412), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 398u, (r3 + 414), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 414u, (r3 + 430), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 416u, (r3 + 432), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 432u, (r3 + 448), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 434u, (r3 + 450), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 450u, (r3 + 466), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 452u, (r3 + 468), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 468u, (r3 + 484), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 470u, (r3 + 486), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 486u, (r3 + 502), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 488u, (r3 + 504), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 504u, (r3 + 520), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 506u, (r3 + 522), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 522u, (r3 + 538), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 524u, (r3 + 540), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 540u, (r3 + 556), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_805227B0_statefree()
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t r3_sthu_ea_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    goto loc_805227B0;

loc_805227B0:
{
    cached_r3 = 0x80790000u;
    cached_r0 = 0;
    r3_sthu_ea_0 = (cached_r3 + 6848);
    MemoryInline::FlatWriteRam16(r3_sthu_ea_0, static_cast<uint16_t>(cached_r0));
    cached_r3 = r3_sthu_ea_0;
    guest_range_0 = MemoryInline::ResolveRangeHost((cached_r3 + 16), 0, 541u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (cached_r3 + 16), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (cached_r3 + 18), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (cached_r3 + 34), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (cached_r3 + 36), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (cached_r3 + 52), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (cached_r3 + 54), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (cached_r3 + 70), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 56u, (cached_r3 + 72), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (cached_r3 + 88), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 74u, (cached_r3 + 90), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 90u, (cached_r3 + 106), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 92u, (cached_r3 + 108), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 108u, (cached_r3 + 124), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 110u, (cached_r3 + 126), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 126u, (cached_r3 + 142), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 128u, (cached_r3 + 144), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 144u, (cached_r3 + 160), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 146u, (cached_r3 + 162), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 162u, (cached_r3 + 178), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 164u, (cached_r3 + 180), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 180u, (cached_r3 + 196), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 182u, (cached_r3 + 198), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 198u, (cached_r3 + 214), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 200u, (cached_r3 + 216), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 216u, (cached_r3 + 232), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 218u, (cached_r3 + 234), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 234u, (cached_r3 + 250), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 236u, (cached_r3 + 252), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 252u, (cached_r3 + 268), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 254u, (cached_r3 + 270), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 270u, (cached_r3 + 286), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 272u, (cached_r3 + 288), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 288u, (cached_r3 + 304), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 290u, (cached_r3 + 306), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 306u, (cached_r3 + 322), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 308u, (cached_r3 + 324), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 324u, (cached_r3 + 340), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 326u, (cached_r3 + 342), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 342u, (cached_r3 + 358), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 344u, (cached_r3 + 360), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 360u, (cached_r3 + 376), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 362u, (cached_r3 + 378), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 378u, (cached_r3 + 394), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 380u, (cached_r3 + 396), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 396u, (cached_r3 + 412), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 398u, (cached_r3 + 414), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 414u, (cached_r3 + 430), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 416u, (cached_r3 + 432), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 432u, (cached_r3 + 448), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 434u, (cached_r3 + 450), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 450u, (cached_r3 + 466), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 452u, (cached_r3 + 468), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 468u, (cached_r3 + 484), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 470u, (cached_r3 + 486), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 486u, (cached_r3 + 502), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 488u, (cached_r3 + 504), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 504u, (cached_r3 + 520), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 506u, (cached_r3 + 522), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 522u, (cached_r3 + 538), static_cast<uint8_t>(cached_r0));
    MemoryInline::WriteResolved16(guest_range_0, 524u, (cached_r3 + 540), static_cast<uint16_t>(cached_r0));
    MemoryInline::WriteResolved8(guest_range_0, 540u, (cached_r3 + 556), static_cast<uint8_t>(cached_r0));

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x805227B0 symbol=func_805227B0_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805227B0 func_805227B0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_805227B0_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_805227B0(ctx);
    return ctx->gpr[3];
}

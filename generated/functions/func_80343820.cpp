#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80343820(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_80343820;

loc_80343820:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 5408);
    r0 = 0;
    r0 = (r0 * 60);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
}

loc_80343838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343844;
    }
}

loc_8034383C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343844:
{
    r0 = 1;
    r0 = (r0 * 60);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80343854:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343860;
    }
}

loc_80343858:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343860:
{
    r0 = 2;
    r0 = (r0 * 60);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_80343870:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8034387C;
    }
}

loc_80343874:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8034387C:
{
    r0 = 3;
    r0 = (r0 * 60);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_8034388C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343898;
    }
}

loc_80343890:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343898:
{
    r0 = 4;
    r0 = (r0 * 60);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_803438A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803438B4;
    }
}

loc_803438AC:
{
    r3 = 4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803438B4:
{
    r0 = 5;
    r0 = (r0 * 60);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_803438C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803438D0;
    }
}

loc_803438C8:
{
    r3 = 5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803438D0:
{
    r0 = 6;
    r0 = (r0 * 60);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_803438E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803438EC;
    }
}

loc_803438E4:
{
    r3 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_803438EC:
{
    r0 = 7;
    r0 = (r0 * 60);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_7);
}

loc_803438FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343908;
    }
}

loc_80343900:
{
    r3 = 7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343908:
{
    r0 = 8;
    r0 = (r0 * 60);
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_8);
}

loc_80343918:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343924;
    }
}

loc_8034391C:
{
    r3 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343924:
{
    r0 = 9;
    r0 = (r0 * 60);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_9);
}

loc_80343934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80343940;
    }
}

loc_80343938:
{
    r3 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80343940:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80343820_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    goto loc_80343820;

loc_80343820:
{
    cached_r3 = 0x806C0000u;
    cached_r3 = (cached_r3 + 5408);
    cached_r0 = 0;
    cached_r0 = (cached_r0 * 60);
    r3_addr_0 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_0);
}

loc_80343838:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343844;
    }
}

loc_8034383C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343844:
{
    cached_r0 = 1;
    cached_r0 = (cached_r0 * 60);
    r3_addr_1 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80343854:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343860;
    }
}

loc_80343858:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343860:
{
    cached_r0 = 2;
    cached_r0 = (cached_r0 * 60);
    r3_addr_2 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_80343870:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_8034387C;
    }
}

loc_80343874:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_8034387C:
{
    cached_r0 = 3;
    cached_r0 = (cached_r0 * 60);
    r3_addr_3 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_3);
}

loc_8034388C:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343898;
    }
}

loc_80343890:
{
    cached_r3 = 3;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343898:
{
    cached_r0 = 4;
    cached_r0 = (cached_r0 * 60);
    r3_addr_4 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_803438A8:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_803438B4;
    }
}

loc_803438AC:
{
    cached_r3 = 4;

    return static_cast<uint64_t>(cached_r3);
}

loc_803438B4:
{
    cached_r0 = 5;
    cached_r0 = (cached_r0 * 60);
    r3_addr_5 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_5);
}

loc_803438C4:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_803438D0;
    }
}

loc_803438C8:
{
    cached_r3 = 5;

    return static_cast<uint64_t>(cached_r3);
}

loc_803438D0:
{
    cached_r0 = 6;
    cached_r0 = (cached_r0 * 60);
    r3_addr_6 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_803438E0:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_803438EC;
    }
}

loc_803438E4:
{
    cached_r3 = 6;

    return static_cast<uint64_t>(cached_r3);
}

loc_803438EC:
{
    cached_r0 = 7;
    cached_r0 = (cached_r0 * 60);
    r3_addr_7 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_7);
}

loc_803438FC:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343908;
    }
}

loc_80343900:
{
    cached_r3 = 7;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343908:
{
    cached_r0 = 8;
    cached_r0 = (cached_r0 * 60);
    r3_addr_8 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_8);
}

loc_80343918:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343924;
    }
}

loc_8034391C:
{
    cached_r3 = 8;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343924:
{
    cached_r0 = 9;
    cached_r0 = (cached_r0 * 60);
    r3_addr_9 = (cached_r3 + cached_r0);
    cached_r0 = MemoryInline::FlatRead8(r3_addr_9);
}

loc_80343934:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(0))) {
        goto loc_80343940;
    }
}

loc_80343938:
{
    cached_r3 = 9;

    return static_cast<uint64_t>(cached_r3);
}

loc_80343940:
{
    cached_r3 = 255;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80343820 symbol=func_80343820_statefree gpr_in=0x00000000 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80343820 func_80343820 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80343820_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80343820(ctx);
    return ctx->gpr[3];
}

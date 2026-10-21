#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804688EC_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x804688ECu);
    goto loc_804688EC;

loc_804688EC:
{
    r5 = 0x80610000u;
    r6 = r3;
    r5 = (r5 + -2448);
    goto loc_80468930;
}

loc_804688FC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r4 = 1;
}

loc_80468908:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(255))) {
        goto loc_80468910;
    }
}

loc_8046890C:
{
    r4 = 0;
}

loc_80468910:
{
}

loc_80468914:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8046891C;
    }
}

loc_80468918:
{
    goto loc_80468928;
}

loc_8046891C:
{
    r4 = MemoryInline::FlatRead32((r5 + 56));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_2);
}

loc_80468928:
{
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
}

loc_80468930:
{
    r4 = MemoryInline::FlatRead8(r6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804688FC;
    }
}

loc_8046893C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return r4;
}

}

extern "C" void func_804688EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804688EC_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804688EC func_804688EC preserves=true fpr_mask=0x00000000

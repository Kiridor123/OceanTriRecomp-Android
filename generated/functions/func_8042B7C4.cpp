#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042B7C4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8042B7C4u);
    goto loc_8042B7C4;

loc_8042B7C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = MemoryInline::FlatRead32((r13 + -16440));
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    // inline leaf 0x803DA084 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16720));
    // end of inlined leaf 0x803DA084
    r4 = 0;
    // inline leaf 0x8041A358 (7 guest instruction(s))
}

loc_inl1_0x8041A358:
{
}

loc_inl1_0x8041A35C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8041A36C;
    }
}

loc_inl1_0x8041A360:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    goto loc_inl1_cont_8041A358;
}

loc_inl1_0x8041A36C:
{
    r3 = 0;
}

loc_inl1_cont_8041A358:
{
    // end of inlined leaf 0x8041A358
}

loc_8042B810:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8042B81C;
    }
}

loc_8042B814:
{
    r3 = 0;
    goto loc_8042B8F4;
}

loc_8042B81C:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
}

loc_8042B824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8042B830;
    }
}

loc_8042B828:
{
    r3 = 0;
    goto loc_8042B8F4;
}

loc_8042B830:
{
    r0 = MemoryInline::FlatRead32((r31 + 368));
}

loc_8042B838:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8042B844;
    }
}

loc_8042B83C:
{
    r3 = 0;
    goto loc_8042B8F4;
}

loc_8042B844:
{
    r3 = MemoryInline::FlatRead32((r31 + 360));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 60), 0, 281u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 60));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 64));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r4 = 0;
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r3 + 144));
}

loc_8042B874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B888;
    }
}

loc_8042B878:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 88u, (r3 + 148));
}

loc_8042B880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B888;
    }
}

loc_8042B884:
{
    r4 = 1;
}

loc_8042B888:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r3 + 208));
}

loc_8042B890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8A4;
    }
}

loc_8042B894:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 152u, (r3 + 212));
}

loc_8042B89C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8A4;
    }
}

loc_8042B8A0:
{
    r4 = (r4 + 1);
}

loc_8042B8A4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 212u, (r3 + 272));
}

loc_8042B8AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8C0;
    }
}

loc_8042B8B0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 216u, (r3 + 276));
}

loc_8042B8B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8C0;
    }
}

loc_8042B8BC:
{
    r4 = (r4 + 1);
}

loc_8042B8C0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 276u, (r3 + 336));
}

loc_8042B8C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8DC;
    }
}

loc_8042B8CC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 280u, (r3 + 340));
}

loc_8042B8D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8042B8DC;
    }
}

loc_8042B8D8:
{
    r4 = (r4 + 1);
}

loc_8042B8DC:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r0 = 1;
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_8042B8F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042B7C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042B7C4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042B7C4 func_8042B7C4 preserves=true fpr_mask=0x00000000

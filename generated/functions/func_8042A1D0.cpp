#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8042A1D0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8042A1D0u);
    goto loc_8042A1D0;

loc_8042A1D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16440));
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

loc_8042A1F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8042A2C0;
    }
}

loc_8042A1F8:
{
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 17), 0, 279u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 103u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 103u, (r31 + 120), r4);
        MemoryInline::WriteResolved32(guest_range_0, 107u, (r31 + 124), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 111u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 111u, (r31 + 128), r4);
        MemoryInline::WriteResolved32(guest_range_0, 115u, (r31 + 132), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 119u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 119u, (r31 + 136), r4);
        MemoryInline::WriteResolved32(guest_range_0, 123u, (r31 + 140), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 127u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 127u, (r31 + 144), r4);
        MemoryInline::WriteResolved32(guest_range_0, 131u, (r31 + 148), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 135u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 135u, (r31 + 152), r4);
        MemoryInline::WriteResolved32(guest_range_0, 139u, (r31 + 156), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 143u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 143u, (r31 + 160), r4);
        MemoryInline::WriteResolved32(guest_range_0, 147u, (r31 + 164), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 151u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 151u, (r31 + 168), r4);
        MemoryInline::WriteResolved32(guest_range_0, 155u, (r31 + 172), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 159u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 159u, (r31 + 176), r4);
        MemoryInline::WriteResolved32(guest_range_0, 163u, (r31 + 180), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 167u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 167u, (r31 + 184), r4);
        MemoryInline::WriteResolved32(guest_range_0, 171u, (r31 + 188), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 175u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 175u, (r31 + 192), r4);
        MemoryInline::WriteResolved32(guest_range_0, 179u, (r31 + 196), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 183u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 183u, (r31 + 200), r4);
        MemoryInline::WriteResolved32(guest_range_0, 187u, (r31 + 204), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 191u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 191u, (r31 + 208), r4);
        MemoryInline::WriteResolved32(guest_range_0, 195u, (r31 + 212), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 199u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 199u, (r31 + 216), r4);
        MemoryInline::WriteResolved32(guest_range_0, 203u, (r31 + 220), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 207u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 207u, (r31 + 224), r4);
        MemoryInline::WriteResolved32(guest_range_0, 211u, (r31 + 228), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 215u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 215u, (r31 + 232), r4);
        MemoryInline::WriteResolved32(guest_range_0, 219u, (r31 + 236), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 223u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 223u, (r31 + 240), r4);
        MemoryInline::WriteResolved32(guest_range_0, 227u, (r31 + 244), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 231u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 231u, (r31 + 248), r4);
        MemoryInline::WriteResolved32(guest_range_0, 235u, (r31 + 252), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 239u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 239u, (r31 + 256), r4);
        MemoryInline::WriteResolved32(guest_range_0, 243u, (r31 + 260), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 247u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 247u, (r31 + 264), r4);
        MemoryInline::WriteResolved32(guest_range_0, 251u, (r31 + 268), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 255u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 255u, (r31 + 272), r4);
        MemoryInline::WriteResolved32(guest_range_0, 259u, (r31 + 276), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 263u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 263u, (r31 + 280), r4);
        MemoryInline::WriteResolved32(guest_range_0, 267u, (r31 + 284), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 271u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 271u, (r31 + 288), r4);
        MemoryInline::WriteResolved32(guest_range_0, 275u, (r31 + 292), r4);
    }
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 63u, (r31 + 80), r4);
    r3 = (r31 + 65536);
    MemoryInline::FlatWrite8((r3 + -16047), static_cast<uint8_t>(r4));
}

loc_8042A2C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8042A1D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8042A1D0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8042A1D0 func_8042A1D0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BF87C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_802BF87C;

loc_802BF87C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r30 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -13460), 0, 40u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13460));
    r5 = 255;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r5));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -13456));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -13452));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    r0 = (r30 & 255);
}

loc_802BF8D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(20))) {
        goto loc_802BFA0C;
    }
}

loc_802BF8D4:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 16736);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802BFA0Cu:
        goto loc_802BFA0C;
        break;
    case 0x802BF8ECu:
        goto loc_802BF8EC;
        break;
    case 0x802BF928u:
        goto loc_802BF928;
        break;
    case 0x802BF954u:
        goto loc_802BF954;
        break;
    case 0x802BF968u:
        goto loc_802BF968;
        break;
    case 0x802BF9C8u:
        goto loc_802BF9C8;
        break;
    case 0x802BF9DCu:
        goto loc_802BF9DC;
        break;
    case 0x802BF9F4u:
        goto loc_802BF9F4;
        break;
    case 0x802BFA08u:
        goto loc_802BFA08;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_802BF8EC:
{
    r3 = (r3 & 255);
}

loc_802BF8F4:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1))) {
        goto loc_802BF918;
    }
}

loc_802BF8F8:
{
    r0 = (r3 + -5);
}

loc_802BF900:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802BF918;
    }
}

loc_802BF904:
{
}

loc_802BF908:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_802BF918;
    }
}

loc_802BF90C:
{
}

loc_802BF910:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802BF920;
    }
}

loc_802BF914:
{
    goto loc_802BFA0C;
}

loc_802BF918:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BF920:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -13444));
    goto loc_802BFA0C;
}

loc_802BF928:
{
    r0 = (r3 & 255);
}

loc_802BF930:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_802BF940;
    }
}

loc_802BF934:
{
}

loc_802BF938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_802BFA0C;
    }
}

loc_802BF93C:
{
    goto loc_802BF94C;
}

loc_802BF940:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -13444));
    goto loc_802BFA0C;
}

loc_802BF94C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BF954:
{
    r0 = (r3 & 255);
}

loc_802BF95C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BFA0C;
    }
}

loc_802BF960:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -13444));
    goto loc_802BFA0C;
}

loc_802BF968:
{
    r0 = (r3 & 255);
}

loc_802BF970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802BF980;
    }
}

loc_802BF974:
{
}

loc_802BF978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802BF9A0;
    }
}

loc_802BF97C:
{
    goto loc_802BF9C0;
}

loc_802BF980:
{
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r5));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -13440));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -13436));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_802BFA4C;
}

loc_802BF9A0:
{
    r0 = (r29 & 255);
}

loc_802BF9A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BFA0C;
    }
}

loc_802BF9AC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -13432));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -13436));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_802BFA0C;
}

loc_802BF9C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BF9C8:
{
    r0 = (r3 & 255);
}

loc_802BF9D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_802BFA0C;
    }
}

loc_802BF9D4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BF9DC:
{
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_802BF9E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802BFA0C;
    }
}

loc_802BF9EC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BF9F4:
{
    r0 = (r3 & 255);
}

loc_802BF9FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802BFA0C;
    }
}

loc_802BFA00:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
    goto loc_802BFA0C;
}

loc_802BFA08:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13448));
}

loc_802BFA0C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -13428));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -13424));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
}

loc_802BFA4C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BF87C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BF87C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BF87C func_802BF87C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8019D91C_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8019D91C;

loc_8019D91C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_8019D930:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_8019DA0C;
    }
}

loc_8019D934:
{
    r4 = 0x805B0000u;
    r4 = (r4 + -4420);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8019D94Cu:
        goto loc_8019D94C;
        break;
    case 0x8019D960u:
        goto loc_8019D960;
        break;
    case 0x8019D978u:
        goto loc_8019D978;
        break;
    case 0x8019D990u:
        goto loc_8019D990;
        break;
    case 0x8019D9A8u:
        goto loc_8019D9A8;
        break;
    case 0x8019D9CCu:
        goto loc_8019D9CC;
        break;
    case 0x8019D9E4u:
        goto loc_8019D9E4;
        break;
    case 0x8019D9F8u:
        goto loc_8019D9F8;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8019D94C:
{
    // inline leaf 0x80130168 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80130168
}

loc_8019D954:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019DA0C;
    }
}

loc_8019D958:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D960:
{
    r0 = MemoryInline::FlatRead8((r3 + 860));
    r0 = (r0 & 1);
}

loc_8019D96C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019D970:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D978:
{
    r0 = MemoryInline::FlatRead8((r3 + 860));
    r0 = (r0 & 2);
}

loc_8019D984:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019D988:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D990:
{
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r0 = (r0 & 3);
}

loc_8019D99C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019D9A0:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D9A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 880));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D9BC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019DA0C;
    }
}

loc_8019D9C4:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D9CC:
{
    r4 = 16;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019D9D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019D9DC:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D9E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 864));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8019D9EC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019D9F0:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019D9F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 866));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8019DA00:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8019DA0C;
    }
}

loc_8019DA04:
{
    r3 = 1;
    goto loc_8019DA10;
}

loc_8019DA0C:
{
    r3 = 0;
}

loc_8019DA10:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019D91C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019D91C_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019D91C func_8019D91C preserves=true fpr_mask=0x00000000

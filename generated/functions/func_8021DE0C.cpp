#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8021DE0C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8021DE0Cu);
    goto loc_8021DE0C;

loc_8021DE0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r31 = r3;
    r27 = r4;
    r0 = MemoryInline::FlatRead32(r4);
}

loc_8021DE30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DE48;
    }
}

loc_8021DE34:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_8021DE3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DE48;
    }
}

loc_8021DE40:
{
    r28 = 0;
    goto loc_8021DEF8;
}

loc_8021DE48:
{
    r28 = 0;
    r5 = r27;
    goto loc_8021DEA8;
}

loc_8021DE54:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r6 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8021DE60:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r6))) {
        goto loc_8021DEC0;
    }
}

loc_8021DE64:
{
}

loc_8021DE68:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_8021DE98;
    }
}

loc_8021DE6C:
{
}

loc_8021DE70:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(3))) {
        goto loc_8021DE88;
    }
}

loc_8021DE74:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021DE80:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8021DEC0;
    }
}

loc_8021DE84:
{
    goto loc_8021DE98;
}

loc_8021DE88:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8021DE94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8021DEC0;
    }
}

loc_8021DE98:
{
    r5 = (r5 + 16);
    r28 = (r28 + 1);
}

loc_8021DEA4:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(19))) {
        goto loc_8021DEC0;
    }
}

loc_8021DEA8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_8021DEB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DE54;
    }
}

loc_8021DEB4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8021DEBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8021DE54;
    }
}

loc_8021DEC0:
{
    r29 = 19;
    r30 = (r4 + 304);
    goto loc_8021DEF0;
}

loc_8021DECC:
{
}

loc_8021DED0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8021DEE8;
    }
}

loc_8021DED4:
{
    r3 = r30;
    r0 = (r29 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r4 = (r27 + r0);
    // inline leaf 0x8021DF3C (9 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x8021DF3C
}

loc_8021DEE8:
{
    r30 = (r30 + -16);
    r29 = (r29 + -1);
}

loc_8021DEF0:
{
}

loc_8021DEF4:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(r28))) {
        goto loc_8021DECC;
    }
}

loc_8021DEF8:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r3 = (r3_rot_0 & -16);
    r0 = MemoryInline::FlatRead32(r31);
    r27_addr_0 = (r27 + r3);
    MemoryInline::FlatWrite32(r27_addr_0, r0);
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r3 = (r27 + r3);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWrite32((r3 + 12), r0);
    r3 = r28;
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021DE0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021DE0C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8021DE0C func_8021DE0C preserves=true fpr_mask=0x00000000

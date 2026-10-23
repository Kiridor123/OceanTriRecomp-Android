#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027A0F0_ra18_2_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8027A0F0;

loc_8027A0F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = MemoryInline::FlatRead8((r3 + 1411));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 1411), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027A10C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_8027A118;
    }
}

loc_8027A110:
{
    r0 = 100;
    MemoryInline::FlatWrite8((r3 + 1411), static_cast<uint8_t>(r0));
}

loc_8027A118:
{
    r0 = MemoryInline::FlatRead8((r3 + 1411));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027A124:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-100))) {
        goto loc_8027A130;
    }
}

loc_8027A128:
{
    r0 = -100;
    MemoryInline::FlatWrite8((r3 + 1411), static_cast<uint8_t>(r0));
}

loc_8027A130:
{
    r0 = MemoryInline::FlatRead8((r3 + 1411));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -14872), 0, 100u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -14848));
    r0 = (r4 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r2 + -14800));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_8027A160:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_8027A1A0;
    }
}

loc_8027A164:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -14784));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -14788));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -14780));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14872));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
    goto loc_8027A1D8;
}

loc_8027A1A0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r2 + -14776));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -14788));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -14780));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -14872));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 1512), static_cast<uint16_t>(r0));
}

loc_8027A1D8:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return r4;
}

}

extern "C" void func_8027A0F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027A0F0_ra18_2_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027A0F0 func_8027A0F0 preserves=true fpr_mask=0x00000000

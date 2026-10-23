#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80419DB8_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    goto loc_80419DB8;

loc_80419DB8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r31 = r5;
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4648));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80419DE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80419DFC;
    }
}

loc_80419DE4:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80419DEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80419DFC;
    }
}

loc_80419DF0:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    MemoryInline::FlatWrite32(r31, r3);
    goto loc_80419E64;
}

loc_80419DFC:
{
    // inline leaf 0x804D53F0 (2 guest instruction(s))
    r3 = PPC_Mftb();
    // end of inlined leaf 0x804D53F0
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r3 - r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r4 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 248));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r4 = 1125908480;
    r4 = (r4 + -8573);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r0)) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r0 = (r0_rot_2 & 131071);
    r0 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_80419E30:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1000))) {
        goto loc_80419E64;
    }
}

loc_80419E34:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -4640));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -4644));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWrite32(r31, r3);
}

loc_80419E64:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80419DB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80419DB8_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80419DB8 func_80419DB8 preserves=true fpr_mask=0x00000000

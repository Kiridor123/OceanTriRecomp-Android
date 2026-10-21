#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80111E60_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[3].d = arg_f3;

    MKW_GUEST_ENTER(0x80111E60u);
    goto loc_80111E60;

loc_80111E60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_80111E80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(340))) {
        goto loc_80111EA0;
    }
}

loc_80111E84:
{
}

loc_80111E88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(341))) {
        goto loc_80111EF0;
    }
}

loc_80111E8C:
{
}

loc_80111E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(342))) {
        goto loc_80111F64;
    }
}

loc_80111E94:
{
}

loc_80111E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(343))) {
        goto loc_80111FD8;
    }
}

loc_80111E9C:
{
    goto loc_8011204C;
}

loc_80111EA0:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29072));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111EB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111EB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111EC4;
    }
}

loc_80111EBC:
{
    r3 = 7;
    goto loc_80112050;
}

loc_80111EC4:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29204));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111ED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111EDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111EE8;
    }
}

loc_80111EE0:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111EE8:
{
    r3 = 9;
    goto loc_80112050;
}

loc_80111EF0:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29072));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111F04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111F08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111F14;
    }
}

loc_80111F0C:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111F14:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29168));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111F28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111F2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111F38;
    }
}

loc_80111F30:
{
    r3 = 9;
    goto loc_80112050;
}

loc_80111F38:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29076));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111F50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111F5C;
    }
}

loc_80111F54:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111F5C:
{
    r3 = 7;
    goto loc_80112050;
}

loc_80111F64:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28880));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111F7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111F88;
    }
}

loc_80111F80:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111F88:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29036));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111F9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111FA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111FAC;
    }
}

loc_80111FA4:
{
    r3 = 9;
    goto loc_80112050;
}

loc_80111FAC:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29044));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111FC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111FD0;
    }
}

loc_80111FC8:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111FD0:
{
    r3 = 7;
    goto loc_80112050;
}

loc_80111FD8:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29072));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80111FECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80111FF0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80111FFC;
    }
}

loc_80111FF4:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80111FFC:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29188));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80112010u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80112014:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80112020;
    }
}

loc_80112018:
{
    r3 = 9;
    goto loc_80112050;
}

loc_80112020:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28876));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29212));
    ctx->lr = 0x80112034u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_80112038:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80112044;
    }
}

loc_8011203C:
{
    r3 = 8;
    goto loc_80112050;
}

loc_80112044:
{
    r3 = 7;
    goto loc_80112050;
}

loc_8011204C:
{
    r3 = 7;
}

loc_80112050:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80111E60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80111E60_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80111E60 func_80111E60 preserves=true fpr_mask=0x00000000

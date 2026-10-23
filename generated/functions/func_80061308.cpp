#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80061308_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lfsx_8006146C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80061308;

loc_80061308:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80061348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80061360;
    }
}

loc_8006134C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80061358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80061360;
    }
}

loc_8006135C:
{
    r10 = 0;
}

loc_80061360:
{
}

loc_80061364:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006137C;
    }
}

loc_80061368:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80061374:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006137C;
    }
}

loc_80061378:
{
    r9 = 0;
}

loc_8006137C:
{
}

loc_80061380:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80061394;
    }
}

loc_80061384:
{
    r0 = (r11 + 1073741824);
}

loc_8006138C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80061394;
    }
}

loc_80061390:
{
    r8 = 0;
}

loc_80061394:
{
}

loc_80061398:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800613B0;
    }
}

loc_8006139C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800613A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800613B0;
    }
}

loc_800613AC:
{
    r7 = 0;
}

loc_800613B0:
{
}

loc_800613B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800613CC;
    }
}

loc_800613B8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800613C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800613CC;
    }
}

loc_800613C8:
{
    r6 = 0;
}

loc_800613CC:
{
}

loc_800613D0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800613E8;
    }
}

loc_800613D4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800613E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800613E8;
    }
}

loc_800613E4:
{
    r5 = 0;
}

loc_800613E8:
{
}

loc_800613EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80061410;
    }
}

loc_800613F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 951;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80061410u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80061410:
{
    r4 = 0;
}

loc_80061418:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(0))) {
        goto loc_80061430;
    }
}

loc_8006141C:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r3 + -1);
}

loc_80061428:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_80061430;
    }
}

loc_8006142C:
{
    r4 = 1;
}

loc_80061430:
{
}

loc_80061434:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80061464;
    }
}

loc_80061438:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 952;
    r5 = 0x80590000u;
    r5 = (r5 + -16680);
    r6 = r31;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r30 + 24));
    r8 = (r8 + -1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80061464u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80061464:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_8006146C_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8006146C_loc_0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80061308(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80061308_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80061308 func_80061308 preserves=true fpr_mask=0x00000000

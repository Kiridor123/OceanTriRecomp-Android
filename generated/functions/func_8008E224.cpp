#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008E224(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8008E224u);
    goto loc_8008E224;

loc_8008E224:
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

loc_8008E264:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E27C;
    }
}

loc_8008E268:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008E274:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E27C;
    }
}

loc_8008E278:
{
    r10 = 0;
}

loc_8008E27C:
{
}

loc_8008E280:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008E298;
    }
}

loc_8008E284:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008E290:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E298;
    }
}

loc_8008E294:
{
    r9 = 0;
}

loc_8008E298:
{
}

loc_8008E29C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E2B0;
    }
}

loc_8008E2A0:
{
    r0 = (r11 + 1073741824);
}

loc_8008E2A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E2B0;
    }
}

loc_8008E2AC:
{
    r8 = 0;
}

loc_8008E2B0:
{
}

loc_8008E2B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E2CC;
    }
}

loc_8008E2B8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008E2C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E2CC;
    }
}

loc_8008E2C8:
{
    r7 = 0;
}

loc_8008E2CC:
{
}

loc_8008E2D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E2E8;
    }
}

loc_8008E2D4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008E2E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E2E8;
    }
}

loc_8008E2E4:
{
    r6 = 0;
}

loc_8008E2E8:
{
}

loc_8008E2EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E304;
    }
}

loc_8008E2F0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E2FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E304;
    }
}

loc_8008E300:
{
    r5 = 0;
}

loc_8008E304:
{
}

loc_8008E308:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E32C;
    }
}

loc_8008E30C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1293;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E32Cu;
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

loc_8008E32C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8008E350:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E368;
    }
}

loc_8008E354:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008E360:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E368;
    }
}

loc_8008E364:
{
    r9 = 0;
}

loc_8008E368:
{
}

loc_8008E36C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E384;
    }
}

loc_8008E370:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008E37C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E384;
    }
}

loc_8008E380:
{
    r8 = 0;
}

loc_8008E384:
{
}

loc_8008E388:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E39C;
    }
}

loc_8008E38C:
{
    r0 = (r10 + 1073741824);
}

loc_8008E394:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E39C;
    }
}

loc_8008E398:
{
    r7 = 0;
}

loc_8008E39C:
{
}

loc_8008E3A0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E3B8;
    }
}

loc_8008E3A4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008E3B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E3B8;
    }
}

loc_8008E3B4:
{
    r6 = 0;
}

loc_8008E3B8:
{
}

loc_8008E3BC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E3D4;
    }
}

loc_8008E3C0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008E3CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E3D4;
    }
}

loc_8008E3D0:
{
    r5 = 0;
}

loc_8008E3D4:
{
}

loc_8008E3D8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E3F0;
    }
}

loc_8008E3DC:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E3E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E3F0;
    }
}

loc_8008E3EC:
{
    r4 = 0;
}

loc_8008E3F0:
{
}

loc_8008E3F4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008E418;
    }
}

loc_8008E3F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1294;
    r5 = 0x80590000u;
    r5 = (r5 + 2832);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E418u;
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

loc_8008E418:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 64);
}

loc_8008E424:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008E43C;
    }
}

loc_8008E428:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_8008E454;
}

loc_8008E43C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 40));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 72));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
}

loc_8008E454:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E224 func_8008E224 preserves=true fpr_mask=0x00000000

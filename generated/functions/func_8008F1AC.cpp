#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008F1AC(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8008F1ACu);
    goto loc_8008F1AC;

loc_8008F1AC:
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

loc_8008F1EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F204;
    }
}

loc_8008F1F0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008F1FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F204;
    }
}

loc_8008F200:
{
    r10 = 0;
}

loc_8008F204:
{
}

loc_8008F208:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008F220;
    }
}

loc_8008F20C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008F218:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F220;
    }
}

loc_8008F21C:
{
    r9 = 0;
}

loc_8008F220:
{
}

loc_8008F224:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008F238;
    }
}

loc_8008F228:
{
    r0 = (r11 + 1073741824);
}

loc_8008F230:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F238;
    }
}

loc_8008F234:
{
    r8 = 0;
}

loc_8008F238:
{
}

loc_8008F23C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008F254;
    }
}

loc_8008F240:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008F24C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F254;
    }
}

loc_8008F250:
{
    r7 = 0;
}

loc_8008F254:
{
}

loc_8008F258:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008F270;
    }
}

loc_8008F25C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008F268:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F270;
    }
}

loc_8008F26C:
{
    r6 = 0;
}

loc_8008F270:
{
}

loc_8008F274:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008F28C;
    }
}

loc_8008F278:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008F284:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F28C;
    }
}

loc_8008F288:
{
    r5 = 0;
}

loc_8008F28C:
{
}

loc_8008F290:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008F2B4;
    }
}

loc_8008F294:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1543;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008F2B4u;
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

loc_8008F2B4:
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

loc_8008F2D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F2F0;
    }
}

loc_8008F2DC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008F2E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F2F0;
    }
}

loc_8008F2EC:
{
    r9 = 0;
}

loc_8008F2F0:
{
}

loc_8008F2F4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008F30C;
    }
}

loc_8008F2F8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008F304:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F30C;
    }
}

loc_8008F308:
{
    r8 = 0;
}

loc_8008F30C:
{
}

loc_8008F310:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008F324;
    }
}

loc_8008F314:
{
    r0 = (r10 + 1073741824);
}

loc_8008F31C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F324;
    }
}

loc_8008F320:
{
    r7 = 0;
}

loc_8008F324:
{
}

loc_8008F328:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008F340;
    }
}

loc_8008F32C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008F338:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F340;
    }
}

loc_8008F33C:
{
    r6 = 0;
}

loc_8008F340:
{
}

loc_8008F344:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008F35C;
    }
}

loc_8008F348:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008F354:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F35C;
    }
}

loc_8008F358:
{
    r5 = 0;
}

loc_8008F35C:
{
}

loc_8008F360:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008F378;
    }
}

loc_8008F364:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008F370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F378;
    }
}

loc_8008F374:
{
    r4 = 0;
}

loc_8008F378:
{
}

loc_8008F37C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008F3A0;
    }
}

loc_8008F380:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1544;
    r5 = 0x80590000u;
    r5 = (r5 + 2832);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008F3A0u;
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

loc_8008F3A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F3AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F400;
    }
}

loc_8008F3B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F3B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F400;
    }
}

loc_8008F3BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F3C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F400;
    }
}

loc_8008F3C8:
{
    r4 = 64;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 32);
}

loc_8008F3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008F3F0;
    }
}

loc_8008F3DC:
{
    r4 = (r4 | 4);
    r0 = (r3 & 8);
}

loc_8008F3E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008F3F0;
    }
}

loc_8008F3EC:
{
    r4 = (r4 | 2);
}

loc_8008F3F0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8008F410;
}

loc_8008F400:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = -71;
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8008F410:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
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
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008F1AC func_8008F1AC preserves=true fpr_mask=0x00000000

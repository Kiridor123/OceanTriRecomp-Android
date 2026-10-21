#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800AB0BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800AB0BCu);
    goto loc_800AB0BC;

loc_800AB0BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r0 = 0;
}

loc_800AB0F0:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_800AB0F8;
    }
}

loc_800AB0F4:
{
    r0 = 1;
}

loc_800AB0F8:
{
}

loc_800AB0FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AB11C;
    }
}

loc_800AB100:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14000);
    r4 = 329;
    r5 = 0x80590000u;
    r5 = (r5 + 13952);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AB11Cu;
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

loc_800AB11C:
{
    r0 = 0;
}

loc_800AB124:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(1))) {
        goto loc_800AB12C;
    }
}

loc_800AB128:
{
    r0 = 1;
}

loc_800AB12C:
{
}

loc_800AB130:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AB150;
    }
}

loc_800AB134:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13940);
    r4 = 330;
    r5 = 0x80590000u;
    r5 = (r5 + 13892);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AB150u;
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

loc_800AB150:
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

loc_800AB174:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB18C;
    }
}

loc_800AB178:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AB184:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB18C;
    }
}

loc_800AB188:
{
    r9 = 0;
}

loc_800AB18C:
{
}

loc_800AB190:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AB1A8;
    }
}

loc_800AB194:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AB1A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB1A8;
    }
}

loc_800AB1A4:
{
    r8 = 0;
}

loc_800AB1A8:
{
}

loc_800AB1AC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AB1C0;
    }
}

loc_800AB1B0:
{
    r0 = (r10 + 1073741824);
}

loc_800AB1B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB1C0;
    }
}

loc_800AB1BC:
{
    r7 = 0;
}

loc_800AB1C0:
{
}

loc_800AB1C4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AB1DC;
    }
}

loc_800AB1C8:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AB1D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB1DC;
    }
}

loc_800AB1D8:
{
    r6 = 0;
}

loc_800AB1DC:
{
}

loc_800AB1E0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AB1F8;
    }
}

loc_800AB1E4:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AB1F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB1F8;
    }
}

loc_800AB1F4:
{
    r5 = 0;
}

loc_800AB1F8:
{
}

loc_800AB1FC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AB214;
    }
}

loc_800AB200:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AB20C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AB214;
    }
}

loc_800AB210:
{
    r4 = 0;
}

loc_800AB214:
{
}

loc_800AB218:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AB23C;
    }
}

loc_800AB21C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13880);
    r4 = 331;
    r5 = 0x80590000u;
    r5 = (r5 + 13828);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AB23Cu;
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

loc_800AB23C:
{
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r0 = (r28 + r0);
    r3 = (r0 + r3);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 33));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 34));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AB0BC func_800AB0BC preserves=true fpr_mask=0x00000000

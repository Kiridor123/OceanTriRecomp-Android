#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803BEE68(CpuContext* ctx);
extern "C" uint32_t func_803BEE68_ra0_0_8_0(CpuContext*);

extern "C" void func_80102660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80102660u);
    goto loc_80102660;

loc_80102660:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r28 = r4;
    r30 = r5;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r29 + 56));
    MemoryInline::FlatWrite8((r31 + 84), static_cast<uint8_t>(r28));
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_801026A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_801026B0;
    }
}

loc_801026A8:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
}

loc_801026B0:
{
    r0 = MemoryInline::FlatRead8((r31 + 84));
}

loc_801026B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801026D8;
    }
}

loc_801026BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_801026C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801026D0;
    }
}

loc_801026C8:
{
}

loc_801026CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801026D8;
    }
}

loc_801026D0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
}

loc_801026D8:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_801026E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80102700;
    }
}

loc_801026E4:
{
}

loc_801026E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80102718;
    }
}

loc_801026EC:
{
}

loc_801026F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8010274C;
    }
}

loc_801026F4:
{
}

loc_801026F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80102774;
    }
}

loc_801026FC:
{
    goto loc_80102790;
}

loc_80102700:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
}

loc_80102718:
{
    r3 = (r13 + -30352);
    r4 = MemoryInline::FlatRead32((r29 + 12));
    ctx->lr = 0x80102724u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_80102738:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(52))) {
        goto loc_80102790;
    }
}

loc_8010273C:
{
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    goto loc_80102790;
}

loc_8010274C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 84));
}

loc_8010275C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80102790;
    }
}

loc_80102760:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    r0 = 7;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    goto loc_80102790;
}

loc_80102774:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
}

loc_80102784:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80102790;
    }
}

loc_80102788:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
}

loc_80102790:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
}

loc_80102798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_801027AC;
    }
}

loc_8010279C:
{
    r0 = MemoryInline::FlatRead8((r31 + 71));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r0));
}

loc_801027AC:
{
    ctx->lr = 0x801027B0u;
    if constexpr (KnownRegArgsCpuCall<0x803BEE68u>(&func_803BEE68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BEE68_156E = func_803BEE68_ra0_0_8_0(ctx);
        r3 = regargs_result_803BEE68_156E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEE68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_801027B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801027CC;
    }
}

loc_801027BC:
{
    r0 = MemoryInline::FlatRead8((r31 + 71));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 71), static_cast<uint8_t>(r0));
}

loc_801027CC:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r3 = (r3 + 4);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r4 = 0;
    r5 = 3;
    r6 = (r31 + 68);
    ctx->lr = 0x801027F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r4 = 0;
    ctx->lr = 0x801027FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = r29;
    r4 = (r31 + 64);
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80102814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80102660 func_80102660 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C745C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800C745Cu);
    goto loc_800C745C;

loc_800C745C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r29 = r4;
    r25 = r5;
    r26 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C74A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C74BC;
    }
}

loc_800C74A8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C74B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C74BC;
    }
}

loc_800C74B8:
{
    r10 = 0;
}

loc_800C74BC:
{
}

loc_800C74C0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C74D8;
    }
}

loc_800C74C4:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C74D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C74D8;
    }
}

loc_800C74D4:
{
    r9 = 0;
}

loc_800C74D8:
{
}

loc_800C74DC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C74F0;
    }
}

loc_800C74E0:
{
    r0 = (r11 + 1073741824);
}

loc_800C74E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C74F0;
    }
}

loc_800C74EC:
{
    r8 = 0;
}

loc_800C74F0:
{
}

loc_800C74F4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C750C;
    }
}

loc_800C74F8:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C7504:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C750C;
    }
}

loc_800C7508:
{
    r7 = 0;
}

loc_800C750C:
{
}

loc_800C7510:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C7528;
    }
}

loc_800C7514:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C7520:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7528;
    }
}

loc_800C7524:
{
    r6 = 0;
}

loc_800C7528:
{
}

loc_800C752C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C7544;
    }
}

loc_800C7530:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C753C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7544;
    }
}

loc_800C7540:
{
    r5 = 0;
}

loc_800C7544:
{
}

loc_800C7548:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C756C;
    }
}

loc_800C754C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20496);
    r4 = 610;
    r5 = 0x80590000u;
    r5 = (r5 + 20564);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C756Cu;
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

loc_800C756C:
{
    r27 = 0;
    r0 = MemoryInline::FlatRead8((r24 + 184));
}

loc_800C7578:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7590;
    }
}

loc_800C757C:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    r6 = (r24 + 192);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AB0BCu>(ctx);
}

loc_800C7590:
{
    r0 = MemoryInline::FlatRead8((r24 + 185));
}

loc_800C7598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C75B0;
    }
}

loc_800C759C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    r6 = (r24 + 196);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AB0BCu>(ctx);
}

loc_800C75B0:
{
    r0 = MemoryInline::FlatRead8((r24 + 186));
}

loc_800C75B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C75D0;
    }
}

loc_800C75BC:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    r6 = (r24 + 200);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AB0BCu>(ctx);
}

loc_800C75D0:
{
    r0 = MemoryInline::FlatRead8((r24 + 187));
}

loc_800C75D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C75F0;
    }
}

loc_800C75DC:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    r6 = (r24 + 204);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AB0BCu>(ctx);
}

loc_800C75F0:
{
    r28 = 255;
    r0 = MemoryInline::FlatRead8((r24 + 188));
}

loc_800C75FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7624;
    }
}

loc_800C7600:
{
    r0 = MemoryInline::FlatRead8((r24 + 189));
}

loc_800C7608:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7624;
    }
}

loc_800C760C:
{
    r0 = MemoryInline::FlatRead8((r24 + 190));
}

loc_800C7614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C7624;
    }
}

loc_800C7618:
{
    r0 = MemoryInline::FlatRead8((r24 + 191));
}

loc_800C7620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C763C;
    }
}

loc_800C7624:
{
    r0 = MemoryInline::FlatRead8((r25 + 113));
}

loc_800C762C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C763C;
    }
}

loc_800C7630:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800AB460u>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
}

loc_800C763C:
{
    r0 = MemoryInline::FlatRead8((r24 + 188));
}

loc_800C7644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7680;
    }
}

loc_800C7648:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r24 + 195), static_cast<uint8_t>(r3));
    r4 = (r28 & 255);
}

loc_800C7664:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800C7680;
    }
}

loc_800C7668:
{
    r0 = (r3 & 255);
    r3 = (r0 * r4);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r24 + 195), static_cast<uint8_t>(r0));
}

loc_800C7680:
{
    r0 = MemoryInline::FlatRead8((r24 + 189));
}

loc_800C7688:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C76C4;
    }
}

loc_800C768C:
{
    r3 = r29;
    r4 = 0;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r24 + 199), static_cast<uint8_t>(r3));
    r4 = (r28 & 255);
}

loc_800C76A8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800C76C4;
    }
}

loc_800C76AC:
{
    r0 = (r3 & 255);
    r3 = (r0 * r4);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r24 + 199), static_cast<uint8_t>(r0));
}

loc_800C76C4:
{
    r0 = MemoryInline::FlatRead8((r24 + 190));
}

loc_800C76CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7708;
    }
}

loc_800C76D0:
{
    r3 = r29;
    r4 = 1;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r24 + 203), static_cast<uint8_t>(r3));
    r4 = (r28 & 255);
}

loc_800C76EC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800C7708;
    }
}

loc_800C76F0:
{
    r0 = (r3 & 255);
    r3 = (r0 * r4);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r24 + 203), static_cast<uint8_t>(r0));
}

loc_800C7708:
{
    r0 = MemoryInline::FlatRead8((r24 + 191));
}

loc_800C7710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C774C;
    }
}

loc_800C7714:
{
    r3 = r29;
    r4 = 1;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800AB284u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r24 + 207), static_cast<uint8_t>(r3));
    r4 = (r28 & 255);
}

loc_800C7730:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_800C774C;
    }
}

loc_800C7734:
{
    r0 = (r3 & 255);
    r3 = (r0 * r4);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r24 + 207), static_cast<uint8_t>(r0));
}

loc_800C774C:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_800C7758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C77E0;
    }
}

loc_800C775C:
{
    r0 = MemoryInline::FlatRead8((r24 + 184));
}

loc_800C7764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C778C;
    }
}

loc_800C7768:
{
    r0 = MemoryInline::FlatRead8((r24 + 185));
}

loc_800C7770:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C778C;
    }
}

loc_800C7774:
{
    r0 = MemoryInline::FlatRead8((r24 + 188));
}

loc_800C777C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C778C;
    }
}

loc_800C7780:
{
    r0 = MemoryInline::FlatRead8((r24 + 189));
}

loc_800C7788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C779C;
    }
}

loc_800C778C:
{
    r4 = r29;
    r5 = (r24 + 192);
    r6 = (r24 + 196);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AE70Cu>(ctx);
}

loc_800C779C:
{
    r0 = MemoryInline::FlatRead8((r24 + 186));
}

loc_800C77A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C77CC;
    }
}

loc_800C77A8:
{
    r0 = MemoryInline::FlatRead8((r24 + 187));
}

loc_800C77B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C77CC;
    }
}

loc_800C77B4:
{
    r0 = MemoryInline::FlatRead8((r24 + 190));
}

loc_800C77BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C77CC;
    }
}

loc_800C77C0:
{
    r0 = MemoryInline::FlatRead8((r24 + 191));
}

loc_800C77C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C77E0;
    }
}

loc_800C77CC:
{
    r3 = MemoryInline::FlatRead32((r29 + 200));
    r4 = r29;
    r5 = (r24 + 200);
    r6 = (r24 + 204);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800AE70Cu>(ctx);
}

loc_800C77E0:
{
    r28 = 0;
    r29 = r24;
    r30 = (r24 + 148);
    r31 = 0;
}

loc_800C77F0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r3 = (r25 + r28);
    r4 = MemoryInline::FlatRead8((r3 + 97));
}

loc_800C7800:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C7810;
    }
}

loc_800C7804:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_800C780C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7A70;
    }
}

loc_800C7810:
{
}

loc_800C7814:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800C7844;
    }
}

loc_800C7818:
{
}

loc_800C781C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800C7860;
    }
}

loc_800C7820:
{
}

loc_800C7824:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_800C787C;
    }
}

loc_800C7828:
{
}

loc_800C782C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_800C78D4;
    }
}

loc_800C7830:
{
}

loc_800C7834:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_800C78F0;
    }
}

loc_800C7838:
{
}

loc_800C783C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_800C790C;
    }
}

loc_800C7840:
{
    goto loc_800C7960;
}

loc_800C7844:
{
    r0 = MemoryInline::FlatRead8((r24 + 192));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 193));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 194));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_800C7960;
}

loc_800C7860:
{
    r0 = MemoryInline::FlatRead8((r24 + 196));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 197));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 198));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_800C7960;
}

loc_800C787C:
{
    r4 = MemoryInline::FlatRead8((r24 + 193));
    r0 = MemoryInline::FlatRead8((r24 + 197));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 194));
    r0 = MemoryInline::FlatRead8((r24 + 198));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r6 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 192));
    r0 = MemoryInline::FlatRead8((r24 + 196));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
    goto loc_800C7960;
}

loc_800C78D4:
{
    r0 = MemoryInline::FlatRead8((r24 + 200));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 201));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 202));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_800C7960;
}

loc_800C78F0:
{
    r0 = MemoryInline::FlatRead8((r24 + 204));
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 205));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 206));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    goto loc_800C7960;
}

loc_800C790C:
{
    r4 = MemoryInline::FlatRead8((r24 + 201));
    r0 = MemoryInline::FlatRead8((r24 + 205));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 202));
    r0 = MemoryInline::FlatRead8((r24 + 206));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r6 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 200));
    r0 = MemoryInline::FlatRead8((r24 + 204));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r6));
}

loc_800C7960:
{
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_800C7968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C7998;
    }
}

loc_800C796C:
{
}

loc_800C7970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C79A4;
    }
}

loc_800C7974:
{
}

loc_800C7978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C79B0;
    }
}

loc_800C797C:
{
}

loc_800C7980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C79D0;
    }
}

loc_800C7984:
{
}

loc_800C7988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C79DC;
    }
}

loc_800C798C:
{
}

loc_800C7990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C79E8;
    }
}

loc_800C7994:
{
    goto loc_800C7A04;
}

loc_800C7998:
{
    r0 = MemoryInline::FlatRead8((r24 + 195));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_800C7A04;
}

loc_800C79A4:
{
    r0 = MemoryInline::FlatRead8((r24 + 199));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_800C7A04;
}

loc_800C79B0:
{
    r3 = MemoryInline::FlatRead8((r24 + 195));
    r0 = MemoryInline::FlatRead8((r24 + 199));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_800C7A04;
}

loc_800C79D0:
{
    r0 = MemoryInline::FlatRead8((r24 + 203));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_800C7A04;
}

loc_800C79DC:
{
    r0 = MemoryInline::FlatRead8((r24 + 207));
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
    goto loc_800C7A04;
}

loc_800C79E8:
{
    r3 = MemoryInline::FlatRead8((r24 + 203));
    r0 = MemoryInline::FlatRead8((r24 + 207));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 23), static_cast<uint8_t>(r0));
}

loc_800C7A04:
{
}

loc_800C7A08:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_800C7A4C;
    }
}

loc_800C7A0C:
{
    r3 = MemoryInline::FlatRead8((r1 + 20));
    r0 = MemoryInline::FlatRead8((r29 + 148));
}

loc_800C7A18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7A4C;
    }
}

loc_800C7A1C:
{
    r3 = MemoryInline::FlatRead8((r1 + 21));
    r0 = MemoryInline::FlatRead8((r29 + 149));
}

loc_800C7A28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7A4C;
    }
}

loc_800C7A2C:
{
    r3 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r29 + 150));
}

loc_800C7A38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7A4C;
    }
}

loc_800C7A3C:
{
    r3 = MemoryInline::FlatRead8((r1 + 23));
    r0 = MemoryInline::FlatRead8((r29 + 151));
}

loc_800C7A48:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800C7A70;
    }
}

loc_800C7A4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r28 + 1);
    r4 = (r1 + 12);
    ctx->lr = 0x800C7A60u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9BC0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = r30;
    r4 = (r1 + 20);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r27 = 1;
}

loc_800C7A70:
{
    r29 = (r29 + 4);
    r30 = (r30 + 4);
    r28 = (r28 + 1);
}

loc_800C7A80:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(3))) {
        goto loc_800C77F0;
    }
}

loc_800C7A84:
{
    r28 = 0;
    r30 = r24;
    r29 = (r24 + 160);
    r31 = 0;
}

loc_800C7A94:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    r3 = (r25 + r28);
    r4 = MemoryInline::FlatRead8((r3 + 100));
}

loc_800C7AA4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C7AB4;
    }
}

loc_800C7AA8:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_800C7AB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C7D14;
    }
}

loc_800C7AB4:
{
}

loc_800C7AB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800C7AE8;
    }
}

loc_800C7ABC:
{
}

loc_800C7AC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800C7B04;
    }
}

loc_800C7AC4:
{
}

loc_800C7AC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(5))) {
        goto loc_800C7B20;
    }
}

loc_800C7ACC:
{
}

loc_800C7AD0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_800C7B78;
    }
}

loc_800C7AD4:
{
}

loc_800C7AD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_800C7B94;
    }
}

loc_800C7ADC:
{
}

loc_800C7AE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_800C7BB0;
    }
}

loc_800C7AE4:
{
    goto loc_800C7C04;
}

loc_800C7AE8:
{
    r0 = MemoryInline::FlatRead8((r24 + 192));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 193));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 194));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_800C7C04;
}

loc_800C7B04:
{
    r0 = MemoryInline::FlatRead8((r24 + 196));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 197));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 198));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_800C7C04;
}

loc_800C7B20:
{
    r4 = MemoryInline::FlatRead8((r24 + 193));
    r0 = MemoryInline::FlatRead8((r24 + 197));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 194));
    r0 = MemoryInline::FlatRead8((r24 + 198));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r6 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 192));
    r0 = MemoryInline::FlatRead8((r24 + 196));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
    goto loc_800C7C04;
}

loc_800C7B78:
{
    r0 = MemoryInline::FlatRead8((r24 + 200));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 201));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 202));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_800C7C04;
}

loc_800C7B94:
{
    r0 = MemoryInline::FlatRead8((r24 + 204));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 205));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 206));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    goto loc_800C7C04;
}

loc_800C7BB0:
{
    r4 = MemoryInline::FlatRead8((r24 + 201));
    r0 = MemoryInline::FlatRead8((r24 + 205));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r5 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 202));
    r0 = MemoryInline::FlatRead8((r24 + 206));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r6 = (r0 & 255);
    r4 = MemoryInline::FlatRead8((r24 + 200));
    r0 = MemoryInline::FlatRead8((r24 + 204));
    r4 = (r4 * r0);
    r0 = (r4 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r6));
}

loc_800C7C04:
{
    r0 = MemoryInline::FlatRead8((r3 + 108));
}

loc_800C7C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800C7C3C;
    }
}

loc_800C7C10:
{
}

loc_800C7C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800C7C48;
    }
}

loc_800C7C18:
{
}

loc_800C7C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800C7C54;
    }
}

loc_800C7C20:
{
}

loc_800C7C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800C7C74;
    }
}

loc_800C7C28:
{
}

loc_800C7C2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800C7C80;
    }
}

loc_800C7C30:
{
}

loc_800C7C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800C7C8C;
    }
}

loc_800C7C38:
{
    goto loc_800C7CA8;
}

loc_800C7C3C:
{
    r0 = MemoryInline::FlatRead8((r24 + 195));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_800C7CA8;
}

loc_800C7C48:
{
    r0 = MemoryInline::FlatRead8((r24 + 199));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_800C7CA8;
}

loc_800C7C54:
{
    r3 = MemoryInline::FlatRead8((r24 + 195));
    r0 = MemoryInline::FlatRead8((r24 + 199));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_800C7CA8;
}

loc_800C7C74:
{
    r0 = MemoryInline::FlatRead8((r24 + 203));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_800C7CA8;
}

loc_800C7C80:
{
    r0 = MemoryInline::FlatRead8((r24 + 207));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_800C7CA8;
}

loc_800C7C8C:
{
    r3 = MemoryInline::FlatRead8((r24 + 203));
    r0 = MemoryInline::FlatRead8((r24 + 207));
    r3 = (r3 * r0);
    r0 = (r3 + 128);
    r0 = (static_cast<int32_t>(r0) >> 8);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
}

loc_800C7CA8:
{
}

loc_800C7CAC:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_800C7CF0;
    }
}

loc_800C7CB0:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
    r0 = MemoryInline::FlatRead8((r30 + 160));
}

loc_800C7CBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7CF0;
    }
}

loc_800C7CC0:
{
    r3 = MemoryInline::FlatRead8((r1 + 17));
    r0 = MemoryInline::FlatRead8((r30 + 161));
}

loc_800C7CCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7CF0;
    }
}

loc_800C7CD0:
{
    r3 = MemoryInline::FlatRead8((r1 + 18));
    r0 = MemoryInline::FlatRead8((r30 + 162));
}

loc_800C7CDC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_800C7CF0;
    }
}

loc_800C7CE0:
{
    r3 = MemoryInline::FlatRead8((r1 + 19));
    r0 = MemoryInline::FlatRead8((r30 + 163));
}

loc_800C7CEC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_800C7D14;
    }
}

loc_800C7CF0:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r28;
    r4 = (r1 + 8);
    ctx->lr = 0x800C7D04u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9C90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    r3 = r29;
    r4 = (r1 + 16);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r27 = 1;
}

loc_800C7D14:
{
    r30 = (r30 + 4);
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_800C7D24:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(4))) {
        goto loc_800C7A94;
    }
}

loc_800C7D28:
{
    r3 = r27;
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C745C func_800C745C preserves=true fpr_mask=0x00000000

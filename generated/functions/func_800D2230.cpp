#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004392C(CpuContext* ctx);
extern "C" uint32_t func_8004392C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80044AB8(CpuContext* ctx);
extern "C" uint32_t func_80044AB8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D2154(CpuContext* ctx);
extern "C" uint32_t func_800D2154_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800D26DC(CpuContext* ctx);
extern "C" uint32_t func_800D26DC_rac8_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D2810(CpuContext* ctx);
extern "C" uint64_t func_800D2810_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E4B30(CpuContext* ctx);
extern "C" uint64_t func_800E4B30_ra0_0_18_0(CpuContext*);
extern "C" void func_800E874C(CpuContext* ctx);
extern "C" uint64_t func_800E874C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_803A91F0(CpuContext* ctx);
extern "C" uint64_t func_803A91F0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" void func_800D2230(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D2230u);
    goto loc_800D2230;

loc_800D2230:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x80690000u;
    r31 = (r3 + 30952);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 49));
}

loc_800D2260:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D265C;
    }
}

loc_800D2264:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead16((r3 + 206));
    r0 = (r0 & 32768);
}

loc_800D2278:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D22A8;
    }
}

loc_800D227C:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_D86 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_D86;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800D228C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800D22C4;
    }
}

loc_800D2290:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8004392Cu>(&func_8004392C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004392C_106A = func_8004392C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004392C_106A;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004392Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 2);
}

loc_800D22A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D22C4;
    }
}

loc_800D22A8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2156));
}

loc_800D22B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D22C4;
    }
}

loc_800D22BC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2156), static_cast<uint8_t>(r0));
}

loc_800D22C4:
{
    r3 = 0x80660000u;
    r3 = (r3 + -18480);
    r0 = MemoryInline::FlatRead32((r3 + 896));
}

loc_800D22D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_800D2330;
    }
}

loc_800D22D8:
{
    r0 = MemoryInline::FlatRead16((r3 + 1054));
    r0 = (r0 & 32768);
}

loc_800D22E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D2314;
    }
}

loc_800D22E8:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_1664 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_1664;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800D22F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800D2330;
    }
}

loc_800D22FC:
{
    r3 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004392Cu>(&func_8004392C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8004392C_194A = func_8004392C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004392C_194A;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8004392Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 2);
}

loc_800D2310:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D2330;
    }
}

loc_800D2314:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2156));
}

loc_800D2324:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D2330;
    }
}

loc_800D2328:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2156), static_cast<uint8_t>(r0));
}

loc_800D2330:
{
    r4 = MemoryInline::FlatRead8(r31);
}

loc_800D2338:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(13))) {
        goto loc_800D265C;
    }
}

loc_800D233C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 23256);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800D2354u:
        goto loc_800D2354;
        break;
    case 0x800D243Cu:
        goto loc_800D243C;
        break;
    case 0x800D24B4u:
        goto loc_800D24B4;
        break;
    case 0x800D2504u:
        goto loc_800D2504;
        break;
    case 0x800D265Cu:
        goto loc_800D265C;
        break;
    case 0x800D2588u:
        goto loc_800D2588;
        break;
    case 0x800D25B4u:
        goto loc_800D25B4;
        break;
    case 0x800D260Cu:
        goto loc_800D260C;
        break;
    case 0x800D263Cu:
        goto loc_800D263C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800D2354:
{
    r3 = 0x80660000u;
    r29 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r29 + 2156));
}

loc_800D2364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D265C;
    }
}

loc_800D2368:
{
    // inline leaf 0x804360A0 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27968);
    r3 = MemoryInline::FlatRead8((r3 + 10));
    // end of inlined leaf 0x804360A0
}

loc_800D2370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D2380;
    }
}

loc_800D2374:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 2156), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D2380:
{
    // inline leaf 0x800CEE20 (6 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28904);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x800CEE20
}

loc_800D2388:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D238C:
{
    r3 = 0x80690000u;
    r0 = MemoryInline::FlatRead8((r3 + 30624));
}

loc_800D2398:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D23C0;
    }
}

loc_800D239C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2160));
}

loc_800D23A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D23A8:
{
    r0 = MemoryInline::FlatRead8((r29 + 2149));
}

loc_800D23B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D23C0;
    }
}

loc_800D23B4:
{
    ctx->lr = 0x800D23B8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800D23BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D23E0;
    }
}

loc_800D23C0:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 40), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D23E0:
{
    r0 = MemoryInline::FlatRead8((r29 + 2157));
}

loc_800D23E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D265C;
    }
}

loc_800D23EC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 2156), static_cast<uint8_t>(r0));
    r30 = 1;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r29 + 2163), static_cast<uint8_t>(r30));
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800D240C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D2414;
    }
}

loc_800D2410:
{
    MemoryInline::FlatWriteRam8((r29 + 2162), static_cast<uint8_t>(r30));
}

loc_800D2414:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r12 = MemoryInline::FlatRead32((r3 + 2252));
    ctr = r12;
    ctx->lr = 0x800D2428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    // inline leaf 0x800D26C4 (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80690000u;
    r3 = (r3 + 30952);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D26C4
    r0 = 10;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    ctx->lr = 0x800D2438u;
    if constexpr (KnownRegArgsCpuCall<0x80044AB8u>(&func_80044AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80044AB8_336A = func_80044AB8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80044AB8_336A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80044AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_800D265C;
}

loc_800D243C:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_800D2444:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_800D245C;
    }
}

loc_800D2448:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    r0 = 60;
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r0));
    goto loc_800D265C;
}

loc_800D245C:
{
    // inline leaf 0x8003F588 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -18052));
    // end of inlined leaf 0x8003F588
}

loc_800D2464:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800D2488;
    }
}

loc_800D2468:
{
    // inline leaf 0x80434688 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    r3 = MemoryInline::FlatRead8((r3 + 420));
    // end of inlined leaf 0x80434688
}

loc_800D2470:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D2488;
    }
}

loc_800D2474:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
    goto loc_800D249C;
}

loc_800D2488:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
}

loc_800D249C:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_800D24A4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_800D265C;
    }
}

loc_800D24A8:
{
    r0 = 255;
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
    goto loc_800D265C;
}

loc_800D24B4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D24BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_800D24CC;
    }
}

loc_800D24C0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D24CC:
{
    // inline leaf 0x8003F588 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -18052));
    // end of inlined leaf 0x8003F588
}

loc_800D24D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800D24F4;
    }
}

loc_800D24D8:
{
    // inline leaf 0x80434688 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    r3 = MemoryInline::FlatRead8((r3 + 420));
    // end of inlined leaf 0x80434688
}

loc_800D24E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D24F4;
    }
}

loc_800D24E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r0));
    goto loc_800D265C;
}

loc_800D24F4:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -2);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r0));
    goto loc_800D265C;
}

loc_800D2504:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_800D250C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D252C;
    }
}

loc_800D2510:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 40), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2156), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D252C:
{
    // inline leaf 0x8003F588 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -18052));
    // end of inlined leaf 0x8003F588
}

loc_800D2534:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800D2558;
    }
}

loc_800D2538:
{
    // inline leaf 0x80434688 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    r3 = MemoryInline::FlatRead8((r3 + 420));
    // end of inlined leaf 0x80434688
}

loc_800D2540:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D2558;
    }
}

loc_800D2544:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
    goto loc_800D256C;
}

loc_800D2558:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
}

loc_800D256C:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = MemoryInline::FlatRead32((r31 + 36));
}

loc_800D2578:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_800D265C;
    }
}

loc_800D257C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + 32), r0);
    goto loc_800D265C;
}

loc_800D2588:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2159), static_cast<uint8_t>(r0));
    ctx->lr = 0x800D259Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D26DCu>(&func_800D26DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800D26DC_4B39 = func_800D26DC_rac8_1fe_8_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_800D26DC_4B39;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D26DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_800D25A0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D265C;
    }
}

loc_800D25A4:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D25B4:
{
    r3 = 0;
    ctx->lr = 0x800D25BCu;
    if constexpr (KnownRegArgsCpuCall<0x800D2154u>(&func_800D2154)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800D2154_5210 = func_800D2154_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2154_5210;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800D2154u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x800D25C0u;
    if constexpr (KnownRegArgsCpuCall<0x800E4B30u>(&func_800E4B30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4B30_5480 = func_800E4B30_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_800E4B30_5480);
        r4 = static_cast<uint32_t>(regargs_result_800E4B30_5480 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4B30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0x80660000u;
    r30 = (r3 + -21920);
    r12 = MemoryInline::FlatRead32((r30 + 2256));
    ctr = r12;
    ctx->lr = 0x800D25D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_800D25D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800D25E8;
    }
}

loc_800D25DC:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 2159), static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D25E8:
{
    // inline leaf 0x800D26C4 (6 guest instruction(s))
    r0 = 0;
    r3 = 0x80690000u;
    r3 = (r3 + 30952);
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 6), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D26C4
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + 2159), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x800D25FCu;
    if constexpr (KnownRegArgsCpuCall<0x800E874Cu>(&func_800E874C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E874C_5C80 = func_800E874C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E874C_5C80);
        r4 = static_cast<uint32_t>(regargs_result_800E874C_5C80 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D260C:
{
    ctx->lr = 0x800D2610u;
    if constexpr (KnownRegArgsCpuCall<0x800D2810u>(&func_800D2810)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800D2810_6042 = func_800D2810_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800D2810_6042);
        r4 = static_cast<uint32_t>(regargs_result_800D2810_6042 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800D2810u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_800D2614:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D265C;
    }
}

loc_800D2618:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
    ctx->lr = 0x800D262Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A91F0u>(&func_803A91F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803A91F0_6714 = func_803A91F0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803A91F0_6714);
        r4 = static_cast<uint32_t>(regargs_result_803A91F0_6714 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A91F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    goto loc_800D265C;
}

loc_800D263C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r31 + 40), static_cast<uint8_t>(r0));
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2156), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2163), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 2159), static_cast<uint8_t>(r0));
}

loc_800D265C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D2230 func_800D2230 preserves=true fpr_mask=0x00000000

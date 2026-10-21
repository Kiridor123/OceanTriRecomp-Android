#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0350(CpuContext* ctx);
extern "C" uint64_t func_800E0350_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_800DFB58_raa0_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5, uint32_t arg_r7)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800DFB58u);
    goto loc_800DFB58;

loc_800DFB58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17576), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r3 = (r3 + 196608);
    r3 = MemoryInline::FlatRead32((r3 + -27936));
    // inline leaf 0x800DF9AC (34 guest instruction(s))
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 60), 0, 2481u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 60), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 80u, (r3 + 140), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 160u, (r3 + 220), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 240u, (r3 + 300), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 320u, (r3 + 380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 400u, (r3 + 460), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 480u, (r3 + 540), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 560u, (r3 + 620), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 640u, (r3 + 700), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 720u, (r3 + 780), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 800u, (r3 + 860), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 880u, (r3 + 940), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 960u, (r3 + 1020), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1040u, (r3 + 1100), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1120u, (r3 + 1180), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1200u, (r3 + 1260), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1280u, (r3 + 1340), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1360u, (r3 + 1420), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1440u, (r3 + 1500), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1520u, (r3 + 1580), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1600u, (r3 + 1660), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1680u, (r3 + 1740), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1760u, (r3 + 1820), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1840u, (r3 + 1900), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1920u, (r3 + 1980), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2000u, (r3 + 2060), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2080u, (r3 + 2140), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2160u, (r3 + 2220), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2240u, (r3 + 2300), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2320u, (r3 + 2380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2400u, (r3 + 2460), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2480u, (r3 + 2540), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800DF9AC
    r6 = 0;
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_800DFB84:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r6 + 196608);
    r0 = (r4 + -27932);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27928);
    r3_addr_3 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_3, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27924);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27920);
    r3_addr_5 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_5, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27916);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27912);
    r3_addr_7 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_7, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27908);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_8, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27904);
    r3_addr_9 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_9, r5);
    r6 = (r6 + 32);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r6 + 196608);
    r0 = (r4 + -27932);
    r3_addr_10 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_10, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27928);
    r3_addr_11 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_11, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27924);
    r3_addr_12 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_12, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27920);
    r3_addr_13 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_13, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27916);
    r3_addr_14 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_14, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27912);
    r3_addr_15 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_15, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27908);
    r3_addr_16 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_16, r5);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -27904);
    r3_addr_17 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_17, r5);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DFB84;
    }
}

loc_800DFC58:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    ctx->lr = 0x800DFC60u;
    if constexpr (KnownRegArgsCpuCall<0x800E0350u>(&func_800E0350)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_800E0350_1FC6 = func_800E0350_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0350_1FC6);
        r4 = static_cast<uint32_t>(regargs_result_800E0350_1FC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x800E0350u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_800DFB58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800DFB58_raa0_0_8_0(ctx, ctx->gpr[5], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000020A2 gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800DFB58 func_800DFB58 preserves=true fpr_mask=0x00000000

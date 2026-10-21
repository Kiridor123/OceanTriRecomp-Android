#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D7FB8_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t addr_stfsx_800D7FFC_loc_0 = 0;
    uint32_t addr_stfsx_800D800C_loc_0 = 0;
    uint32_t addr_stfsx_800D801C_loc_0 = 0;
    uint32_t addr_stfsx_800D802C_loc_0 = 0;
    uint32_t addr_stfsx_800D803C_loc_0 = 0;
    uint32_t addr_stfsx_800D804C_loc_0 = 0;
    uint32_t addr_stfsx_800D805C_loc_0 = 0;
    uint32_t addr_stfsx_800D806C_loc_0 = 0;
    uint32_t addr_stfsx_800D8084_loc_0 = 0;
    uint32_t addr_stfsx_800D8094_loc_0 = 0;
    uint32_t addr_stfsx_800D80A4_loc_0 = 0;
    uint32_t addr_stfsx_800D80B4_loc_0 = 0;
    uint32_t addr_stfsx_800D80C4_loc_0 = 0;
    uint32_t addr_stfsx_800D80D4_loc_0 = 0;
    uint32_t addr_stfsx_800D80E4_loc_0 = 0;
    uint32_t addr_stfsx_800D80F4_loc_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x800D7FB8u);
    goto loc_800D7FB8;

loc_800D7FB8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2388));
    MemoryInline::FlatWrite32((r13 + -17576), r3);
    r4 = 0;
    r5 = 196608;
    r5 = (r5 + -27028);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30408));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30404));
    r4 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17576), 0, 184u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r4 + 196608);
    r0 = (r4 + -28104);
    addr_stfsx_800D7FFC_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D7FFC_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28100);
    addr_stfsx_800D800C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D800C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28096);
    addr_stfsx_800D801C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D801C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28092);
    addr_stfsx_800D802C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D802C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28088);
    addr_stfsx_800D803C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D803C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28084);
    addr_stfsx_800D804C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D804C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28080);
    addr_stfsx_800D805C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D805C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28076);
    addr_stfsx_800D806C_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D806C_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r4 = 32;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r4 = (r4 + 196608);
    r0 = (r4 + -28104);
    addr_stfsx_800D8084_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D8084_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28100);
    addr_stfsx_800D8094_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D8094_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28096);
    addr_stfsx_800D80A4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80A4_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28092);
    addr_stfsx_800D80B4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80B4_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28088);
    addr_stfsx_800D80C4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80C4_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28084);
    addr_stfsx_800D80D4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80D4_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28080);
    addr_stfsx_800D80E4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80E4_loc_0, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r0 = (r4 + -28076);
    addr_stfsx_800D80F4_loc_0 = (r3 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_800D80F4_loc_0, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30400));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17576));
    r3 = (r3 + 196608);
    MemoryInline::FlatWriteFloat32((r3 + -28040), f0.d);
    // inline leaf 0x800F0F04 (38 guest instruction(s))
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26876), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26870), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26875), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26869), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26874), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26868), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26873), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26867), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26872), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26866), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26871), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26865), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F0F04
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D7FB8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D7FB8_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002006 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D7FB8 func_800D7FB8 preserves=true fpr_mask=0x00000000

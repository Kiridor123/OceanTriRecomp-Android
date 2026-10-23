#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800515D8(CpuContext* ctx);
extern "C" uint64_t func_800515D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802F4BBC_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_lfsx_802F4E20_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    ctx->gpr[6] = arg_r6;
    ctx->fpr[3].d = arg_f3;

    goto loc_802F4BBC;

loc_802F4BBC:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    r29 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r3 = (r1 + 80);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 32);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_802F4C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(340))) {
        goto loc_802F4C2C;
    }
}

loc_802F4C10:
{
}

loc_802F4C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(341))) {
        goto loc_802F4C7C;
    }
}

loc_802F4C18:
{
}

loc_802F4C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(342))) {
        goto loc_802F4CF0;
    }
}

loc_802F4C20:
{
}

loc_802F4C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(343))) {
        goto loc_802F4D64;
    }
}

loc_802F4C28:
{
    goto loc_802F4DB4;
}

loc_802F4C2C:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12436));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4C40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4C44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4C50;
    }
}

loc_802F4C48:
{
    r30 = 0;
    goto loc_802F4DB8;
}

loc_802F4C50:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12456));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4C64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4C68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4C74;
    }
}

loc_802F4C6C:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4C74:
{
    r30 = 2;
    goto loc_802F4DB8;
}

loc_802F4C7C:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12436));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4C94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4CA0;
    }
}

loc_802F4C98:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4CA0:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12412));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4CB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4CB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4CC4;
    }
}

loc_802F4CBC:
{
    r30 = 2;
    goto loc_802F4DB8;
}

loc_802F4CC4:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12368));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4CDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4CE8;
    }
}

loc_802F4CE0:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4CE8:
{
    r30 = 0;
    goto loc_802F4DB8;
}

loc_802F4CF0:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12364));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4D04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4D08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4D14;
    }
}

loc_802F4D0C:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4D14:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12360));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4D28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4D2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4D38;
    }
}

loc_802F4D30:
{
    r30 = 2;
    goto loc_802F4DB8;
}

loc_802F4D38:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12356));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4D50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4D5C;
    }
}

loc_802F4D54:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4D5C:
{
    r30 = 0;
    goto loc_802F4DB8;
}

loc_802F4D64:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12436));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4D78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4D7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4D88;
    }
}

loc_802F4D80:
{
    r30 = 1;
    goto loc_802F4DB8;
}

loc_802F4D88:
{
    r3 = r31;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12352));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    ctx->lr = 0x802F4D9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_802F4DA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802F4DAC;
    }
}

loc_802F4DA4:
{
    r30 = 2;
    goto loc_802F4DB8;
}

loc_802F4DAC:
{
    r30 = 0;
    goto loc_802F4DB8;
}

loc_802F4DB4:
{
    r30 = 0;
}

loc_802F4DB8:
{
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r3 + 4);
    r4 = 11;
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12348));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12344));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12340));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = (r1 + 20);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = 65536;
    r3 = (r3 + -16383);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800503C8u>(ctx);
    r3 = (r1 + 80);
    r4 = (r1 + 32);
    ctx->lr = 0x802F4E14u;
    if constexpr (KnownRegArgsCpuCall<0x800515D8u>(&func_800515D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800515D8_2E0A = func_800515D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800515D8_2E0A);
        r4 = static_cast<uint32_t>(regargs_result_800515D8_2E0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800515D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r0 = (r30 * 12);
    r3 = 0x805D0000u;
    r3 = (r3 + 29864);
    addr_lfsx_802F4E20_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802F4E20_loc_0);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = (r1 + 8);
    r4 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 144u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r1 + 92));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r1 + 20));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r1 + 108));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 4), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r1 + 124));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r1 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 8), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F4BBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F4BBC_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F4BBC func_802F4BBC preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BE024(CpuContext* ctx);
extern "C" uint64_t func_802BE024_ra20_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802BED34(CpuContext* ctx);
extern "C" uint32_t func_802BED34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802BB8D4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_lfsx_802BB9FC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x802BB8D4u);
    goto loc_802BB8D4;

loc_802BB8D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    ctx->lr = 0x802BB8FCu;
    if constexpr (KnownRegArgsCpuCall<0x802BED34u>(&func_802BED34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BED34_6AA = func_802BED34_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802BED34_6AA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802BED34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = (r3 + 1096);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r0));
    r4 = 1;
    MemoryInline::FlatWrite8((r31 + 50), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -13768), 0, 264u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13768));
    MemoryInline::FlatWriteFloat32((r31 + 32), f1.d);
}

loc_802BB924:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802BB968;
    }
}

loc_802BB928:
{
    r0 = (r29 & 255);
}

loc_802BB930:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BB940;
    }
}

loc_802BB934:
{
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r0));
}

loc_802BB940:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = (r30 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13648));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    goto loc_802BBA74;
}

loc_802BB968:
{
}

loc_802BB96C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_802BBA2C;
    }
}

loc_802BB970:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 244u, (r2 + -13524));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r2 + -13624));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 204u, (r2 + -13564));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r2 + -13520));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_802BB994:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_802BB9B0;
    }
}

loc_802BB998:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    r3 = (r31 + 60);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_802BBA74;
}

loc_802BB9B0:
{
    r0 = (r29 & 255);
}

loc_802BB9B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BBA24;
    }
}

loc_802BB9BC:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    r30 = MemoryInline::FlatRead32((r31 + 28));
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead8((r3 + 1270));
}

loc_802BB9E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802BBA08;
    }
}

loc_802BB9E4:
{
    MemoryInline::FlatWriteFloat32((r31 + 36), f1.d);
    // inline leaf 0x800D07A8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2182));
    // end of inlined leaf 0x800D07A8
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805D0000u;
    r3 = (r3 + 9576);
    addr_lfsx_802BB9FC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_802BB9FC_loc_0);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    goto loc_802BBA18;
}

loc_802BBA08:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 252u, (r2 + -13516));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 256u, (r2 + -13512));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
}

loc_802BBA18:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 260u, (r2 + -13508));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    goto loc_802BBA74;
}

loc_802BBA24:
{
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r4));
    goto loc_802BBA74;
}

loc_802BBA2C:
{
    r0 = (r29 & 255);
}

loc_802BBA34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BBA44;
    }
}

loc_802BBA38:
{
    MemoryInline::FlatWrite8((r31 + 24), static_cast<uint8_t>(r4));
    r0 = 20;
    MemoryInline::FlatWrite16((r31 + 48), static_cast<uint16_t>(r0));
}

loc_802BBA44:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 51), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 60);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    ctx->lr = 0x802BBA68u;
    if constexpr (KnownRegArgsCpuCall<0x802BE024u>(&func_802BE024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_802BE024_1D01 = func_802BE024_ra20_0_18_0(ctx, r5);
        r3 = static_cast<uint32_t>(regargs_result_802BE024_1D01);
        r4 = static_cast<uint32_t>(regargs_result_802BE024_1D01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BE024u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    MemoryInline::FlatWriteFloat32((r31 + 44), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
}

loc_802BBA74:
{
    MemoryInline::FlatWrite32((r31 + 28), r30);
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BB8D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BB8D4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BB8D4 func_802BB8D4 preserves=true fpr_mask=0x00000000

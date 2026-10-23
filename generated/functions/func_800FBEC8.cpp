#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800FD314(CpuContext* ctx);
extern "C" uint32_t func_800FD314_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80331274(CpuContext* ctx);
extern "C" uint64_t func_80331274_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800FBEC8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    goto loc_800FBEC8;

loc_800FBEC8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r28 = r4;
    r29 = r5;
    r27 = r6;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 15));
}

loc_800FBEFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_800FC120;
    }
}

loc_800FBF00:
{
}

loc_800FBF04:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(16))) {
        goto loc_800FBF18;
    }
}

loc_800FBF08:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800FD314u>(&func_800FD314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800FD314_BCB = func_800FD314_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FD314_BCB;
        r0 = ctx->gpr[0];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800FD314u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        ctr = ctx->ctr;
    }
}

loc_800FBF14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FC120;
    }
}

loc_800FBF18:
{
    r3 = 44;
    ctx->lr = 0x800FBF20u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F87EC_ECB = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_ECB);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_ECB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_800FBF28:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FC120;
    }
}

loc_800FBF2C:
{
    r31 = MemoryInline::FlatRead32((r3 + 56));
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    r0 = (r28 + -25);
}

loc_800FBF40:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800FBF50;
    }
}

loc_800FBF44:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    ctx->lr = 0x800FBF4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80331274u>(&func_80331274)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80331274_1450 = func_80331274_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80331274_1450);
        r4 = static_cast<uint32_t>(regargs_result_80331274_1450 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80331274u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r27 = r3;
}

loc_800FBF50:
{
    r0 = (r28 & 255);
    MemoryInline::FlatWriteRam8((r30 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + 8), static_cast<uint8_t>(r27));
    r27 = 1;
    MemoryInline::FlatWriteRam8((r30 + 3), static_cast<uint8_t>(r27));
    r28 = 0;
    MemoryInline::FlatWriteRam32((r30 + 12), r28);
    r3 = (r30 + 24);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r29 + 15));
    MemoryInline::FlatWriteRam8((r30 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 48));
}

loc_800FBF88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FC044;
    }
}

loc_800FBF8C:
{
    r4 = MemoryInline::FlatRead32((r29 + 44));
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (r3 + -26);
}

loc_800FBF9C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(13))) {
        goto loc_800FC030;
    }
}

loc_800FBFA0:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -16448);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FBFB8u:
        goto loc_800FBFB8;
        break;
    case 0x800FC030u:
        goto loc_800FC030;
        break;
    case 0x800FBFECu:
        goto loc_800FBFEC;
        break;
    case 0x800FBFDCu:
        goto loc_800FBFDC;
        break;
    case 0x800FC01Cu:
        goto loc_800FC01C;
        break;
    case 0x800FBFCCu:
        goto loc_800FBFCC;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_800FBFB8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_800FC074;
}

loc_800FBFCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r28));
    goto loc_800FC074;
}

loc_800FBFDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r27));
    goto loc_800FC074;
}

loc_800FBFEC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r3 = MemoryInline::FlatRead8((r4 + 10));
    r0 = (r3 + -3);
}

loc_800FC000:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800FC010;
    }
}

loc_800FC004:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_800FC074;
}

loc_800FC010:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_800FC074;
}

loc_800FC01C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r0 = 3;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_800FC074;
}

loc_800FC030:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
    goto loc_800FC074;
}

loc_800FC044:
{
}

loc_800FC048:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800FC064;
    }
}

loc_800FC04C:
{
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_800FC054:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800FC064;
    }
}

loc_800FC058:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    goto loc_800FC06C;
}

loc_800FC064:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
}

loc_800FC06C:
{
    r0 = 4;
    MemoryInline::FlatWriteRam8((r30 + 7), static_cast<uint8_t>(r0));
}

loc_800FC074:
{
    r3 = r29;
    r4 = 2048;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_800FC084:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800FC094;
    }
}

loc_800FC088:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
    goto loc_800FC09C;
}

loc_800FC094:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 41), static_cast<uint8_t>(r0));
}

loc_800FC09C:
{
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r0 = (r3 + -22);
}

loc_800FC0A8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800FC0C4;
    }
}

loc_800FC0AC:
{
    r0 = (r3 + -25);
}

loc_800FC0B4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800FC0D8;
    }
}

loc_800FC0B8:
{
}

loc_800FC0BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_800FC0EC;
    }
}

loc_800FC0C0:
{
    goto loc_800FC0F8;
}

loc_800FC0C4:
{
    r3 = (r30 + 36);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_800FC0F8;
}

loc_800FC0D8:
{
    r3 = (r30 + 36);
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r4 + 84);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_800FC0F8;
}

loc_800FC0EC:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRam32((r30 + 48), r0);
}

loc_800FC0F8:
{
    r3 = r30;
    r4 = 0;
    r5 = 4;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r3 = 0x80100000u;
    r0 = (r3 + -15384);
    MemoryInline::FlatWriteRam32((r30 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + -15220);
    MemoryInline::FlatWriteRam32((r30 + 52), r0);
}

loc_800FC120:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800FBEC8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800FBEC8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800FBEC8 func_800FBEC8 preserves=true fpr_mask=0x00000000

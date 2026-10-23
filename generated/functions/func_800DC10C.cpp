#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D8DF0(CpuContext* ctx);
extern "C" uint64_t func_800D8DF0_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800D8EBC(CpuContext* ctx);
extern "C" uint32_t func_800D8EBC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012D0D8(CpuContext* ctx);
extern "C" uint32_t func_8012D0D8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800DC10C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_800DC10C;

loc_800DC10C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r31 = MemoryInline::FlatRead8((r5 + 14));
}

loc_800DC134:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(255))) {
        goto loc_800DC384;
    }
}

loc_800DC138:
{
}

loc_800DC13C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DC14C;
    }
}

loc_800DC140:
{
    ctx->lr = 0x800DC144u;
    if constexpr (KnownRegArgsCpuCall<0x8012D0D8u>(&func_8012D0D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D0D8_BC4 = func_8012D0D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D0D8_BC4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012D0D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_800DC148:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC14C:
{
    r30 = MemoryInline::FlatRead32((r24 + 2812));
}

loc_800DC154:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC158:
{
    r27 = 0;
    r3 = MemoryInline::FlatRead8((r24 + 2));
    r0 = (r3 + 252);
    r0 = (r0 & 255);
}

loc_800DC16C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_800DC188;
    }
}

loc_800DC170:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = MemoryInline::FlatRead8((r24 + 8));
}

loc_800DC180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r3))) {
        goto loc_800DC188;
    }
}

loc_800DC184:
{
    r27 = 1;
}

loc_800DC188:
{
    r28 = 0;
    r3 = r26;
    ctx->lr = 0x800DC194u;
    if constexpr (KnownRegArgsCpuCall<0x800D8DF0u>(&func_800D8DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800D8DF0_1262 = func_800D8DF0_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800D8DF0_1262);
        r4 = static_cast<uint32_t>(regargs_result_800D8DF0_1262 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800D8DF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_800DC198:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DC1A0;
    }
}

loc_800DC19C:
{
    r28 = 1;
}

loc_800DC1A0:
{
    r29 = MemoryInline::FlatRead32((r30 + 12));
}

loc_800DC1A8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_800DC1FC;
    }
}

loc_800DC1AC:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_800DC1B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_800DC1E8;
    }
}

loc_800DC1B8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 32296);
    r3_addr_1 = (r3 + r0);
    r23 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = r24;
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl2_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl2_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl2_0x80331188;
    }
}

loc_inl2_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl2_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x80331188;
    }
}

loc_inl2_0x80331180:
{
    r3 = 1;
    goto loc_inl2_cont_80331168;
}

loc_inl2_0x80331188:
{
    r3 = 0;
}

loc_inl2_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_800DC1D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DC1E0;
    }
}

loc_800DC1D8:
{
    r4 = MemoryInline::FlatRead32(r23);
    goto loc_800DC204;
}

loc_800DC1E0:
{
    r4 = MemoryInline::FlatRead32((r23 + 4));
    goto loc_800DC204;
}

loc_800DC1E8:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 32296);
    r3_addr_2 = (r3 + r0);
    r4 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_800DC204;
}

loc_800DC1FC:
{
    r3 = 0x80590000u;
    r4 = (r3 + 32332);
}

loc_800DC204:
{
}

loc_800DC208:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800DC2A0;
    }
}

loc_800DC20C:
{
    r0 = MemoryInline::FlatRead8((r25 + 77));
}

loc_800DC214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_800DC224;
    }
}

loc_800DC218:
{
    r3 = (r4 + r28);
    r23 = MemoryInline::FlatRead8((r3 + 10));
    goto loc_800DC230;
}

loc_800DC224:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r0 = (r28 + r4);
    r3_addr_4 = (r3 + r0);
    r23 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_800DC230:
{
}

loc_800DC234:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_800DC2A0;
    }
}

loc_800DC238:
{
    r3 = r30;
    r4 = r23;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_21B3 = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_21B3;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r25 = r3;
}

loc_800DC24C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC250:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 40), r29);
    MemoryInline::FlatWrite32((r3 + 44), r23);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = (r3 + 4);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r25 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    MemoryInline::FlatWriteFloat32((r25 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 12));
    MemoryInline::FlatWriteFloat32((r25 + 24), f0.d);
}

loc_800DC2A0:
{
}

loc_800DC2A4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_800DC2F8;
    }
}

loc_800DC2A8:
{
    r0 = MemoryInline::FlatRead8((r24 + 2));
}

loc_800DC2B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(8))) {
        goto loc_800DC2E4;
    }
}

loc_800DC2B4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 32152);
    r3_addr_7 = (r3 + r0);
    r25 = MemoryInline::FlatRead32(r3_addr_7);
    r3 = r24;
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl3_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl3_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl3_0x80331188;
    }
}

loc_inl3_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl3_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80331188;
    }
}

loc_inl3_0x80331180:
{
    r3 = 1;
    goto loc_inl3_cont_80331168;
}

loc_inl3_0x80331188:
{
    r3 = 0;
}

loc_inl3_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_800DC2D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800DC2DC;
    }
}

loc_800DC2D4:
{
    r3 = MemoryInline::FlatRead32(r25);
    goto loc_800DC300;
}

loc_800DC2DC:
{
    r3 = MemoryInline::FlatRead32((r25 + 4));
    goto loc_800DC300;
}

loc_800DC2E4:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + 32152);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    goto loc_800DC300;
}

loc_800DC2F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 32188);
}

loc_800DC300:
{
}

loc_800DC304:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC308:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r3 + r0);
    r3_addr_10 = (r3 + r28);
    r25 = MemoryInline::FlatRead8(r3_addr_10);
}

loc_800DC318:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC31C:
{
    r3 = r30;
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x800D8EBCu>(&func_800D8EBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D8EBC_318A = func_800D8EBC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D8EBC_318A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D8EBCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r24 = r3;
}

loc_800DC330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800DC384;
    }
}

loc_800DC334:
{
    r4 = 3;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 40), r4);
    MemoryInline::FlatWrite32((r3 + 44), r25);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r3 = (r3 + 4);
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    MemoryInline::FlatWriteFloat32((r24 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    MemoryInline::FlatWriteFloat32((r24 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    MemoryInline::FlatWriteFloat32((r24 + 24), f0.d);
}

loc_800DC384:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DC10C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DC10C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DC10C func_800DC10C preserves=true fpr_mask=0x00000000

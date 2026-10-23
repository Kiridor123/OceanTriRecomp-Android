#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012B8D0(CpuContext* ctx);
extern "C" uint64_t func_8012B8D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012B95C(CpuContext* ctx);
extern "C" uint32_t func_8012B95C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012C758(CpuContext* ctx);
extern "C" uint64_t func_8012C758_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012C8D4(CpuContext* ctx);
extern "C" uint64_t func_8012C8D4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012CE58(CpuContext* ctx);
extern "C" uint64_t func_8012CE58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012CF90(CpuContext* ctx);
extern "C" uint32_t func_8012CF90_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D20C(CpuContext* ctx);
extern "C" uint64_t func_8012D20C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012F368(CpuContext* ctx);
extern "C" uint64_t func_8012F368_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80130A74(CpuContext* ctx);
extern "C" uint64_t func_80130A74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013A964(CpuContext* ctx);
extern "C" uint64_t func_8013A964_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012B95C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8012B95C_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8012CA10_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
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
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012CA10;

loc_8012CA10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r26 = r3;
    ctx->lr = 0x8012CA2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012CF90u>(&func_8012CF90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8012CF90_1295 = func_8012CF90_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012CF90_1295;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012CF90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = r3;
    r0 = 255;
    MemoryInline::FlatWrite8((r26 + 1944), static_cast<uint8_t>(r0));
    r27 = 0;
    r29 = 0;
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r26 + 1085));
}

loc_8012CA4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CAEC;
    }
}

loc_8012CA50:
{
    r0 = MemoryInline::FlatRead8((r26 + 1081));
}

loc_8012CA58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CAF4;
    }
}

loc_8012CA5C:
{
    r3 = 2;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r22 = (r3 & 65535);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r24 = r3;
    r23 = 0;
    r31 = 0;
    r25 = 1;
    goto loc_8012CAE0;
}

loc_8012CA84:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_8012CA8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012CAD8;
    }
}

loc_8012CA90:
{
    r3 = MemoryInline::FlatRead8((r24 + 8));
    ctx->lr = 0x8012CA98u;
    if constexpr (KnownRegArgsCpuCall<0x8012D20Cu>(&func_8012D20C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D20C_2029 = func_8012D20C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012D20C_2029);
        r4 = static_cast<uint32_t>(regargs_result_8012D20C_2029 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D20Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012CA9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012CAD8;
    }
}

loc_8012CAA0:
{
    r3 = r26;
    r4 = r24;
    ctx->lr = 0x8012CAACu;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_23A9 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_23A9);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_23A9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_8012CAB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CAD8;
    }
}

loc_8012CAB4:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r25), static_cast<uint32_t>(r23));
    r0 = MemoryInline::FlatRead8((r26 + 911));
    r0 = (r0 & r3);
}

loc_8012CAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012CAD8;
    }
}

loc_8012CAC8:
{
    r0 = (r3 & 255);
    r27 = (r27 | r0);
    r28 = 1;
    MemoryInline::FlatWrite8((r26 + 1081), static_cast<uint8_t>(r31));
}

loc_8012CAD8:
{
    r23 = (r23 + 1);
    r24 = (r24 + 2848);
}

loc_8012CAE0:
{
}

loc_8012CAE4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r22))) {
        goto loc_8012CA84;
    }
}

loc_8012CAE8:
{
    goto loc_8012CAF4;
}

loc_8012CAEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1081), static_cast<uint8_t>(r0));
}

loc_8012CAF4:
{
    r0 = MemoryInline::FlatRead8((r26 + 1947));
}

loc_8012CAFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CB24;
    }
}

loc_8012CB00:
{
    r0 = MemoryInline::FlatRead8((r26 + 488));
}

loc_8012CB08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012CE40;
    }
}

loc_8012CB0C:
{
    r0 = MemoryInline::FlatRead8((r26 + 489));
}

loc_8012CB14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012CE40;
    }
}

loc_8012CB18:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r26 + 1947), static_cast<uint8_t>(r0));
    goto loc_8012CE40;
}

loc_8012CB24:
{
    r3 = r26;
    // inline leaf 0x8012D204 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 501));
    // end of inlined leaf 0x8012D204
}

loc_8012CB30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012CE40;
    }
}

loc_8012CB34:
{
    r0 = MemoryInline::FlatRead8((r26 + 1924));
}

loc_8012CB3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CB40:
{
    r3 = r26;
    r4 = 253;
    // inline leaf 0x80132330 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2382));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80132330
}

loc_8012CB50:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CB54:
{
    r3 = MemoryInline::FlatRead8((r26 + 485));
    r0 = (r3 + 248);
    r0 = (r0 & 255);
}

loc_8012CB64:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_8012CE40;
    }
}

loc_8012CB68:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x8012CB74u;
    if constexpr (KnownRegArgsCpuCall<0x8012F368u>(&func_8012F368)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012F368_326E = func_8012F368_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012F368_326E);
        r4 = static_cast<uint32_t>(regargs_result_8012F368_326E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012F368u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012CB78:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CB7C:
{
    r0 = MemoryInline::FlatRead8((r26 + 504));
}

loc_8012CB84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012CE40;
    }
}

loc_8012CB88:
{
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8013A964u>(&func_8013A964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013A964_3688 = func_8013A964_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013A964_3688);
        r4 = static_cast<uint32_t>(regargs_result_8013A964_3688 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A964u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8012CB98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_8012CE40;
    }
}

loc_8012CB9C:
{
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8012B8D0u>(&func_8012B8D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012B8D0_3A15 = func_8012B8D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012B8D0_3A15);
        r4 = static_cast<uint32_t>(regargs_result_8012B8D0_3A15 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012B8D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r26 + 1085));
}

loc_8012CBB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CBFC;
    }
}

loc_8012CBB4:
{
}

loc_8012CBB8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8012CBF4;
    }
}

loc_8012CBBC:
{
    r0 = MemoryInline::FlatRead8((r26 + 482));
}

loc_8012CBC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CBD4;
    }
}

loc_8012CBC8:
{
    r0 = MemoryInline::FlatRead8((r26 + 483));
}

loc_8012CBD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012CBF4;
    }
}

loc_8012CBD4:
{
    r0 = MemoryInline::FlatRead8((r26 + 485));
}

loc_8012CBDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_8012CBF4;
    }
}

loc_8012CBE0:
{
    r0 = MemoryInline::FlatRead16((r26 + 2326));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8012CBE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8012CBF4;
    }
}

loc_8012CBEC:
{
    r29 = 1;
    goto loc_8012CC08;
}

loc_8012CBF4:
{
    r27 = 0;
    goto loc_8012CC08;
}

loc_8012CBFC:
{
    r0 = MemoryInline::FlatRead8((r26 + 911));
    r0 = (r0 & r3);
    r27 = (r0 & 255);
}

loc_8012CC08:
{
    r4 = (r27 & 255);
}

loc_8012CC10:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012CC3C;
    }
}

loc_8012CC14:
{
    r3 = r26;
    r5 = r29;
    ctx->lr = 0x8012CC20u;
    if constexpr (KnownRegArgsCpuCall<0x8012C758u>(&func_8012C758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012C758_4393 = func_8012C758_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C758_4393);
        r4 = static_cast<uint32_t>(regargs_result_8012C758_4393 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012C758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_8012CC24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CC3C;
    }
}

loc_8012CC28:
{
}

loc_8012CC2C:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8012CE40;
    }
}

loc_8012CC30:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1086), static_cast<uint8_t>(r0));
    goto loc_8012CE40;
}

loc_8012CC3C:
{
    r0 = MemoryInline::FlatRead8((r26 + 1085));
}

loc_8012CC44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012CCB4;
    }
}

loc_8012CC48:
{
    r4 = MemoryInline::FlatRead8((r26 + 911));
}

loc_8012CC50:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012CC90;
    }
}

loc_8012CC54:
{
    r0 = MemoryInline::FlatRead32((r26 + 456));
    r0 = (r0 & 1);
}

loc_8012CC60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012CC78;
    }
}

loc_8012CC64:
{
    r3 = r26;
    ctx->lr = 0x8012CC6Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012C8D4u>(&func_8012C8D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012C8D4_4B9C = func_8012C8D4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C8D4_4B9C);
        r4 = static_cast<uint32_t>(regargs_result_8012C8D4_4B9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012C8D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_8012CC70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CCB4;
    }
}

loc_8012CC74:
{
    goto loc_8012CE40;
}

loc_8012CC78:
{
    r3 = r26;
    r5 = 0;
    ctx->lr = 0x8012CC84u;
    if constexpr (KnownRegArgsCpuCall<0x8012C758u>(&func_8012C758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012C758_506B = func_8012C758_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C758_506B);
        r4 = static_cast<uint32_t>(regargs_result_8012C758_506B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012C758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_8012CC88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CCB4;
    }
}

loc_8012CC8C:
{
    goto loc_8012CE40;
}

loc_8012CC90:
{
    r0 = MemoryInline::FlatRead8((r26 + 1082));
}

loc_8012CC98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012CCB4;
    }
}

loc_8012CC9C:
{
    r3 = r26;
    r4 = 255;
    r5 = 0;
    ctx->lr = 0x8012CCACu;
    if constexpr (KnownRegArgsCpuCall<0x8012C758u>(&func_8012C758)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012C758_560D = func_8012C758_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012C758_560D);
        r4 = static_cast<uint32_t>(regargs_result_8012C758_560D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012C758u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
    }
}

loc_8012CCB0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CCB4:
{
    r0 = MemoryInline::FlatRead8((r26 + 1085));
}

loc_8012CCBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012CD3C;
    }
}

loc_8012CCC0:
{
    r0 = MemoryInline::FlatRead8((r26 + 2396));
}

loc_8012CCC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_8012CD3C;
    }
}

loc_8012CCCC:
{
    r4 = (r31 & 255);
}

loc_8012CCD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012CD3C;
    }
}

loc_8012CCD8:
{
    r5 = 0;
    r3 = 1;
    r0 = 4;
    ctr = r0;
}

loc_8012CCE8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r5));
    r0 = (r4 & r0);
}

loc_8012CCF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012CD04;
    }
}

loc_8012CCF8:
{
    r0 = (r5 & 255);
    MemoryInline::FlatWrite8((r26 + 1944), static_cast<uint8_t>(r0));
    goto loc_8012CD0C;
}

loc_8012CD04:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012CCE8;
    }
}

loc_8012CD0C:
{
    r3 = r26;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012B95Cu) && KnownTranslatedCpuCall<0x8012B95Cu>::kAvailable && !KnownTranslatedCpuCall<0x8012B95Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012B95Cu>()) {
        const auto state_free_result_8012B95C_5F5C = func_8012B95C_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_8012B95C_5F5C);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012B95Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r26;
    r4 = 3;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl5_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl5_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8013A8FC;
    }
}

loc_inl5_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl5_cont_8013A8E8;
}

loc_inl5_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_inl5_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8012CD24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CD3C;
    }
}

loc_8012CD28:
{
    r3 = r26;
    r4 = 3;
    r5 = 0;
    ctx->lr = 0x8012CD38u;
    if constexpr (KnownRegArgsCpuCall<0x8012CE58u>(&func_8012CE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CE58_66AA = func_8012CE58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012CE58_66AA);
        r4 = static_cast<uint32_t>(regargs_result_8012CE58_66AA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CE58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8012CE40;
}

loc_8012CD3C:
{
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8013A964u>(&func_8013A964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8013A964_69F0 = func_8013A964_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013A964_69F0);
        r4 = static_cast<uint32_t>(regargs_result_8013A964_69F0 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A964u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    r0 = (r3 + -6);
}

loc_8012CD50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CD54:
{
    r0 = (r3 + -11);
}

loc_8012CD5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8012CD64;
    }
}

loc_8012CD60:
{
    goto loc_8012CE40;
}

loc_8012CD64:
{
    r3 = r26;
    r4 = 4;
    // inline leaf 0x8012CF68 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x8012CF68
}

loc_8012CD74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CDAC;
    }
}

loc_8012CD78:
{
    r3 = r26;
    r4 = 6;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl7_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl7_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl7_0x8013A8FC;
    }
}

loc_inl7_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl7_cont_8013A8E8;
}

loc_inl7_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
}

loc_inl7_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8012CD88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CDAC;
    }
}

loc_8012CD8C:
{
    r3 = r26;
    r4 = 6;
    r5 = 0;
    ctx->lr = 0x8012CD9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012CE58u>(&func_8012CE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CE58_7488 = func_8012CE58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012CE58_7488);
        r4 = static_cast<uint32_t>(regargs_result_8012CE58_7488 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CE58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r26;
    r4 = 1;
    ctx->lr = 0x8012CDA8u;
    if constexpr (KnownRegArgsCpuCall<0x80130A74u>(&func_80130A74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80130A74_77C8 = func_80130A74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80130A74_77C8);
        r4 = static_cast<uint32_t>(regargs_result_80130A74_77C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80130A74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8012CE40;
}

loc_8012CDAC:
{
    r3 = r26;
    r4 = 8;
    // inline leaf 0x8012CF68 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x8012CF68
}

loc_8012CDBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CDF4;
    }
}

loc_8012CDC0:
{
    r3 = r26;
    r4 = 11;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl9_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl9_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x8013A8FC;
    }
}

loc_inl9_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl9_cont_8013A8E8;
}

loc_inl9_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_7 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_7);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_10 & 1);
}

loc_inl9_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8012CDD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CDF4;
    }
}

loc_8012CDD4:
{
    r3 = r26;
    r4 = 11;
    r5 = 0;
    ctx->lr = 0x8012CDE4u;
    if constexpr (KnownRegArgsCpuCall<0x8012CE58u>(&func_8012CE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CE58_8132 = func_8012CE58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012CE58_8132);
        r4 = static_cast<uint32_t>(regargs_result_8012CE58_8132 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CE58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r26;
    r4 = 8;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
    goto loc_8012CE40;
}

loc_8012CDF4:
{
}

loc_8012CDF8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(1))) {
        goto loc_8012CE40;
    }
}

loc_8012CDFC:
{
    r3 = r26;
    r4 = 7;
    // inline leaf 0x8013A8E8 (12 guest instruction(s))
}

loc_inl11_0x8013A8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 2388));
}

loc_inl11_0x8013A8F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl11_0x8013A8FC;
    }
}

loc_inl11_0x8013A8F4:
{
    r3 = 0;
    goto loc_inl11_cont_8013A8E8;
}

loc_inl11_0x8013A8FC:
{
    r0 = (r4 & 255);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_13 & 1);
}

loc_inl11_cont_8013A8E8:
{
    // end of inlined leaf 0x8013A8E8
}

loc_8012CE0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8012CE24;
    }
}

loc_8012CE10:
{
    r3 = r26;
    r4 = 7;
    r5 = MemoryInline::FlatRead8((r26 + 1945));
    ctx->lr = 0x8012CE20u;
    if constexpr (KnownRegArgsCpuCall<0x8012CE58u>(&func_8012CE58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012CE58_8A8D = func_8012CE58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012CE58_8A8D);
        r4 = static_cast<uint32_t>(regargs_result_8012CE58_8A8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012CE58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8012CE34;
}

loc_8012CE24:
{
    r3 = r26;
    ctx->lr = 0x8012CE2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_8E0A = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_8E0A);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_8E0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r26;
    // inline leaf 0x80133C18 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 503), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80133C18
}

loc_8012CE34:
{
    r3 = r26;
    r4 = 2;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
}

loc_8012CE40:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012CA10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012CA10_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012CA10 func_8012CA10 preserves=true fpr_mask=0x00000000

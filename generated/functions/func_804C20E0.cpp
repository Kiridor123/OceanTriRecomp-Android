#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C1DE0(CpuContext* ctx);
extern "C" uint64_t func_804C1DE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C2BD0(CpuContext* ctx);
extern "C" uint32_t func_804C2BD0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D25A0(CpuContext* ctx);
extern "C" uint32_t func_804D25A0_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2680(CpuContext* ctx);
extern "C" uint64_t func_804D2680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804C20E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    MKW_GUEST_ENTER(0x804C20E0u);
    goto loc_804C20E0;

loc_804C20E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r4 = 0x80750000u;
    r27 = r3;
    r3 = (r4 + -20384);
    ctx->lr = 0x804C2104u;
    if constexpr (KnownRegArgsCpuCall<0x804D25A0u>(&func_804D25A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        const auto regargs_result_804D25A0_995 = func_804D25A0_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804D25A0_995;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D25A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = 0x80750000u;
    r30 = 0;
    r28 = (r31 + -20400);
    goto loc_804C21EC;
}

loc_804C2114:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C211C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C21EC;
    }
}

loc_804C2120:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C2128:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C21EC;
    }
}

loc_804C212C:
{
    r31 = 0;
    goto loc_804C21BC;
}

loc_804C2134:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C213C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C21BC;
    }
}

loc_804C2140:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C2148:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C21BC;
    }
}

loc_804C214C:
{
    r29 = 0;
    goto loc_804C218C;
}

loc_804C2154:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C215C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C218C;
    }
}

loc_804C2160:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C2168:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C218C;
    }
}

loc_804C216C:
{
    r4 = r27;
    r3 = (r3 + 12);
    ctx->lr = 0x804C2178u;
    if constexpr (KnownRegArgsCpuCall<0x804C1DE0u>(&func_804C1DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804C1DE0_1529 = func_804C1DE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C1DE0_1529);
        r4 = static_cast<uint32_t>(regargs_result_804C1DE0_1529 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804C1DE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804C217C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2184;
    }
}

loc_804C2180:
{
    goto loc_804C21A8;
}

loc_804C2184:
{
    r3 = r29;
    goto loc_804C21A8;
}

loc_804C218C:
{
    r4 = r29;
    r3 = (r31 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl1_0x804C2C40:
{
}

loc_inl1_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x804C2C50;
    }
}

loc_inl1_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_804C2C40;
}

loc_inl1_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C219C:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C2154;
    }
}

loc_804C21A4:
{
    r3 = 0;
}

loc_804C21A8:
{
}

loc_804C21AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C21B4;
    }
}

loc_804C21B0:
{
    goto loc_804C21D8;
}

loc_804C21B4:
{
    r3 = r31;
    goto loc_804C21D8;
}

loc_804C21BC:
{
    r4 = r31;
    r3 = (r30 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl2_0x804C2C40:
{
}

loc_inl2_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x804C2C50;
    }
}

loc_inl2_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl2_cont_804C2C40;
}

loc_inl2_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C21CC:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C2134;
    }
}

loc_804C21D4:
{
    r3 = 0;
}

loc_804C21D8:
{
}

loc_804C21DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C21E4;
    }
}

loc_804C21E0:
{
    goto loc_804C2208;
}

loc_804C21E4:
{
    r3 = r30;
    goto loc_804C2208;
}

loc_804C21EC:
{
    r4 = r30;
    r3 = (r31 + -20400);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl3_0x804C2C40:
{
}

loc_inl3_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x804C2C50;
    }
}

loc_inl3_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_804C2C40;
}

loc_inl3_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C21FC:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C2114;
    }
}

loc_804C2204:
{
    r3 = 0;
}

loc_804C2208:
{
}

loc_804C220C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2214;
    }
}

loc_804C2210:
{
    r28 = (r3 + 12);
}

loc_804C2214:
{
    r3 = r28;
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x804C2BD0u>(&func_804C2BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804C2BD0_2505 = func_804C2BD0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804C2BD0_2505;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804C2BD0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0x80750000u;
    r3 = (r3 + -20384);
    ctx->lr = 0x804C222Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D2680u>(&func_804D2680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_804D2680_281B = func_804D2680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2680_281B);
        r4 = static_cast<uint32_t>(regargs_result_804D2680_281B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D2680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = 0;
    MemoryInline::FlatWrite32(r27, r0);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C20E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C20E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C20E0 func_804C20E0 preserves=true fpr_mask=0x00000000

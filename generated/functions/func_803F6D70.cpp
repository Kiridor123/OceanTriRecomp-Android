#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804012CC(CpuContext* ctx);
extern "C" uint64_t func_804012CC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803F6D70_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803F6D70;

loc_803F6D70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 28));
}

loc_803F6D90:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803F6DC0;
    }
}

loc_803F6D94:
{
}

loc_803F6D98:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_803F6E0C;
    }
}

loc_803F6D9C:
{
}

loc_803F6DA0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_803F6E84;
    }
}

loc_803F6DA4:
{
}

loc_803F6DA8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_803F6EF8;
    }
}

loc_803F6DAC:
{
}

loc_803F6DB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_803F6F30;
    }
}

loc_803F6DB4:
{
}

loc_803F6DB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_803F6F4C;
    }
}

loc_803F6DBC:
{
    goto loc_803F6F60;
}

loc_803F6DC0:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r5 = MemoryInline::FlatRead32((r3 + 44));
}

loc_803F6DD8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_803F6DE8;
    }
}

loc_803F6DDC:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6DE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 60));
}

loc_803F6DF0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803F6E00;
    }
}

loc_803F6DF4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6E00:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6E0C:
{
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r4 + 5);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r4 = (r0 - r4);
    r5 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_803F6E30:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r5))) {
        goto loc_803F6E38;
    }
}

loc_803F6E34:
{
    r5 = r4;
}

loc_803F6E38:
{
    r30 = (r5 - r0);
}

loc_803F6E40:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(8192))) {
        goto loc_803F6E48;
    }
}

loc_803F6E44:
{
    r30 = 8192;
}

loc_803F6E48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = MemoryInline::FlatRead8((r31 + 40));
    r5 = MemoryInline::FlatRead32((r31 + 48));
    r6 = MemoryInline::FlatRead32((r31 + 60));
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r6 = (r6 + r0);
    r7 = r30;
    ctx->lr = 0x803F6E70u;
    if constexpr (KnownRegArgsCpuCall<0x804012CCu>(&func_804012CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804012CC_1213 = func_804012CC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804012CC_1213);
        r4 = static_cast<uint32_t>(regargs_result_804012CC_1213 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804012CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryInline::FlatWrite32((r31 + 20), r3);
    r3 = MemoryInline::FlatRead8((r31 + 28));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6E84:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r0 = (r5 & 1);
}

loc_803F6E90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F6EB4;
    }
}

loc_803F6E94:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 17);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl1_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_803F656C;
}

loc_inl1_return:
{
}

loc_inl1_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6EB4:
{
    r0 = (r5 & 2);
}

loc_803F6EBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F6EE0;
    }
}

loc_803F6EC0:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 18);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl2_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl2_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl2_cont_803F656C;
}

loc_inl2_return:
{
}

loc_inl2_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6EE0:
{
    r0 = (r5 & 256);
}

loc_803F6EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F6F60;
    }
}

loc_803F6EEC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6EF8:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 44));
}

loc_803F6F04:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_803F6F14;
    }
}

loc_803F6F08:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_803F6F10:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_803F6F24;
    }
}

loc_803F6F14:
{
    r4 = MemoryInline::FlatRead8((r3 + 28));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6F24:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    goto loc_803F6F60;
}

loc_803F6F30:
{
    r0 = 100;
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_803F6F64;
}

loc_803F6F4C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r3 = -1;
    goto loc_803F6F64;
}

loc_803F6F60:
{
    r3 = 1;
}

loc_803F6F64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F6D70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F6D70_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803F6D70 func_803F6D70 preserves=true fpr_mask=0x00000000

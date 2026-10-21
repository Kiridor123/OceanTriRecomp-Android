#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A4DE0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804A4DE0u);
    goto loc_804A4DE0;

loc_804A4DE0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_804A4DEC:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r6;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804A4EBC;
    }
}

loc_804A4E14:
{
}

loc_804A4E18:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_804A4E4C;
    }
}

loc_804A4E1C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8(r5);
}

loc_804A4E2C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4E44;
    }
}

loc_804A4E30:
{
    r3 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_804A4E3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804A4E44;
    }
}

loc_804A4E40:
{
    r6 = 1;
}

loc_804A4E44:
{
    r3 = r6;
    goto loc_804A5034;
}

loc_804A4E4C:
{
}

loc_804A4E50:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_804A4EA0;
    }
}

loc_804A4E54:
{
    r4 = MemoryInline::FlatRead8(r3);
    r6 = 0;
    r0 = MemoryInline::FlatRead8(r5);
}

loc_804A4E64:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4EB4;
    }
}

loc_804A4E68:
{
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_804A4E74:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4EB4;
    }
}

loc_804A4E78:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_804A4E84:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4EB4;
    }
}

loc_804A4E88:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_804A4E94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804A4EB4;
    }
}

loc_804A4E98:
{
    r6 = 1;
    goto loc_804A4EB4;
}

loc_804A4EA0:
{
    r4 = r30;
    r5 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_E0F = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_E0F);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_E0F >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r6 = (r6_rot_1 & 255);
}

loc_804A4EB4:
{
    r3 = r6;
    goto loc_804A5034;
}

loc_804A4EBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804A4F7C;
    }
}

loc_804A4EC0:
{
}

loc_804A4EC4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(4))) {
        goto loc_804A4F10;
    }
}

loc_804A4EC8:
{
    r0 = MemoryInline::FlatRead8(r3);
    r6 = 0;
}

loc_804A4ED4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A4F08;
    }
}

loc_804A4ED8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_804A4EE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A4F08;
    }
}

loc_804A4EE4:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8(r5);
}

loc_804A4EF0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4F08;
    }
}

loc_804A4EF4:
{
    r3 = MemoryInline::FlatRead8((r3 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_804A4F00:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804A4F08;
    }
}

loc_804A4F04:
{
    r6 = 1;
}

loc_804A4F08:
{
    r3 = r6;
    goto loc_804A5034;
}

loc_804A4F10:
{
    r4 = r28;
    r3 = (r1 + 24);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80570000u;
    r3 = (r1 + 8);
    r4 = (r4 + 16736);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804A4F38:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(4))) {
        goto loc_804A4F50;
    }
}

loc_804A4F3C:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804A4F60;
}

loc_804A4F50:
{
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 10);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804A4F60:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_1B09 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_1B09);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_1B09 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 255);
    goto loc_804A5034;
}

loc_804A4F7C:
{
}

loc_804A4F80:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(4))) {
        goto loc_804A4FCC;
    }
}

loc_804A4F84:
{
    r0 = MemoryInline::FlatRead8(r5);
    r6 = 0;
}

loc_804A4F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A4FC4;
    }
}

loc_804A4F94:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_804A4F9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A4FC4;
    }
}

loc_804A4FA0:
{
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804A4FAC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4FC4;
    }
}

loc_804A4FB0:
{
    r4 = MemoryInline::FlatRead8((r5 + 3));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_804A4FBC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_804A4FC4;
    }
}

loc_804A4FC0:
{
    r6 = 1;
}

loc_804A4FC4:
{
    r3 = r6;
    goto loc_804A5034;
}

loc_804A4FCC:
{
    r4 = r30;
    r3 = (r1 + 8);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80570000u;
    r3 = (r1 + 24);
    r4 = (r4 + 16736);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804A4FF4:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(4))) {
        goto loc_804A500C;
    }
}

loc_804A4FF8:
{
    r4 = r28;
    r5 = r29;
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_804A501C;
}

loc_804A500C:
{
    r4 = r28;
    r5 = r29;
    r3 = (r1 + 26);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804A501C:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = 16;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045BD3C_278E = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_278E);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_278E >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 255);
}

loc_804A5034:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A4DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A4DE0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A4DE0 func_804A4DE0 preserves=true fpr_mask=0x00000000

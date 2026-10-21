#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467BF0(CpuContext* ctx);
extern "C" uint64_t func_80467BF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80464BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x80464BE0u);
    goto loc_80464BE0;

loc_80464BE0:
{
    MemoryAlias::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 2146435072;
    MemoryAlias::FlatWriteRamFloat64((r1 + 16), f2.d);
    r8 = MemoryAlias::FlatRead32((r1 + 20));
    MemoryAlias::FlatWriteRam32((r1 + 52), r0);
    r0 = (0 - r8);
    r4 = MemoryAlias::FlatRead32((r1 + 16));
    r0 = (r8 | r0);
    MemoryAlias::FlatWriteRamFloat64((r1 + 8), f1.d);
    r6 = (r4 & 2147483647);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r5 = MemoryAlias::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
}

loc_80464C20:
{
    r9 = MemoryAlias::FlatRead32((r1 + 12));
    r7 = (r5 & 2147483647);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_80464C44;
    }
}

loc_80464C2C:
{
    r0 = (0 - r9);
    r0 = (r9 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r7 | r0);
}

loc_80464C40:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_80464C4C;
    }
}

loc_80464C44:
{
    f1.d = (f2.d + f1.d);
    goto loc_80464E24;
}

loc_80464C4C:
{
    r0 = (r4 + -1072693248);
    r0 = (r0 | r8);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464C60;
    }
}

loc_80464C58:
{
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80467BF0_BD5 = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_BD5);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_BD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80464E24;
}

loc_80464C60:
{
    r0 = (r7 | r9);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & 2);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r31_mrot_1 = (r31_rot_2 & 1);
    r31_mdest_1 = (r31 & -2);
    r31 = (r31_mdest_1 | r31_mrot_1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464CA0;
    }
}

loc_80464C70:
{
}

loc_80464C74:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(1))) {
        goto loc_80464E24;
    }
}

loc_80464C78:
{
}

loc_80464C7C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80464C90;
    }
}

loc_80464C80:
{
}

loc_80464C84:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_80464C98;
    }
}

loc_80464C88:
{
    goto loc_80464CA0;
}

loc_80464C90:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3936));
    goto loc_80464E24;
}

loc_80464C98:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3928));
    goto loc_80464E24;
}

loc_80464CA0:
{
    r0 = (r6 | r8);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80464CC0;
    }
}

loc_80464CA8:
{
}

loc_80464CAC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80464CB8;
    }
}

loc_80464CB0:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3920));
    goto loc_80464E24;
}

loc_80464CB8:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3912));
    goto loc_80464E24;
}

loc_80464CC0:
{
    r0 = (r6 + -2146435072);
}

loc_80464CC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80464D60;
    }
}

loc_80464CCC:
{
    r0 = (r7 + -2146435072);
}

loc_80464CD4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80464D1C;
    }
}

loc_80464CD8:
{
}

loc_80464CDC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80464CFC;
    }
}

loc_80464CE0:
{
}

loc_80464CE4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80464D04;
    }
}

loc_80464CE8:
{
}

loc_80464CEC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80464D0C;
    }
}

loc_80464CF0:
{
}

loc_80464CF4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_80464D14;
    }
}

loc_80464CF8:
{
    goto loc_80464D60;
}

loc_80464CFC:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3904));
    goto loc_80464E24;
}

loc_80464D04:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3896));
    goto loc_80464E24;
}

loc_80464D0C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3888));
    goto loc_80464E24;
}

loc_80464D14:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3880));
    goto loc_80464E24;
}

loc_80464D1C:
{
}

loc_80464D20:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80464D40;
    }
}

loc_80464D24:
{
}

loc_80464D28:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80464D48;
    }
}

loc_80464D2C:
{
}

loc_80464D30:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80464D50;
    }
}

loc_80464D34:
{
}

loc_80464D38:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_80464D58;
    }
}

loc_80464D3C:
{
    goto loc_80464D60;
}

loc_80464D40:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3872));
    goto loc_80464E24;
}

loc_80464D48:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3864));
    goto loc_80464E24;
}

loc_80464D50:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3936));
    goto loc_80464E24;
}

loc_80464D58:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3928));
    goto loc_80464E24;
}

loc_80464D60:
{
    r0 = (r7 + -2146435072);
}

loc_80464D68:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80464D84;
    }
}

loc_80464D6C:
{
}

loc_80464D70:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80464D7C;
    }
}

loc_80464D74:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3920));
    goto loc_80464E24;
}

loc_80464D7C:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3912));
    goto loc_80464E24;
}

loc_80464D84:
{
    r0 = (r7 - r6);
    r0 = (static_cast<int32_t>(r0) >> 20);
}

loc_80464D90:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_80464DA0;
    }
}

loc_80464D94:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3912));
    MemoryAlias::FlatWriteRamFloat64((r1 + 24), f1.d);
    goto loc_80464DCC;
}

loc_80464DA0:
{
}

loc_80464DA4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80464DBC;
    }
}

loc_80464DA8:
{
}

loc_80464DAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(-60))) {
        goto loc_80464DBC;
    }
}

loc_80464DB0:
{
    f1.d = MemoryAlias::FlatReadFloat64((r2 + -3872));
    MemoryAlias::FlatWriteRamFloat64((r1 + 24), f1.d);
    goto loc_80464DCC;
}

loc_80464DBC:
{
    f0.d = (f1.d / f2.d);
    f1.d = std::fabs(f0.d);
    if constexpr (KnownRegArgsCpuCall<0x80467BF0u>(&func_80467BF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_80467BF0_260B = func_80467BF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467BF0_260B);
        r4 = static_cast<uint32_t>(regargs_result_80467BF0_260B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x80467BF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    MemoryAlias::FlatWriteRamFloat64((r1 + 24), f1.d);
}

loc_80464DCC:
{
}

loc_80464DD0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80464E24;
    }
}

loc_80464DD4:
{
}

loc_80464DD8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_80464DEC;
    }
}

loc_80464DDC:
{
}

loc_80464DE0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_80464E00;
    }
}

loc_80464DE4:
{
    goto loc_80464E14;
}

loc_80464DEC:
{
    r0 = MemoryAlias::FlatRead32((r1 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryAlias::FlatWriteRam32((r1 + 24), r0);
    f1.d = MemoryAlias::FlatReadFloat64((r1 + 24));
    goto loc_80464E24;
}

loc_80464E00:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -3856));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3936));
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80464E24;
}

loc_80464E14:
{
    f2.d = MemoryAlias::FlatReadFloat64((r2 + -3856));
    f0.d = MemoryAlias::FlatReadFloat64((r2 + -3936));
    f1.d = (f1.d - f2.d);
    f1.d = (f1.d - f0.d);
}

loc_80464E24:
{
    r0 = MemoryAlias::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80464BE0 func_80464BE0 preserves=true fpr_mask=0x00000000

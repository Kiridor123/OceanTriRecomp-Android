#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801072B4(CpuContext* ctx);
extern "C" uint64_t func_801072B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80260ABC(CpuContext* ctx);
extern "C" uint64_t func_80260ABC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802672D4(CpuContext* ctx);
extern "C" uint64_t func_802672D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80272E18(CpuContext* ctx);
extern "C" uint64_t func_80272E18_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027492C(CpuContext* ctx);
extern "C" uint64_t func_8027492C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276514(CpuContext* ctx);
extern "C" uint64_t func_80276514_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80276818(CpuContext* ctx);
extern "C" uint32_t func_80276818_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276880(CpuContext* ctx);
extern "C" uint32_t func_80276880_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802768CC(CpuContext* ctx);
extern "C" uint32_t func_802768CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80276E6C(CpuContext* ctx);
extern "C" uint64_t func_80276E6C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027BD44(CpuContext* ctx);
extern "C" uint64_t func_8027BD44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B05FC(CpuContext* ctx);
extern "C" uint64_t func_802B05FC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80331190(CpuContext* ctx);
extern "C" uint32_t func_80331190_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80260B9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r0_subfc_min_3 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80260B9C;

loc_80260B9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r4 = MemoryInline::FlatRead16((r3 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80260BE0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(1000))) {
        goto loc_80260BEC;
    }
}

loc_80260BE4:
{
    r0 = 1000;
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r0));
}

loc_80260BEC:
{
    r4 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80260BF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260C04;
    }
}

loc_80260BFC:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
}

loc_80260C04:
{
    r4 = MemoryInline::FlatRead16((r3 + 1408));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260C0C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260C18;
    }
}

loc_80260C10:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1408), static_cast<uint16_t>(r0));
}

loc_80260C18:
{
    r4 = MemoryInline::FlatRead8((r3 + 930));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80260C24:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260C34;
    }
}

loc_80260C28:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 930), static_cast<uint8_t>(r0));
    goto loc_80260C4C;
}

loc_80260C34:
{
    r4 = MemoryInline::FlatRead8((r3 + 931));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80260C40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260C4C;
    }
}

loc_80260C44:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 931), static_cast<uint8_t>(r0));
}

loc_80260C4C:
{
    r4 = MemoryInline::FlatRead8((r3 + 614));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_80260C58:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260C64;
    }
}

loc_80260C5C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 614), static_cast<uint8_t>(r0));
}

loc_80260C64:
{
    r4 = MemoryInline::FlatRead16((r3 + 918));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260C6C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260C78;
    }
}

loc_80260C70:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 918), static_cast<uint16_t>(r0));
}

loc_80260C78:
{
    r4 = MemoryInline::FlatRead16((r3 + 1114));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260C80:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260C8C;
    }
}

loc_80260C84:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1114), static_cast<uint16_t>(r0));
}

loc_80260C8C:
{
    r4 = MemoryInline::FlatRead16((r3 + 1116));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260C94:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260CA0;
    }
}

loc_80260C98:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1116), static_cast<uint16_t>(r0));
}

loc_80260CA0:
{
    r4 = MemoryInline::FlatRead16((r3 + 612));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260CA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(30000))) {
        goto loc_80260CE4;
    }
}

loc_80260CAC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 852));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite16((r3 + 612), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80260CD8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(30000))) {
        goto loc_80260CE4;
    }
}

loc_80260CDC:
{
    r0 = 30000;
    MemoryInline::FlatWrite16((r3 + 612), static_cast<uint16_t>(r0));
}

loc_80260CE4:
{
    r4 = MemoryInline::FlatRead16((r3 + 1634));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260CEC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260CF8;
    }
}

loc_80260CF0:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1634), static_cast<uint16_t>(r0));
}

loc_80260CF8:
{
    r4 = MemoryInline::FlatRead16((r3 + 1632));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260D00:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260D0C;
    }
}

loc_80260D04:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1632), static_cast<uint16_t>(r0));
}

loc_80260D0C:
{
    r4 = MemoryInline::FlatRead16((r3 + 1090));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80260D14:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80260D20;
    }
}

loc_80260D18:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_80260D20:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80260D2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80260D64;
    }
}

loc_80260D30:
{
    r0 = MemoryInline::FlatRead8((r31 + 1412));
}

loc_80260D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802617BC;
    }
}

loc_80260D3C:
{
    r3 = MemoryInline::FlatRead16((r31 + 598));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 598), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80260D50:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802617BC;
    }
}

loc_80260D54:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    goto loc_802617BC;
}

loc_80260D64:
{
    r3 = MemoryInline::FlatRead16((r31 + 1128));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260D6C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260D78;
    }
}

loc_80260D70:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1128), static_cast<uint16_t>(r0));
}

loc_80260D78:
{
    r3 = MemoryInline::FlatRead16((r31 + 18));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260D80:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260D8C;
    }
}

loc_80260D84:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 18), static_cast<uint16_t>(r0));
}

loc_80260D8C:
{
    r3 = MemoryInline::FlatRead8((r31 + 787));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80260D98:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260DA4;
    }
}

loc_80260D9C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 787), static_cast<uint8_t>(r0));
}

loc_80260DA4:
{
    r3 = MemoryInline::FlatRead8((r31 + 788));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80260DB0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260DBC;
    }
}

loc_80260DB4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 788), static_cast<uint8_t>(r0));
}

loc_80260DBC:
{
    r3 = MemoryInline::FlatRead8((r31 + 1624));
}

loc_80260DC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260DD0;
    }
}

loc_80260DC8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 1624), static_cast<uint8_t>(r0));
}

loc_80260DD0:
{
    r3 = MemoryInline::FlatRead8((r31 + 874));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80260DDC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80260DE8;
    }
}

loc_80260DE0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 874), static_cast<uint8_t>(r0));
}

loc_80260DE8:
{
    r3 = MemoryInline::FlatRead16((r31 + 850));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260DF0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260DFC;
    }
}

loc_80260DF4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 850), static_cast<uint16_t>(r0));
}

loc_80260DFC:
{
    r3 = MemoryInline::FlatRead16((r31 + 1434));
}

loc_80260E04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260E10;
    }
}

loc_80260E08:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1434), static_cast<uint16_t>(r0));
}

loc_80260E10:
{
    r3 = MemoryInline::FlatRead8((r31 + 1640));
}

loc_80260E18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260E24;
    }
}

loc_80260E1C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 1640), static_cast<uint8_t>(r0));
}

loc_80260E24:
{
    r3 = MemoryInline::FlatRead16((r31 + 1642));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260E2C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260E38;
    }
}

loc_80260E30:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1642), static_cast<uint16_t>(r0));
}

loc_80260E38:
{
    r3 = MemoryInline::FlatRead16((r31 + 1136));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260E40:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260E4C;
    }
}

loc_80260E44:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1136), static_cast<uint16_t>(r0));
}

loc_80260E4C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1120));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260E54:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80260E60;
    }
}

loc_80260E58:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1120), static_cast<uint16_t>(r0));
}

loc_80260E60:
{
    r3 = r31;
    ctx->lr = 0x80260E68u;
    if constexpr (KnownRegArgsCpuCall<0x80331190u>(&func_80331190)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80331190_3C4D = func_80331190_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80331190_3C4D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80331190u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80260E6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260E9C;
    }
}

loc_80260E70:
{
    r3 = MemoryInline::FlatRead16((r31 + 878));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 878), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80260E84:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80260E9C;
    }
}

loc_80260E88:
{
    r0 = 150;
    MemoryInline::FlatWrite16((r31 + 878), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = 5;
    ctx->lr = 0x80260E9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8027D608u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80260E9C:
{
    r4 = MemoryInline::FlatRead8((r31 + 1476));
    r3 = (r4 & 15);
}

loc_80260EA8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260ED0;
    }
}

loc_80260EAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_80260EB4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80260ED0;
    }
}

loc_80260EB8:
{
    r0 = (r3 + -1);
    r3 = (r0 & 255);
    r0 = (r4 & 240);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite8((r31 + 1476), static_cast<uint8_t>(r0));
    goto loc_80260F60;
}

loc_80260ED0:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_80260ED8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80260F08;
    }
}

loc_80260EDC:
{
    r3 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r3 + -49);
}

loc_80260EE8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80260F60;
    }
}

loc_80260EEC:
{
    r0 = (r3 + -97);
}

loc_80260EF4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80260F60;
    }
}

loc_80260EF8:
{
}

loc_80260EFC:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(44))) {
        goto loc_80260F08;
    }
}

loc_80260F00:
{
}

loc_80260F04:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(45))) {
        goto loc_80260F60;
    }
}

loc_80260F08:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BD44_4A6E = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_4A6E);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_4A6E >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = (r3 & 65535);
}

loc_80260F1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80260F60;
    }
}

loc_80260F20:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80260F2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260F54;
    }
}

loc_80260F30:
{
    r3 = 1;
    ctx->lr = 0x80260F38u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_5049 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_5049;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80260F3C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80260F54;
    }
}

loc_80260F40:
{
    r3 = r31;
    r4 = 2;
    r5 = 18;
    r6 = (r30 & 65535);
    ctx->lr = 0x80260F54u;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802672D4_5467 = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_5467);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_5467 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80260F54:
{
    r3 = r31;
    r4 = (r30 & 65535);
    ctx->lr = 0x80260F60u;
    if constexpr (KnownRegArgsCpuCall<0x80272E18u>(&func_80272E18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80272E18_5B5F = func_80272E18_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272E18_5B5F);
        r4 = static_cast<uint32_t>(regargs_result_80272E18_5B5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80272E18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80260F60:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x802785DC (6 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 904));
    r0 = (r4 & 65535);
    r0 = (r3 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802785DC
}

loc_80260F70:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80260F84;
    }
}

loc_80260F74:
{
    r3 = r31;
    ctx->lr = 0x80260F7Cu;
    if constexpr (KnownRegArgsCpuCall<0x80276880u>(&func_80276880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276880_6185 = func_80276880_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80276880_6185;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80260F80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260FE8;
    }
}

loc_80260F84:
{
    r3 = r31;
    r4 = 12;
    // inline leaf 0x80279130 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 988));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279130
}

loc_80260F94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260FDC;
    }
}

loc_80260F98:
{
    r3 = r31;
    ctx->lr = 0x80260FA0u;
    if constexpr (KnownRegArgsCpuCall<0x80276880u>(&func_80276880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276880_66D9 = func_80276880_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80276880_66D9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80260FA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260FCC;
    }
}

loc_80260FA8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1042));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260FB0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_80260FBC;
    }
}

loc_80260FB4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1042), static_cast<uint16_t>(r0));
}

loc_80260FBC:
{
    r3 = r31;
    r4 = 4;
    ctx->lr = 0x80260FC8u;
    if constexpr (KnownRegArgsCpuCall<0x802768CCu>(&func_802768CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802768CC_6BC7 = func_802768CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802768CC_6BC7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802768CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_80260FE8;
}

loc_80260FCC:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80260FD8u;
    if constexpr (KnownRegArgsCpuCall<0x802768CCu>(&func_802768CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802768CC_6EF3 = func_802768CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802768CC_6EF3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802768CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
    goto loc_80260FE8;
}

loc_80260FDC:
{
    r3 = r31;
    r4 = 4;
    ctx->lr = 0x80260FE8u;
    if constexpr (KnownRegArgsCpuCall<0x802768CCu>(&func_802768CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802768CC_721F = func_802768CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_802768CC_721F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802768CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_80260FE8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1042));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80260FF0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026102C;
    }
}

loc_80260FF4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1042), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026102C;
    }
}

loc_80261008:
{
    r3 = 1;
    ctx->lr = 0x80261010u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_7773 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_7773;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80261014:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8026102C;
    }
}

loc_80261018:
{
    r3 = r31;
    r4 = 1;
    r5 = 24;
    r6 = 0;
    ctx->lr = 0x8026102Cu;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802672D4_7B85 = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_7B85);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_7B85 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8026102C:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_80261034:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80261124;
    }
}

loc_80261038:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_80261040:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_80261124;
    }
}

loc_80261044:
{
    r3 = r31;
    // inline leaf 0x80278878 (18 guest instruction(s))
}

loc_inl2_0x80278878:
{
    r0 = MemoryInline::FlatRead8((r3 + 116));
}

loc_inl2_0x80278880:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x802788B8;
    }
}

loc_inl2_0x80278884:
{
    f3.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14804));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl2_0x80278898:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x802788B8;
    }
}

loc_inl2_0x802788A0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_inl2_0x802788A8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_0x802788B8;
    }
}

loc_inl2_0x802788B0:
{
    r3 = 1;
    goto loc_inl2_cont_80278878;
}

loc_inl2_0x802788B8:
{
    r3 = 0;
}

loc_inl2_cont_80278878:
{
    // end of inlined leaf 0x80278878
}

loc_80261050:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802610E0;
    }
}

loc_80261054:
{
    r3 = MemoryInline::FlatRead16((r31 + 898));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026105C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(90))) {
        goto loc_802610D8;
    }
}

loc_80261060:
{
    r30 = 128;
    r3 = r31;
    r4 = 193;
    ctx->lr = 0x80261070u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261074:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261080;
    }
}

loc_80261078:
{
    r30 = 256;
    goto loc_80261098;
}

loc_80261080:
{
    r3 = r31;
    r4 = 194;
    ctx->lr = 0x8026108Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261090:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261098;
    }
}

loc_80261094:
{
    r30 = 103;
}

loc_80261098:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r30));
    r0 = (r0 * r30);
    r0 = (r3 - r0);
}

loc_802610AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802610E0;
    }
}

loc_802610B0:
{
    r3 = r31;
    r4 = -1;
    if constexpr (KnownRegArgsCpuCall<0x80276818u>(&func_80276818)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276818_8F93 = func_80276818_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80276818_8F93;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276818u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead16((r31 + 894));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802610C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(25))) {
        goto loc_802610E0;
    }
}

loc_802610C8:
{
    r3 = r31;
    r4 = 3;
    ctx->lr = 0x802610D4u;
    if constexpr (KnownRegArgsCpuCall<0x801072B4u>(&func_801072B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_801072B4_937D = func_801072B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801072B4_937D);
        r4 = static_cast<uint32_t>(regargs_result_801072B4_937D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x801072B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    goto loc_802610E0;
}

loc_802610D8:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 898), static_cast<uint16_t>(r0));
}

loc_802610E0:
{
    r3 = r31;
    r4 = 0;
    // inline leaf 0x80276864 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 894));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r4 = (static_cast<int32_t>(r0) >> 31);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    // end of inlined leaf 0x80276864
}

loc_802610F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026113C;
    }
}

loc_802610F4:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 | 1048576);
    MemoryInline::FlatWrite32((r31 + 988), r0);
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 & 15);
}

loc_8026110C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026113C;
    }
}

loc_80261110:
{
    r3 = r31;
    r4 = -1;
    r5 = 0;
    ctx->lr = 0x80261120u;
    if constexpr (KnownRegArgsCpuCall<0x80276514u>(&func_80276514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276514_9DB3 = func_80276514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80276514_9DB3);
        r4 = static_cast<uint32_t>(regargs_result_80276514_9DB3 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276514u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_8026113C;
}

loc_80261124:
{
    r0 = MemoryInline::FlatRead8((r31 + 10));
}

loc_8026112C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_8026113C;
    }
}

loc_80261130:
{
    r3 = r31;
    r4 = 150;
    if constexpr (KnownRegArgsCpuCall<0x80276818u>(&func_80276818)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276818_A561 = func_80276818_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80276818_A561;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276818u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8026113C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1098));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261144:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261164;
    }
}

loc_80261148:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1098), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261158:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261164;
    }
}

loc_8026115C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1097), static_cast<uint8_t>(r0));
}

loc_80261164:
{
    r3 = MemoryInline::FlatRead16((r31 + 1102));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026116C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026118C;
    }
}

loc_80261170:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1102), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8026118C;
    }
}

loc_80261184:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 1101), static_cast<uint8_t>(r0));
}

loc_8026118C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1030));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261194:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802611B8;
    }
}

loc_80261198:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1030), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802611A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802611B8;
    }
}

loc_802611AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -13);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_802611B8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1032));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802611C0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802611E4;
    }
}

loc_802611C4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1032), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802611D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802611E4;
    }
}

loc_802611D8:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -49);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_802611E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 1034));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802611EC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261210;
    }
}

loc_802611F0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1034), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261200:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80261210;
    }
}

loc_80261204:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -193);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_80261210:
{
    r3 = MemoryInline::FlatRead16((r31 + 1036));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261218:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026123C;
    }
}

loc_8026121C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1036), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8026122C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8026123C;
    }
}

loc_80261230:
{
    r0 = MemoryInline::FlatRead32((r31 + 988));
    r0 = (r0 & -769);
    MemoryInline::FlatWrite32((r31 + 988), r0);
}

loc_8026123C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1048));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261244:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261250;
    }
}

loc_80261248:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1048), static_cast<uint16_t>(r0));
}

loc_80261250:
{
    r3 = MemoryInline::FlatRead16((r31 + 1054));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261258:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261264;
    }
}

loc_8026125C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1054), static_cast<uint16_t>(r0));
}

loc_80261264:
{
    r3 = MemoryInline::FlatRead16((r31 + 1108));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026126C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261290;
    }
}

loc_80261270:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1108), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261280:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80261290;
    }
}

loc_80261284:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1108), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1104), static_cast<uint8_t>(r0));
}

loc_80261290:
{
    r3 = MemoryInline::FlatRead16((r31 + 1110));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261298:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802612BC;
    }
}

loc_8026129C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1110), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802612AC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802612BC;
    }
}

loc_802612B0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1110), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1105), static_cast<uint8_t>(r0));
}

loc_802612BC:
{
    r3 = MemoryInline::FlatRead16((r31 + 1112));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802612C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802612E8;
    }
}

loc_802612C8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1112), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802612D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802612E8;
    }
}

loc_802612DC:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1112), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1106), static_cast<uint8_t>(r0));
}

loc_802612E8:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
}

loc_802612F0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8026137C;
    }
}

loc_802612F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802612FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261340;
    }
}

loc_80261300:
{
    r5 = MemoryInline::FlatRead16((r31 + 900));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
}

loc_80261308:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80261340;
    }
}

loc_8026130C:
{
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 10);
    r0 = (r4 - r0);
}

loc_80261334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261340;
    }
}

loc_80261338:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r31 + 900), static_cast<uint16_t>(r0));
}

loc_80261340:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8027492Cu>(&func_8027492C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027492C_C9A6 = func_8027492C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027492C_C9A6);
        r4 = static_cast<uint32_t>(regargs_result_8027492C_C9A6 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027492Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80261350:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_8026137C;
    }
}

loc_80261354:
{
    r3 = MemoryInline::FlatRead16((r31 + 1130));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026135C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026137C;
    }
}

loc_80261360:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1130), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261370:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8026137C;
    }
}

loc_80261374:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 902), static_cast<uint16_t>(r0));
}

loc_8026137C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1118));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261384:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802613D0;
    }
}

loc_80261388:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1118), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261398:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802613D0;
    }
}

loc_8026139C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802613A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802613D0;
    }
}

loc_802613AC:
{
    r3 = 1;
    ctx->lr = 0x802613B4u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_D398 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_D398;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_802613B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802613D0;
    }
}

loc_802613BC:
{
    r3 = r31;
    r4 = 1;
    r5 = 31;
    r6 = 0;
    ctx->lr = 0x802613D0u;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802672D4_D7AA = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_D7AA);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_D7AA >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802613D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802613D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261480;
    }
}

loc_802613DC:
{
    r3 = MemoryInline::FlatRead8((r31 + 22));
    ctx->lr = 0x802613E4u;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802B05FC_DFB0 = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_DFB0);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_DFB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802B05FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802613EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80261434;
    }
}

loc_802613F0:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 & 1);
}

loc_802613FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261410;
    }
}

loc_80261400:
{
    r3 = MemoryInline::FlatRead16((r31 + 1124));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r31 + 1124), static_cast<uint16_t>(r0));
    goto loc_8026141C;
}

loc_80261410:
{
    r3 = MemoryInline::FlatRead16((r31 + 1124));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1124), static_cast<uint16_t>(r0));
}

loc_8026141C:
{
    r0 = MemoryInline::FlatRead16((r31 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261424:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80261440;
    }
}

loc_80261428:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1124), static_cast<uint16_t>(r0));
    goto loc_80261440;
}

loc_80261434:
{
    r3 = MemoryInline::FlatRead16((r31 + 1124));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1124), static_cast<uint16_t>(r0));
}

loc_80261440:
{
    r0 = MemoryInline::FlatRead16((r31 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261448:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261480;
    }
}

loc_8026144C:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261458:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261480;
    }
}

loc_8026145C:
{
    r3 = 1;
    ctx->lr = 0x80261464u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_EB43 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_EB43;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80261468:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80261480;
    }
}

loc_8026146C:
{
    r3 = r31;
    r4 = 1;
    r5 = 35;
    r6 = 0;
    ctx->lr = 0x80261480u;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802672D4_EF55 = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_EF55);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_EF55 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80261480:
{
    r0 = MemoryInline::FlatRead16((r31 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261530;
    }
}

loc_8026148C:
{
    r3 = MemoryInline::FlatRead8((r31 + 22));
    ctx->lr = 0x80261494u;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802B05FC_F75B = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_F75B);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_F75B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802B05FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_8026149C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802614E4;
    }
}

loc_802614A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r0 & 1);
}

loc_802614AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802614C0;
    }
}

loc_802614B0:
{
    r3 = MemoryInline::FlatRead16((r31 + 1126));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -2);
    MemoryInline::FlatWrite16((r31 + 1126), static_cast<uint16_t>(r0));
    goto loc_802614CC;
}

loc_802614C0:
{
    r3 = MemoryInline::FlatRead16((r31 + 1126));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1126), static_cast<uint16_t>(r0));
}

loc_802614CC:
{
    r0 = MemoryInline::FlatRead16((r31 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802614D4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802614F0;
    }
}

loc_802614D8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1126), static_cast<uint16_t>(r0));
    goto loc_802614F0;
}

loc_802614E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 1126));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1126), static_cast<uint16_t>(r0));
}

loc_802614F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802614F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261530;
    }
}

loc_802614FC:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261508:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261530;
    }
}

loc_8026150C:
{
    r3 = 1;
    ctx->lr = 0x80261514u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8027BCAC_102EE = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_102EE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_80261518:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80261530;
    }
}

loc_8026151C:
{
    r3 = r31;
    r4 = 1;
    r5 = 36;
    r6 = 0;
    ctx->lr = 0x80261530u;
    if constexpr (KnownRegArgsCpuCall<0x802672D4u>(&func_802672D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802672D4_10702 = func_802672D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802672D4_10702);
        r4 = static_cast<uint32_t>(regargs_result_802672D4_10702 >> 32);
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
        cr = ctx->cr;
        xer = ctx->xer;
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
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802672D4u>(ctx);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_80261530:
{
    r3 = MemoryInline::FlatRead16((r31 + 1040));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261538:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80261544;
    }
}

loc_8026153C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1040), static_cast<uint16_t>(r0));
}

loc_80261544:
{
    r3 = MemoryInline::FlatRead16((r31 + 1070));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026154C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261558;
    }
}

loc_80261550:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1070), static_cast<uint16_t>(r0));
}

loc_80261558:
{
    r3 = MemoryInline::FlatRead16((r31 + 1080));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261560:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026156C;
    }
}

loc_80261564:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1080), static_cast<uint16_t>(r0));
}

loc_8026156C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1072));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261574:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261580;
    }
}

loc_80261578:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1072), static_cast<uint16_t>(r0));
}

loc_80261580:
{
    r3 = MemoryInline::FlatRead16((r31 + 1082));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261588:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261594;
    }
}

loc_8026158C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1082), static_cast<uint16_t>(r0));
}

loc_80261594:
{
    r3 = MemoryInline::FlatRead16((r31 + 1074));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_8026159C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802615A8;
    }
}

loc_802615A0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1074), static_cast<uint16_t>(r0));
}

loc_802615A8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1084));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802615B0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802615BC;
    }
}

loc_802615B4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1084), static_cast<uint16_t>(r0));
}

loc_802615BC:
{
    r3 = MemoryInline::FlatRead16((r31 + 1076));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802615C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802615D0;
    }
}

loc_802615C8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1076), static_cast<uint16_t>(r0));
}

loc_802615D0:
{
    r3 = MemoryInline::FlatRead16((r31 + 1086));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802615D8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802615E4;
    }
}

loc_802615DC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1086), static_cast<uint16_t>(r0));
}

loc_802615E4:
{
    r3 = MemoryInline::FlatRead16((r31 + 1078));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802615EC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802615F8;
    }
}

loc_802615F0:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1078), static_cast<uint16_t>(r0));
}

loc_802615F8:
{
    r3 = MemoryInline::FlatRead16((r31 + 1088));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261600:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8026160C;
    }
}

loc_80261604:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1088), static_cast<uint16_t>(r0));
}

loc_8026160C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1058));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261614:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261620;
    }
}

loc_80261618:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1058), static_cast<uint16_t>(r0));
}

loc_80261620:
{
    r3 = r31;
    ctx->lr = 0x80261628u;
    if constexpr (KnownRegArgsCpuCall<0x80276E6Cu>(&func_80276E6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80276E6C_11FB4 = func_80276E6C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80276E6C_11FB4);
        r4 = static_cast<uint32_t>(regargs_result_80276E6C_11FB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x80276E6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead8((r31 + 10));
    r0 = (r3 + 250);
    r0 = (r0 & 255);
}

loc_80261638:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802617BC;
    }
}

loc_8026163C:
{
    r0 = MemoryInline::FlatRead16((r31 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261644:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802616A8;
    }
}

loc_80261648:
{
    r3 = MemoryInline::FlatRead8((r31 + 22));
    ctx->lr = 0x80261650u;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_802B05FC_1253A = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_1253A);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_1253A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x802B05FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80261658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80261668;
    }
}

loc_8026165C:
{
}

loc_80261660:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80261694;
    }
}

loc_80261664:
{
    goto loc_802616A8;
}

loc_80261668:
{
    r3 = r31;
    r4 = 124;
    ctx->lr = 0x80261674u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261678:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802616A8;
    }
}

loc_8026167C:
{
    r3 = r31;
    r4 = 125;
    ctx->lr = 0x80261688u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8026168C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80261780;
    }
}

loc_80261690:
{
    goto loc_802616A8;
}

loc_80261694:
{
    r3 = r31;
    r4 = 125;
    ctx->lr = 0x802616A0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802616A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80261780;
    }
}

loc_802616A8:
{
    r3 = r31;
    ctx->lr = 0x802616B0u;
    if constexpr (KnownRegArgsCpuCall<0x80260ABCu>(&func_80260ABC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_80260ABC_12E90 = func_80260ABC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80260ABC_12E90);
        r4 = static_cast<uint32_t>(regargs_result_80260ABC_12E90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->xer = xer;
        InvokeDirectCpu<0x80260ABCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802616B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261780;
    }
}

loc_802616B8:
{
    r30 = 60;
    r3 = r31;
    r4 = 17;
    ctx->lr = 0x802616C8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802616CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802616D4;
    }
}

loc_802616D0:
{
    r30 = 30;
}

loc_802616D4:
{
    r3 = r31;
    r4 = 18;
    ctx->lr = 0x802616E0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802616E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802616EC;
    }
}

loc_802616E8:
{
    r30 = 15;
}

loc_802616EC:
{
    r3 = r31;
    r4 = 19;
    ctx->lr = 0x802616F8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802616FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80261704;
    }
}

loc_80261700:
{
    r30 = 120;
}

loc_80261704:
{
    r3 = r31;
    r4 = 20;
    ctx->lr = 0x80261710u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80261714:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8026171C;
    }
}

loc_80261718:
{
    r30 = 240;
}

loc_8026171C:
{
    r4 = 1;
    r0 = MemoryInline::FlatRead16((r31 + 1118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80261728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80261730;
    }
}

loc_8026172C:
{
    r4 = 2;
}

loc_80261730:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r30));
    r0 = (r0 * r30);
    r0 = (r3 - r0);
}

loc_80261744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80261780;
    }
}

loc_80261748:
{
    r0 = MemoryInline::FlatRead16((r31 + 886));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = MemoryInline::FlatRead16((r31 + 880));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261754:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_80261780;
    }
}

loc_80261758:
{
    r0 = (r0 - r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80261764:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_80261774;
    }
}

loc_80261768:
{
    r3 = r31;
    ctx->lr = 0x80261770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802762F0u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80261780;
}

loc_80261774:
{
    r3 = r31;
    r4 = r0;
    ctx->lr = 0x80261780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802762F0u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80261780:
{
    r3 = MemoryInline::FlatRead16((r31 + 1024));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80261788:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80261794;
    }
}

loc_8026178C:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1024), static_cast<uint16_t>(r0));
}

loc_80261794:
{
    r0 = MemoryInline::FlatRead16((r31 + 1024));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8026179C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802617BC;
    }
}

loc_802617A0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1024), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r31 + 1020));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802617B0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802617BC;
    }
}

loc_802617B4:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 1020), static_cast<uint16_t>(r0));
}

loc_802617BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80260B9C func_80260B9C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8010D314(CpuContext* ctx);
extern "C" uint64_t func_8010D314_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801293A0(CpuContext* ctx);
extern "C" uint64_t func_801293A0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012F990(CpuContext* ctx);
extern "C" uint64_t func_8012F990_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80136BB4(CpuContext* ctx);
extern "C" uint64_t func_80136BB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801497EC(CpuContext* ctx);
extern "C" uint32_t func_801497EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801C89FC(CpuContext* ctx);
extern "C" uint64_t func_801C89FC_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8030456C(CpuContext* ctx);
extern "C" uint64_t func_8030456C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801C8D9C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C8D9C;

loc_801C8D9C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    ctx->lr = 0x801C8DC0u;
    if constexpr (KnownRegArgsCpuCall<0x801497ECu>(&func_801497EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801497EC_C24 = func_801497EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801497EC_C24;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x801497ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = r31;
    ctx->lr = 0x801C8DC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801C8978u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(67));
}

loc_801C8DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9860;
    }
}

loc_801C8DDC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8EB0;
    }
}

loc_801C8DE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_801C8DE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C93E4;
    }
}

loc_801C8DE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E5C;
    }
}

loc_801C8DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801C8DF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9258;
    }
}

loc_801C8DF4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E30;
    }
}

loc_801C8DF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_801C8DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C90B8;
    }
}

loc_801C8E00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E1C;
    }
}

loc_801C8E04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_801C8E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CA010;
    }
}

loc_801C8E0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C9028;
    }
}

loc_801C8E10:
{
}

loc_801C8E14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_801C8F7C;
    }
}

loc_801C8E18:
{
    goto loc_801CA010;
}

loc_801C8E1C:
{
}

loc_801C8E20:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_801C9210;
    }
}

loc_801C8E24:
{
}

loc_801C8E28:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(10))) {
        goto loc_801CA010;
    }
}

loc_801C8E2C:
{
    goto loc_801C91D4;
}

loc_801C8E30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_801C8E34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C936C;
    }
}

loc_801C8E38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E50;
    }
}

loc_801C8E3C:
{
}

loc_801C8E40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(17))) {
        goto loc_801C9314;
    }
}

loc_801C8E44:
{
}

loc_801C8E48:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(15))) {
        goto loc_801CA010;
    }
}

loc_801C8E4C:
{
    goto loc_801C92A0;
}

loc_801C8E50:
{
}

loc_801C8E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_801C93A8;
    }
}

loc_801C8E58:
{
    goto loc_801CA010;
}

loc_801C8E5C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_801C8E60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C95AC;
    }
}

loc_801C8E64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E8C;
    }
}

loc_801C8E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(30));
}

loc_801C8E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9504;
    }
}

loc_801C8E70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8E80;
    }
}

loc_801C8E74:
{
}

loc_801C8E78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_801C94C8;
    }
}

loc_801C8E7C:
{
    goto loc_801CA010;
}

loc_801C8E80:
{
}

loc_801C8E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(34))) {
        goto loc_801C9540;
    }
}

loc_801C8E88:
{
    goto loc_801CA010;
}

loc_801C8E8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(51));
}

loc_801C8E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9758;
    }
}

loc_801C8E94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8EA4;
    }
}

loc_801C8E98:
{
}

loc_801C8E9C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(50))) {
        goto loc_801C96AC;
    }
}

loc_801C8EA0:
{
    goto loc_801CA010;
}

loc_801C8EA4:
{
}

loc_801C8EA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(55))) {
        goto loc_801C9814;
    }
}

loc_801C8EAC:
{
    goto loc_801CA010;
}

loc_801C8EB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(126));
}

loc_801C8EB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801CA010;
    }
}

loc_801C8EB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8F1C;
    }
}

loc_801C8EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(108));
}

loc_801C8EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9BE0;
    }
}

loc_801C8EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8EF8;
    }
}

loc_801C8EC8:
{
}

loc_801C8ECC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_801C8EE8;
    }
}

loc_801C8ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(101));
}

loc_801C8ED4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C99F4;
    }
}

loc_801C8ED8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C9AEC;
    }
}

loc_801C8EDC:
{
}

loc_801C8EE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_801C9980;
    }
}

loc_801C8EE4:
{
    goto loc_801CA010;
}

loc_801C8EE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(106));
}

loc_801C8EEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9B68;
    }
}

loc_801C8EF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C9BA4;
    }
}

loc_801C8EF4:
{
    goto loc_801CA010;
}

loc_801C8EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(116));
}

loc_801C8EFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9D54;
    }
}

loc_801C8F00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8F10;
    }
}

loc_801C8F04:
{
}

loc_801C8F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(113))) {
        goto loc_801C9CD8;
    }
}

loc_801C8F0C:
{
    goto loc_801CA010;
}

loc_801C8F10:
{
}

loc_801C8F14:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(125))) {
        goto loc_801C9DD0;
    }
}

loc_801C8F18:
{
    goto loc_801CA010;
}

loc_801C8F1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(213));
}

loc_801C8F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9F84;
    }
}

loc_801C8F24:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8F58;
    }
}

loc_801C8F28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_801C8F2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9258;
    }
}

loc_801C8F30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8F4C;
    }
}

loc_801C8F34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_801C8F38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9F38;
    }
}

loc_801C8F3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801CA010;
    }
}

loc_801C8F40:
{
}

loc_801C8F44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(128))) {
        goto loc_801CA010;
    }
}

loc_801C8F48:
{
    goto loc_801C9EEC;
}

loc_801C8F4C:
{
}

loc_801C8F50:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(208))) {
        goto loc_801CA010;
    }
}

loc_801C8F54:
{
    goto loc_801C9210;
}

loc_801C8F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(229));
}

loc_801C8F5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C9210;
    }
}

loc_801C8F60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801C8F70;
    }
}

loc_801C8F64:
{
}

loc_801C8F68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(228))) {
        goto loc_801C9258;
    }
}

loc_801C8F6C:
{
    goto loc_801CA010;
}

loc_801C8F70:
{
}

loc_801C8F74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(241))) {
        goto loc_801C9FD8;
    }
}

loc_801C8F78:
{
    goto loc_801CA010;
}

loc_801C8F7C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18716));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C8F90u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_353A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_353A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_353A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C8F94:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C8FB4;
    }
}

loc_801C8F98:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18712));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C8FACu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3C20 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3C20);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3C20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C8FB0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C8FD0;
    }
}

loc_801C8FB4:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C8FD0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_430F = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_430F);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_430F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C8FD0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18708));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C8FE4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_4971 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_4971);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_4971 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C8FE8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C9008;
    }
}

loc_801C8FEC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18704));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9000u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5057 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5057);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5057 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9008:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9024u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_5745 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_5745);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_5745 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9028:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19024));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C903Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_5DBF = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_5DBF);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_5DBF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9040:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C9060;
    }
}

loc_801C9044:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19060));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9058u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_64A5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_64A5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_64A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C905C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C907C;
    }
}

loc_801C9060:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C907Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_6B93 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_6B93);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_6B93 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C907C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18696));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9090u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_71F5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_71F5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_71F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9094:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9098:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C90B4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_78E4 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_78E4);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_78E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C90B8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19064));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C90CCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_7F5E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_7F5E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_7F5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C90D0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C90F0;
    }
}

loc_801C90D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18692));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C90E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_8644 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_8644);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_8644 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C90EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C910C;
    }
}

loc_801C90F0:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C910Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_8D33 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_8D33);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_8D33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C910C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18688));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9120u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_9395 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_9395);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_9395 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9124:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C9144;
    }
}

loc_801C9128:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18684));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C913Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_9A7B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_9A7B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_9A7B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9140:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9160;
    }
}

loc_801C9144:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9160u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_A16B = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_A16B);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_A16B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9160:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19096));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9174u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_A7CD = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_A7CD);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_A7CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9178:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9198;
    }
}

loc_801C917C:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9198u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_AEBD = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_AEBD);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_AEBD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9198:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18680));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C91ACu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_B51F = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_B51F);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_B51F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C91B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C91B4:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C91D0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_BC0F = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_BC0F);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_BC0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C91D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18976));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C91E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_C289 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_C289);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_C289 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C91EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C91F0:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C920Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_C978 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_C978);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_C978 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9210:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19036));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9224u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_CFF2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_CFF2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_CFF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9228:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C922C:
{
    r3 = r31;
    r4 = 0;
    r5 = 9;
    r6 = 8;
    ctx->lr = 0x801C9240u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801293A0_D680 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_D680);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_D680 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = 1;
    r5 = 10;
    r6 = 16;
    ctx->lr = 0x801C9254u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801293A0_DC81 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_DC81);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_DC81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9258:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19036));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C926Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_E307 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_E307);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_E307 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9270:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9274:
{
    r3 = r31;
    r4 = 0;
    r5 = 11;
    r6 = 8;
    ctx->lr = 0x801C9288u;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801293A0_E996 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_E996);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_E996 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r31;
    r4 = 1;
    r5 = 12;
    r6 = 16;
    ctx->lr = 0x801C929Cu;
    if constexpr (KnownRegArgsCpuCall<0x801293A0u>(&func_801293A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_801293A0_EF97 = func_801293A0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_801293A0_EF97);
        r4 = static_cast<uint32_t>(regargs_result_801293A0_EF97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x801293A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C92A0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19028));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C92B4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_F61D = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_F61D);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_F61D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C92B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C92D8;
    }
}

loc_801C92BC:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C92D8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_FD0B = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_FD0B);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_FD0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C92D8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18676));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C92ECu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1036D = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1036D);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1036D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C92F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C92F4:
{
    r3 = r31;
    r4 = 0;
    r5 = 4;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9310u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_10A5F = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_10A5F);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_10A5F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9314:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18972));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9328u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_110DC = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_110DC);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_110DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C932C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C934C;
    }
}

loc_801C9330:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18672));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9344u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_117C5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_117C5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_117C5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9348:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C934C:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C9368u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_11EB8 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_11EB8);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_11EB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C936C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18972));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9380u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_12535 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_12535);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_12535 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9384:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9388:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C93A4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_12C28 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_12C28);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_12C28 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C93A8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18972));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C93BCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_132A5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_132A5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_132A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C93C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C93C4:
{
    r3 = r31;
    r4 = 2;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C93E0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_13998 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_13998);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_13998 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C93E4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19084));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C93F8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_14015 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_14015);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_14015 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C93FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C945C;
    }
}

loc_801C9400:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C940C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9430;
    }
}

loc_801C9410:
{
    r3 = r31;
    r4 = 0;
    r5 = 21;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18668));
    ctx->lr = 0x801C942Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_147E1 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_147E1);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_147E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C944C;
}

loc_801C9430:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C944Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_14E68 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_14E68);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_14E68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C944C:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C945Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_15469 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_15469);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_15469 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_801C945C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18664));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9470u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_159D5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_159D5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_159D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9474:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9478:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C94A8;
    }
}

loc_801C9488:
{
    r3 = r31;
    r4 = 0;
    r5 = 20;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18668));
    ctx->lr = 0x801C94A4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_161A1 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_161A1);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_161A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C94A8:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C94C4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_16828 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_16828);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_16828 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C94C8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18660));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C94DCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_16EA5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_16EA5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_16EA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C94E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C94E4:
{
    r3 = r31;
    r4 = 0;
    r5 = 5;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9500u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_17598 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_17598);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_17598 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9504:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18660));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9518u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_17C15 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_17C15);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_17C15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C951C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9520:
{
    r3 = r31;
    r4 = 0;
    r5 = 5;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C953Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_18308 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_18308);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_18308 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9540:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19084));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9554u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_18985 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_18985);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_18985 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9558:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C955C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C958C;
    }
}

loc_801C956C:
{
    r3 = r31;
    r4 = 0;
    r5 = 21;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18668));
    ctx->lr = 0x801C9588u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_19151 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_19151);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_19151 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C958C:
{
    r3 = r31;
    r4 = 0;
    r5 = 5;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C95A8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_197D8 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_197D8);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_197D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C95AC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18992));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C95C0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_19E55 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_19E55);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_19E55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C95C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801C95E4;
    }
}

loc_801C95C8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18652));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C95DCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1A53E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1A53E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1A53E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C95E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9600;
    }
}

loc_801C95E4:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9600u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_1AC30 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_1AC30);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_1AC30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9600:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19024));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9614u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1B295 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1B295);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1B295 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9618:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9638;
    }
}

loc_801C961C:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C9638u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_1B988 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_1B988);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_1B988 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9638:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18920));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C964Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1BFED = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1BFED);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1BFED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9650:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9670;
    }
}

loc_801C9654:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9670u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_1C6E0 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_1C6E0);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_1C6E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9670:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19084));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9684u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1CD45 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1CD45);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1CD45 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9688:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C968C:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C96A8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_1D438 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_1D438);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_1D438 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C96AC:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18648));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18644));
    ctx->lr = 0x801C96C0u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1DAB5 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1DAB5);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1DAB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C96C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C970C;
    }
}

loc_801C96C8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149357264);
    r0 = (r0 & 3);
}

loc_801C96DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C970C;
    }
}

loc_801C96E0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 122;
    r5 = 3;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C970Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_1E41C = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_1E41C);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_1E41C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C970C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18640));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9720u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1EAD8 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1EAD8);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1EAD8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9724:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9728:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 121;
    r5 = 3;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9754u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_1F338 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_1F338);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_1F338 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9758:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18664));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C976Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_1FA0C = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_1FA0C);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_1FA0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9770:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9774:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -18636));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 0;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801C979C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801C97C4;
    }
}

loc_801C97A0:
{
    r3 = r31;
    r4 = 3;
    r5 = 28;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r7 + 84));
    ctr = r12;
    ctx->lr = 0x801C97C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_801C97E4;
}

loc_801C97C4:
{
    r3 = r31;
    r4 = 1;
    r5 = 28;
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r13 + -17088));
    r12 = MemoryInline::FlatRead32((r7 + 84));
    ctr = r12;
    ctx->lr = 0x801C97E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801C97E4:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -18632));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 123;
    r5 = 28;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9810u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_20CDE = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_20CDE);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_20CDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9814:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19044));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9828u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_213B2 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_213B2);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_213B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C982C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9830:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 3;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C984Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_21AA3 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_21AA3);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_21AA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C985Cu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_2208D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2208D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2208D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9860:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19060));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9874u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_22611 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_22611);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_22611 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9878:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C98A8;
    }
}

loc_801C987C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 54;
    r5 = 28;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C98A8u;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_22E71 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_22E71);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_22E71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C98A8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18628));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C98BCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2352D = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2352D);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2352D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C98C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C98D4;
    }
}

loc_801C98C4:
{
    r3 = r31;
    r4 = 28;
    r5 = 1;
    ctx->lr = 0x801C98D4u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_23BB2 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_23BB2);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_23BB2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_801C98D4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19080));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C98E8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2411E = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2411E);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2411E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C98EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C991C;
    }
}

loc_801C98F0:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 38;
    r5 = 28;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C991Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_2497E = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_2497E);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_2497E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C991C:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18624));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -18620));
    ctx->lr = 0x801C9930u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2503A = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2503A);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2503A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9934:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9938:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MH3_HookedLoad32(r3, 12, 2149357888);
    r0 = (r0 & 3);
}

loc_801C994C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CA010;
    }
}

loc_801C9950:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -18616));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = r31;
    r4 = 72;
    r5 = 28;
    r6 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C997Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030456Cu>(&func_8030456C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8030456C_259C9 = func_8030456C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8030456C_259C9);
        r4 = static_cast<uint32_t>(regargs_result_8030456C_259C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030456Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9980:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18984));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9994u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2609D = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2609D);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2609D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9998:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C99B8;
    }
}

loc_801C999C:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C99B8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2678E = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2678E);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2678E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C99B8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19064));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C99CCu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_26DF3 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_26DF3);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_26DF3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C99D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C99D4:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C99F0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_274E5 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_274E5);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_274E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C99F4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18928));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9A08u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_27B62 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_27B62);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_27B62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9A0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9A2C;
    }
}

loc_801C9A10:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9A2Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_28255 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_28255);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_28255 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9A2C:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18708));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9A40u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_288BA = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_288BA);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_288BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9A44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9A64;
    }
}

loc_801C9A48:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9A64u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_28FAD = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_28FAD);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_28FAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9A64:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18612));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9A78u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_29612 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_29612);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_29612 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9A7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9A80:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9A8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9ACC;
    }
}

loc_801C9A90:
{
    r3 = r31;
    r4 = 0;
    r5 = 21;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18668));
    ctx->lr = 0x801C9AACu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_29DDE = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_29DDE);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_29DDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18608));
    ctx->lr = 0x801C9AC8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2A437 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2A437);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2A437 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9ACC:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C9AE8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2AABE = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2AABE);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2AABE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9AEC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18604));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9B00u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2B13B = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2B13B);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2B13B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9B04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9B08:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9B14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9B38;
    }
}

loc_801C9B18:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9B34u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2B907 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2B907);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2B907 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C9B54;
}

loc_801C9B38:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9B54u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2BF8E = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2BF8E);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2BF8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9B54:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C9B64u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_2C58F = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_2C58F);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_2C58F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9B68:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18872));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9B7Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2CB13 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2CB13);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2CB13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9B80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9B84:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 17;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18600));
    ctx->lr = 0x801C9BA0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2D205 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2D205);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2D205 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9BA4:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18872));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9BB8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2D882 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2D882);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2D882 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9BBC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9BC0:
{
    r3 = r31;
    r4 = 0;
    r5 = 2;
    r6 = 8;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18600));
    ctx->lr = 0x801C9BDCu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2DF73 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2DF73);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2DF73 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9BE0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19032));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9BF4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2E5F0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2E5F0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2E5F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9BF8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9C18;
    }
}

loc_801C9BFC:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 36;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9C18u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2ECE3 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2ECE3);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2ECE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9C18:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19064));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9C2Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_2F348 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_2F348);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_2F348 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9C30:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9C50;
    }
}

loc_801C9C34:
{
    r3 = r31;
    r4 = 0;
    r5 = 40;
    r6 = 44;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9C50u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_2FA3B = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_2FA3B);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_2FA3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9C50:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18952));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9C64u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_300A0 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_300A0);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_300A0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9C68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9C6C:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9C78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9CB8;
    }
}

loc_801C9C7C:
{
    r3 = r31;
    r4 = 0;
    r5 = 21;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9C98u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_3086C = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_3086C);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_3086C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = 0;
    r5 = 14;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19048));
    ctx->lr = 0x801C9CB4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_30EC5 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_30EC5);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_30EC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9CB8:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C9CD4u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_3154C = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_3154C);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_3154C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9CD8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18596));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9CECu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_31BC9 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_31BC9);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_31BC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9CF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9CF4:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9D00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9D24;
    }
}

loc_801C9D04:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18592));
    ctx->lr = 0x801C9D20u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_32395 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_32395);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_32395 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C9D40;
}

loc_801C9D24:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18592));
    ctx->lr = 0x801C9D40u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_32A1C = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_32A1C);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_32A1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9D40:
{
    r3 = r31;
    r4 = -1;
    r5 = 1;
    ctx->lr = 0x801C9D50u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_3301D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_3301D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_3301D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9D54:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18588));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9D68u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_335A1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_335A1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_335A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9D6C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9D70:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9D7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9DA0;
    }
}

loc_801C9D80:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C9D9Cu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_33D6D = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_33D6D);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_33D6D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C9DBC;
}

loc_801C9DA0:
{
    r3 = r31;
    r4 = 1;
    r5 = 0;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9DBCu;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_343F4 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_343F4);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_343F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9DBC:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C9DCCu;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_349F5 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_349F5);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_349F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9DD0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18676));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9DE4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_34F79 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_34F79);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_34F79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9DE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9E38;
    }
}

loc_801C9DEC:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9DF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9E1C;
    }
}

loc_801C9DFC:
{
    r3 = r31;
    r4 = 0;
    r5 = 17;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18600));
    ctx->lr = 0x801C9E18u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_35745 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_35745);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_35745 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C9E38;
}

loc_801C9E1C:
{
    r3 = r31;
    r4 = 1;
    r5 = 5;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C9E38u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_35DCC = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_35DCC);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_35DCC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9E38:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18584));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9E4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_36431 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_36431);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_36431 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9E50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801C9EB0;
    }
}

loc_801C9E54:
{
    r0 = MemoryInline::FlatRead16((r31 + 552));
    r0 = (r0 & 6);
}

loc_801C9E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801C9E84;
    }
}

loc_801C9E64:
{
    r3 = r31;
    r4 = 0;
    r5 = 16;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19128));
    ctx->lr = 0x801C9E80u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_36BFD = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_36BFD);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_36BFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801C9EA0;
}

loc_801C9E84:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18592));
    ctx->lr = 0x801C9EA0u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_37284 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_37284);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_37284 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9EA0:
{
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C9EB0u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_37885 = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_37885);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_37885 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_801C9EB0:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18580));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9EC4u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_37DF1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_37DF1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_37DF1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9EC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9ECC:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    r6 = 26;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18924));
    ctx->lr = 0x801C9EE8u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_384E3 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_384E3);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_384E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9EEC:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19072));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9F00u;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_38B60 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_38B60);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_38B60 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9F04:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9F08:
{
    r3 = r31;
    r4 = 1;
    r5 = 2;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801C9F24u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_39253 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_39253);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_39253 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C9F34u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_3983D = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_3983D);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_3983D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9F38:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18576));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9F4Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_39DC1 = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_39DC1);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_39DC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9F50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9F54:
{
    r3 = r31;
    r4 = 1;
    r5 = 1;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18700));
    ctx->lr = 0x801C9F70u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_3A4B4 = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_3A4B4);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_3A4B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = -1;
    r5 = 7;
    ctx->lr = 0x801C9F80u;
    if constexpr (KnownRegArgsCpuCall<0x80136BB4u>(&func_80136BB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80136BB4_3AA9E = func_80136BB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80136BB4_3AA9E);
        r4 = static_cast<uint32_t>(regargs_result_80136BB4_3AA9E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x80136BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    goto loc_801CA010;
}

loc_801C9F84:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -19028));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9F98u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F980_3B022 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_3B022);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_3B022 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F980u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9F9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9FA0:
{
    r3 = r31;
    r4 = 3;
    r5 = (r1 + 8);
    ctx->lr = 0x801C9FB0u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_3B6AD = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_3B6AD);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_3B6AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r31 + 524));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r31;
    ctx->lr = 0x801C9FC0u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801359B4_3BBF4 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_3BBF4);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_3BBF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r5 = 4;
    r6 = MemoryInline::FlatRead32((r31 + 448));
    ctx->lr = 0x801C9FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8010D314u>(&func_8010D314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8010D314_3C0FC = func_8010D314_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8010D314_3C0FC);
        r4 = static_cast<uint32_t>(regargs_result_8010D314_3C0FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010D314u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_801CA010;
}

loc_801C9FD8:
{
    r3 = r31;
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18596));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -19112));
    ctx->lr = 0x801C9FECu;
    if constexpr (KnownRegArgsCpuCall<0x8012F990u>(&func_8012F990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8012F990_3C6EC = func_8012F990_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F990_3C6EC);
        r4 = static_cast<uint32_t>(regargs_result_8012F990_3C6EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8012F990u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801C9FF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA010;
    }
}

loc_801C9FF4:
{
    r3 = r31;
    r4 = 1;
    r5 = 4;
    r6 = 255;
    r7 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -18656));
    ctx->lr = 0x801CA010u;
    if constexpr (KnownRegArgsCpuCall<0x801C89FCu>(&func_801C89FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_801C89FC_3CDDF = func_801C89FC_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_801C89FC_3CDDF);
        r4 = static_cast<uint32_t>(regargs_result_801C89FC_3CDDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801C89FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_801CA010:
{
    r3 = r31;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_801CA01C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801CA03C;
    }
}

loc_801CA020:
{
    r3 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r3 & 1);
}

loc_801CA02C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801CA054;
    }
}

loc_801CA030:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
    goto loc_801CA054;
}

loc_801CA03C:
{
    r3 = MemoryInline::FlatRead8((r31 + 1889));
    r0 = (r3 & 1);
}

loc_801CA048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801CA054;
    }
}

loc_801CA04C:
{
    r0 = (r3 & 254);
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
}

loc_801CA054:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801C8D9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801C8D9C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C8D9C func_801C8D9C preserves=true fpr_mask=0x00000000

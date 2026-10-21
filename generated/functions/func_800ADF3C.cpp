#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800AE2FC(CpuContext* ctx);
extern "C" uint32_t func_800AE2FC_ra18_2_8_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800ADF3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800AE2D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800ADF3Cu);
    goto loc_800ADF3C;

loc_800ADF3C:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r30 = r4;
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r3 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800ADF8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ADFA4;
    }
}

loc_800ADF90:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800ADF9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ADFA4;
    }
}

loc_800ADFA0:
{
    r10 = 0;
}

loc_800ADFA4:
{
}

loc_800ADFA8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800ADFC0;
    }
}

loc_800ADFAC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800ADFB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ADFC0;
    }
}

loc_800ADFBC:
{
    r9 = 0;
}

loc_800ADFC0:
{
}

loc_800ADFC4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800ADFD8;
    }
}

loc_800ADFC8:
{
    r0 = (r11 + 1073741824);
}

loc_800ADFD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ADFD8;
    }
}

loc_800ADFD4:
{
    r8 = 0;
}

loc_800ADFD8:
{
}

loc_800ADFDC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800ADFF4;
    }
}

loc_800ADFE0:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800ADFEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800ADFF4;
    }
}

loc_800ADFF0:
{
    r7 = 0;
}

loc_800ADFF4:
{
}

loc_800ADFF8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE010;
    }
}

loc_800ADFFC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AE008:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE010;
    }
}

loc_800AE00C:
{
    r5 = 0;
}

loc_800AE010:
{
}

loc_800AE014:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE02C;
    }
}

loc_800AE018:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE024:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE02C;
    }
}

loc_800AE028:
{
    r4 = 0;
}

loc_800AE02C:
{
}

loc_800AE030:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AE050;
    }
}

loc_800AE034:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 698;
    r5 = 0x80590000u;
    r5 = (r5 + 15128);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE050u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE050:
{
    r3 = MemoryInline::FlatRead32((r29 + 36));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AE080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE098;
    }
}

loc_800AE084:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800AE090:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE098;
    }
}

loc_800AE094:
{
    r10 = 0;
}

loc_800AE098:
{
}

loc_800AE09C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AE0B4;
    }
}

loc_800AE0A0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800AE0AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE0B4;
    }
}

loc_800AE0B0:
{
    r9 = 0;
}

loc_800AE0B4:
{
}

loc_800AE0B8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AE0CC;
    }
}

loc_800AE0BC:
{
    r0 = (r11 + 1073741824);
}

loc_800AE0C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE0CC;
    }
}

loc_800AE0C8:
{
    r8 = 0;
}

loc_800AE0CC:
{
}

loc_800AE0D0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AE0E8;
    }
}

loc_800AE0D4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800AE0E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE0E8;
    }
}

loc_800AE0E4:
{
    r7 = 0;
}

loc_800AE0E8:
{
}

loc_800AE0EC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE104;
    }
}

loc_800AE0F0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800AE0FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE104;
    }
}

loc_800AE100:
{
    r6 = 0;
}

loc_800AE104:
{
}

loc_800AE108:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AE120;
    }
}

loc_800AE10C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE118:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE120;
    }
}

loc_800AE11C:
{
    r5 = 0;
}

loc_800AE120:
{
}

loc_800AE124:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE148;
    }
}

loc_800AE128:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 701;
    r5 = 0x80590000u;
    r5 = (r5 + 15184);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE148u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE148:
{
    r0 = MemoryInline::FlatRead16((r31 + 148));
    r0 = (r0 & 1024);
}

loc_800AE154:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800AE2D4;
    }
}

loc_800AE158:
{
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 & 2);
}

loc_800AE168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AE170;
    }
}

loc_800AE16C:
{
    goto loc_800AE2D4;
}

loc_800AE170:
{
    r3 = (r1 + 72);
    r4 = r30;
    ctx->lr = 0x800AE17Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE308u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r29 + 36));
    ctx->lr = 0x800AE184u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_261C = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_261C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    f31.d = MemoryInline::FlatReadFloat32((r3 + 180));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31220));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_800AE190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800AE1CC;
    }
}

loc_800AE194:
{
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = MemoryInline::FlatRead32((r29 + 32));
    r4 = (r1 + 24);
    ctx->lr = 0x800AE1A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A9508u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 68));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 72);
    f1.d = f31.d;
    r4 = (r1 + 8);
    ctx->lr = 0x800AE1CCu;
    if constexpr (KnownRegArgsCpuCall<0x800AE2FCu>(&func_800AE2FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800AE2FC_2F5B = func_800AE2FC_ra18_2_8_0(ctx, r3, r4, f1.d);
        r3 = regargs_result_800AE2FC_2F5B;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800AE2FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
    }
}

loc_800AE1CC:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r29 + 44));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AE1F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE20C;
    }
}

loc_800AE1F8:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AE204:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE20C;
    }
}

loc_800AE208:
{
    r10 = 0;
}

loc_800AE20C:
{
}

loc_800AE210:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AE228;
    }
}

loc_800AE214:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AE220:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE228;
    }
}

loc_800AE224:
{
    r9 = 0;
}

loc_800AE228:
{
}

loc_800AE22C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AE240;
    }
}

loc_800AE230:
{
    r0 = (r11 + 1073741824);
}

loc_800AE238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE240;
    }
}

loc_800AE23C:
{
    r8 = 0;
}

loc_800AE240:
{
}

loc_800AE244:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AE25C;
    }
}

loc_800AE248:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AE254:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE25C;
    }
}

loc_800AE258:
{
    r7 = 0;
}

loc_800AE25C:
{
}

loc_800AE260:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AE278;
    }
}

loc_800AE264:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AE270:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE278;
    }
}

loc_800AE274:
{
    r5 = 0;
}

loc_800AE278:
{
}

loc_800AE27C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AE294;
    }
}

loc_800AE280:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AE28C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AE294;
    }
}

loc_800AE290:
{
    r4 = 0;
}

loc_800AE294:
{
}

loc_800AE298:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800AE2B8;
    }
}

loc_800AE29C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 14136);
    r4 = 719;
    r5 = 0x80590000u;
    r5 = (r5 + 15236);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AE2B8u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE2B8:
{
    r3 = MemoryInline::FlatRead32((r29 + 44));
    r4 = (r1 + 72);
    r5 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x800AE2D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800AE2D4:
{
    r0 = 264;
    addr_psqx_800AE2D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800AE2D8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 256));
    r0 = MemoryInline::FlatRead32((r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800ADF3C func_800ADF3C preserves=true fpr_mask=0x00000000

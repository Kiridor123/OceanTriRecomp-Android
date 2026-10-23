#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80061920(CpuContext* ctx);
extern "C" uint64_t func_80061920_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8008DA1C(CpuContext* ctx);
extern "C" uint64_t func_8008DA1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8045C058(CpuContext* ctx);
extern "C" uint64_t func_8045C058_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008D660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r6_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8008D660;

loc_8008D660:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    f31.d = f1.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008D6B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D6CC;
    }
}

loc_8008D6B8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008D6C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D6CC;
    }
}

loc_8008D6C8:
{
    r10 = 0;
}

loc_8008D6CC:
{
}

loc_8008D6D0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008D6E8;
    }
}

loc_8008D6D4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008D6E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D6E8;
    }
}

loc_8008D6E4:
{
    r9 = 0;
}

loc_8008D6E8:
{
}

loc_8008D6EC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008D700;
    }
}

loc_8008D6F0:
{
    r0 = (r11 + 1073741824);
}

loc_8008D6F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D700;
    }
}

loc_8008D6FC:
{
    r8 = 0;
}

loc_8008D700:
{
}

loc_8008D704:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008D71C;
    }
}

loc_8008D708:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008D714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D71C;
    }
}

loc_8008D718:
{
    r7 = 0;
}

loc_8008D71C:
{
}

loc_8008D720:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008D738;
    }
}

loc_8008D724:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008D730:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D738;
    }
}

loc_8008D734:
{
    r6 = 0;
}

loc_8008D738:
{
}

loc_8008D73C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008D754;
    }
}

loc_8008D740:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008D74C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D754;
    }
}

loc_8008D750:
{
    r5 = 0;
}

loc_8008D754:
{
}

loc_8008D758:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008D77C;
    }
}

loc_8008D75C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1144;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008D77Cu;
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
}

loc_8008D77C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8008D7A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D7B8;
    }
}

loc_8008D7A4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008D7B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D7B8;
    }
}

loc_8008D7B4:
{
    r9 = 0;
}

loc_8008D7B8:
{
}

loc_8008D7BC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008D7D4;
    }
}

loc_8008D7C0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008D7CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D7D4;
    }
}

loc_8008D7D0:
{
    r8 = 0;
}

loc_8008D7D4:
{
}

loc_8008D7D8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008D7EC;
    }
}

loc_8008D7DC:
{
    r0 = (r10 + 1073741824);
}

loc_8008D7E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D7EC;
    }
}

loc_8008D7E8:
{
    r7 = 0;
}

loc_8008D7EC:
{
}

loc_8008D7F0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008D808;
    }
}

loc_8008D7F4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008D800:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D808;
    }
}

loc_8008D804:
{
    r6 = 0;
}

loc_8008D808:
{
}

loc_8008D80C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008D824;
    }
}

loc_8008D810:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008D81C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D824;
    }
}

loc_8008D820:
{
    r5 = 0;
}

loc_8008D824:
{
}

loc_8008D828:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008D840;
    }
}

loc_8008D82C:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008D838:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D840;
    }
}

loc_8008D83C:
{
    r4 = 0;
}

loc_8008D840:
{
}

loc_8008D844:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008D868;
    }
}

loc_8008D848:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1145;
    r5 = 0x80590000u;
    r5 = (r5 + 2548);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008D868u;
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
}

loc_8008D868:
{
    r28 = 0;
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x8045C058u>(&func_8045C058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C058_2109 = func_8045C058_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C058_2109);
        r4 = static_cast<uint32_t>(regargs_result_8045C058_2109 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8008D878:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(2))) {
        goto loc_8008D890;
    }
}

loc_8008D87C:
{
    f1.d = f31.d;
    if constexpr (KnownRegArgsCpuCall<0x8045C058u>(&func_8045C058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045C058_24DF = func_8045C058_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8045C058_24DF);
        r4 = static_cast<uint32_t>(regargs_result_8045C058_24DF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045C058u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8008D888:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8008D890;
    }
}

loc_8008D88C:
{
    r28 = 1;
}

loc_8008D890:
{
}

loc_8008D894:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8008D8B8;
    }
}

loc_8008D898:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1146;
    r5 = 0x80590000u;
    r5 = (r5 + 2604);
    f1.d = f31.d;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008D8B8u;
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
}

loc_8008D8B8:
{
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x8008D8C4u;
    if constexpr (KnownRegArgsCpuCall<0x8008DA1Cu>(&func_8008DA1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8008DA1C_2C67 = func_8008DA1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8008DA1C_2C67);
        r4 = static_cast<uint32_t>(regargs_result_8008DA1C_2C67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008DA1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
    }
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

loc_8008D8EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D904;
    }
}

loc_8008D8F0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008D8FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D904;
    }
}

loc_8008D900:
{
    r10 = 0;
}

loc_8008D904:
{
}

loc_8008D908:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008D920;
    }
}

loc_8008D90C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008D918:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D920;
    }
}

loc_8008D91C:
{
    r9 = 0;
}

loc_8008D920:
{
}

loc_8008D924:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008D938;
    }
}

loc_8008D928:
{
    r0 = (r11 + 1073741824);
}

loc_8008D930:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D938;
    }
}

loc_8008D934:
{
    r8 = 0;
}

loc_8008D938:
{
}

loc_8008D93C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008D954;
    }
}

loc_8008D940:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008D94C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D954;
    }
}

loc_8008D950:
{
    r7 = 0;
}

loc_8008D954:
{
}

loc_8008D958:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008D970;
    }
}

loc_8008D95C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008D968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D970;
    }
}

loc_8008D96C:
{
    r6 = 0;
}

loc_8008D970:
{
}

loc_8008D974:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008D98C;
    }
}

loc_8008D978:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008D984:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008D98C;
    }
}

loc_8008D988:
{
    r5 = 0;
}

loc_8008D98C:
{
}

loc_8008D990:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008D9B4;
    }
}

loc_8008D994:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1149;
    r5 = 0x80590000u;
    r5 = (r5 + 2668);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008D9B4u;
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
}

loc_8008D9B4:
{
    r3 = r29;
    ctx->lr = 0x8008D9BCu;
    if constexpr (KnownRegArgsCpuCall<0x80061920u>(&func_80061920)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80061920_3DCB = func_80061920_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80061920_3DCB);
        r4 = static_cast<uint32_t>(regargs_result_80061920_3DCB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80061920u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r4 = (r3 + 32);
    r6 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r6 & 8191);
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r30;
    r5 = r31;
    f1.d = f31.d;
    r0 = (r6 & 29360128);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_0 & 1023);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = 0x80570000u;
    r6 = (r6 + -304);
    r6_addr_0 = (r6 + r0);
    r12 = MemoryInline::FlatRead32(r6_addr_0);
    ctr = r12;
    ctx->lr = 0x8008D9F8u;
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
    ctx->fpr[1] = f1;
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8008D660 func_8008D660 preserves=true fpr_mask=0x00000000

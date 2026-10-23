#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD720(CpuContext* ctx);
extern "C" uint64_t func_804CD720_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D4030(CpuContext* ctx);
extern "C" uint64_t func_804D4030_ra0_0_18_0(CpuContext*);
extern "C" void func_804D4070(CpuContext* ctx);
extern "C" uint64_t func_804D4070_ra0_0_18_0(CpuContext*);
extern "C" void func_804D4590(CpuContext* ctx);
extern "C" uint32_t func_804D4590_ra70_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D17C0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804D17C0;

loc_804D17C0:
{
    MemoryHw::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = -872415232;
    MemoryHw::FlatWriteRam32((r1 + 36), r0);
    r30 = r4;
    r31 = MemoryHw::FlatRead32((r3 + 12288));
    r0 = MemoryHw::FlatRead32((r3 + 12292));
    r31 = (r31 & -65537);
}

loc_804D17EC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804D17F8;
    }
}

loc_804D17F0:
{
    r0 = (r31 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804D1800;
    }
}

loc_804D17F8:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CD720_B50 = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_B50);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_B50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804D1800:
{
    r0 = (r31 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804D1804:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D1850;
    }
}

loc_804D180C:
{
    r3 = -872415232;
    r4 = MemoryHw::FlatRead16((r3 + 16414));
    r3 = (r4 & 1);
}

loc_804D1818:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1820;
    }
}

loc_804D181C:
{
    r0 = (r0 | -2147483648);
}

loc_804D1820:
{
    r3 = (r4 & 2);
}

loc_804D1824:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D182C;
    }
}

loc_804D1828:
{
    r0 = (r0 | 1073741824);
}

loc_804D182C:
{
    r3 = (r4 & 4);
}

loc_804D1830:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1838;
    }
}

loc_804D1834:
{
    r0 = (r0 | 536870912);
}

loc_804D1838:
{
    r3 = (r4 & 8);
}

loc_804D183C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1844;
    }
}

loc_804D1840:
{
    r0 = (r0 | 268435456);
}

loc_804D1844:
{
    r3 = (r4 & 16);
}

loc_804D1848:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1850;
    }
}

loc_804D184C:
{
    r0 = (r0 | 134217728);
}

loc_804D1850:
{
    r3 = (r31 & 64);
}

loc_804D1854:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1884;
    }
}

loc_804D1858:
{
    r3 = -872415232;
    r4 = MemoryHw::FlatRead16((r3 + 20490));
    r3 = (r4 & 8);
}

loc_804D1864:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D186C;
    }
}

loc_804D1868:
{
    r0 = (r0 | 67108864);
}

loc_804D186C:
{
    r3 = (r4 & 32);
}

loc_804D1870:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1878;
    }
}

loc_804D1874:
{
    r0 = (r0 | 33554432);
}

loc_804D1878:
{
    r3 = (r4 & 128);
}

loc_804D187C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1884;
    }
}

loc_804D1880:
{
    r0 = (r0 | 16777216);
}

loc_804D1884:
{
    r3 = (r31 & 32);
}

loc_804D1888:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18A0;
    }
}

loc_804D188C:
{
    r3 = -855638016;
    r3 = MemoryHw::FlatRead32((r3 + 27648));
    r3 = (r3 & 8);
}

loc_804D1898:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18A0;
    }
}

loc_804D189C:
{
    r0 = (r0 | 8388608);
}

loc_804D18A0:
{
    r3 = (r31 & 16);
}

loc_804D18A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1920;
    }
}

loc_804D18A8:
{
    r3 = -855638016;
    r4 = MemoryHw::FlatRead32((r3 + 26624));
    r3 = (r4 & 2);
}

loc_804D18B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18BC;
    }
}

loc_804D18B8:
{
    r0 = (r0 | 4194304);
}

loc_804D18BC:
{
    r3 = (r4 & 8);
}

loc_804D18C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18C8;
    }
}

loc_804D18C4:
{
    r0 = (r0 | 2097152);
}

loc_804D18C8:
{
    r3 = (r4 & 2048);
}

loc_804D18CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18D4;
    }
}

loc_804D18D0:
{
    r0 = (r0 | 1048576);
}

loc_804D18D4:
{
    r3 = -855638016;
    r4 = MemoryHw::FlatRead32((r3 + 26644));
    r3 = (r4 & 2);
}

loc_804D18E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18E8;
    }
}

loc_804D18E4:
{
    r0 = (r0 | 524288);
}

loc_804D18E8:
{
    r3 = (r4 & 8);
}

loc_804D18EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D18F4;
    }
}

loc_804D18F0:
{
    r0 = (r0 | 262144);
}

loc_804D18F4:
{
    r3 = (r4 & 2048);
}

loc_804D18F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1900;
    }
}

loc_804D18FC:
{
    r0 = (r0 | 131072);
}

loc_804D1900:
{
    r3 = -855638016;
    r4 = MemoryHw::FlatRead32((r3 + 26664));
    r3 = (r4 & 2);
}

loc_804D190C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1914;
    }
}

loc_804D1910:
{
    r0 = (r0 | 65536);
}

loc_804D1914:
{
    r3 = (r4 & 8);
}

loc_804D1918:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1920;
    }
}

loc_804D191C:
{
    r0 = (r0 | 32768);
}

loc_804D1920:
{
    r3 = (r31 & 8192);
}

loc_804D1924:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D192C;
    }
}

loc_804D1928:
{
    r0 = (r0 | 32);
}

loc_804D192C:
{
    r3 = (r31 & 4096);
}

loc_804D1930:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1938;
    }
}

loc_804D1934:
{
    r0 = (r0 | 64);
}

loc_804D1938:
{
    r3 = (r31 & 1024);
}

loc_804D193C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1944;
    }
}

loc_804D1940:
{
    r0 = (r0 | 4096);
}

loc_804D1944:
{
    r3 = (r31 & 512);
}

loc_804D1948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1950;
    }
}

loc_804D194C:
{
    r0 = (r0 | 8192);
}

loc_804D1950:
{
    r3 = (r31 & 256);
}

loc_804D1954:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D195C;
    }
}

loc_804D1958:
{
    r0 = (r0 | 128);
}

loc_804D195C:
{
    r3 = (r31 & 8);
}

loc_804D1960:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1968;
    }
}

loc_804D1964:
{
    r0 = (r0 | 2048);
}

loc_804D1968:
{
    r3 = (r31 & 4);
}

loc_804D196C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1974;
    }
}

loc_804D1970:
{
    r0 = (r0 | 1024);
}

loc_804D1974:
{
    r3 = (r31 & 2);
}

loc_804D1978:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1980;
    }
}

loc_804D197C:
{
    r0 = (r0 | 512);
}

loc_804D1980:
{
    r3 = (r31 & 2048);
}

loc_804D1984:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D198C;
    }
}

loc_804D1988:
{
    r0 = (r0 | 16384);
}

loc_804D198C:
{
    r3 = (r31 & 1);
}

loc_804D1990:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1998;
    }
}

loc_804D1994:
{
    r0 = (r0 | 256);
}

loc_804D1998:
{
    r3 = (r31 & 16384);
}

loc_804D199C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D19A4;
    }
}

loc_804D19A0:
{
    r0 = (r0 | 16);
}

loc_804D19A4:
{
    r3 = 0x80000000u;
    r4 = MemoryHw::FlatRead32((r3 + 196));
    r3 = MemoryHw::FlatRead32((r3 + 200));
    r3 = (r4 | r3);
    r3 = (r0 & ~r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1A44;
    }
}

loc_804D19BC:
{
    r4 = 0x80620000u;
    r4 = (r4 + -9072);
    // nop
}

loc_804D19C8:
{
    r0 = MemoryHw::FlatRead32(r4);
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D19E0;
    }
}

loc_804D19D4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_804D19E8;
}

loc_804D19E0:
{
    r4 = (r4 + 4);
    goto loc_804D19C8;
}

loc_804D19E8:
{
    r3 = MemoryHw::FlatRead32((r13 + -15032));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r31 = MemoryHw::FlatRead32(r3_addr_1);
}

loc_804D19F8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_804D1A44;
    }
}

loc_804D19FC:
{
}

loc_804D1A00:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(4))) {
        goto loc_804D1A1C;
    }
}

loc_804D1A04:
{
    MemoryHw::FlatWrite16((r13 + -15044), static_cast<uint16_t>(r29));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x804D53D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryHw::FlatWrite32((r13 + -15036), r4);
    MemoryHw::FlatWrite32((r13 + -15040), r3);
    r0 = MemoryHw::FlatRead32((r30 + 408));
    MemoryHw::FlatWrite32((r13 + -15048), r0);
}

loc_804D1A1C:
{
    ctx->lr = 0x804D1A20u;
    if constexpr (KnownRegArgsCpuCall<0x804D4030u>(&func_804D4030)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804D4030_34D2 = func_804D4030_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D4030_34D2);
        r4 = static_cast<uint32_t>(regargs_result_804D4030_34D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D4030u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r12 = r31;
    r3 = r29;
    r4 = r30;
    ctr = r12;
    ctx->lr = 0x804D1A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x804D1A38u;
    if constexpr (KnownRegArgsCpuCall<0x804D4070u>(&func_804D4070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804D4070_3BC9 = func_804D4070_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D4070_3BC9);
        r4 = static_cast<uint32_t>(regargs_result_804D4070_3BC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804D4070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->lr = 0x804D1A3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804D4590u>(&func_804D4590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D4590_3FAA = func_804D4590_ra70_1fe_10_0(ctx, r4, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_804D4590_3FAA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D4590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CD720_47BA = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_47BA);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_47BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
}

loc_804D1A44:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x804CD720u>(&func_804CD720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CD720_4E1A = func_804CD720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CD720_4E1A);
        r4 = static_cast<uint32_t>(regargs_result_804CD720_4E1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CD720u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = MemoryHw::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D17C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D17C0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D17C0 func_804D17C0 preserves=true fpr_mask=0x00000000

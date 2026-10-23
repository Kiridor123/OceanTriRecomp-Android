#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801A403C_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A403C;

loc_801A403C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead8((r3 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_801A4060:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_801A4210;
    }
}

loc_801A4064:
{
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_801A406C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801A4210;
    }
}

loc_801A4070:
{
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_801A4080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4124;
    }
}

loc_801A4084:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A40E0;
    }
}

loc_801A4088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(8));
}

loc_801A408C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A41E8;
    }
}

loc_801A4090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A40B8;
    }
}

loc_801A4094:
{
}

loc_801A4098:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(5))) {
        goto loc_801A40AC;
    }
}

loc_801A409C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801A40A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4164;
    }
}

loc_801A40A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A4124;
    }
}

loc_801A40A8:
{
    goto loc_801A41E8;
}

loc_801A40AC:
{
}

loc_801A40B0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_801A4164;
    }
}

loc_801A40B4:
{
    goto loc_801A41E8;
}

loc_801A40B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(18));
}

loc_801A40BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A417C;
    }
}

loc_801A40C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A40D4;
    }
}

loc_801A40C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_801A40C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4130;
    }
}

loc_801A40CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A41E8;
    }
}

loc_801A40D0:
{
    goto loc_801A4164;
}

loc_801A40D4:
{
}

loc_801A40D8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(20))) {
        goto loc_801A41E8;
    }
}

loc_801A40DC:
{
    goto loc_801A4164;
}

loc_801A40E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(110));
}

loc_801A40E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A41E8;
    }
}

loc_801A40E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A4110;
    }
}

loc_801A40EC:
{
}

loc_801A40F0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(104))) {
        goto loc_801A4104;
    }
}

loc_801A40F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(101));
}

loc_801A40F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4124;
    }
}

loc_801A40FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A4164;
    }
}

loc_801A4100:
{
    goto loc_801A41E8;
}

loc_801A4104:
{
}

loc_801A4108:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(109))) {
        goto loc_801A4170;
    }
}

loc_801A410C:
{
    goto loc_801A41E8;
}

loc_801A4110:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(114));
}

loc_801A4114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A4124;
    }
}

loc_801A4118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A41E8;
    }
}

loc_801A411C:
{
}

loc_801A4120:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(112))) {
        goto loc_801A41E8;
    }
}

loc_801A4124:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4130:
{
    r3 = r31;
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21668));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    ctx->lr = 0x801A4144u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F980_1866 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_1866);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_1866 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801A4148:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A4158;
    }
}

loc_801A414C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4158:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4164:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4170:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A417C:
{
    r3 = r31;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21596));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21440));
    ctx->lr = 0x801A4190u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F980_2016 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_2016);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_2016 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801A4194:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A41C0;
    }
}

loc_801A4198:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 8192);
}

loc_801A41A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A41B4;
    }
}

loc_801A41A8:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A41B4:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A41C0:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 8192);
}

loc_801A41CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A41DC;
    }
}

loc_801A41D0:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A41DC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A41E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 2102));
    r0 = (r0 & 8192);
}

loc_801A41F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A4204;
    }
}

loc_801A41F8:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4204:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4210:
{
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801A4220:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(109))) {
        goto loc_801A4254;
    }
}

loc_801A4224:
{
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_801A4234:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(106))) {
        goto loc_801A4260;
    }
}

loc_801A4238:
{
    r3 = r31;
    r4 = 2;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21232));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    ctx->lr = 0x801A424Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8012F980_2DF8 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_2DF8);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_2DF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_801A4250:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A4260;
    }
}

loc_801A4254:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
    goto loc_801A4268;
}

loc_801A4260:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 909), static_cast<uint8_t>(r0));
}

loc_801A4268:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A403C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A403C_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A403C func_801A403C preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4D04(CpuContext* ctx);
extern "C" uint64_t func_800E4D04_ra98_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800E4F5C(CpuContext* ctx);
extern "C" uint64_t func_800E4F5C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804469B8(CpuContext* ctx);
extern "C" uint32_t func_804469B8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_800F2E9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    MKW_GUEST_ENTER(0x800F2E9Cu);
    goto loc_800F2E9C;

loc_800F2E9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = 0;
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x805A0000u;
    r3 = (r3 + -17700);
    r3_addr_0 = (r3 + r0);
    r30 = MemoryInline::FlatRead8(r3_addr_0);
    r3 = (r0 + r3);
    r31 = MemoryInline::FlatRead8((r3 + 1));
    ctx->lr = 0x800F2EE0u;
    if constexpr (KnownRegArgsCpuCall<0x804469B8u>(&func_804469B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804469B8_7F7 = func_804469B8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804469B8_7F7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804469B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_800F2EE4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F2F10;
    }
}

loc_800F2EE8:
{
    r0 = (r28 & 255);
}

loc_800F2EF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(44))) {
        goto loc_800F2F0C;
    }
}

loc_800F2EF4:
{
}

loc_800F2EF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(47))) {
        goto loc_800F2F0C;
    }
}

loc_800F2EFC:
{
}

loc_800F2F00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(43))) {
        goto loc_800F2F0C;
    }
}

loc_800F2F04:
{
}

loc_800F2F08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_800F2F10;
    }
}

loc_800F2F0C:
{
    r30 = 1;
}

loc_800F2F10:
{
}

loc_800F2F14:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800F2F28;
    }
}

loc_800F2F18:
{
}

loc_800F2F1C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800F2F28;
    }
}

loc_800F2F20:
{
    r3 = 1;
    goto loc_800F2FB8;
}

loc_800F2F28:
{
}

loc_800F2F2C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800F2F64;
    }
}

loc_800F2F30:
{
    r3 = 0;
    ctx->lr = 0x800F2F38u;
    if constexpr (KnownRegArgsCpuCall<0x800E4F5Cu>(&func_800E4F5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4F5C_F2E = func_800E4F5C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4F5C_F2E);
        r4 = static_cast<uint32_t>(regargs_result_800E4F5C_F2E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4F5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = (r3 + -1);
}

loc_800F2F44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800F2F54;
    }
}

loc_800F2F48:
{
    r3 = 0;
    r4 = 2;
    ctx->lr = 0x800F2F54u;
    if constexpr (KnownRegArgsCpuCall<0x800E4D04u>(&func_800E4D04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4D04_12A4 = func_800E4D04_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D04_12A4);
        r4 = static_cast<uint32_t>(regargs_result_800E4D04_12A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x800E4D04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
}

loc_800F2F54:
{
}

loc_800F2F58:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_800F2F68;
    }
}

loc_800F2F5C:
{
    r29 = 1;
    goto loc_800F2F68;
}

loc_800F2F64:
{
    r29 = 1;
}

loc_800F2F68:
{
}

loc_800F2F6C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800F2FA4;
    }
}

loc_800F2F70:
{
    r3 = 2;
    ctx->lr = 0x800F2F78u;
    if constexpr (KnownRegArgsCpuCall<0x800E4F5Cu>(&func_800E4F5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4F5C_18F1 = func_800E4F5C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E4F5C_18F1);
        r4 = static_cast<uint32_t>(regargs_result_800E4F5C_18F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800E4F5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = (r3 + -1);
}

loc_800F2F84:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800F2F94;
    }
}

loc_800F2F88:
{
    r3 = 2;
    r4 = 2;
    ctx->lr = 0x800F2F94u;
    if constexpr (KnownRegArgsCpuCall<0x800E4D04u>(&func_800E4D04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800E4D04_1C6A = func_800E4D04_ra98_1fe_18_0(ctx, r3, r4, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E4D04_1C6A);
        r4 = static_cast<uint32_t>(regargs_result_800E4D04_1C6A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x800E4D04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
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
}

loc_800F2F94:
{
}

loc_800F2F98:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(3))) {
        goto loc_800F2FA8;
    }
}

loc_800F2F9C:
{
    r29 = (r29 + 1);
    goto loc_800F2FA8;
}

loc_800F2FA4:
{
    r29 = (r29 + 1);
}

loc_800F2FA8:
{
    r3 = (r29 & 255);
    r0 = (r3 + -2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
}

loc_800F2FB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003F9F gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F2E9C func_800F2E9C preserves=true fpr_mask=0x00000000

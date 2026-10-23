#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C4E8(CpuContext* ctx);
extern "C" uint32_t func_8008C4E8_ra58_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80098FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
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

    goto loc_80098FD0;

loc_80098FD0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r31 = r4;
}

loc_80098FF4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80099014;
    }
}

loc_80098FF8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 7552);
    r4 = 126;
    r5 = 0x80590000u;
    r5 = (r5 + 7568);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80099014u;
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

loc_80099014:
{
    r3 = r29;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_80099020:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80099040;
    }
}

loc_80099024:
{
    r3 = 0x80590000u;
    r3 = (r3 + 7552);
    r4 = 127;
    r5 = 0x80590000u;
    r5 = (r5 + 7608);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80099040u;
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

loc_80099040:
{
    r3 = r29;
    // inline leaf 0x8005AB50 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8005AB50
}

loc_8009904C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009917C;
    }
}

loc_80099050:
{
    r3 = r29;
    // inline leaf 0x8005D128 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8005D128
    r30 = r3;
    r29 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r3 & 8);
}

loc_8009906C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80099088;
    }
}

loc_80099070:
{
    r29 = (r29 | 24);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31576));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    goto loc_800990A4;
}

loc_80099088:
{
    r0 = (r3 & 16);
}

loc_80099090:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80099098;
    }
}

loc_80099094:
{
    r29 = (r29 | 16);
}

loc_80099098:
{
    r3 = (r31 + 4);
    r4 = (r30 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800990A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 & 4);
}

loc_800990B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800990C4;
    }
}

loc_800990B4:
{
    r3 = (r31 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r29 = (r29 | 32);
    goto loc_800990F0;
}

loc_800990C4:
{
    r3 = (r1 + 8);
    r4 = (r30 + 44);
    // inline leaf 0x80067EB8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80067EB8
    r4 = r3;
    r3 = (r31 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 28);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 52));
    if constexpr (KnownRegArgsCpuCall<0x8008C4E8u>(&func_8008C4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008C4E8_1840 = func_8008C4E8_ra58_1fe_10_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8008C4E8_1840;
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008C4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
    }
}

loc_800990F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 & 2);
}

loc_800990FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80099108;
    }
}

loc_80099100:
{
    r29 = (r29 | 64);
    goto loc_80099120;
}

loc_80099108:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    MemoryInline::FlatWriteFloat32((r31 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 64));
    MemoryInline::FlatWriteFloat32((r31 + 72), f0.d);
}

loc_80099120:
{
    r0 = (r29 & 32);
}

loc_80099128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009914C;
    }
}

loc_8009912C:
{
    r0 = (r29 & 64);
}

loc_80099134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009914C;
    }
}

loc_80099138:
{
    r29 = (r29 | 4);
    r0 = (r29 & 8);
}

loc_80099144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009914C;
    }
}

loc_80099148:
{
    r29 = (r29 | 2);
}

loc_8009914C:
{
    r29 = (r29 | -2147483648);
    r29 = (r29 | 1);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r3 & 32);
}

loc_80099160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80099168;
    }
}

loc_80099164:
{
    r29 = (r29 | 1024);
}

loc_80099168:
{
    r0 = (r3 & 64);
}

loc_80099170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80099178;
    }
}

loc_80099174:
{
    r29 = (r29 | 2048);
}

loc_80099178:
{
    MemoryInline::FlatWrite32(r31, r29);
}

loc_8009917C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80098FD0 func_80098FD0 preserves=true fpr_mask=0x00000000

#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E3A8(CpuContext* ctx);
extern "C" uint64_t func_8027E3A8_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80315AC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80315AC4;

loc_80315AC4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r6 = MemoryInline::FlatRead32(r4);
    r31 = 0;
}

loc_80315AE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80315B10;
    }
}

loc_80315AEC:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11108);
    r4 = 7959;
    r5 = 0x805E0000u;
    r5 = (r5 + -11088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80315B08u;
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
    r31 = 1;
    goto loc_80315C48;
}

loc_80315B10:
{
}

loc_80315B14:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80315B3C;
    }
}

loc_80315B18:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -11108);
    r4 = 7963;
    r5 = 0x805E0000u;
    r5 = (r5 + -11088);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80315B34u;
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
    r31 = 1;
    goto loc_80315C48;
}

loc_80315B3C:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_80315B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315B50;
    }
}

loc_80315B48:
{
    r31 = 2;
    goto loc_80315C48;
}

loc_80315B50:
{
    r4 = (r5 & 255);
    r0 = (r4 & 1);
}

loc_80315B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315C28;
    }
}

loc_80315B60:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_80315B68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_80315B80;
    }
}

loc_80315B6C:
{
}

loc_80315B70:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_80315C04;
    }
}

loc_80315B74:
{
}

loc_80315B78:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_80315B94;
    }
}

loc_80315B7C:
{
    goto loc_80315C48;
}

loc_80315B80:
{
}

loc_80315B84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_80315C48;
    }
}

loc_80315B88:
{
}

loc_80315B8C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_80315C04;
    }
}

loc_80315B90:
{
    goto loc_80315BE4;
}

loc_80315B94:
{
    r0 = (r4 & 8);
}

loc_80315B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315C48;
    }
}

loc_80315BA0:
{
    r3 = r6;
    ctx->lr = 0x80315BA8u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3A8u>(&func_8027E3A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8027E3A8_10E2 = func_8027E3A8_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3A8_10E2);
        r4 = static_cast<uint32_t>(regargs_result_8027E3A8_10E2 >> 32);
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
        InvokeDirectCpu<0x8027E3A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r30 + 464));
}

loc_80315BB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80315BCC;
    }
}

loc_80315BB4:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 8);
}

loc_80315BC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315C48;
    }
}

loc_80315BC4:
{
    r31 = 6;
    goto loc_80315C48;
}

loc_80315BCC:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (r0 & 4);
}

loc_80315BD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80315C48;
    }
}

loc_80315BDC:
{
    r31 = 7;
    goto loc_80315C48;
}

loc_80315BE4:
{
    r0 = (r4 & 8);
}

loc_80315BEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315C48;
    }
}

loc_80315BF0:
{
    r0 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315BF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80315C48;
    }
}

loc_80315BFC:
{
    r31 = 9;
    goto loc_80315C48;
}

loc_80315C04:
{
    r0 = (r5 & 255);
    r0 = (r0 & 8);
}

loc_80315C10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80315C48;
    }
}

loc_80315C14:
{
    r0 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315C1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80315C48;
    }
}

loc_80315C20:
{
    r31 = 8;
    goto loc_80315C48;
}

loc_80315C28:
{
    r4 = MemoryInline::FlatRead8(r6);
    r0 = (r4 + -11);
}

loc_80315C34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80315C48;
    }
}

loc_80315C38:
{
    r0 = MemoryInline::FlatRead8((r3 + 464));
}

loc_80315C40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_80315C48;
    }
}

loc_80315C44:
{
    r31 = 3;
}

loc_80315C48:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80315AC4 func_80315AC4 preserves=true fpr_mask=0x00000000

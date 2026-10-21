#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009BADC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lfsx_8009BCDC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8009BADCu);
    goto loc_8009BADC;

loc_8009BADC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009BB24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BB3C;
    }
}

loc_8009BB28:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009BB34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BB3C;
    }
}

loc_8009BB38:
{
    r10 = 0;
}

loc_8009BB3C:
{
}

loc_8009BB40:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009BB58;
    }
}

loc_8009BB44:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009BB50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BB58;
    }
}

loc_8009BB54:
{
    r9 = 0;
}

loc_8009BB58:
{
}

loc_8009BB5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009BB70;
    }
}

loc_8009BB60:
{
    r0 = (r11 + 1073741824);
}

loc_8009BB68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BB70;
    }
}

loc_8009BB6C:
{
    r8 = 0;
}

loc_8009BB70:
{
}

loc_8009BB74:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009BB8C;
    }
}

loc_8009BB78:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009BB84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BB8C;
    }
}

loc_8009BB88:
{
    r7 = 0;
}

loc_8009BB8C:
{
}

loc_8009BB90:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009BBA8;
    }
}

loc_8009BB94:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009BBA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BBA8;
    }
}

loc_8009BBA4:
{
    r6 = 0;
}

loc_8009BBA8:
{
}

loc_8009BBAC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009BBC4;
    }
}

loc_8009BBB0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009BBBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BBC4;
    }
}

loc_8009BBC0:
{
    r5 = 0;
}

loc_8009BBC4:
{
}

loc_8009BBC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009BBEC;
    }
}

loc_8009BBCC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9240);
    r4 = 472;
    r5 = 0x80590000u;
    r5 = (r5 + 9188);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009BBECu;
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

loc_8009BBEC:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009BC10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC28;
    }
}

loc_8009BC14:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009BC20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC28;
    }
}

loc_8009BC24:
{
    r9 = 0;
}

loc_8009BC28:
{
}

loc_8009BC2C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009BC44;
    }
}

loc_8009BC30:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009BC3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC44;
    }
}

loc_8009BC40:
{
    r8 = 0;
}

loc_8009BC44:
{
}

loc_8009BC48:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009BC5C;
    }
}

loc_8009BC4C:
{
    r0 = (r10 + 1073741824);
}

loc_8009BC54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC5C;
    }
}

loc_8009BC58:
{
    r7 = 0;
}

loc_8009BC5C:
{
}

loc_8009BC60:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009BC78;
    }
}

loc_8009BC64:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009BC70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC78;
    }
}

loc_8009BC74:
{
    r6 = 0;
}

loc_8009BC78:
{
}

loc_8009BC7C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009BC94;
    }
}

loc_8009BC80:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009BC8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BC94;
    }
}

loc_8009BC90:
{
    r5 = 0;
}

loc_8009BC94:
{
}

loc_8009BC98:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009BCB0;
    }
}

loc_8009BC9C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009BCA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BCB0;
    }
}

loc_8009BCAC:
{
    r4 = 0;
}

loc_8009BCB0:
{
}

loc_8009BCB4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009BCD8;
    }
}

loc_8009BCB8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9176);
    r4 = 473;
    r5 = 0x80590000u;
    r5 = (r5 + 9124);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009BCD8u;
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

loc_8009BCD8:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_8009BCDC_loc_0 = (r29 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8009BCDC_loc_0);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    r3 = (r29 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009BADC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009BADC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009BADC func_8009BADC preserves=true fpr_mask=0x00000000

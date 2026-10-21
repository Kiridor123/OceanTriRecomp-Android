#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005D888_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8005D888u);
    goto loc_8005D888;

loc_8005D888:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
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

loc_8005D8C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D8D8;
    }
}

loc_8005D8C4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8005D8D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D8D8;
    }
}

loc_8005D8D4:
{
    r10 = 0;
}

loc_8005D8D8:
{
}

loc_8005D8DC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8005D8F4;
    }
}

loc_8005D8E0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8005D8EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D8F4;
    }
}

loc_8005D8F0:
{
    r9 = 0;
}

loc_8005D8F4:
{
}

loc_8005D8F8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005D90C;
    }
}

loc_8005D8FC:
{
    r0 = (r11 + 1073741824);
}

loc_8005D904:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D90C;
    }
}

loc_8005D908:
{
    r8 = 0;
}

loc_8005D90C:
{
}

loc_8005D910:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005D928;
    }
}

loc_8005D914:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8005D920:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D928;
    }
}

loc_8005D924:
{
    r7 = 0;
}

loc_8005D928:
{
}

loc_8005D92C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005D944;
    }
}

loc_8005D930:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8005D93C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D944;
    }
}

loc_8005D940:
{
    r6 = 0;
}

loc_8005D944:
{
}

loc_8005D948:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005D960;
    }
}

loc_8005D94C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005D958:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005D960;
    }
}

loc_8005D95C:
{
    r5 = 0;
}

loc_8005D960:
{
}

loc_8005D964:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005D988;
    }
}

loc_8005D968:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 110;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005D988u;
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

loc_8005D988:
{
    r6 = 0;
    r5 = 0;
    r3 = 65536;
    r4 = (r3 + -32768);
    goto loc_8005D9AC;
}

loc_8005D99C:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r4));
    r5 = (r5 + 2);
    r6 = (r6 + 1);
}

loc_8005D9AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8005D9B4:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_8005D99C;
    }
}

loc_8005D9B8:
{
    r3 = r31;
    r4 = 4;
    r5 = 0;
    // inline leaf 0x800649EC (11 guest instruction(s))
}

loc_inl0_0x800649EC:
{
}

loc_inl0_0x800649F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80064A04;
    }
}

loc_inl0_0x800649F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl0_cont_800649EC;
}

loc_inl0_0x80064A04:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl0_cont_800649EC:
{
    // end of inlined leaf 0x800649EC
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8005D888(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005D888_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005D888 func_8005D888 preserves=true fpr_mask=0x00000000

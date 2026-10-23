#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027BCAC(CpuContext* ctx);
extern "C" uint32_t func_8027BCAC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804469B8(CpuContext* ctx);
extern "C" uint32_t func_804469B8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_803C4554(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_803C4554;

loc_803C4554:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r3 = 0x806D0000u;
    r28 = (r3 + 20384);
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r29 = r3;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r4 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803C45A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r4))) {
        goto loc_803C45B4;
    }
}

loc_803C45AC:
{
    r3 = 0;
    goto loc_803C46A4;
}

loc_803C45B4:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_803C45C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803C45E0;
    }
}

loc_803C45C4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 300));
}

loc_803C45D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803C45E0;
    }
}

loc_803C45D8:
{
    r3 = 0;
    goto loc_803C46A4;
}

loc_803C45E0:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_803C45EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_803C4618;
    }
}

loc_803C45F0:
{
    ctx->lr = 0x803C45F4u;
    if constexpr (KnownRegArgsCpuCall<0x804469B8u>(&func_804469B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804469B8_1343 = func_804469B8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804469B8_1343;
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

loc_803C45F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803C4610;
    }
}

loc_803C45FC:
{
    r3 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    goto loc_803C46A4;
}

loc_803C4610:
{
    r3 = 1;
    goto loc_803C46A4;
}

loc_803C4618:
{
}

loc_803C461C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(44))) {
        goto loc_803C46A0;
    }
}

loc_803C4620:
{
    r3 = 0;
    ctx->lr = 0x803C4628u;
    if constexpr (KnownRegArgsCpuCall<0x8027BCACu>(&func_8027BCAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8027BCAC_1876 = func_8027BCAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8027BCAC_1876;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027BCACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803C462C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803C4638;
    }
}

loc_803C4630:
{
    r3 = 0;
    goto loc_803C46A4;
}

loc_803C4638:
{
    r6 = 0;
    r5 = 0;
    r0 = (r29 & 65535);
    ctr = r0;
}

loc_803C464C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_803C4690;
    }
}

loc_803C4650:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803C4658:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803C4684;
    }
}

loc_803C465C:
{
    r0 = MemoryInline::FlatRead8((r31 + 3));
}

loc_803C4664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803C4684;
    }
}

loc_803C4668:
{
    r4 = MemoryInline::FlatRead8((r31 + 481));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803C4678:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_803C4684;
    }
}

loc_803C467C:
{
    r6 = 1;
    goto loc_803C4690;
}

loc_803C4684:
{
    r5 = (r5 + 1);
    r31 = (r31 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803C4650;
    }
}

loc_803C4690:
{
}

loc_803C4694:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_803C46A0;
    }
}

loc_803C4698:
{
    r3 = 0;
    goto loc_803C46A4;
}

loc_803C46A0:
{
    r3 = 1;
}

loc_803C46A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803C4554 func_803C4554 preserves=true fpr_mask=0x00000000

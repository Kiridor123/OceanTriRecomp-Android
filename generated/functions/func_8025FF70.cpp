#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029513C(CpuContext* ctx);
extern "C" uint64_t func_8029513C_ra38_1f0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);

extern "C" uint64_t func_8025FF70_ra38_1f0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8025FF70u);
    goto loc_8025FF70;

loc_8025FF70:
{
    MemoryAlias::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = 258;
    guest_range_0 = MemoryAlias::ResolveRangeHost((r3 + 9), 0, 859u, true, false);
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 0u, (r3 + 9));
}

loc_8025FF9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80260018;
    }
}

loc_8025FFA0:
{
}

loc_8025FFA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80260050;
    }
}

loc_8025FFA8:
{
    r4 = 4544;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl0_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl0_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8026FF14;
    }
}

loc_inl0_0x8026FF08:
{
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 851u, (r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl0_cont_8026FEFC;
}

loc_inl0_0x8026FF14:
{
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 855u, (r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl0_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_8025FFB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80260010;
    }
}

loc_8025FFB8:
{
    r0 = MemoryAlias::FlatRead8((r29 + 10));
}

loc_8025FFC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80260008;
    }
}

loc_8025FFC4:
{
    r3 = MemoryAlias::FlatRead16((r29 + 12));
    r0 = (r3 + -128);
}

loc_8025FFD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(6))) {
        goto loc_8025FFF8;
    }
}

loc_8025FFD4:
{
    r0 = (r3 + -15);
}

loc_8025FFDC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8025FFF8;
    }
}

loc_8025FFE0:
{
}

loc_8025FFE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(123))) {
        goto loc_8025FFF8;
    }
}

loc_8025FFE8:
{
}

loc_8025FFEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(139))) {
        goto loc_8025FFF8;
    }
}

loc_8025FFF0:
{
}

loc_8025FFF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(182))) {
        goto loc_80260000;
    }
}

loc_8025FFF8:
{
    r31 = (r31 | 64);
    goto loc_802600E0;
}

loc_80260000:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_80260008:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_80260010:
{
    r31 = (r31 | 64);
    goto loc_802600E0;
}

loc_80260018:
{
    r0 = MemoryAlias::ReadResolved8(guest_range_0, 1u, (r3 + 10));
}

loc_80260020:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8026002C;
    }
}

loc_80260024:
{
    r31 = (r31 | 64);
    goto loc_802600E0;
}

loc_8026002C:
{
    r4 = 0;
    r5 = 62;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl1_0x8026FECC:
{
    r6 = MemoryAlias::ReadResolved8(guest_range_0, 1u, (r3 + 10));
    r0 = (r4 & 255);
}

loc_inl1_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEDC:
{
    r3 = MemoryAlias::ReadResolved16(guest_range_0, 3u, (r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl1_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8026FEF4;
    }
}

loc_inl1_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl1_cont_8026FECC;
}

loc_inl1_0x8026FEF4:
{
    r3 = 0;
}

loc_inl1_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_8026003C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80260048;
    }
}

loc_80260040:
{
    r31 = (r31 | 64);
    goto loc_802600E0;
}

loc_80260048:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_80260050:
{
    r4 = 4544;
    // inline leaf 0x8026FEFC (10 guest instruction(s))
}

loc_inl2_0x8026FEFC:
{
    r0 = (r4 & -2147483648);
}

loc_inl2_0x8026FF04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8026FF14;
    }
}

loc_inl2_0x8026FF08:
{
    r0 = MemoryAlias::ReadResolved32(guest_range_0, 851u, (r3 + 860));
    r3 = (r0 & r4);
    goto loc_inl2_cont_8026FEFC;
}

loc_inl2_0x8026FF14:
{
    r3 = MemoryAlias::ReadResolved32(guest_range_0, 855u, (r3 + 864));
    r0 = (r4 & 2147483647);
    r3 = (r3 & r0);
}

loc_inl2_cont_8026FEFC:
{
    // end of inlined leaf 0x8026FEFC
}

loc_8026005C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802600DC;
    }
}

loc_80260060:
{
    r0 = MemoryAlias::FlatRead8((r29 + 10));
}

loc_80260068:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802600D4;
    }
}

loc_8026006C:
{
    r3 = MemoryAlias::FlatRead16((r29 + 12));
    r0 = (r3 + -140);
}

loc_80260078:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(9))) {
        goto loc_8026009C;
    }
}

loc_8026007C:
{
    r0 = (r3 + -25);
}

loc_80260084:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8026009C;
    }
}

loc_80260088:
{
}

loc_8026008C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(124))) {
        goto loc_8026009C;
    }
}

loc_80260090:
{
}

loc_80260094:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(27))) {
        goto loc_802600A4;
    }
}

loc_80260098:
{
    goto loc_802600CC;
}

loc_8026009C:
{
    r31 = (r31 | 128);
    goto loc_802600E0;
}

loc_802600A4:
{
    r0 = MemoryAlias::FlatRead8((r29 + 2));
}

loc_802600AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802600C4;
    }
}

loc_802600B0:
{
    r0 = MemoryAlias::FlatRead8((r29 + 24));
}

loc_802600B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802600C4;
    }
}

loc_802600BC:
{
    r31 = (r31 | 128);
    goto loc_802600E0;
}

loc_802600C4:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_802600CC:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_802600D4:
{
    r31 = (r31 | 192);
    goto loc_802600E0;
}

loc_802600DC:
{
    r31 = (r31 | 128);
}

loc_802600E0:
{
    r0 = MemoryAlias::FlatRead8((r29 + 10));
}

loc_802600E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80260118;
    }
}

loc_802600EC:
{
    r3 = MemoryAlias::FlatRead16((r29 + 12));
    r0 = (r3 + -10);
}

loc_802600F8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80260114;
    }
}

loc_802600FC:
{
    r0 = (r3 + -74);
}

loc_80260104:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80260114;
    }
}

loc_80260108:
{
    r0 = (r3 + -102);
}

loc_80260110:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80260118;
    }
}

loc_80260114:
{
    r31 = (r31 & 65279);
}

loc_80260118:
{
    r3 = r29;
    r4 = (r30 & 255);
    r5 = (r31 & 65535);
    ctx->lr = 0x80260128u;
    if constexpr (KnownRegArgsCpuCall<0x8029513Cu>(&func_8029513C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_8029513C_2159 = func_8029513C_ra38_1f0_18_0(ctx, r3, r4, r5, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8029513C_2159);
        r4 = static_cast<uint32_t>(regargs_result_8029513C_2159 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8029513Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryAlias::FlatWrite8((r29 + 873), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead32((r29 + 868));
}

loc_80260138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802601DC;
    }
}

loc_8026013C:
{
    r7 = 0;
    r5 = 0;
    r3 = 0x806B0000u;
    r4 = (r3 + -9016);
    r3 = 1;
    r0 = 5;
    ctr = r0;
}

loc_80260158:
{
    r0 = MemoryAlias::FlatRead8((r29 + 8));
    r0 = (r0 * 264);
    r6 = (r4 + r0);
    r6_addr_2 = (r6 + r5);
    r0 = MemoryAlias::FlatRead16(r6_addr_2);
}

loc_8026016C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802601DC;
    }
}

loc_80260170:
{
    r0 = (r0 & 2);
}

loc_80260178:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80260190;
    }
}

loc_8026017C:
{
    r0 = MemoryAlias::FlatRead32((r29 + 868));
    r0 = (r0 & -536870905);
}

loc_80260188:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80260190;
    }
}

loc_8026018C:
{
    MemoryAlias::FlatWrite8((r29 + 873), static_cast<uint8_t>(r3));
}

loc_80260190:
{
    r5 = (r5 + 24);
    r7 = (r7 + 1);
    r0 = MemoryAlias::FlatRead8((r29 + 8));
    r0 = (r0 * 264);
    r6 = (r4 + r0);
    r6_addr_3 = (r6 + r5);
    r0 = MemoryAlias::FlatRead16(r6_addr_3);
}

loc_802601AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802601DC;
    }
}

loc_802601B0:
{
    r0 = (r0 & 2);
}

loc_802601B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802601D0;
    }
}

loc_802601BC:
{
    r0 = MemoryAlias::FlatRead32((r29 + 868));
    r0 = (r0 & -536870905);
}

loc_802601C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802601D0;
    }
}

loc_802601CC:
{
    MemoryAlias::FlatWrite8((r29 + 873), static_cast<uint8_t>(r3));
}

loc_802601D0:
{
    r5 = (r5 + 24);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80260158;
    }
}

loc_802601DC:
{
    r3 = 0;
    r0 = MemoryAlias::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025FF70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025FF70_ra38_1f0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FF1 fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025FF70 func_8025FF70 preserves=true fpr_mask=0x00000000

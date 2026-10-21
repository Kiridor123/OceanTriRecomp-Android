#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E30C(CpuContext* ctx);
extern "C" uint64_t func_8027E30C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027E3B8(CpuContext* ctx);
extern "C" uint64_t func_8027E3B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027EDD0(CpuContext* ctx);
extern "C" uint64_t func_8027EDD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80212B80_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80212B80u);
    goto loc_80212B80;

loc_80212B80:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r3 = (r3 & 255);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_6EA = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_6EA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80212BB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212BCC;
    }
}

loc_80212BB8:
{
}

loc_80212BBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80212C88;
    }
}

loc_80212BC0:
{
}

loc_80212BC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80212E24;
    }
}

loc_80212BC8:
{
    goto loc_80212E80;
}

loc_80212BCC:
{
    r0 = (r30 & 255);
}

loc_80212BD4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80212BF0;
    }
}

loc_80212BD8:
{
    r3 = (r29 & 255);
    r4 = (r31 & 65535);
    ctx->lr = 0x80212BE4u;
    if constexpr (KnownRegArgsCpuCall<0x8027E3B8u>(&func_8027E3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E3B8_C50 = func_8027E3B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E3B8_C50);
        r4 = static_cast<uint32_t>(regargs_result_8027E3B8_C50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (0 - r0);
    goto loc_80212E84;
}

loc_80212BF0:
{
    r3 = (r29 & 255);
    r4 = (r31 & 65535);
    ctx->lr = 0x80212BFCu;
    if constexpr (KnownRegArgsCpuCall<0x8027E30Cu>(&func_8027E30C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E30C_FEC = func_8027E30C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E30C_FEC);
        r4 = static_cast<uint32_t>(regargs_result_8027E30C_FEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E30Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r30 & 255);
}

loc_80212C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212C3C;
    }
}

loc_80212C08:
{
}

loc_80212C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80212C44;
    }
}

loc_80212C10:
{
}

loc_80212C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80212C4C;
    }
}

loc_80212C18:
{
}

loc_80212C1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80212C58;
    }
}

loc_80212C20:
{
}

loc_80212C24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80212C64;
    }
}

loc_80212C28:
{
}

loc_80212C2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80212C70;
    }
}

loc_80212C30:
{
}

loc_80212C34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80212C7C;
    }
}

loc_80212C38:
{
    goto loc_80212E80;
}

loc_80212C3C:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212C44:
{
    r3 = MemoryInline::FlatRead8(r3);
    goto loc_80212E84;
}

loc_80212C4C:
{
    r3 = MemoryInline::FlatRead8((r3 + 8));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_80212E84;
}

loc_80212C58:
{
    r3 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_80212E84;
}

loc_80212C64:
{
    r3 = MemoryInline::FlatRead8((r3 + 11));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_80212E84;
}

loc_80212C70:
{
    r3 = MemoryInline::FlatRead8((r3 + 10));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_80212E84;
}

loc_80212C7C:
{
    r3 = MemoryInline::FlatRead8((r3 + 12));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_80212E84;
}

loc_80212C88:
{
    r3 = (r29 & 255);
    r4 = (r31 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x80212C9Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027EDD0u>(&func_8027EDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027EDD0_1AB6 = func_8027EDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EDD0_1AB6);
        r4 = static_cast<uint32_t>(regargs_result_8027EDD0_1AB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027EDD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = MemoryInline::FlatRead32((r1 + 12));
}

loc_80212CA4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80212DDC;
    }
}

loc_80212CA8:
{
    r3 = (r30 & 255);
    r0 = (r3 + -7);
}

loc_80212CB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_80212CF0;
    }
}

loc_80212CB8:
{
    r0 = (r3 + -13);
}

loc_80212CC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80212D70;
    }
}

loc_80212CC4:
{
}

loc_80212CC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80212CE0;
    }
}

loc_80212CCC:
{
}

loc_80212CD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(12))) {
        goto loc_80212CE8;
    }
}

loc_80212CD4:
{
}

loc_80212CD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_80212DD0;
    }
}

loc_80212CDC:
{
    goto loc_80212DDC;
}

loc_80212CE0:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212CE8:
{
    r3 = MemoryInline::FlatRead16((r4 + 10));
    goto loc_80212E84;
}

loc_80212CF0:
{
}

loc_80212CF4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(7))) {
        goto loc_80212D1C;
    }
}

loc_80212CF8:
{
}

loc_80212CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_80212D24;
    }
}

loc_80212D00:
{
}

loc_80212D04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_80212D2C;
    }
}

loc_80212D08:
{
}

loc_80212D0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_80212D34;
    }
}

loc_80212D10:
{
}

loc_80212D14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(11))) {
        goto loc_80212D3C;
    }
}

loc_80212D18:
{
    goto loc_80212D40;
}

loc_80212D1C:
{
    r3 = 1;
    goto loc_80212D40;
}

loc_80212D24:
{
    r3 = 2;
    goto loc_80212D40;
}

loc_80212D2C:
{
    r3 = 5;
    goto loc_80212D40;
}

loc_80212D34:
{
    r3 = 3;
    goto loc_80212D40;
}

loc_80212D3C:
{
    r3 = 4;
}

loc_80212D40:
{
    r0 = MemoryInline::FlatRead8((r4 + 14));
}

loc_80212D48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80212D68;
    }
}

loc_80212D4C:
{
    r0 = MemoryInline::FlatRead8((r4 + 15));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 & r0);
    goto loc_80212E84;
}

loc_80212D68:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212D70:
{
}

loc_80212D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(13))) {
        goto loc_80212D8C;
    }
}

loc_80212D78:
{
}

loc_80212D7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(14))) {
        goto loc_80212D94;
    }
}

loc_80212D80:
{
}

loc_80212D84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(15))) {
        goto loc_80212D9C;
    }
}

loc_80212D88:
{
    goto loc_80212DA0;
}

loc_80212D8C:
{
    r3 = 1;
    goto loc_80212DA0;
}

loc_80212D94:
{
    r3 = 2;
    goto loc_80212DA0;
}

loc_80212D9C:
{
    r3 = 3;
}

loc_80212DA0:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80212DA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80212DC8;
    }
}

loc_80212DAC:
{
    r0 = MemoryInline::FlatRead8((r4 + 17));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 & ~r3);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r3 & r0);
    goto loc_80212E84;
}

loc_80212DC8:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212DD0:
{
    r0 = MemoryInline::FlatRead8((r4 + 21));
    r3 = (0 - r0);
    goto loc_80212E84;
}

loc_80212DDC:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80212DE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80212E80;
    }
}

loc_80212DE8:
{
    r0 = (r30 & 255);
}

loc_80212DF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212E08;
    }
}

loc_80212DF4:
{
}

loc_80212DF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80212E10;
    }
}

loc_80212DFC:
{
}

loc_80212E00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80212E18;
    }
}

loc_80212E04:
{
    goto loc_80212E80;
}

loc_80212E08:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212E10:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80212E84;
}

loc_80212E18:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    r3 = (0 - r0);
    goto loc_80212E84;
}

loc_80212E24:
{
    r3 = (r29 & 255);
    r4 = (r31 & 65535);
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    ctx->lr = 0x80212E38u;
    if constexpr (KnownRegArgsCpuCall<0x8027EDD0u>(&func_8027EDD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8027EDD0_307E = func_8027EDD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027EDD0_307E);
        r4 = static_cast<uint32_t>(regargs_result_8027EDD0_307E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8027EDD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80212E40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80212E80;
    }
}

loc_80212E44:
{
    r0 = (r30 & 255);
}

loc_80212E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212E64;
    }
}

loc_80212E50:
{
}

loc_80212E54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80212E6C;
    }
}

loc_80212E58:
{
}

loc_80212E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80212E74;
    }
}

loc_80212E60:
{
    goto loc_80212E80;
}

loc_80212E64:
{
    r3 = 0;
    goto loc_80212E84;
}

loc_80212E6C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80212E84;
}

loc_80212E74:
{
    r0 = MemoryInline::FlatRead8((r3 + 19));
    r3 = (0 - r0);
    goto loc_80212E84;
}

loc_80212E80:
{
    r3 = 0;
}

loc_80212E84:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80212B80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80212B80_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80212B80 func_80212B80 preserves=true fpr_mask=0x00000000

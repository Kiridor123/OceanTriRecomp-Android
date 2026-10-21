#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80275448(CpuContext* ctx);
extern "C" uint64_t func_80275448_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80278CE0(CpuContext* ctx);
extern "C" uint32_t func_80278CE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80278D34(CpuContext* ctx);
extern "C" uint32_t func_80278D34_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_80278CE0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278D34_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80278CE0_statefree_v0(uint32_t, uint32_t);
extern "C" uint64_t func_80278D34_statefree_v1(uint32_t, uint32_t);

extern "C" uint64_t func_80278D80_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80278D80u);
    goto loc_80278D80;

loc_80278D80:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80278DA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80279100;
    }
}

loc_80278DA8:
{
    r0 = MemoryInline::FlatRead16((r30 + 1002));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278DB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80278DB8;
    }
}

loc_80278DB4:
{
    r31 = (r31 | 1);
}

loc_80278DB8:
{
    r0 = MemoryInline::FlatRead8((r30 + 1096));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 1097));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
}

loc_80278DD0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278DD8;
    }
}

loc_80278DD4:
{
    r31 = (r31 | 16);
}

loc_80278DD8:
{
    r0 = MemoryInline::FlatRead16((r30 + 900));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278DE0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_80278DE8;
    }
}

loc_80278DE4:
{
    r31 = (r31 | -2147483648);
}

loc_80278DE8:
{
    r0 = MemoryInline::FlatRead8((r30 + 1100));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r30 + 1101));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
}

loc_80278E00:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278E08;
    }
}

loc_80278E04:
{
    r31 = (r31 | 64);
}

loc_80278E08:
{
    r0 = MemoryInline::FlatRead8((r30 + 10));
}

loc_80278E10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80278E58;
    }
}

loc_80278E14:
{
    r3 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r3 + -31);
}

loc_80278E20:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_80278E54;
    }
}

loc_80278E24:
{
    r0 = (r3 + -28);
}

loc_80278E2C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80278E44;
    }
}

loc_80278E30:
{
}

loc_80278E34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(27))) {
        goto loc_80278E4C;
    }
}

loc_80278E38:
{
}

loc_80278E3C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(35))) {
        goto loc_80278E4C;
    }
}

loc_80278E40:
{
    goto loc_80278E58;
}

loc_80278E44:
{
    r31 = (r31 | 2);
    goto loc_80278E58;
}

loc_80278E4C:
{
    r31 = (r31 | 8);
    goto loc_80278E58;
}

loc_80278E54:
{
    r31 = (r31 | 4);
}

loc_80278E58:
{
    r0 = MemoryInline::FlatRead16((r30 + 1124));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278E60:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278E68;
    }
}

loc_80278E64:
{
    r31 = (r31 | 1024);
}

loc_80278E68:
{
    r0 = MemoryInline::FlatRead16((r30 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278E70:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278E78;
    }
}

loc_80278E74:
{
    r31 = (r31 | 2048);
}

loc_80278E78:
{
    r0 = MemoryInline::FlatRead16((r30 + 1118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278E80:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278E88;
    }
}

loc_80278E84:
{
    r31 = (r31 | 16384);
}

loc_80278E88:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278CE0u) && KnownTranslatedCpuCall<0x80278CE0u>::kAvailable && !KnownTranslatedCpuCall<0x80278CE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278CE0u>()) {
        const auto state_free_result_80278CE0_1452 = func_80278CE0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278CE0_1452[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278CE0_1452[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278CE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_80278E94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278E9C;
    }
}

loc_80278E98:
{
    r31 = (r31 | 256);
}

loc_80278E9C:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278D34u) && KnownTranslatedCpuCall<0x80278D34u>::kAvailable && !KnownTranslatedCpuCall<0x80278D34u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278D34u>()) {
        const auto state_free_result_80278D34_181A = func_80278D34_statefree_v1(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_80278D34_181A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278D34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_80278EA8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278EB0;
    }
}

loc_80278EAC:
{
    r31 = (r31 | 512);
}

loc_80278EB0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1058));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278EB8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278EC0;
    }
}

loc_80278EBC:
{
    r31 = (r31 | 128);
}

loc_80278EC0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1040));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278EC8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278ED0;
    }
}

loc_80278ECC:
{
    r31 = (r31 | 131072);
}

loc_80278ED0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1112));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278ED8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278EE0;
    }
}

loc_80278EDC:
{
    r31 = (r31 | 65536);
}

loc_80278EE0:
{
    r0 = MemoryInline::FlatRead32((r30 + 944));
}

loc_80278EE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80278EF0;
    }
}

loc_80278EEC:
{
    r31 = (r31 | 262144);
}

loc_80278EF0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278EF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80278F00;
    }
}

loc_80278EFC:
{
    r31 = (r31 | 8192);
}

loc_80278F00:
{
    MemoryInline::FlatWrite32((r30 + 984), r31);
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 & -1047553);
    MemoryInline::FlatWrite32((r30 + 988), r0);
    r0 = MemoryInline::FlatRead16((r30 + 1070));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278F18:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80278F34;
    }
}

loc_80278F1C:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x80278F28u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_225C = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_225C);
        r4 = static_cast<uint32_t>(regargs_result_80275448_225C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80278F30:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80278F40;
    }
}

loc_80278F34:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80278F40:
{
    r0 = MemoryInline::FlatRead16((r30 + 1072));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278F48:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80278F64;
    }
}

loc_80278F4C:
{
    r3 = r30;
    r4 = 7;
    ctx->lr = 0x80278F58u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_2775 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_2775);
        r4 = static_cast<uint32_t>(regargs_result_80275448_2775 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80278F60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80278F70;
    }
}

loc_80278F64:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80278F70:
{
    r0 = MemoryInline::FlatRead16((r30 + 1074));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278F78:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80278F94;
    }
}

loc_80278F7C:
{
    r3 = r30;
    r4 = 8;
    ctx->lr = 0x80278F88u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_2C8E = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_2C8E);
        r4 = static_cast<uint32_t>(regargs_result_80275448_2C8E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80278F90:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80278FA0;
    }
}

loc_80278F94:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 4096);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80278FA0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1076));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278FA8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80278FD4;
    }
}

loc_80278FAC:
{
    r3 = r30;
    r4 = 9;
    ctx->lr = 0x80278FB8u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_31A7 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_31A7);
        r4 = static_cast<uint32_t>(regargs_result_80275448_31A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80278FC0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80278FD4;
    }
}

loc_80278FC4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80278CE0u) && KnownTranslatedCpuCall<0x80278CE0u>::kAvailable && !KnownTranslatedCpuCall<0x80278CE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80278CE0u>()) {
        const auto state_free_result_80278CE0_3593 = func_80278CE0_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_80278CE0_3593[0]);
        r3 = static_cast<uint32_t>(state_free_result_80278CE0_3593[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80278CE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
}

loc_80278FD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80278FE0;
    }
}

loc_80278FD4:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 8192);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80278FE0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1078));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80278FE8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80279004;
    }
}

loc_80278FEC:
{
    r3 = r30;
    r4 = 10;
    ctx->lr = 0x80278FF8u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_3A5E = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_3A5E);
        r4 = static_cast<uint32_t>(regargs_result_80275448_3A5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80279000:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80279010;
    }
}

loc_80279004:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 16384);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80279010:
{
    r0 = MemoryInline::FlatRead16((r30 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80279018:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80279034;
    }
}

loc_8027901C:
{
    r3 = r30;
    r4 = 6;
    ctx->lr = 0x80279028u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_3F78 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_3F78);
        r4 = static_cast<uint32_t>(regargs_result_80275448_3F78 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80279030:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80279040;
    }
}

loc_80279034:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80279040:
{
    r0 = MemoryInline::FlatRead16((r30 + 1082));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80279048:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80279064;
    }
}

loc_8027904C:
{
    r3 = r30;
    r4 = 7;
    ctx->lr = 0x80279058u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_4492 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_4492);
        r4 = static_cast<uint32_t>(regargs_result_80275448_4492 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80279060:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80279070;
    }
}

loc_80279064:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 65536);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80279070:
{
    r0 = MemoryInline::FlatRead16((r30 + 1084));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80279078:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80279094;
    }
}

loc_8027907C:
{
    r3 = r30;
    r4 = 8;
    ctx->lr = 0x80279088u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_49AC = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_49AC);
        r4 = static_cast<uint32_t>(regargs_result_80275448_49AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80279090:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802790A0;
    }
}

loc_80279094:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 131072);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_802790A0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1086));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802790A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802790C4;
    }
}

loc_802790AC:
{
    r3 = r30;
    r4 = 9;
    ctx->lr = 0x802790B8u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_4EC7 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_4EC7);
        r4 = static_cast<uint32_t>(regargs_result_80275448_4EC7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802790C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_802790D0;
    }
}

loc_802790C4:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 262144);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_802790D0:
{
    r0 = MemoryInline::FlatRead16((r30 + 1088));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802790D8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802790F4;
    }
}

loc_802790DC:
{
    r3 = r30;
    r4 = 10;
    ctx->lr = 0x802790E8u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_53E3 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_53E3);
        r4 = static_cast<uint32_t>(regargs_result_80275448_53E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802790F0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80279100;
    }
}

loc_802790F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 988));
    r0 = (r0 | 524288);
    MemoryInline::FlatWrite32((r30 + 988), r0);
}

loc_80279100:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80278D80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80278D80_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80278D80 func_80278D80 preserves=true fpr_mask=0x00000000

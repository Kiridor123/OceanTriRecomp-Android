#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80276880(CpuContext* ctx);
extern "C" uint32_t func_80276880_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80276D4C(CpuContext* ctx);
extern "C" uint32_t func_80276D4C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802B05FC(CpuContext* ctx);
extern "C" uint64_t func_802B05FC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80276E6C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80276E6C;

loc_80276E6C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276E90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80277128;
    }
}

loc_80276E94:
{
    r3 = MemoryInline::FlatRead8((r30 + 22));
    ctx->lr = 0x80276E9Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B05FCu>(&func_802B05FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B05FC_5F5 = func_802B05FC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802B05FC_5F5);
        r4 = static_cast<uint32_t>(regargs_result_802B05FC_5F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802B05FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r3 & 255);
    r31 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80276EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80276EB8;
    }
}

loc_80276EB0:
{
}

loc_80276EB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80276FC0;
    }
}

loc_80276EB8:
{
    r0 = MemoryInline::FlatRead16((r30 + 1126));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80276EC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80276FC4;
    }
}

loc_80276EC4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80276ECC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80276EF8;
    }
}

loc_80276ED0:
{
    r3 = r30;
    r4 = 128;
    ctx->lr = 0x80276EDCu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276EE0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80276FC4;
    }
}

loc_80276EE4:
{
    r3 = r30;
    r4 = 129;
    ctx->lr = 0x80276EF0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276EF4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80276FC4;
    }
}

loc_80276EF8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80276F00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80276F18;
    }
}

loc_80276F04:
{
    r3 = r30;
    r4 = 129;
    ctx->lr = 0x80276F10u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276F14:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80276FC4;
    }
}

loc_80276F18:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
}

loc_80276F20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80276F64;
    }
}

loc_80276F24:
{
    r3 = r30;
    r4 = 130;
    ctx->lr = 0x80276F30u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276F34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276F40;
    }
}

loc_80276F38:
{
    r31 = 3;
    goto loc_80276FC4;
}

loc_80276F40:
{
    r3 = r30;
    r4 = 131;
    ctx->lr = 0x80276F4Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276F50:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276F5C;
    }
}

loc_80276F54:
{
    r31 = 4;
    goto loc_80276FC4;
}

loc_80276F5C:
{
    r31 = 2;
    goto loc_80276FC4;
}

loc_80276F64:
{
    r3 = r30;
    r4 = 128;
    ctx->lr = 0x80276F70u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276F74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276F80;
    }
}

loc_80276F78:
{
    r31 = 1;
    goto loc_80276FC4;
}

loc_80276F80:
{
    r3 = r30;
    r4 = 130;
    ctx->lr = 0x80276F8Cu;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276F90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276F9C;
    }
}

loc_80276F94:
{
    r31 = 4;
    goto loc_80276FC4;
}

loc_80276F9C:
{
    r3 = r30;
    r4 = 131;
    ctx->lr = 0x80276FA8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276FAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80276FB8;
    }
}

loc_80276FB0:
{
    r31 = 6;
    goto loc_80276FC4;
}

loc_80276FB8:
{
    r31 = 3;
    goto loc_80276FC4;
}

loc_80276FC0:
{
    r31 = 0;
}

loc_80276FC4:
{
    r3 = r30;
    r4 = 69;
    ctx->lr = 0x80276FD0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80276FD4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_80276FD8:
{
    r0 = MemoryInline::FlatRead8((r30 + 9));
}

loc_80276FE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80277064;
    }
}

loc_80276FE4:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 & 1);
}

loc_80276FF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_80276FF4:
{
    r3 = r30;
    r4 = 68;
    ctx->lr = 0x80277000u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80277004:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80277018;
    }
}

loc_80277008:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 & 3);
}

loc_80277014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_80277018:
{
    r31 = (r31 + 1);
    r3 = r30;
    r4 = 71;
    ctx->lr = 0x80277028u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027702C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80277038;
    }
}

loc_80277030:
{
    r31 = (r31 + 1);
    goto loc_802770D4;
}

loc_80277038:
{
    r3 = r30;
    r4 = 70;
    ctx->lr = 0x80277044u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80277048:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802770D4;
    }
}

loc_8027704C:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 & 3);
}

loc_80277058:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_8027705C:
{
    r31 = (r31 + 1);
    goto loc_802770D4;
}

loc_80277064:
{
    r3 = r30;
    r4 = 68;
    ctx->lr = 0x80277070u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80277074:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80277088;
    }
}

loc_80277078:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 & 1);
}

loc_80277084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_80277088:
{
    r31 = (r31 + 1);
    r3 = r30;
    r4 = 71;
    ctx->lr = 0x80277098u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027709C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802770A8;
    }
}

loc_802770A0:
{
    r31 = (r31 + 1);
    goto loc_802770D4;
}

loc_802770A8:
{
    r3 = r30;
    r4 = 70;
    ctx->lr = 0x802770B4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802770B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802770D4;
    }
}

loc_802770BC:
{
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r0 = (r0 & 1);
}

loc_802770C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802770D4;
    }
}

loc_802770CC:
{
    r0 = (r31 + 1);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802770D4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
}

loc_802770DC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80277128;
    }
}

loc_802770E0:
{
    r0 = MemoryInline::FlatRead16((r30 + 892));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r31);
    MemoryInline::FlatWrite16((r30 + 892), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802770F4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80277128;
    }
}

loc_802770F8:
{
    r3 = r30;
    ctx->lr = 0x80277100u;
    if constexpr (KnownRegArgsCpuCall<0x80276880u>(&func_80276880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276880_2C3C = func_80276880_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80276880_2C3C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80276880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80277104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80277114;
    }
}

loc_80277108:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r30 + 892), static_cast<uint16_t>(r0));
    goto loc_80277128;
}

loc_80277114:
{
    r0 = 10800;
    MemoryInline::FlatWrite16((r30 + 892), static_cast<uint16_t>(r0));
    r3 = r30;
    r4 = -150;
    ctx->lr = 0x80277128u;
    if constexpr (KnownRegArgsCpuCall<0x80276D4Cu>(&func_80276D4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80276D4C_3000 = func_80276D4C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80276D4C_3000;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80276D4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80277128:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80276E6C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80276E6C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80276E6C func_80276E6C preserves=true fpr_mask=0x00000000

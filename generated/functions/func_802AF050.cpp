#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801167D4(CpuContext* ctx);
extern "C" uint64_t func_801167D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80116E08(CpuContext* ctx);
extern "C" uint64_t func_80116E08_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8011CC88(CpuContext* ctx);
extern "C" uint64_t func_8011CC88_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802F99F8(CpuContext* ctx);
extern "C" uint64_t func_802F99F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802FA868(CpuContext* ctx);
extern "C" uint64_t func_802FA868_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80306588(CpuContext* ctx);
extern "C" uint64_t func_80306588_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8031DB0C(CpuContext* ctx);
extern "C" uint64_t func_8031DB0C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80358898(CpuContext* ctx);
extern "C" uint64_t func_80358898_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80367048(CpuContext* ctx);
extern "C" uint64_t func_80367048_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803939F8(CpuContext* ctx);
extern "C" uint64_t func_803939F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804337C0(CpuContext* ctx);
extern "C" uint64_t func_804337C0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_802AF050_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_802AF050;

loc_802AF050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = (r3 & 255);
}

loc_802AF074:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF084;
    }
}

loc_802AF078:
{
    r0 = (r4 & 255);
}

loc_802AF080:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF0FC;
    }
}

loc_802AF084:
{
    r0 = (r3 & 255);
}

loc_802AF08C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF09C;
    }
}

loc_802AF090:
{
    r0 = (r4 & 255);
}

loc_802AF098:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF0FC;
    }
}

loc_802AF09C:
{
    r0 = (r3 & 255);
}

loc_802AF0A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802AF0B4;
    }
}

loc_802AF0A8:
{
    r0 = (r4 & 255);
}

loc_802AF0B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF0FC;
    }
}

loc_802AF0B4:
{
    r0 = (r3 & 255);
}

loc_802AF0BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_802AF0CC;
    }
}

loc_802AF0C0:
{
    r0 = (r4 & 255);
}

loc_802AF0C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF0FC;
    }
}

loc_802AF0CC:
{
    r0 = (r3 & 255);
}

loc_802AF0D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802AF0E4;
    }
}

loc_802AF0D8:
{
    r0 = (r4 & 255);
}

loc_802AF0E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF0FC;
    }
}

loc_802AF0E4:
{
    r0 = (r3 & 255);
}

loc_802AF0EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_802AF100;
    }
}

loc_802AF0F0:
{
    r0 = (r4 & 255);
}

loc_802AF0F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF100;
    }
}

loc_802AF0FC:
{
    ctx->lr = 0x802AF100u;
    if constexpr (KnownRegArgsCpuCall<0x801167D4u>(&func_801167D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801167D4_157F = func_801167D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801167D4_157F);
        r4 = static_cast<uint32_t>(regargs_result_801167D4_157F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801167D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF100:
{
    r0 = (r30 & 255);
}

loc_802AF108:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF118;
    }
}

loc_802AF10C:
{
    r0 = (r31 & 255);
}

loc_802AF114:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF130;
    }
}

loc_802AF118:
{
    r0 = (r30 & 255);
}

loc_802AF120:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF134;
    }
}

loc_802AF124:
{
    r0 = (r31 & 255);
}

loc_802AF12C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF134;
    }
}

loc_802AF130:
{
    ctx->lr = 0x802AF134u;
    if constexpr (KnownRegArgsCpuCall<0x80116E08u>(&func_80116E08)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80116E08_1E25 = func_80116E08_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80116E08_1E25);
        r4 = static_cast<uint32_t>(regargs_result_80116E08_1E25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80116E08u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802AF134:
{
    r0 = (r30 & 255);
}

loc_802AF13C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF14C;
    }
}

loc_802AF140:
{
    r0 = (r31 & 255);
}

loc_802AF148:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF14C:
{
    r0 = (r30 & 255);
}

loc_802AF154:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF164;
    }
}

loc_802AF158:
{
    r0 = (r31 & 255);
}

loc_802AF160:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF164:
{
    r0 = (r30 & 255);
}

loc_802AF16C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF17C;
    }
}

loc_802AF170:
{
    r0 = (r31 & 255);
}

loc_802AF178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_802AF3BC;
    }
}

loc_802AF17C:
{
    r0 = (r30 & 255);
}

loc_802AF184:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF194;
    }
}

loc_802AF188:
{
    r0 = (r31 & 255);
}

loc_802AF190:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_802AF3BC;
    }
}

loc_802AF194:
{
    r0 = (r30 & 255);
}

loc_802AF19C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF1AC;
    }
}

loc_802AF1A0:
{
    r0 = (r31 & 255);
}

loc_802AF1A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_802AF3BC;
    }
}

loc_802AF1AC:
{
    r0 = (r30 & 255);
}

loc_802AF1B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF1C4;
    }
}

loc_802AF1B8:
{
    r0 = (r31 & 255);
}

loc_802AF1C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_802AF3BC;
    }
}

loc_802AF1C4:
{
    r0 = (r30 & 255);
}

loc_802AF1CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF1DC;
    }
}

loc_802AF1D0:
{
    r0 = (r31 & 255);
}

loc_802AF1D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802AF3BC;
    }
}

loc_802AF1DC:
{
    r0 = (r30 & 255);
}

loc_802AF1E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF1F4;
    }
}

loc_802AF1E8:
{
    r0 = (r31 & 255);
}

loc_802AF1F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802AF3BC;
    }
}

loc_802AF1F4:
{
    r0 = (r30 & 255);
}

loc_802AF1FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF20C;
    }
}

loc_802AF200:
{
    r0 = (r31 & 255);
}

loc_802AF208:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_802AF3BC;
    }
}

loc_802AF20C:
{
    r0 = (r30 & 255);
}

loc_802AF214:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_802AF224;
    }
}

loc_802AF218:
{
    r0 = (r31 & 255);
}

loc_802AF220:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_802AF3BC;
    }
}

loc_802AF224:
{
    r0 = (r30 & 255);
}

loc_802AF22C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF23C;
    }
}

loc_802AF230:
{
    r0 = (r31 & 255);
}

loc_802AF238:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802AF3BC;
    }
}

loc_802AF23C:
{
    r0 = (r30 & 255);
}

loc_802AF244:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_802AF254;
    }
}

loc_802AF248:
{
    r0 = (r31 & 255);
}

loc_802AF250:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802AF3BC;
    }
}

loc_802AF254:
{
    r0 = (r30 & 255);
}

loc_802AF25C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF26C;
    }
}

loc_802AF260:
{
    r0 = (r31 & 255);
}

loc_802AF268:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF26C:
{
    r0 = (r30 & 255);
}

loc_802AF274:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802AF284;
    }
}

loc_802AF278:
{
    r0 = (r31 & 255);
}

loc_802AF280:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF284:
{
    r0 = (r30 & 255);
}

loc_802AF28C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_802AF29C;
    }
}

loc_802AF290:
{
    r0 = (r31 & 255);
}

loc_802AF298:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF29C:
{
    r0 = (r30 & 255);
}

loc_802AF2A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802AF2B4;
    }
}

loc_802AF2A8:
{
    r0 = (r31 & 255);
}

loc_802AF2B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF3BC;
    }
}

loc_802AF2B4:
{
    r0 = (r30 & 255);
}

loc_802AF2BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802AF2CC;
    }
}

loc_802AF2C0:
{
    r0 = (r31 & 255);
}

loc_802AF2C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF3BC;
    }
}

loc_802AF2CC:
{
    r0 = (r30 & 255);
}

loc_802AF2D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802AF2E4;
    }
}

loc_802AF2D8:
{
    r0 = (r31 & 255);
}

loc_802AF2E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF2E4:
{
    r0 = (r30 & 255);
}

loc_802AF2EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802AF2FC;
    }
}

loc_802AF2F0:
{
    r0 = (r31 & 255);
}

loc_802AF2F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF3BC;
    }
}

loc_802AF2FC:
{
    r0 = (r30 & 255);
}

loc_802AF304:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802AF314;
    }
}

loc_802AF308:
{
    r0 = (r31 & 255);
}

loc_802AF310:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF3BC;
    }
}

loc_802AF314:
{
    r0 = (r30 & 255);
}

loc_802AF31C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802AF32C;
    }
}

loc_802AF320:
{
    r0 = (r31 & 255);
}

loc_802AF328:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF3BC;
    }
}

loc_802AF32C:
{
    r0 = (r30 & 255);
}

loc_802AF334:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_802AF344;
    }
}

loc_802AF338:
{
    r0 = (r31 & 255);
}

loc_802AF340:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF3BC;
    }
}

loc_802AF344:
{
    r0 = (r30 & 255);
}

loc_802AF34C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_802AF35C;
    }
}

loc_802AF350:
{
    r0 = (r31 & 255);
}

loc_802AF358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802AF3BC;
    }
}

loc_802AF35C:
{
    r0 = (r30 & 255);
}

loc_802AF364:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_802AF374;
    }
}

loc_802AF368:
{
    r0 = (r31 & 255);
}

loc_802AF370:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF3BC;
    }
}

loc_802AF374:
{
    r0 = (r30 & 255);
}

loc_802AF37C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_802AF38C;
    }
}

loc_802AF380:
{
    r0 = (r31 & 255);
}

loc_802AF388:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF3BC;
    }
}

loc_802AF38C:
{
    r0 = (r30 & 255);
}

loc_802AF394:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_802AF3A4;
    }
}

loc_802AF398:
{
    r0 = (r31 & 255);
}

loc_802AF3A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF3BC;
    }
}

loc_802AF3A4:
{
    r0 = (r30 & 255);
}

loc_802AF3AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_802AF3C4;
    }
}

loc_802AF3B0:
{
    r0 = (r31 & 255);
}

loc_802AF3B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF3C4;
    }
}

loc_802AF3BC:
{
    r3 = 0;
    ctx->lr = 0x802AF3C4u;
    if constexpr (KnownRegArgsCpuCall<0x802F99F8u>(&func_802F99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802F99F8_45C9 = func_802F99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F99F8_45C9);
        r4 = static_cast<uint32_t>(regargs_result_802F99F8_45C9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802F99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF3C4:
{
    r0 = (r30 & 255);
}

loc_802AF3CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF3DC;
    }
}

loc_802AF3D0:
{
    r0 = (r31 & 255);
}

loc_802AF3D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF70C;
    }
}

loc_802AF3DC:
{
    r0 = (r30 & 255);
}

loc_802AF3E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF3F4;
    }
}

loc_802AF3E8:
{
    r0 = (r31 & 255);
}

loc_802AF3F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF70C;
    }
}

loc_802AF3F4:
{
    r0 = (r30 & 255);
}

loc_802AF3FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF40C;
    }
}

loc_802AF400:
{
    r0 = (r31 & 255);
}

loc_802AF408:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF70C;
    }
}

loc_802AF40C:
{
    r0 = (r30 & 255);
}

loc_802AF414:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF424;
    }
}

loc_802AF418:
{
    r0 = (r31 & 255);
}

loc_802AF420:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF70C;
    }
}

loc_802AF424:
{
    r0 = (r30 & 255);
}

loc_802AF42C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF43C;
    }
}

loc_802AF430:
{
    r0 = (r31 & 255);
}

loc_802AF438:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF70C;
    }
}

loc_802AF43C:
{
    r0 = (r30 & 255);
}

loc_802AF444:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF454;
    }
}

loc_802AF448:
{
    r0 = (r31 & 255);
}

loc_802AF450:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF70C;
    }
}

loc_802AF454:
{
    r0 = (r30 & 255);
}

loc_802AF45C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF46C;
    }
}

loc_802AF460:
{
    r0 = (r31 & 255);
}

loc_802AF468:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF70C;
    }
}

loc_802AF46C:
{
    r0 = (r30 & 255);
}

loc_802AF474:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF484;
    }
}

loc_802AF478:
{
    r0 = (r31 & 255);
}

loc_802AF480:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF70C;
    }
}

loc_802AF484:
{
    r0 = (r30 & 255);
}

loc_802AF48C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF49C;
    }
}

loc_802AF490:
{
    r0 = (r31 & 255);
}

loc_802AF498:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802AF70C;
    }
}

loc_802AF49C:
{
    r0 = (r30 & 255);
}

loc_802AF4A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF4B4;
    }
}

loc_802AF4A8:
{
    r0 = (r31 & 255);
}

loc_802AF4B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802AF70C;
    }
}

loc_802AF4B4:
{
    r0 = (r30 & 255);
}

loc_802AF4BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF4CC;
    }
}

loc_802AF4C0:
{
    r0 = (r31 & 255);
}

loc_802AF4C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF70C;
    }
}

loc_802AF4CC:
{
    r0 = (r30 & 255);
}

loc_802AF4D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF4E4;
    }
}

loc_802AF4D8:
{
    r0 = (r31 & 255);
}

loc_802AF4E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF70C;
    }
}

loc_802AF4E4:
{
    r0 = (r30 & 255);
}

loc_802AF4EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF4FC;
    }
}

loc_802AF4F0:
{
    r0 = (r31 & 255);
}

loc_802AF4F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF70C;
    }
}

loc_802AF4FC:
{
    r0 = (r30 & 255);
}

loc_802AF504:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF514;
    }
}

loc_802AF508:
{
    r0 = (r31 & 255);
}

loc_802AF510:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF70C;
    }
}

loc_802AF514:
{
    r0 = (r30 & 255);
}

loc_802AF51C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF52C;
    }
}

loc_802AF520:
{
    r0 = (r31 & 255);
}

loc_802AF528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AF70C;
    }
}

loc_802AF52C:
{
    r0 = (r30 & 255);
}

loc_802AF534:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF544;
    }
}

loc_802AF538:
{
    r0 = (r31 & 255);
}

loc_802AF540:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AF70C;
    }
}

loc_802AF544:
{
    r0 = (r30 & 255);
}

loc_802AF54C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF55C;
    }
}

loc_802AF550:
{
    r0 = (r31 & 255);
}

loc_802AF558:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802AF70C;
    }
}

loc_802AF55C:
{
    r0 = (r30 & 255);
}

loc_802AF564:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF574;
    }
}

loc_802AF568:
{
    r0 = (r31 & 255);
}

loc_802AF570:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802AF70C;
    }
}

loc_802AF574:
{
    r0 = (r30 & 255);
}

loc_802AF57C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF58C;
    }
}

loc_802AF580:
{
    r0 = (r31 & 255);
}

loc_802AF588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF70C;
    }
}

loc_802AF58C:
{
    r0 = (r30 & 255);
}

loc_802AF594:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF5A4;
    }
}

loc_802AF598:
{
    r0 = (r31 & 255);
}

loc_802AF5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF70C;
    }
}

loc_802AF5A4:
{
    r0 = (r30 & 255);
}

loc_802AF5AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF5BC;
    }
}

loc_802AF5B0:
{
    r0 = (r31 & 255);
}

loc_802AF5B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF70C;
    }
}

loc_802AF5BC:
{
    r0 = (r30 & 255);
}

loc_802AF5C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF5D4;
    }
}

loc_802AF5C8:
{
    r0 = (r31 & 255);
}

loc_802AF5D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF70C;
    }
}

loc_802AF5D4:
{
    r0 = (r30 & 255);
}

loc_802AF5DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF5EC;
    }
}

loc_802AF5E0:
{
    r0 = (r31 & 255);
}

loc_802AF5E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF70C;
    }
}

loc_802AF5EC:
{
    r0 = (r30 & 255);
}

loc_802AF5F4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF604;
    }
}

loc_802AF5F8:
{
    r0 = (r31 & 255);
}

loc_802AF600:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF70C;
    }
}

loc_802AF604:
{
    r0 = (r30 & 255);
}

loc_802AF60C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF61C;
    }
}

loc_802AF610:
{
    r0 = (r31 & 255);
}

loc_802AF618:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF70C;
    }
}

loc_802AF61C:
{
    r0 = (r30 & 255);
}

loc_802AF624:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF634;
    }
}

loc_802AF628:
{
    r0 = (r31 & 255);
}

loc_802AF630:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF70C;
    }
}

loc_802AF634:
{
    r0 = (r30 & 255);
}

loc_802AF63C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF64C;
    }
}

loc_802AF640:
{
    r0 = (r31 & 255);
}

loc_802AF648:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF70C;
    }
}

loc_802AF64C:
{
    r0 = (r30 & 255);
}

loc_802AF654:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF664;
    }
}

loc_802AF658:
{
    r0 = (r31 & 255);
}

loc_802AF660:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF70C;
    }
}

loc_802AF664:
{
    r0 = (r30 & 255);
}

loc_802AF66C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF67C;
    }
}

loc_802AF670:
{
    r0 = (r31 & 255);
}

loc_802AF678:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF70C;
    }
}

loc_802AF67C:
{
    r0 = (r30 & 255);
}

loc_802AF684:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF694;
    }
}

loc_802AF688:
{
    r0 = (r31 & 255);
}

loc_802AF690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF70C;
    }
}

loc_802AF694:
{
    r0 = (r30 & 255);
}

loc_802AF69C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF6AC;
    }
}

loc_802AF6A0:
{
    r0 = (r31 & 255);
}

loc_802AF6A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AF70C;
    }
}

loc_802AF6AC:
{
    r0 = (r30 & 255);
}

loc_802AF6B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF6C4;
    }
}

loc_802AF6B8:
{
    r0 = (r31 & 255);
}

loc_802AF6C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AF70C;
    }
}

loc_802AF6C4:
{
    r0 = (r30 & 255);
}

loc_802AF6CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF6DC;
    }
}

loc_802AF6D0:
{
    r0 = (r31 & 255);
}

loc_802AF6D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_802AF70C;
    }
}

loc_802AF6DC:
{
    r0 = (r30 & 255);
}

loc_802AF6E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF6F4;
    }
}

loc_802AF6E8:
{
    r0 = (r31 & 255);
}

loc_802AF6F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF70C;
    }
}

loc_802AF6F4:
{
    r0 = (r30 & 255);
}

loc_802AF6FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_802AF714;
    }
}

loc_802AF700:
{
    r0 = (r31 & 255);
}

loc_802AF708:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802AF714;
    }
}

loc_802AF70C:
{
    r3 = 1;
    ctx->lr = 0x802AF714u;
    if constexpr (KnownRegArgsCpuCall<0x802F99F8u>(&func_802F99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802F99F8_7ADF = func_802F99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F99F8_7ADF);
        r4 = static_cast<uint32_t>(regargs_result_802F99F8_7ADF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802F99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF714:
{
    r0 = (r30 & 255);
}

loc_802AF71C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_802AF72C;
    }
}

loc_802AF720:
{
    r0 = (r31 & 255);
}

loc_802AF728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF744;
    }
}

loc_802AF72C:
{
    r0 = (r30 & 255);
}

loc_802AF734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(18))) {
        goto loc_802AF750;
    }
}

loc_802AF738:
{
    r0 = (r31 & 255);
}

loc_802AF740:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF750;
    }
}

loc_802AF744:
{
    r3 = 2;
    ctx->lr = 0x802AF74Cu;
    if constexpr (KnownRegArgsCpuCall<0x802F99F8u>(&func_802F99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802F99F8_8392 = func_802F99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F99F8_8392);
        r4 = static_cast<uint32_t>(regargs_result_802F99F8_8392 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802F99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x802AF750u;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_8970 = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_8970);
        r4 = static_cast<uint32_t>(regargs_result_80367048_8970 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF750:
{
    r0 = (r30 & 255);
}

loc_802AF758:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF768;
    }
}

loc_802AF75C:
{
    r0 = (r31 & 255);
}

loc_802AF764:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802AF870;
    }
}

loc_802AF768:
{
    r0 = (r30 & 255);
}

loc_802AF770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_802AF780;
    }
}

loc_802AF774:
{
    r0 = (r31 & 255);
}

loc_802AF77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_802AF870;
    }
}

loc_802AF780:
{
    r0 = (r30 & 255);
}

loc_802AF788:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF798;
    }
}

loc_802AF78C:
{
    r0 = (r31 & 255);
}

loc_802AF794:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF870;
    }
}

loc_802AF798:
{
    r0 = (r30 & 255);
}

loc_802AF7A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF7B0;
    }
}

loc_802AF7A4:
{
    r0 = (r31 & 255);
}

loc_802AF7AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802AF870;
    }
}

loc_802AF7B0:
{
    r0 = (r30 & 255);
}

loc_802AF7B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF7C8;
    }
}

loc_802AF7BC:
{
    r0 = (r31 & 255);
}

loc_802AF7C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF870;
    }
}

loc_802AF7C8:
{
    r0 = (r30 & 255);
}

loc_802AF7D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF7E0;
    }
}

loc_802AF7D4:
{
    r0 = (r31 & 255);
}

loc_802AF7DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF870;
    }
}

loc_802AF7E0:
{
    r0 = (r30 & 255);
}

loc_802AF7E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF7F8;
    }
}

loc_802AF7EC:
{
    r0 = (r31 & 255);
}

loc_802AF7F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF870;
    }
}

loc_802AF7F8:
{
    r0 = (r30 & 255);
}

loc_802AF800:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF810;
    }
}

loc_802AF804:
{
    r0 = (r31 & 255);
}

loc_802AF80C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802AF870;
    }
}

loc_802AF810:
{
    r0 = (r30 & 255);
}

loc_802AF818:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF828;
    }
}

loc_802AF81C:
{
    r0 = (r31 & 255);
}

loc_802AF824:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF870;
    }
}

loc_802AF828:
{
    r0 = (r30 & 255);
}

loc_802AF830:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF840;
    }
}

loc_802AF834:
{
    r0 = (r31 & 255);
}

loc_802AF83C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF870;
    }
}

loc_802AF840:
{
    r0 = (r30 & 255);
}

loc_802AF848:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF858;
    }
}

loc_802AF84C:
{
    r0 = (r31 & 255);
}

loc_802AF854:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AF870;
    }
}

loc_802AF858:
{
    r0 = (r30 & 255);
}

loc_802AF860:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_802AF874;
    }
}

loc_802AF864:
{
    r0 = (r31 & 255);
}

loc_802AF86C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_802AF874;
    }
}

loc_802AF870:
{
    ctx->lr = 0x802AF874u;
    if constexpr (KnownRegArgsCpuCall<0x8031DB0Cu>(&func_8031DB0C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031DB0C_9F8D = func_8031DB0C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8031DB0C_9F8D);
        r4 = static_cast<uint32_t>(regargs_result_8031DB0C_9F8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8031DB0Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF874:
{
    r0 = (r30 & 255);
}

loc_802AF87C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF8A4;
    }
}

loc_802AF880:
{
    r0 = (r31 & 255);
}

loc_802AF888:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(5))) {
        goto loc_802AF89C;
    }
}

loc_802AF88C:
{
    r0 = (r31 + 249);
    r0 = (r0 & 255);
}

loc_802AF898:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_802AF8A4;
    }
}

loc_802AF89C:
{
    r3 = 0;
    ctx->lr = 0x802AF8A4u;
    if constexpr (KnownRegArgsCpuCall<0x802FA868u>(&func_802FA868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FA868_A7A8 = func_802FA868_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FA868_A7A8);
        r4 = static_cast<uint32_t>(regargs_result_802FA868_A7A8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802FA868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF8A4:
{
    r0 = (r30 & 255);
}

loc_802AF8AC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802AF8C4;
    }
}

loc_802AF8B0:
{
    r0 = (r31 + 254);
    r0 = (r0 & 255);
}

loc_802AF8BC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802AF8C4;
    }
}

loc_802AF8C0:
{
    ctx->lr = 0x802AF8C4u;
    if constexpr (KnownRegArgsCpuCall<0x80358898u>(&func_80358898)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80358898_AF0A = func_80358898_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80358898_AF0A);
        r4 = static_cast<uint32_t>(regargs_result_80358898_AF0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80358898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF8C4:
{
    r0 = (r30 & 255);
}

loc_802AF8CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_802AF920;
    }
}

loc_802AF8D0:
{
    r0 = (r31 & 255);
}

loc_802AF8D8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_802AF900;
    }
}

loc_802AF8DC:
{
}

loc_802AF8E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF900;
    }
}

loc_802AF8E4:
{
}

loc_802AF8E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_802AF90C;
    }
}

loc_802AF8EC:
{
}

loc_802AF8F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AF914;
    }
}

loc_802AF8F4:
{
}

loc_802AF8F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_802AF91C;
    }
}

loc_802AF8FC:
{
    goto loc_802AF920;
}

loc_802AF900:
{
    r3 = 1;
    ctx->lr = 0x802AF908u;
    if constexpr (KnownRegArgsCpuCall<0x802FA868u>(&func_802FA868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FA868_B8E8 = func_802FA868_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FA868_B8E8);
        r4 = static_cast<uint32_t>(regargs_result_802FA868_B8E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802FA868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AF920;
}

loc_802AF90C:
{
    ctx->lr = 0x802AF910u;
    if constexpr (KnownRegArgsCpuCall<0x804337C0u>(&func_804337C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804337C0_BEF5 = func_804337C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804337C0_BEF5);
        r4 = static_cast<uint32_t>(regargs_result_804337C0_BEF5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804337C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AF920;
}

loc_802AF914:
{
    ctx->lr = 0x802AF918u;
    if constexpr (KnownRegArgsCpuCall<0x804337C0u>(&func_804337C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804337C0_C502 = func_804337C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804337C0_C502);
        r4 = static_cast<uint32_t>(regargs_result_804337C0_C502 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804337C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AF920;
}

loc_802AF91C:
{
    ctx->lr = 0x802AF920u;
    if constexpr (KnownRegArgsCpuCall<0x804337C0u>(&func_804337C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804337C0_CB0F = func_804337C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804337C0_CB0F);
        r4 = static_cast<uint32_t>(regargs_result_804337C0_CB0F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804337C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF920:
{
    r0 = (r30 & 255);
}

loc_802AF928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(22))) {
        goto loc_802AF954;
    }
}

loc_802AF92C:
{
    r0 = (r31 & 255);
}

loc_802AF934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AF948;
    }
}

loc_802AF938:
{
    r3 = 3;
    ctx->lr = 0x802AF940u;
    if constexpr (KnownRegArgsCpuCall<0x802F99F8u>(&func_802F99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802F99F8_D268 = func_802F99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802F99F8_D268);
        r4 = static_cast<uint32_t>(regargs_result_802F99F8_D268 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802F99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x802AF944u;
    if constexpr (KnownRegArgsCpuCall<0x803939F8u>(&func_803939F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803939F8_D846 = func_803939F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803939F8_D846);
        r4 = static_cast<uint32_t>(regargs_result_803939F8_D846 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803939F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AF954;
}

loc_802AF948:
{
}

loc_802AF94C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AF954;
    }
}

loc_802AF950:
{
    ctx->lr = 0x802AF954u;
    if constexpr (KnownRegArgsCpuCall<0x804337C0u>(&func_804337C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804337C0_DEE8 = func_804337C0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804337C0_DEE8);
        r4 = static_cast<uint32_t>(regargs_result_804337C0_DEE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804337C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF954:
{
    r0 = (r30 & 255);
}

loc_802AF95C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF96C;
    }
}

loc_802AF960:
{
    r0 = (r31 & 255);
}

loc_802AF968:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AF9B4;
    }
}

loc_802AF96C:
{
    r0 = (r30 & 255);
}

loc_802AF974:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF984;
    }
}

loc_802AF978:
{
    r0 = (r31 & 255);
}

loc_802AF980:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_802AF9B4;
    }
}

loc_802AF984:
{
    r0 = (r30 & 255);
}

loc_802AF98C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF99C;
    }
}

loc_802AF990:
{
    r0 = (r31 & 255);
}

loc_802AF998:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(3))) {
        goto loc_802AF9B4;
    }
}

loc_802AF99C:
{
    r0 = (r30 & 255);
}

loc_802AF9A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802AF9B8;
    }
}

loc_802AF9A8:
{
    r0 = (r31 & 255);
}

loc_802AF9B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_802AF9B8;
    }
}

loc_802AF9B4:
{
    ctx->lr = 0x802AF9B8u;
    if constexpr (KnownRegArgsCpuCall<0x8011CC88u>(&func_8011CC88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8011CC88_EA3B = func_8011CC88_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8011CC88_EA3B);
        r4 = static_cast<uint32_t>(regargs_result_8011CC88_EA3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8011CC88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF9B8:
{
    r0 = (r30 & 255);
}

loc_802AF9C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AF9D0;
    }
}

loc_802AF9C4:
{
    r0 = (r31 & 255);
}

loc_802AF9CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_802AF9E8;
    }
}

loc_802AF9D0:
{
    r0 = (r30 & 255);
}

loc_802AF9D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_802AF9EC;
    }
}

loc_802AF9DC:
{
    r0 = (r31 & 255);
}

loc_802AF9E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_802AF9EC;
    }
}

loc_802AF9E8:
{
    ctx->lr = 0x802AF9ECu;
    if constexpr (KnownRegArgsCpuCall<0x80306588u>(&func_80306588)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80306588_F2E3 = func_80306588_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80306588_F2E3);
        r4 = static_cast<uint32_t>(regargs_result_80306588_F2E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80306588u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AF9EC:
{
    r0 = (r30 & 255);
}

loc_802AF9F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_802AFA00;
    }
}

loc_802AF9F8:
{
}

loc_802AF9FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_802AFA28;
    }
}

loc_802AFA00:
{
    r0 = (r31 & 255);
}

loc_802AFA08:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AFA14;
    }
}

loc_802AFA0C:
{
    ctx->lr = 0x802AFA10u;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_FAC6 = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_FAC6);
        r4 = static_cast<uint32_t>(regargs_result_80367048_FAC6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_802AFA28;
}

loc_802AFA14:
{
}

loc_802AFA18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802AFA28;
    }
}

loc_802AFA1C:
{
    ctx->lr = 0x802AFA20u;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_10168 = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_10168);
        r4 = static_cast<uint32_t>(regargs_result_80367048_10168 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 2;
    ctx->lr = 0x802AFA28u;
    if constexpr (KnownRegArgsCpuCall<0x802FA868u>(&func_802FA868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802FA868_10756 = func_802FA868_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802FA868_10756);
        r4 = static_cast<uint32_t>(regargs_result_802FA868_10756 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802FA868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AFA28:
{
    r0 = (r30 & 255);
}

loc_802AFA30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_802AFA3C;
    }
}

loc_802AFA34:
{
}

loc_802AFA38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(19))) {
        goto loc_802AFA4C;
    }
}

loc_802AFA3C:
{
    r0 = (r31 & 255);
}

loc_802AFA44:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AFA4C;
    }
}

loc_802AFA48:
{
    ctx->lr = 0x802AFA4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_10F3C = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_10F3C);
        r4 = static_cast<uint32_t>(regargs_result_80367048_10F3C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AFA4C:
{
    r0 = (r30 & 255);
}

loc_802AFA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_802AFA68;
    }
}

loc_802AFA58:
{
    r0 = (r31 & 255);
}

loc_802AFA60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802AFA68;
    }
}

loc_802AFA64:
{
    ctx->lr = 0x802AFA68u;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_1168B = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_1168B);
        r4 = static_cast<uint32_t>(regargs_result_80367048_1168B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AFA68:
{
    r0 = (r30 & 255);
}

loc_802AFA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_802AFA7C;
    }
}

loc_802AFA74:
{
}

loc_802AFA78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_802AFA8C;
    }
}

loc_802AFA7C:
{
    r0 = (r31 & 255);
}

loc_802AFA84:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802AFA8C;
    }
}

loc_802AFA88:
{
    ctx->lr = 0x802AFA8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80367048u>(&func_80367048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80367048_11E72 = func_80367048_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80367048_11E72);
        r4 = static_cast<uint32_t>(regargs_result_80367048_11E72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80367048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_802AFA8C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AF050(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AF050_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x001FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802AF050 func_802AF050 preserves=true fpr_mask=0x00000000

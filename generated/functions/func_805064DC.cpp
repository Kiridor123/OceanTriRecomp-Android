#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80503BF8(CpuContext* ctx);
extern "C" uint64_t func_80503BF8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80504814(CpuContext* ctx);
extern "C" uint64_t func_80504814_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_805052A8(CpuContext* ctx);
extern "C" uint64_t func_805052A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80505930(CpuContext* ctx);
extern "C" uint64_t func_80505930_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_805064DC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    goto loc_805064DC;

loc_805064DC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -432), 0, 440u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -432), r1);
    r1 = (r1 + -432);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 436u, (r1 + 436), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 416u, (r1 + 416), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 424);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 400u, (r1 + 400), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 408);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 400);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    r27 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    r28 = r4;
    r0 = (r0 & 819);
}

loc_80506514:
{
    r29 = r5;
    f2.d = f31.d;
    r30 = r6;
    r31 = r7;
}

loc_80506528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(768))) {
        goto loc_8050671C;
    }
}

loc_8050652C:
{
}

loc_80506530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050671C;
    }
}

loc_80506534:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 48), 0, 316u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 48), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 52), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 56), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 60), f31.d);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
    MemoryInline::WriteResolved8(guest_range_2, 216u, (r1 + 264), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 217u, (r1 + 265), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
    MemoryInline::WriteResolved8(guest_range_2, 218u, (r1 + 266), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 219u, (r1 + 267), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 4));
    MemoryInline::WriteResolved8(guest_range_2, 220u, (r1 + 268), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 221u, (r1 + 269), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 6));
    MemoryInline::WriteResolved8(guest_range_2, 222u, (r1 + 270), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 223u, (r1 + 271), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r3 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 224u, (r1 + 272), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 225u, (r1 + 273), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 226u, (r1 + 274), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 227u, (r1 + 275), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_2, 228u, (r1 + 276), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_2, 229u, (r1 + 277), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_2, 230u, (r1 + 278), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_2, 231u, (r1 + 279), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 16u, (r3 + 16));
    MemoryInline::WriteResolved8(guest_range_2, 232u, (r1 + 280), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 17u, (r3 + 17));
    MemoryInline::WriteResolved8(guest_range_2, 233u, (r1 + 281), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 18u, (r3 + 18));
    MemoryInline::WriteResolved8(guest_range_2, 234u, (r1 + 282), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 19u, (r3 + 19));
    MemoryInline::WriteResolved8(guest_range_2, 235u, (r1 + 283), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r3 + 20));
    MemoryInline::WriteResolved8(guest_range_2, 236u, (r1 + 284), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    MemoryInline::WriteResolved8(guest_range_2, 237u, (r1 + 285), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 22u, (r3 + 22));
    MemoryInline::WriteResolved8(guest_range_2, 238u, (r1 + 286), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 23u, (r3 + 23));
    MemoryInline::WriteResolved8(guest_range_2, 239u, (r1 + 287), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r3 + 24));
    MemoryInline::WriteResolved8(guest_range_2, 240u, (r1 + 288), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r3 + 25));
    MemoryInline::WriteResolved8(guest_range_2, 241u, (r1 + 289), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r3 + 26));
    MemoryInline::WriteResolved8(guest_range_2, 242u, (r1 + 290), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 27u, (r3 + 27));
    MemoryInline::WriteResolved8(guest_range_2, 243u, (r1 + 291), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 28u, (r3 + 28));
    MemoryInline::WriteResolved8(guest_range_2, 244u, (r1 + 292), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r3 + 29));
    MemoryInline::WriteResolved8(guest_range_2, 245u, (r1 + 293), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r3 + 30));
    MemoryInline::WriteResolved8(guest_range_2, 246u, (r1 + 294), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r3 + 31));
    MemoryInline::WriteResolved8(guest_range_2, 247u, (r1 + 295), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_2, 248u, (r1 + 296), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 36u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r3 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r3 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 252u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 252u, (r1 + 300), r4);
        MemoryInline::WriteResolved32(guest_range_2, 256u, (r1 + 304), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r3 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r3 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 260u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 260u, (r1 + 308), r4);
        MemoryInline::WriteResolved32(guest_range_2, 264u, (r1 + 312), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r3 + 52));
    MemoryInline::WriteResolved32(guest_range_2, 268u, (r1 + 316), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r3 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r3 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 272u, (r1 + 320), r4);
        MemoryInline::WriteResolved32(guest_range_2, 276u, (r1 + 324), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_0, 64u, (r3 + 64));
    MemoryInline::WriteResolved8(guest_range_2, 280u, (r1 + 328), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 65u, (r3 + 65));
    MemoryInline::WriteResolved8(guest_range_2, 281u, (r1 + 329), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 66u, (r3 + 66));
    MemoryInline::WriteResolved8(guest_range_2, 282u, (r1 + 330), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 67u, (r3 + 67));
    MemoryInline::WriteResolved8(guest_range_2, 283u, (r1 + 331), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 284u, (r1 + 332), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r3 + 72));
    MemoryInline::WriteResolved32(guest_range_2, 288u, (r1 + 336), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r3 + 76));
    r5 = r30;
    r6 = r31;
    r4 = (r1 + 48);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 292u, (r1 + 340), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 296u, (r1 + 344), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 300u, (r1 + 348), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r3 + 88));
    MemoryInline::WriteResolved32(guest_range_2, 304u, (r1 + 352), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r3 + 92));
    MemoryInline::WriteResolved32(guest_range_2, 308u, (r1 + 356), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r3 + 96));
    r3 = (r1 + 264);
    MemoryInline::WriteResolved32(guest_range_2, 312u, (r1 + 360), r0);
    ctx->lr = 0x805066F8u;
    if constexpr (KnownRegArgsCpuCall<0x80505930u>(&func_80505930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_80505930_39CB = func_80505930_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80505930_39CB);
        r4 = static_cast<uint32_t>(regargs_result_80505930_39CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80505930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    r3 = (r1 + 264);
    r4 = 0;
    ctx->lr = 0x80506704u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_80503BF8_426C = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_426C);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_426C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f3.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_8050671C:
{
    r0 = MemoryInline::FlatRead32((r27 + 92));
    r0 = (r0 & 48);
}

loc_80506728:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80506744;
    }
}

loc_8050672C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1408));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    goto loc_80506758;
}

loc_80506744:
{
}

loc_80506748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32))) {
        goto loc_80506758;
    }
}

loc_8050674C:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
}

loc_80506758:
{
    r0 = MemoryInline::FlatRead32((r27 + 92));
    r0 = (r0 & 768);
}

loc_80506764:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(256))) {
        goto loc_80506780;
    }
}

loc_80506768:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1408));
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    goto loc_80506794;
}

loc_80506780:
{
}

loc_80506784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(512))) {
        goto loc_80506794;
    }
}

loc_80506788:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
}

loc_80506794:
{
    r0 = MemoryInline::FlatRead32((r27 + 92));
    r0 = (r0 & 3);
}

loc_805067A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_805069AC;
    }
}

loc_805067A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 252u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 12), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r1 + 32), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r1 + 36), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r1 + 40), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r1 + 44), f1.d);
    }
    guest_range_4 = MemoryInline::ResolveRangeHost(r27, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, r27);
    MemoryInline::WriteResolved8(guest_range_3, 152u, (r1 + 164), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r27 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 153u, (r1 + 165), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r27 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 154u, (r1 + 166), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r27 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 155u, (r1 + 167), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r27 + 4));
    MemoryInline::WriteResolved8(guest_range_3, 156u, (r1 + 168), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r27 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 157u, (r1 + 169), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r27 + 6));
    MemoryInline::WriteResolved8(guest_range_3, 158u, (r1 + 170), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r27 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 159u, (r1 + 171), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 8u, (r27 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 160u, (r1 + 172), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 9u, (r27 + 9));
    MemoryInline::WriteResolved8(guest_range_3, 161u, (r1 + 173), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 10u, (r27 + 10));
    MemoryInline::WriteResolved8(guest_range_3, 162u, (r1 + 174), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 11u, (r27 + 11));
    MemoryInline::WriteResolved8(guest_range_3, 163u, (r1 + 175), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 12u, (r27 + 12));
    MemoryInline::WriteResolved8(guest_range_3, 164u, (r1 + 176), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 13u, (r27 + 13));
    MemoryInline::WriteResolved8(guest_range_3, 165u, (r1 + 177), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 14u, (r27 + 14));
    MemoryInline::WriteResolved8(guest_range_3, 166u, (r1 + 178), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 15u, (r27 + 15));
    MemoryInline::WriteResolved8(guest_range_3, 167u, (r1 + 179), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 16u, (r27 + 16));
    MemoryInline::WriteResolved8(guest_range_3, 168u, (r1 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 17u, (r27 + 17));
    MemoryInline::WriteResolved8(guest_range_3, 169u, (r1 + 181), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 18u, (r27 + 18));
    MemoryInline::WriteResolved8(guest_range_3, 170u, (r1 + 182), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 19u, (r27 + 19));
    MemoryInline::WriteResolved8(guest_range_3, 171u, (r1 + 183), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 20u, (r27 + 20));
    MemoryInline::WriteResolved8(guest_range_3, 172u, (r1 + 184), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 21u, (r27 + 21));
    MemoryInline::WriteResolved8(guest_range_3, 173u, (r1 + 185), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 22u, (r27 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 174u, (r1 + 186), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 23u, (r27 + 23));
    MemoryInline::WriteResolved8(guest_range_3, 175u, (r1 + 187), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 24u, (r27 + 24));
    MemoryInline::WriteResolved8(guest_range_3, 176u, (r1 + 188), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 25u, (r27 + 25));
    MemoryInline::WriteResolved8(guest_range_3, 177u, (r1 + 189), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 26u, (r27 + 26));
    MemoryInline::WriteResolved8(guest_range_3, 178u, (r1 + 190), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 27u, (r27 + 27));
    MemoryInline::WriteResolved8(guest_range_3, 179u, (r1 + 191), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 28u, (r27 + 28));
    MemoryInline::WriteResolved8(guest_range_3, 180u, (r1 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 29u, (r27 + 29));
    MemoryInline::WriteResolved8(guest_range_3, 181u, (r1 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 30u, (r27 + 30));
    MemoryInline::WriteResolved8(guest_range_3, 182u, (r1 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 31u, (r27 + 31));
    MemoryInline::WriteResolved8(guest_range_3, 183u, (r1 + 195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_3, 184u, (r1 + 196), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r27 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 188u, (r1 + 200), r3);
        MemoryInline::WriteResolved32(guest_range_3, 192u, (r1 + 204), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r27 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 196u, (r1 + 208), r3);
        MemoryInline::WriteResolved32(guest_range_3, 200u, (r1 + 212), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_3, 204u, (r1 + 216), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r27 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_3, 208u, (r1 + 220), r3);
        MemoryInline::WriteResolved32(guest_range_3, 212u, (r1 + 224), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_4, 64u, (r27 + 64));
    MemoryInline::WriteResolved8(guest_range_3, 216u, (r1 + 228), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 65u, (r27 + 65));
    MemoryInline::WriteResolved8(guest_range_3, 217u, (r1 + 229), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_3, 218u, (r1 + 230), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_3, 219u, (r1 + 231), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 68u, (r27 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 220u, (r1 + 232), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r27 + 72));
    r6 = r31;
    r3 = (r1 + 164);
    r4 = (r1 + 32);
    MemoryInline::WriteResolved32(guest_range_3, 224u, (r1 + 236), r0);
    r5 = (r1 + 12);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 228u, (r1 + 240), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 232u, (r1 + 244), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 84u, (r27 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 236u, (r1 + 248), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 88u, (r27 + 88));
    MemoryInline::WriteResolved32(guest_range_3, 240u, (r1 + 252), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_3, 244u, (r1 + 256), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_4, 96u, (r27 + 96));
    MemoryInline::WriteResolved32(guest_range_3, 248u, (r1 + 260), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 196u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 196u, (r1 + 208), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 200u, (r1 + 212), f1.d);
    }
    ctx->lr = 0x80506978u;
    if constexpr (KnownRegArgsCpuCall<0x805052A8u>(&func_805052A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_805052A8_7F69 = func_805052A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805052A8_7F69);
        r4 = static_cast<uint32_t>(regargs_result_805052A8_7F69 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x805052A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r3 = (r1 + 164);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x80506990u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_80503BF8_88C0 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_88C0);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_88C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1408));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 44), f0.d);
    goto loc_80506BBC;
}

loc_805069AC:
{
}

loc_805069B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80506BB4;
    }
}

loc_805069B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1420));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 156u, false, true);
    MemoryInline::WriteResolved32(guest_range_5, 0u, (r1 + 8), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r1 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 12u, (r1 + 20), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r1 + 24), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r1 + 28), f1.d);
    }
    guest_range_6 = MemoryInline::ResolveRangeHost(r27, 0, 100u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_6, 0u, r27);
    MemoryInline::WriteResolved8(guest_range_5, 56u, (r1 + 64), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 1u, (r27 + 1));
    MemoryInline::WriteResolved8(guest_range_5, 57u, (r1 + 65), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 2u, (r27 + 2));
    MemoryInline::WriteResolved8(guest_range_5, 58u, (r1 + 66), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 3u, (r27 + 3));
    MemoryInline::WriteResolved8(guest_range_5, 59u, (r1 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 4u, (r27 + 4));
    MemoryInline::WriteResolved8(guest_range_5, 60u, (r1 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 5u, (r27 + 5));
    MemoryInline::WriteResolved8(guest_range_5, 61u, (r1 + 69), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 6u, (r27 + 6));
    MemoryInline::WriteResolved8(guest_range_5, 62u, (r1 + 70), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 7u, (r27 + 7));
    MemoryInline::WriteResolved8(guest_range_5, 63u, (r1 + 71), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 8u, (r27 + 8));
    MemoryInline::WriteResolved8(guest_range_5, 64u, (r1 + 72), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 9u, (r27 + 9));
    MemoryInline::WriteResolved8(guest_range_5, 65u, (r1 + 73), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 10u, (r27 + 10));
    MemoryInline::WriteResolved8(guest_range_5, 66u, (r1 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 11u, (r27 + 11));
    MemoryInline::WriteResolved8(guest_range_5, 67u, (r1 + 75), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 12u, (r27 + 12));
    MemoryInline::WriteResolved8(guest_range_5, 68u, (r1 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 13u, (r27 + 13));
    MemoryInline::WriteResolved8(guest_range_5, 69u, (r1 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 14u, (r27 + 14));
    MemoryInline::WriteResolved8(guest_range_5, 70u, (r1 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 15u, (r27 + 15));
    MemoryInline::WriteResolved8(guest_range_5, 71u, (r1 + 79), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 16u, (r27 + 16));
    MemoryInline::WriteResolved8(guest_range_5, 72u, (r1 + 80), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 17u, (r27 + 17));
    MemoryInline::WriteResolved8(guest_range_5, 73u, (r1 + 81), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 18u, (r27 + 18));
    MemoryInline::WriteResolved8(guest_range_5, 74u, (r1 + 82), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 19u, (r27 + 19));
    MemoryInline::WriteResolved8(guest_range_5, 75u, (r1 + 83), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 20u, (r27 + 20));
    MemoryInline::WriteResolved8(guest_range_5, 76u, (r1 + 84), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 21u, (r27 + 21));
    MemoryInline::WriteResolved8(guest_range_5, 77u, (r1 + 85), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 22u, (r27 + 22));
    MemoryInline::WriteResolved8(guest_range_5, 78u, (r1 + 86), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 23u, (r27 + 23));
    MemoryInline::WriteResolved8(guest_range_5, 79u, (r1 + 87), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 24u, (r27 + 24));
    MemoryInline::WriteResolved8(guest_range_5, 80u, (r1 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 25u, (r27 + 25));
    MemoryInline::WriteResolved8(guest_range_5, 81u, (r1 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 26u, (r27 + 26));
    MemoryInline::WriteResolved8(guest_range_5, 82u, (r1 + 90), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 27u, (r27 + 27));
    MemoryInline::WriteResolved8(guest_range_5, 83u, (r1 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 28u, (r27 + 28));
    MemoryInline::WriteResolved8(guest_range_5, 84u, (r1 + 92), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 29u, (r27 + 29));
    MemoryInline::WriteResolved8(guest_range_5, 85u, (r1 + 93), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 30u, (r27 + 30));
    MemoryInline::WriteResolved8(guest_range_5, 86u, (r1 + 94), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 31u, (r27 + 31));
    MemoryInline::WriteResolved8(guest_range_5, 87u, (r1 + 95), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_6, 32u, (r27 + 32));
    MemoryInline::WriteResolved32(guest_range_5, 88u, (r1 + 96), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 36u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 36u, (r27 + 36));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 40u, (r27 + 40));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 92u, (r1 + 100), r3);
        MemoryInline::WriteResolved32(guest_range_5, 96u, (r1 + 104), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 44u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 44u, (r27 + 44));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 48u, (r27 + 48));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 100u, (r1 + 108), r3);
        MemoryInline::WriteResolved32(guest_range_5, 104u, (r1 + 112), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_6, 52u, (r27 + 52));
    MemoryInline::WriteResolved32(guest_range_5, 108u, (r1 + 116), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_6, 56u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_6, 56u, (r27 + 56));
            r0 = MemoryInline::ReadResolved32(guest_range_6, 60u, (r27 + 60));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_5, 112u, (r1 + 120), r3);
        MemoryInline::WriteResolved32(guest_range_5, 116u, (r1 + 124), r0);
    }
    r0 = MemoryInline::ReadResolved8(guest_range_6, 64u, (r27 + 64));
    MemoryInline::WriteResolved8(guest_range_5, 120u, (r1 + 128), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 65u, (r27 + 65));
    MemoryInline::WriteResolved8(guest_range_5, 121u, (r1 + 129), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 66u, (r27 + 66));
    MemoryInline::WriteResolved8(guest_range_5, 122u, (r1 + 130), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_6, 67u, (r27 + 67));
    MemoryInline::WriteResolved8(guest_range_5, 123u, (r1 + 131), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 68u, (r27 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 124u, (r1 + 132), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 72u, (r27 + 72));
    r6 = r31;
    r3 = (r1 + 64);
    r4 = (r1 + 16);
    MemoryInline::WriteResolved32(guest_range_5, 128u, (r1 + 136), r0);
    r5 = (r1 + 8);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 76u, (r27 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 132u, (r1 + 140), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 80u, (r27 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 136u, (r1 + 144), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_6, 84u, (r27 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 140u, (r1 + 148), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 88u, (r27 + 88));
    MemoryInline::WriteResolved32(guest_range_5, 144u, (r1 + 152), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 92u, (r27 + 92));
    MemoryInline::WriteResolved32(guest_range_5, 148u, (r1 + 156), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_6, 96u, (r27 + 96));
    MemoryInline::WriteResolved32(guest_range_5, 152u, (r1 + 160), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_5, 100u, (r1 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_5, 104u, (r1 + 112), f1.d);
    }
    ctx->lr = 0x80506B88u;
    if constexpr (KnownRegArgsCpuCall<0x805052A8u>(&func_805052A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_805052A8_BE5E = func_805052A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_805052A8_BE5E);
        r4 = static_cast<uint32_t>(regargs_result_805052A8_BE5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x805052A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r3 = (r1 + 64);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r4 = 0;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x80506BA0u;
    if constexpr (KnownRegArgsCpuCall<0x80503BF8u>(&func_80503BF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_80503BF8_C7B4 = func_80503BF8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80503BF8_C7B4);
        r4 = static_cast<uint32_t>(regargs_result_80503BF8_C7B4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80503BF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 44), f0.d);
    goto loc_80506BBC;
}

loc_80506BB4:
{
    f0.d = MemoryInline::FlatReadFloat32(r28);
    MemoryInline::FlatWriteFloat32((r27 + 44), f0.d);
}

loc_80506BBC:
{
    r0 = MemoryInline::FlatRead32((r27 + 92));
    r0 = (r0 & 768);
}

loc_80506BC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(768))) {
        goto loc_80506BD8;
    }
}

loc_80506BCC:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    MemoryInline::FlatWriteFloat32((r27 + 48), f0.d);
    goto loc_80506BEC;
}

loc_80506BD8:
{
    r3 = r27;
    ctx->lr = 0x80506BE0u;
    if constexpr (KnownRegArgsCpuCall<0x80504814u>(&func_80504814)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_80504814_D322 = func_80504814_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80504814_D322);
        r4 = static_cast<uint32_t>(regargs_result_80504814_D322 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80504814u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 48), f0.d);
}

loc_80506BEC:
{
    f1.d = f31.d;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 380), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 36u, (r1 + 416));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 20u, (r1 + 400));
    r11 = (r1 + 400);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_7, 56u, (r1 + 436));
    ctx->lr = r0;
    r1 = (r1 + 432);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805064DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805064DC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x805064DC func_805064DC preserves=true fpr_mask=0x00000000

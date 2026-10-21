#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CBD80(CpuContext* ctx);
extern "C" uint64_t func_804CBD80_ra68_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804CBE80(CpuContext* ctx);
extern "C" uint64_t func_804CBE80_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_808232D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808232D0u);
    goto loc_808232D0;

loc_808232D0:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r11 = (r1 + 176);
    MemoryInline::FlatWriteRamFloat64((r1 + 240), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = MemoryInline::FlatRead32((r3 + 1116));
    r28 = 0x80840000u;
    r29 = 0x80840000u;
    r15 = r3;
}

loc_80823320:
{
    r28 = (r28 + 17656);
    r29 = (r29 + 21768);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8082333C;
    }
}

loc_8082332C:
{
    r5 = MemoryInline::FlatRead32((r3 + 1108));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1108), r0);
    goto loc_80823350;
}

loc_8082333C:
{
}

loc_80823340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80823350;
    }
}

loc_80823344:
{
    r5 = MemoryInline::FlatRead32((r3 + 1108));
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r3 + 1108), r0);
}

loc_80823350:
{
    r0 = MemoryInline::FlatRead32((r3 + 1108));
}

loc_80823358:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80823368;
    }
}

loc_8082335C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1108), r0);
    goto loc_80823378;
}

loc_80823368:
{
    r5 = MemoryInline::FlatRead32((r3 + 1112));
}

loc_80823370:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r5))) {
        goto loc_80823378;
    }
}

loc_80823374:
{
    MemoryInline::FlatWrite32((r3 + 1108), r5);
}

loc_80823378:
{
    f31.d = MemoryInline::FlatReadFloat32((r28 + 820));
    r27 = r4;
    f27.d = MemoryInline::FlatReadFloat32((r28 + 796));
    r26 = r15;
    f29.d = MemoryInline::FlatReadFloat32((r28 + 828));
    r25 = r4;
    f30.d = MemoryInline::FlatReadFloat32((r28 + 736));
    r24 = (r3 + 428);
    f28.d = MemoryInline::FlatReadFloat32((r28 + 824));
    r23 = (r3 + 1128);
    r21 = (r3 + 1320);
    r20 = (r29 + 2800);
    r17 = 0;
    r22 = 0;
    r30 = 1;
    r31 = 0;
    r14 = 0x80000000u;
}

loc_808233BC:
{
    r6 = MemoryInline::FlatRead32(r27);
}

loc_808233C4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80823978;
    }
}

loc_808233C8:
{
    r0 = MemoryInline::FlatRead8((r6 + 93));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_808233D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(-1))) {
        goto loc_80823508;
    }
}

loc_808233D8:
{
    r3 = 0x80870000u;
    r4 = MemoryInline::FlatRead32((r26 + 88));
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r0 = fctiwzword0;
}

loc_80823404:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_808234A0;
    }
}

loc_80823408:
{
}

loc_8082340C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80823418;
    }
}

loc_80823410:
{
}

loc_80823414:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(-7))) {
        goto loc_808234A8;
    }
}

loc_80823418:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_80823420:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80823430;
    }
}

loc_80823424:
{
    r0 = MemoryInline::FlatRead8((r6 + 92));
}

loc_8082342C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8082344C;
    }
}

loc_80823430:
{
    r0 = MemoryInline::FlatRead8((r6 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80823444;
    }
}

loc_8082343C:
{
    r5 = 1;
    goto loc_80823450;
}

loc_80823444:
{
    r5 = 0;
    goto loc_80823450;
}

loc_8082344C:
{
    r5 = 1;
}

loc_80823450:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    r4 = r25;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8081CA30u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80823468:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808234A8;
    }
}

loc_8082346C:
{
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 88));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8082348Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_808234A8;
}

loc_808234A0:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r26 + 88), r0);
}

loc_808234A8:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_808234B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_808234C4;
    }
}

loc_808234B4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_808234C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8082354C;
    }
}

loc_808234C4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead8((r3 + 94));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8082354C;
    }
}

loc_808234D4:
{
    r3 = r17;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804EF040u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead8((r4 + 93));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_808234F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-2))) {
        goto loc_8082354C;
    }
}

loc_808234F4:
{
}

loc_808234F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-2))) {
        goto loc_8082354C;
    }
}

loc_808234FC:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081CBE0 (7 guest instruction(s))
    r5 = 0x80840000u;
    r4 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17580));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17584));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    // end of inlined leaf 0x8081CBE0
    goto loc_8082354C;
}

loc_80823508:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081CBE0 (7 guest instruction(s))
    r5 = 0x80840000u;
    r4 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17580));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17584));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    // end of inlined leaf 0x8081CBE0
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_8082351C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8082354C;
    }
}

loc_80823520:
{
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 88));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80823540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_8082354C:
{
    r3 = (r15 + r17);
    r0 = MemoryInline::FlatRead8((r3 + 128));
}

loc_80823558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808237A4;
    }
}

loc_8082355C:
{
    MemoryInline::FlatWrite32((r15 + 136), r17);
    r4 = r24;
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r26 + 684));
    ctx->lr = 0x80823570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D190u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = 37;
    r5 = (r28 + 104);
    r3 = (r17 + 31);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_80823588:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80823590:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808235A4;
    }
}

loc_80823594:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8082359C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_808235A4;
    }
}

loc_808235A0:
{
    goto loc_808235D4;
}

loc_808235A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808235B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808235C4;
    }
}

loc_808235B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808235BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_808235C4;
    }
}

loc_808235C0:
{
    goto loc_808235D4;
}

loc_808235C4:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823588;
    }
}

loc_808235D0:
{
    r4 = -1;
}

loc_808235D4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r15 + r0);
    r16 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r16;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    MemoryInline::FlatWrite32((r16 + 20), r30);
    r5 = (r28 + 104);
    r3 = (r17 + 31);
    r4 = 0;
    ctr = r0;
}

loc_80823600:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80823608:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082361C;
    }
}

loc_8082360C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80823614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8082361C;
    }
}

loc_80823618:
{
    goto loc_8082364C;
}

loc_8082361C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80823628:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082363C;
    }
}

loc_8082362C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80823634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_8082363C;
    }
}

loc_80823638:
{
    goto loc_8082364C;
}

loc_8082363C:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823600;
    }
}

loc_80823648:
{
    r4 = -1;
}

loc_8082364C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r28 + 104);
    r4 = (r15 + r0);
    r3 = (r17 + 31);
    r4 = MemoryInline::FlatRead32((r4 + 752));
    r0 = 37;
    r5 = 0;
    MemoryInline::FlatWrite32((r4 + 20), r31);
    ctr = r0;
}

loc_80823670:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80823678:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082368C;
    }
}

loc_8082367C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80823684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_8082368C;
    }
}

loc_80823688:
{
    goto loc_808236BC;
}

loc_8082368C:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80823698:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808236AC;
    }
}

loc_8082369C:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_808236A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(15))) {
        goto loc_808236AC;
    }
}

loc_808236A8:
{
    goto loc_808236BC;
}

loc_808236AC:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823670;
    }
}

loc_808236B8:
{
    r5 = -1;
}

loc_808236BC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r15 + r0);
    r16 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r16;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl4_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x8081AA24;
    }
}

loc_inl4_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x8081AA28;
}

loc_inl4_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r16 + 20), r30);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r15 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808236E4:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808236F8;
    }
}

loc_808236E8:
{
    r4 = (r17 + 17);
    r3 = 5;
    ctr = r12;
    ctx->lr = 0x808236F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_808236F8:
{
}

loc_808236FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80823708;
    }
}

loc_80823700:
{
    r3 = (r17 + 17);
    ctx->lr = 0x80823708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_80823708:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    ctx->lr = 0x80823710u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CC10u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r26 + 684));
    ctx->lr = 0x80823718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r4 = MemoryInline::FlatRead32((r26 + 684));
    r3 = r23;
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r3 = r23;
    ctx->lr = 0x8082372Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804CBE80_5AA6 = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_5AA6);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_5AA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32((r14 + 248));
    r3 = 274857984;
    r6 = (r3 + 19923);
    r4 = 0x80820000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_5 & 1073741823);
    r3 = r23;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r7 = (r4 + 12384);
    r5 = 0;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_6 & 67108863);
    r6 = (r0 * 300);
    ctx->lr = 0x8082375Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_610B = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_610B);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_610B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r0 = (r17 + 2);
    r3 = r21;
    r4 = (r22 | r0);
    // inline leaf 0x804CC2B0 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 40), r4);
    // end of inlined leaf 0x804CC2B0
    r3 = r21;
    ctx->lr = 0x80823774u;
    if constexpr (KnownRegArgsCpuCall<0x804CBE80u>(&func_804CBE80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804CBE80_66BC = func_804CBE80_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804CBE80_66BC);
        r4 = static_cast<uint32_t>(regargs_result_804CBE80_66BC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804CBE80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r0 = MemoryInline::FlatRead32((r14 + 248));
    r3 = 274857984;
    r6 = (r3 + 19923);
    r4 = 0x80820000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_7 & 1073741823);
    r3 = r21;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r6) * static_cast<uint64_t>(r0)) >> 32));
    r7 = (r4 + 12144);
    r5 = 0;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_8 & 67108863);
    r6 = (r0 * 400);
    ctx->lr = 0x808237A4u;
    if constexpr (KnownRegArgsCpuCall<0x804CBD80u>(&func_804CBD80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_804CBD80_6D21 = func_804CBD80_ra68_0_18_0(ctx, r3, r5, r6);
        r3 = static_cast<uint32_t>(regargs_result_804CBD80_6D21);
        r4 = static_cast<uint32_t>(regargs_result_804CBD80_6D21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CBD80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
}

loc_808237A4:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead8((r3 + 93));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808237BC;
    }
}

loc_808237B4:
{
}

loc_808237B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-7))) {
        goto loc_80823958;
    }
}

loc_808237BC:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_808237C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_808237F0;
    }
}

loc_808237C8:
{
    r0 = MemoryInline::FlatRead8((r3 + 92));
}

loc_808237D0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_808237F0;
    }
}

loc_808237D4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f28.d);
    goto loc_8082382C;
}

loc_808237F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f1.d = (-(f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x80836A30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = PpcFmulsInline(f29.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
}

loc_8082382C:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80823838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808238AC;
    }
}

loc_8082383C:
{
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 100));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x8082385Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    r5 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r4 = MemoryInline::FlatRead32((r29 + 112));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80823894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
}

loc_808238AC:
{
    r0 = MemoryInline::FlatRead32((r15 + 124));
}

loc_808238B4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(100))) {
        goto loc_808238C4;
    }
}

loc_808238B8:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    r4 = r24;
    ctx->lr = 0x808238C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8081D190u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_808238C4:
{
    r3 = r15;
    r4 = r17;
    ctx->lr = 0x808238D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80823C30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_808238DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80823958;
    }
}

loc_808238E0:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081D0E0 (1 guest instruction(s))
    // end of inlined leaf 0x8081D0E0
    r4 = MemoryInline::FlatRead32((r15 + 568));
    r16 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x8082BE30 (27 guest instruction(s))
}

loc_inl8_0x8082BE30:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_inl8_0x8082BE38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl8_0x8082BE78;
    }
}

loc_inl8_0x8082BE3C:
{
    f4.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r5 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f3.d = (-(f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 18580));
    f0.d = (-(f1.d));
    f5.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f5.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f3.d);
    goto loc_inl8_cont_8082BE30;
}

loc_inl8_0x8082BE78:
{
    r5 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat32((r4 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18576));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 24));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f2.d);
}

loc_inl8_cont_8082BE30:
{
    // end of inlined leaf 0x8082BE30
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r5 = 1;
    f2.d = MemoryInline::FlatReadFloat32((r16 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r12 = MemoryInline::FlatRead32(r3);
    f2.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r16 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r12 = MemoryInline::FlatRead32((r12 + 60));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    r4 = MemoryInline::FlatRead32((r29 + 88));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    ctr = r12;
    ctx->lr = 0x80823938u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f30.d);
    MemoryInline::FlatWriteFloat32((r3 + 52), f30.d);
}

loc_80823958:
{
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081D250 (9 guest instruction(s))
}

loc_inl9_0x8081D250:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl9_0x8081D258:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_inl9_0x8081D264;
    }
}

loc_inl9_0x8081D25C:
{
    r3 = 0;
    goto loc_inl9_cont_8081D250;
}

loc_inl9_0x8081D264:
{
    r3 = 0x80870000u;
    r3 = (r3 + -32744);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl9_cont_8081D250:
{
    // end of inlined leaf 0x8081D250
}

loc_80823964:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80823B98;
    }
}

loc_80823968:
{
    r3 = r15;
    r4 = r17;
    ctx->lr = 0x80823974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80822B20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    goto loc_80823B98;
}

loc_80823978:
{
    r18 = (r15 + r17);
    r0 = MemoryInline::FlatRead8((r18 + 128));
}

loc_80823984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80823B1C;
    }
}

loc_80823988:
{
    r0 = 37;
    r5 = (r28 + 104);
    r3 = (r17 + 31);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_808239A0:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808239A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808239BC;
    }
}

loc_808239AC:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808239B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_808239BC;
    }
}

loc_808239B8:
{
    goto loc_808239EC;
}

loc_808239BC:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808239C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808239DC;
    }
}

loc_808239CC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808239D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_808239DC;
    }
}

loc_808239D8:
{
    goto loc_808239EC;
}

loc_808239DC:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808239A0;
    }
}

loc_808239E8:
{
    r4 = -1;
}

loc_808239EC:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r15 + r0);
    r16 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r16;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl10_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x8081AA24;
    }
}

loc_inl10_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x8081AA28;
}

loc_inl10_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    MemoryInline::FlatWrite32((r16 + 20), r30);
    r5 = (r28 + 104);
    r3 = (r17 + 31);
    r4 = 0;
    ctr = r0;
}

loc_80823A18:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80823A20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823A34;
    }
}

loc_80823A24:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80823A2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_80823A34;
    }
}

loc_80823A30:
{
    goto loc_80823A64;
}

loc_80823A34:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80823A40:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823A54;
    }
}

loc_80823A44:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80823A4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_80823A54;
    }
}

loc_80823A50:
{
    goto loc_80823A64;
}

loc_80823A54:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823A18;
    }
}

loc_80823A60:
{
    r4 = -1;
}

loc_80823A64:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r15 + r0);
    r16 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r16;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl11_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl11_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl11_0x8081AA24;
    }
}

loc_inl11_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl11_0x8081AA28;
}

loc_inl11_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl11_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl11_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r16 + 20), r30);
    r19 = r20;
    r16 = 0;
}

loc_80823A84:
{
    r3 = MemoryInline::FlatRead32((r15 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r19);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80823AA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r16 = (r16 + 1);
}

loc_80823AB0:
{
    r19 = (r19 + 4);
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(4))) {
        goto loc_80823A84;
    }
}

loc_80823AC0:
{
    r3 = MemoryInline::FlatRead32((r15 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 32));
}

loc_80823ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80823AFC;
    }
}

loc_80823AD0:
{
    r3 = MemoryInline::FlatRead32((r26 + 572));
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r29 + 88));
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80823AF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80823AFC:
{
    MemoryInline::FlatWrite32((r26 + 88), r31);
    MemoryInline::FlatWrite8((r18 + 128), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081CBE0 (7 guest instruction(s))
    r5 = 0x80840000u;
    r4 = 0x80840000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 17580));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17584));
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    // end of inlined leaf 0x8081CBE0
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081CBC0 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    // end of inlined leaf 0x8081CBC0
    r3 = MemoryInline::FlatRead32((r26 + 684));
    // inline leaf 0x8081CC20 (1 guest instruction(s))
    // end of inlined leaf 0x8081CC20
}

loc_80823B1C:
{
}

loc_80823B20:
{
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(0))) {
        goto loc_80823B68;
    }
}

loc_80823B24:
{
    r16 = 0;
}

loc_80823B28:
{
    r3 = MemoryInline::FlatRead32((r15 + 592));
    r4 = r16;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 764));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80823B58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
    r16 = (r16 + 1);
}

loc_80823B60:
{
    if ((static_cast<int32_t>(r16) < static_cast<int32_t>(8))) {
        goto loc_80823B28;
    }
}

loc_80823B64:
{
    goto loc_80823B98;
}

loc_80823B68:
{
    r3 = MemoryInline::FlatRead32((r15 + 592));
    r4 = r17;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 764));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = f1.d;
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80823B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    ctr = ctx->ctr;
}

loc_80823B98:
{
    r17 = (r17 + 1);
    r22 = (r22 + 65536);
}

loc_80823BA4:
{
    r21 = (r21 + 48);
    r20 = (r20 + 16);
    r27 = (r27 + 16);
    r26 = (r26 + 4);
    r25 = (r25 + 16);
    r24 = (r24 + 24);
    r23 = (r23 + 48);
    if ((static_cast<int32_t>(r17) < static_cast<int32_t>(4))) {
        goto loc_808233BC;
    }
}

loc_80823BC4:
{
    r3 = MemoryInline::FlatRead32((r15 + 124));
}

loc_80823BCC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(100))) {
        goto loc_80823BDC;
    }
}

loc_80823BD0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r15 + 124), r0);
    goto loc_80823BE4;
}

loc_80823BDC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r15 + 124), r0);
}

loc_80823BE4:
{
    r11 = (r1 + 176);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 240));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 224));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 260));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808232D0 func_808232D0 preserves=true fpr_mask=0x00000000

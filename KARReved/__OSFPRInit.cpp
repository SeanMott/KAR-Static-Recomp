//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void __OSFPRInit(PPC::Runtime::GCContext* context)
{
/*803D2348 003CF148*/ PPC::Runtime::ASM::mfmsr(context->r3);
/*803D234C 003CF14C*/ PPC::Runtime::ASM::ori(context->r3, context->r3, 0x2000);
/*803D2350 003CF150*/ PPC::Runtime::ASM::mtmsr(context->r3);
/*803D2354 003CF154*/ PPC::Runtime::ASM::mfspr(context->r3, context->HID2);
/* 803D2358 003CF158  54 63 1F FF */ extrwi. context->r3 , context->r3 , 1 , 2
/*803D235C 003CF15C*/ PPC::Runtime::ASM::beq(.L_803D23E8);
/*803D2360 003CF160*/ PPC::Runtime::ASM::lis(context->r3, ZeroPS_805DDE80 @ Get_MemoryOffset_HighBit);
/*803D2364 003CF164*/ PPC::Runtime::ASM::addi(context->r3, context->r3, ZeroPS_805DDE80 @ Get_MemoryOffset_LowBit);
/*803D2368 003CF168*/ PPC::Runtime::ASM::psq_l(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3)0, context->qr0);
/* 803D236C 003CF16C  10 20 00 90 */ ps_mr context->f1 , context->f0
/* 803D2370 003CF170  10 40 00 90 */ ps_mr context->f2 , context->f0
/* 803D2374 003CF174  10 60 00 90 */ ps_mr context->f3 , context->f0
/* 803D2378 003CF178  10 80 00 90 */ ps_mr context->f4 , context->f0
/* 803D237C 003CF17C  10 A0 00 90 */ ps_mr context->f5 , context->f0
/* 803D2380 003CF180  10 C0 00 90 */ ps_mr context->f6 , context->f0
/* 803D2384 003CF184  10 E0 00 90 */ ps_mr context->f7 , context->f0
/* 803D2388 003CF188  11 00 00 90 */ ps_mr context->f8 , context->f0
/* 803D238C 003CF18C  11 20 00 90 */ ps_mr context->f9 , context->f0
/* 803D2390 003CF190  11 40 00 90 */ ps_mr context->f10 , context->f0
/* 803D2394 003CF194  11 60 00 90 */ ps_mr context->f11 , context->f0
/* 803D2398 003CF198  11 80 00 90 */ ps_mr context->f12 , context->f0
/* 803D239C 003CF19C  11 A0 00 90 */ ps_mr context->f13 , context->f0
/* 803D23A0 003CF1A0  11 C0 00 90 */ ps_mr context->f14 , context->f0
/* 803D23A4 003CF1A4  11 E0 00 90 */ ps_mr context->f15 , context->f0
/* 803D23A8 003CF1A8  12 00 00 90 */ ps_mr context->f16 , context->f0
/* 803D23AC 003CF1AC  12 20 00 90 */ ps_mr context->f17 , context->f0
/* 803D23B0 003CF1B0  12 40 00 90 */ ps_mr context->f18 , context->f0
/* 803D23B4 003CF1B4  12 60 00 90 */ ps_mr context->f19 , context->f0
/* 803D23B8 003CF1B8  12 80 00 90 */ ps_mr context->f20 , context->f0
/* 803D23BC 003CF1BC  12 A0 00 90 */ ps_mr context->f21 , context->f0
/* 803D23C0 003CF1C0  12 C0 00 90 */ ps_mr context->f22 , context->f0
/* 803D23C4 003CF1C4  12 E0 00 90 */ ps_mr context->f23 , context->f0
/* 803D23C8 003CF1C8  13 00 00 90 */ ps_mr context->f24 , context->f0
/* 803D23CC 003CF1CC  13 20 00 90 */ ps_mr context->f25 , context->f0
/* 803D23D0 003CF1D0  13 40 00 90 */ ps_mr context->f26 , context->f0
/* 803D23D4 003CF1D4  13 60 00 90 */ ps_mr context->f27 , context->f0
/* 803D23D8 003CF1D8  13 80 00 90 */ ps_mr context->f28 , context->f0
/* 803D23DC 003CF1DC  13 A0 00 90 */ ps_mr context->f29 , context->f0
/* 803D23E0 003CF1E0  13 C0 00 90 */ ps_mr context->f30 , context->f0
/* 803D23E4 003CF1E4  13 E0 00 90 */ ps_mr context->f31 , context->f0
RUNTIME_PPC_JUMP_LABEL(.L_803D23E8, 0x803D23E8) //this is a jump label
/*803D23E8 003CF1E8*/ PPC::Runtime::ASM::lfd(context->f0, ZeroF_805DDE78 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D23EC 003CF1EC*/ PPC::Runtime::ASM::fmr(context->f1, context->f0);
/*803D23F0 003CF1F0*/ PPC::Runtime::ASM::fmr(context->f2, context->f0);
/*803D23F4 003CF1F4*/ PPC::Runtime::ASM::fmr(context->f3, context->f0);
/*803D23F8 003CF1F8*/ PPC::Runtime::ASM::fmr(context->f4, context->f0);
/*803D23FC 003CF1FC*/ PPC::Runtime::ASM::fmr(context->f5, context->f0);
/*803D2400 003CF200*/ PPC::Runtime::ASM::fmr(context->f6, context->f0);
/*803D2404 003CF204*/ PPC::Runtime::ASM::fmr(context->f7, context->f0);
/*803D2408 003CF208*/ PPC::Runtime::ASM::fmr(context->f8, context->f0);
/*803D240C 003CF20C*/ PPC::Runtime::ASM::fmr(context->f9, context->f0);
/*803D2410 003CF210*/ PPC::Runtime::ASM::fmr(context->f10, context->f0);
/*803D2414 003CF214*/ PPC::Runtime::ASM::fmr(context->f11, context->f0);
/*803D2418 003CF218*/ PPC::Runtime::ASM::fmr(context->f12, context->f0);
/*803D241C 003CF21C*/ PPC::Runtime::ASM::fmr(context->f13, context->f0);
/*803D2420 003CF220*/ PPC::Runtime::ASM::fmr(context->f14, context->f0);
/*803D2424 003CF224*/ PPC::Runtime::ASM::fmr(context->f15, context->f0);
/*803D2428 003CF228*/ PPC::Runtime::ASM::fmr(context->f16, context->f0);
/*803D242C 003CF22C*/ PPC::Runtime::ASM::fmr(context->f17, context->f0);
/*803D2430 003CF230*/ PPC::Runtime::ASM::fmr(context->f18, context->f0);
/*803D2434 003CF234*/ PPC::Runtime::ASM::fmr(context->f19, context->f0);
/*803D2438 003CF238*/ PPC::Runtime::ASM::fmr(context->f20, context->f0);
/*803D243C 003CF23C*/ PPC::Runtime::ASM::fmr(context->f21, context->f0);
/*803D2440 003CF240*/ PPC::Runtime::ASM::fmr(context->f22, context->f0);
/*803D2444 003CF244*/ PPC::Runtime::ASM::fmr(context->f23, context->f0);
/*803D2448 003CF248*/ PPC::Runtime::ASM::fmr(context->f24, context->f0);
/*803D244C 003CF24C*/ PPC::Runtime::ASM::fmr(context->f25, context->f0);
/*803D2450 003CF250*/ PPC::Runtime::ASM::fmr(context->f26, context->f0);
/*803D2454 003CF254*/ PPC::Runtime::ASM::fmr(context->f27, context->f0);
/*803D2458 003CF258*/ PPC::Runtime::ASM::fmr(context->f28, context->f0);
/*803D245C 003CF25C*/ PPC::Runtime::ASM::fmr(context->f29, context->f0);
/*803D2460 003CF260*/ PPC::Runtime::ASM::fmr(context->f30, context->f0);
/*803D2464 003CF264*/ PPC::Runtime::ASM::fmr(context->f31, context->f0);
/*803D2468 003CF268*/ PPC::Runtime::ASM::mtfsf(255, context->f0);
/*803D246C 003CF26C*/ PPC::Runtime::ASM::blr();
}
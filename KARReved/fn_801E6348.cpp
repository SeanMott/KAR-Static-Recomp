//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80246CD0.hpp"
#include "fn_801D5CA0.hpp"
#include "fn_801D5E34.hpp"



void fn_801E6348(PPC::Runtime::GCContext* context)
{
/*801E6348 001E3148*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*801E634C 001E314C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E6350 001E3150*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E6354 001E3154*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E6358 001E3158*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801E635C 001E315C*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E6360 001E3160*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E6364 001E3164*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E6368 001E3168*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc3a, context->r3));
/*801E636C 001E316C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/* 801E6370 001E3170  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E6374 001E3174*/ PPC::Runtime::ASM::bne(.L_801E6440);
/*801E6378 001E3178*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801E637C 001E317C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*801E6380 001E3180*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6f8, context->r31));
/*801E6384 001E3184*/ PPC::Runtime::ASM::bl(fn_80246CD0);
/*801E6388 001E3188*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*801E638C 001E318C*/ PPC::Runtime::ASM::lfs(context->f30, STRUCT_FLOAT_COUNT_1805E1E10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E6390 001E3190*/ PPC::Runtime::ASM::fcmpu(cr0, context->f31, context->f30);
/*801E6394 001E3194*/ PPC::Runtime::ASM::beq(.L_801E6404);
/*801E6398 001E3198*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x354);
/*801E639C 001E319C*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801E63A0 001E31A0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1E14 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E63A4 001E31A4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801E63A8 001E31A8*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*801E63AC 001E31AC*/ PPC::Runtime::ASM::bne(.L_801E6404);
/*801E63B0 001E31B0*/ PPC::Runtime::ASM::lfs(context->f6, STRUCT_FLOAT_COUNT_1805E1E00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E63B4 001E31B4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E63B8 001E31B8*/ PPC::Runtime::ASM::fdivs(context->f8, context->f6, context->f1);
/*801E63BC 001E31BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x358, context->r31));
/*801E63C0 001E31C0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x354, context->r31));
/*801E63C4 001E31C4*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35c, context->r31));
/*801E63C8 001E31C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E63CC 001E31CC*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801E63D0 001E31D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f8);
/*801E63D4 001E31D4*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801E63D8 001E31D8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f3, context->f8);
/*801E63DC 001E31DC*/ PPC::Runtime::ASM::lfs(context->f7, STRUCT_FLOAT_COUNT_1805E1E18 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E63E0 001E31E0*/ PPC::Runtime::ASM::fmuls(context->f5, context->f5, context->f8);
/*801E63E4 001E31E4*/ PPC::Runtime::ASM::lfs(context->f8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r3));
/*801E63E8 001E31E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801E63EC 001E31EC*/ PPC::Runtime::ASM::fmadds(context->f0, context->f3, context->f2, context->f0);
/*801E63F0 001E31F0*/ PPC::Runtime::ASM::fmadds(context->f0, context->f5, context->f4, context->f0);
/*801E63F4 001E31F4*/ PPC::Runtime::ASM::fadds(context->f0, context->f6, context->f0);
/*801E63F8 001E31F8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f7, context->f0);
/*801E63FC 001E31FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f31, context->f0);
/*801E6400 001E3200*/ PPC::Runtime::ASM::fmuls(context->f30, context->f8, context->f0);
RUNTIME_PPC_JUMP_LABEL(.L_801E6404, 0x801E6404) //this is a jump label
/*801E6404 001E3204*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1E10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E6408 001E3208*/ PPC::Runtime::ASM::fcmpu(cr0, context->f30, context->f1);
/*801E640C 001E320C*/ PPC::Runtime::ASM::beq(.L_801E6430);
/*801E6410 001E3210*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r31));
/*801E6414 001E3214*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801E6418 001E3218*/ PPC::Runtime::ASM::bne(.L_801E643C);
/*801E641C 001E321C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E6420 001E3220*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*801E6424 001E3224*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E6428 001E3228*/ PPC::Runtime::ASM::bl(fn_801D5CA0);
/*801E642C 001E322C*/ PPC::Runtime::ASM::b(.L_801E643C);
RUNTIME_PPC_JUMP_LABEL(.L_801E6430, 0x801E6430) //this is a jump label
/*801E6430 001E3230*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E6434 001E3234*/ PPC::Runtime::ASM::li(context->r4, 0x19);
/*801E6438 001E3238*/ PPC::Runtime::ASM::bl(fn_801D5E34);
RUNTIME_PPC_JUMP_LABEL(.L_801E643C, 0x801E643C) //this is a jump label
/*801E643C 001E323C*/ PPC::Runtime::ASM::stfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x944, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E6440, 0x801E6440) //this is a jump label
/*801E6440 001E3240*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*801E6444 001E3244*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*801E6448 001E3248*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801E644C 001E324C*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801E6450 001E3250*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*801E6454 001E3254*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801E6458 001E3258*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E645C 001E325C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*801E6460 001E3260*/ PPC::Runtime::ASM::blr();
}
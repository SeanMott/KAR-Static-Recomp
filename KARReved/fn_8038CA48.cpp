//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8038CA48(PPC::Runtime::GCContext* context)
{
/*8038CA48 00389848*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 8038CA4C 0038984C  55 00 FF 7F */ extrwi. context->r0 , context->r8 , 3 , 28
/*8038CA50 00389850*/ PPC::Runtime::ASM::bne(.L_8038CB20);
/*8038CA54 00389854*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/* 8038CA58 00389858  54 A0 06 3F */ clrlwi. context->r0 , context->r5 , 24
/*8038CA5C 0038985C*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r8, 30, 2, 29);
/*8038CA60 00389860*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r7, 30, 0, 1);
/*8038CA64 00389864*/ PPC::Runtime::ASM::subf(context->r7, context->r4, context->r5);
/*8038CA68 00389868*/ PPC::Runtime::ASM::beq(.L_8038CA70);
/*8038CA6C 0038986C*/ PPC::Runtime::ASM::clrrwi(context->r7, context->r7, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8038CA70, 0x8038CA70) //this is a jump label
/*8038CA70 00389870*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x8);
/*8038CA74 00389874*/ PPC::Runtime::ASM::cmplw(context->r0, context->r7);
/*8038CA78 00389878*/ PPC::Runtime::ASM::bgt(.L_8038CB20);
/*8038CA7C 0038987C*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r7);
/*8038CA80 00389880*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x20);
/*8038CA84 00389884*/ PPC::Runtime::ASM::blt(.L_8038CB04);
/* 8038CA88 00389888  34 87 FF F8 */ subic. context->r4 , context->r7 , 0x8
/*8038CA8C 0038988C*/ PPC::Runtime::ASM::beq(.L_8038CB18);
/*8038CA90 00389890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038CA94 00389894*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 0, 29);
/*8038CA98 00389898*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8038CA9C 0038989C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038CAA0 003898A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038CAA4 003898A4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 30, 31);
/*8038CAA8 003898A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8038CAAC 003898AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CAB0 003898B0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r5, 2, 0, 27);
/*8038CAB4 003898B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CAB8 003898B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CABC 003898BC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r6, 1, 28, 30);
/*8038CAC0 003898C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CAC4 003898C4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CAC8 003898C8*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*8038CACC 003898CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*8038CAD0 003898D0*/ PPC::Runtime::ASM::beq(.L_8038CAEC);
/*8038CAD4 003898D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038CAD8 003898D8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 30, 31);
/*8038CADC 003898DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8038CAE0 003898E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038CAE4 003898E4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 2, 0, 27);
/*8038CAE8 003898E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8038CAEC, 0x8038CAEC) //this is a jump label
/*8038CAEC 003898EC*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*8038CAF0 003898F0*/ PPC::Runtime::ASM::beq(.L_8038CB18);
/*8038CAF4 003898F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038CAF8 003898F8*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 0, 29);
/*8038CAFC 003898FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8038CB00 00389900*/ PPC::Runtime::ASM::b(.L_8038CB18);
RUNTIME_PPC_JUMP_LABEL(.L_8038CB04, 0x8038CB04) //this is a jump label
/*8038CB04 00389904*/ PPC::Runtime::ASM::rlwimi(context->r8, context->r6, 1, 28, 30);
/*8038CB08 00389908*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038CB0C 0038990C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8038CB10 00389910*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*8038CB14 00389914*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_8038CB18, 0x8038CB18) //this is a jump label
/*8038CB18 00389918*/ PPC::Runtime::ASM::mr(context->r3, context->r7);
/*8038CB1C 0038991C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8038CB20, 0x8038CB20) //this is a jump label
/*8038CB20 00389920*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8038CB24 00389924*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8005E108(PPC::Runtime::GCContext* context)
{
/*8005E108 0005AF08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8005E10C 0005AF0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8005E110 0005AF10*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*8005E114 0005AF14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E118 0005AF18*/ PPC::Runtime::ASM::bne(.L_8005E124);
/*8005E11C 0005AF1C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8005E120 0005AF20*/ PPC::Runtime::ASM::b(.L_8005E138);
RUNTIME_PPC_JUMP_LABEL(.L_8005E124, 0x8005E124) //this is a jump label
/* 8005E124 0005AF24  54 60 00 01 */ clrrwi. context->r0 , context->r3 , 31
/*8005E128 0005AF28*/ PPC::Runtime::ASM::beq(.L_8005E134);
/*8005E12C 0005AF2C*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8005E130 0005AF30*/ PPC::Runtime::ASM::b(.L_8005E138);
RUNTIME_PPC_JUMP_LABEL(.L_8005E134, 0x8005E134) //this is a jump label
/*8005E134 0005AF34*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8005E138, 0x8005E138) //this is a jump label
/*8005E138 0005AF38*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8005E13C 0005AF3C*/ PPC::Runtime::ASM::bne(.L_8005E148);
/*8005E140 0005AF40*/ PPC::Runtime::ASM::bl(fn_80443CDC);
/*8005E144 0005AF44*/ PPC::Runtime::ASM::b(.L_8005E174);
RUNTIME_PPC_JUMP_LABEL(.L_8005E148, 0x8005E148) //this is a jump label
/*8005E148 0005AF48*/ PPC::Runtime::ASM::extrwi(context->r0, context->r3, 27, 1);
/*8005E14C 0005AF4C*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_HighBit);
/*8005E150 0005AF50*/ PPC::Runtime::ASM::mulli(context->r5, context->r0, 0xb8);
/*8005E154 0005AF54*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r3, 28, 4);
/*8005E158 0005AF58*/ PPC::Runtime::ASM::addi(context->r3, context->r4, STRUCT_BYTE4_COUNT_180538088 @ Get_MemoryOffset_LowBit);
/*8005E15C 0005AF5C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r5);
/*8005E160 0005AF60*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8005E164 0005AF64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x394, context->r3));
/*8005E168 0005AF68*/ PPC::Runtime::ASM::neg(context->r0, context->r3);
/*8005E16C 0005AF6C*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r3);
/*8005E170 0005AF70*/ PPC::Runtime::ASM::srwi(context->r3, context->r0, 31);
RUNTIME_PPC_JUMP_LABEL(.L_8005E174, 0x8005E174) //this is a jump label
/*8005E174 0005AF74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8005E178 0005AF78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8005E17C 0005AF7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8005E180 0005AF80*/ PPC::Runtime::ASM::blr();
}
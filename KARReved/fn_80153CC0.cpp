//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80153CC0(PPC::Runtime::GCContext* context)
{
/*80153CC0 00150AC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80153CC4 00150AC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80153CC8 00150AC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80153CCC 00150ACC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153CD0 00150AD0*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*80153CD4 00150AD4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80153CD8 00150AD8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80153CDC 00150ADC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80153CE0, 0x80153CE0) //this is a jump label
/*80153CE0 00150AE0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80153CE4 00150AE4*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*80153CE8 00150AE8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80153CEC 00150AEC*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80153CF0 00150AF0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r30));
/*80153CF4 00150AF4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80153CF8 00150AF8*/ PPC::Runtime::ASM::beq(.L_80153D04);
/*80153CFC 00150AFC*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80153D00 00150B00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80153D04, 0x80153D04) //this is a jump label
/*80153D04 00150B04*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80153D08 00150B08*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80153D0C 00150B0C*/ PPC::Runtime::ASM::blt(.L_80153CE0);
/*80153D10 00150B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80153D14 00150B14*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80153D18 00150B18*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80153D1C 00150B1C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80153D20 00150B20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80153D24 00150B24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80153D28 00150B28*/ PPC::Runtime::ASM::blr();
}
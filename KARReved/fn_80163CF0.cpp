//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_80163CF0(PPC::Runtime::GCContext* context)
{
/*80163CF0 00160AF0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80163CF4 00160AF4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80163CF8 00160AF8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163CFC 00160AFC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80163D00 00160B00*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x998, context->r3));
/*80163D04 00160B04*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80163D08 00160B08*/ PPC::Runtime::ASM::beq(.L_80163D10);
/*80163D0C 00160B0C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80163D10, 0x80163D10) //this is a jump label
/*80163D10 00160B10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80163D14 00160B14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80163D18 00160B18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80163D1C 00160B1C*/ PPC::Runtime::ASM::blr();
}
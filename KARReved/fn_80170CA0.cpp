//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80170CA0(PPC::Runtime::GCContext* context)
{
/*80170CA0 0016DAA0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80170CA4 0016DAA4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80170CA8 0016DAA8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170CAC 0016DAAC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170CB0 0016DAB0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80170CB4 0016DAB4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80170CB8 0016DAB8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc40, context->r3));
/*80170CBC 0016DABC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80170CC0 0016DAC0*/ PPC::Runtime::ASM::beq(.L_80170CD0);
/*80170CC4 0016DAC4*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80170CC8 0016DAC8*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80170CCC 0016DACC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc40, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80170CD0, 0x80170CD0) //this is a jump label
/*80170CD0 0016DAD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80170CD4 0016DAD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80170CD8 0016DAD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80170CDC 0016DADC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80170CE0 0016DAE0*/ PPC::Runtime::ASM::blr();
}
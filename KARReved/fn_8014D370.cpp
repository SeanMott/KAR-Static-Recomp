//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_8014D370(PPC::Runtime::GCContext* context)
{
/*8014D370 0014A170*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014D374 0014A174*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014D378 0014A178*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D37C 0014A17C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014D380 0014A180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x444, context->r3));
/*8014D384 0014A184*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8014D388 0014A188*/ PPC::Runtime::ASM::beq(.L_8014D390);
/*8014D38C 0014A18C*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_8014D390, 0x8014D390) //this is a jump label
/*8014D390 0014A190*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014D394 0014A194*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014D398 0014A198*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014D39C 0014A19C*/ PPC::Runtime::ASM::blr();
}
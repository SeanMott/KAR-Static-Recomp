//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80151368(PPC::Runtime::GCContext* context)
{
/*80151368 0014E168*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8015136C 0014E16C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80151370 0014E170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80151374 0014E174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80151378 0014E178*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8015137C 0014E17C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80151380 0014E180*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r3));
/*80151384 0014E184*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80151388 0014E188*/ PPC::Runtime::ASM::beq(.L_80151398);
/*8015138C 0014E18C*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80151390 0014E190*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80151394 0014E194*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80151398, 0x80151398) //this is a jump label
/*80151398 0014E198*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8015139C 0014E19C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801513A0 0014E1A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801513A4 0014E1A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801513A8 0014E1A8*/ PPC::Runtime::ASM::blr();
}
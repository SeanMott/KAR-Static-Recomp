//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138AB0.hpp"



void fn_80185328(PPC::Runtime::GCContext* context)
{
/*80185328 00182128*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8018532C 0018212C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80185330 00182130*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80185334 00182134*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80185338 00182138*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1190, context->r3));
/*8018533C 0018213C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80185340 00182140*/ PPC::Runtime::ASM::beq(.L_80185348);
/*80185344 00182144*/ PPC::Runtime::ASM::bl(fn_80138AB0);
RUNTIME_PPC_JUMP_LABEL(.L_80185348, 0x80185348) //this is a jump label
/*80185348 00182148*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8018534C 0018214C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80185350 00182150*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80185354 00182154*/ PPC::Runtime::ASM::blr();
}
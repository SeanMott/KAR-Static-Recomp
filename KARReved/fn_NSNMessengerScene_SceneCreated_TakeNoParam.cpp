//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_NSNMessengerScene_SceneCreated_TakeNoParam(PPC::Runtime::GCContext* context)
{
/*803462D8 003430D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803462DC 003430DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803462E0 003430E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803462E4 003430E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803462E8 003430E8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803462EC 003430EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803462F0 003430F0*/ PPC::Runtime::ASM::bctrl();
/*803462F4 003430F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803462F8 003430F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803462FC 003430FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80346300 00343100*/ PPC::Runtime::ASM::blr();
}
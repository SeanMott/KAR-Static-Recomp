//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GameInfoManager_GetNumRounds_TakeNoParams(PPC::Runtime::GCContext* context)
{
/*802D9EC0 002D6CC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802D9EC4 002D6CC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*802D9EC8 002D6CC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*802D9ECC 002D6CCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D9ED0 002D6CD0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802D9ED4 002D6CD4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r12));
/*802D9ED8 002D6CD8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*802D9EDC 002D6CDC*/ PPC::Runtime::ASM::bctrl();
/*802D9EE0 002D6CE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802D9EE4 002D6CE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802D9EE8 002D6CE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802D9EEC 002D6CEC*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FC3C.hpp"



void fn_801AB370(PPC::Runtime::GCContext* context)
{
/*801AB370 001A8170*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801AB374 001A8174*/ PPC::Runtime::ASM::mflr(context->r0);
/*801AB378 001A8178*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB37C 001A817C*/ PPC::Runtime::ASM::bl(fn_8019FC3C);
/*801AB380 001A8180*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801AB384 001A8184*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801AB388 001A8188*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801AB38C 001A818C*/ PPC::Runtime::ASM::blr();
}
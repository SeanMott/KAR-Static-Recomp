//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80172934.hpp"
#include "fn_80170CE4.hpp"
#include "fn_801757D4.hpp"



void fn_80137E5C(PPC::Runtime::GCContext* context)
{
/*80137E5C 00134C5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137E60 00134C60*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137E64 00134C64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137E68 00134C68*/ PPC::Runtime::ASM::bl(fn_80172934);
/*80137E6C 00134C6C*/ PPC::Runtime::ASM::bl(fn_80170CE4);
/*80137E70 00134C70*/ PPC::Runtime::ASM::bl(fn_801757D4);
/*80137E74 00134C74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137E78 00134C78*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137E7C 00134C7C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137E80 00134C80*/ PPC::Runtime::ASM::blr();
}
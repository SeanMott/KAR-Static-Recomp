//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80205F60.hpp"



void fn_80218320(PPC::Runtime::GCContext* context)
{
/*80218320 00215120*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80218324 00215124*/ PPC::Runtime::ASM::mflr(context->r0);
/*80218328 00215128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021832C 0021512C*/ PPC::Runtime::ASM::bl(fn_80205F60);
/*80218330 00215130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218334 00215134*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218338 00215138*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021833C 0021513C*/ PPC::Runtime::ASM::blr();
}
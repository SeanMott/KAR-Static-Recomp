//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DE0E4.hpp"



void fn_802FD8E8(PPC::Runtime::GCContext* context)
{
/*802FD8E8 002FA6E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FD8EC 002FA6EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FD8F0 002FA6F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD8F4 002FA6F4*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802FD8F8 002FA6F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802FD8FC 002FA6FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2114, context->r3));
/*802FD900 002FA700*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FD904 002FA704*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FD908 002FA708*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE1E0.hpp"



void fn_80218164(PPC::Runtime::GCContext* context)
{
/*80218164 00214F64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80218168 00214F68*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021816C 00214F6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218170 00214F70*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r3));
/*80218174 00214F74*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80218178 00214F78*/ PPC::Runtime::ASM::bl(fn_801FE1E0);
/*8021817C 00214F7C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80218180 00214F80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80218184 00214F84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80218188 00214F88*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019970C.hpp"
#include "fn_80198568.hpp"



void fn_80192B24(PPC::Runtime::GCContext* context)
{
/*80192B24 0018F924*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80192B28 0018F928*/ PPC::Runtime::ASM::mflr(context->r0);
/*80192B2C 0018F92C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192B30 0018F930*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192B34 0018F934*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80192B38 0018F938*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80192B3C 0018F93C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192B40 0018F940*/ PPC::Runtime::ASM::bl(fn_8019970C);
/*80192B44 0018F944*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80192B48 0018F948*/ PPC::Runtime::ASM::bl(fn_80198568);
/*80192B4C 0018F94C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80192B50 0018F950*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80192B54 0018F954*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80192B58 0018F958*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80192B5C 0018F95C*/ PPC::Runtime::ASM::blr();
}
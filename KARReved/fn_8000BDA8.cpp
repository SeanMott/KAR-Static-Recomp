//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8000BDA8(PPC::Runtime::GCContext* context)
{
/*8000BDA8 00008BA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000BDAC 00008BAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000BDB0 00008BB0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000BDB4 00008BB4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000BDB8 00008BB8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8000BDBC 00008BBC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000BDC0 00008BC0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8000BDC4 00008BC4*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000BDC8 00008BC8*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*8000BDCC 00008BCC*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x9);
/*8000BDD0 00008BD0*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0xd20);
/*8000BDD4 00008BD4*/ PPC::Runtime::ASM::stbx(context->r31, context->r3, context->r0);
/*8000BDD8 00008BD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000BDDC 00008BDC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8000BDE0 00008BE0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000BDE4 00008BE4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000BDE8 00008BE8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000BDEC 00008BEC*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250E54.hpp"
#include "fn_80250978.hpp"
#include "fn_802557A8.hpp"



void fn_80261670(PPC::Runtime::GCContext* context)
{
/*80261670 0025E470*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80261674 0025E474*/ PPC::Runtime::ASM::mflr(context->r0);
/*80261678 0025E478*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8026167C 0025E47C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80261680 0025E480*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80261684 0025E484*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80261688 0025E488*/ PPC::Runtime::ASM::bl(fn_80250E54);
/*8026168C 0025E48C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80261690 0025E490*/ PPC::Runtime::ASM::bl(fn_80250978);
/*80261694 0025E494*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80261698 0025E498*/ PPC::Runtime::ASM::bl(fn_802557A8);
/*8026169C 0025E49C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802616A0 0025E4A0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802616A4 0025E4A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802616A8 0025E4A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802616AC 0025E4AC*/ PPC::Runtime::ASM::blr();
}
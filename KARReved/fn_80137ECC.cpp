//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80175934.hpp"
#include "fn_801758CC.hpp"



void fn_80137ECC(PPC::Runtime::GCContext* context)
{
/*80137ECC 00134CCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80137ED0 00134CD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80137ED4 00134CD4*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*80137ED8 00134CD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137EDC 00134CDC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80137EE0 00134CE0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80137EE4 00134CE4*/ PPC::Runtime::ASM::bl(fn_80175934);
/*80137EE8 00134CE8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80137EEC 00134CEC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80137EF0 00134CF0*/ PPC::Runtime::ASM::bl(fn_801758CC);
/*80137EF4 00134CF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80137EF8 00134CF8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80137EFC 00134CFC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80137F00 00134D00*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80137F04 00134D04*/ PPC::Runtime::ASM::blr();
}
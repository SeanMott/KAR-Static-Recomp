//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8015676C.hpp"
#include "fn_801587B4.hpp"



void fn_80134EB0(PPC::Runtime::GCContext* context)
{
/*80134EB0 00131CB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80134EB4 00131CB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80134EB8 00131CB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134EBC 00131CBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80134EC0 00131CC0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80134EC4 00131CC4*/ PPC::Runtime::ASM::bl(fn_8015676C);
/*80134EC8 00131CC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80134ECC 00131CCC*/ PPC::Runtime::ASM::bl(fn_801587B4);
/*80134ED0 00131CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80134ED4 00131CD4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80134ED8 00131CD8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80134EDC 00131CDC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80134EE0 00131CE0*/ PPC::Runtime::ASM::blr();
}
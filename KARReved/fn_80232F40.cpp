//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80062CA4.hpp"
#include "fn_80062DD0.hpp"
#include "fn_80062DD0.hpp"



void fn_80232F40(PPC::Runtime::GCContext* context)
{
/*80232F40 0022FD40*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80232F44 0022FD44*/ PPC::Runtime::ASM::mflr(context->r0);
/*80232F48 0022FD48*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232F4C 0022FD4C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80232F50 0022FD50*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*80232F54 0022FD54*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80232F58 0022FD58*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80232F5C 0022FD5C*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
/*80232F60 0022FD60*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x5c);
/*80232F64 0022FD64*/ PPC::Runtime::ASM::bl(fn_80062CA4);
/*80232F68 0022FD68*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80232F6C 0022FD6C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c);
/*80232F70 0022FD70*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x68);
/*80232F74 0022FD74*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80232F78 0022FD78*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x68);
/*80232F7C 0022FD7C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x5c);
/*80232F80 0022FD80*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x50);
/*80232F84 0022FD84*/ PPC::Runtime::ASM::bl(fn_80062DD0);
/*80232F88 0022FD88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80232F8C 0022FD8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80232F90 0022FD90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80232F94 0022FD94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80232F98 0022FD98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80232F9C 0022FD9C*/ PPC::Runtime::ASM::blr();
}
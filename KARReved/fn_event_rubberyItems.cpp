//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800EE6CC.hpp"
#include "fn_800EE6C4.hpp"
#include "fn_8025421C.hpp"
#include "fn_800ED800.hpp"
#include "fn_800EE660.hpp"



void fn_event_rubberyItems(PPC::Runtime::GCContext* context)
{
/*80111C64 0010EA64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80111C68 0010EA68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80111C6C 0010EA6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111C70 0010EA70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111C74 0010EA74*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111C78 0010EA78*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80111C7C 0010EA7C*/ PPC::Runtime::ASM::bl(fn_800EE6CC);
/*80111C80 0010EA80*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80111C84 0010EA84*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111C88 0010EA88*/ PPC::Runtime::ASM::bl(fn_800EE6C4);
/*80111C8C 0010EA8C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r31);
/*80111C90 0010EA90*/ PPC::Runtime::ASM::blt(.L_80111CA8);
/*80111C94 0010EA94*/ PPC::Runtime::ASM::bl(fn_8025421C);
/*80111C98 0010EA98*/ PPC::Runtime::ASM::li(context->r3, 0xd);
/*80111C9C 0010EA9C*/ PPC::Runtime::ASM::bl(fn_800ED800);
/*80111CA0 0010EAA0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80111CA4 0010EAA4*/ PPC::Runtime::ASM::bl(fn_800EE660);
RUNTIME_PPC_JUMP_LABEL(.L_80111CA8, 0x80111CA8) //this is a jump label
/*80111CA8 0010EAA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80111CAC 0010EAAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80111CB0 0010EAB0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80111CB4 0010EAB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80111CB8 0010EAB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80111CBC 0010EABC*/ PPC::Runtime::ASM::blr();
}
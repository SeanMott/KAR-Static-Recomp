//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022D248.hpp"



void fn_80231160(PPC::Runtime::GCContext* context)
{
/*80231160 0022DF60*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80231164 0022DF64*/ PPC::Runtime::ASM::mflr(context->r0);
/*80231168 0022DF68*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x5);
/*8023116C 0022DF6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80231170 0022DF70*/ PPC::Runtime::ASM::beq(.L_80231188);
/*80231174 0022DF74*/ PPC::Runtime::ASM::bl(fn_8022D248);
/*80231178 0022DF78*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r3));
/*8023117C 0022DF7C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80231180 0022DF80*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 0, 31, 31);
/*80231184 0022DF84*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84c, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80231188, 0x80231188) //this is a jump label
/*80231188 0022DF88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8023118C 0022DF8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80231190 0022DF90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80231194 0022DF94*/ PPC::Runtime::ASM::blr();
}
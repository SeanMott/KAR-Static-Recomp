//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FA748.hpp"
#include "fn_801FABD0.hpp"



void fn_801FAB40(PPC::Runtime::GCContext* context)
{
/*801FAB40 001F7940*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FAB44 001F7944*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FAB48 001F7948*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FAB4C 001F794C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FAB50 001F7950*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FAB54 001F7954*/ PPC::Runtime::ASM::bl(fn_801FA748);
/*801FAB58 001F7958*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FAB5C 001F795C*/ PPC::Runtime::ASM::beq(.L_801FAB70);
/*801FAB60 001F7960*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FAB64 001F7964*/ PPC::Runtime::ASM::bl(fn_801FABD0);
/*801FAB68 001F7968*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FAB6C 001F796C*/ PPC::Runtime::ASM::b(.L_801FAB74);
RUNTIME_PPC_JUMP_LABEL(.L_801FAB70, 0x801FAB70) //this is a jump label
/*801FAB70 001F7970*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801FAB74, 0x801FAB74) //this is a jump label
/*801FAB74 001F7974*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FAB78 001F7978*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FAB7C 001F797C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FAB80 001F7980*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FAB84 001F7984*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF72C.hpp"
#include "fn_801FBF2C.hpp"



void fn_8021C4C4(PPC::Runtime::GCContext* context)
{
/*8021C4C4 002192C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8021C4C8 002192C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8021C4CC 002192CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021C4D0 002192D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021C4D4 002192D4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8021C4D8 002192D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8021C4DC 002192DC*/ PPC::Runtime::ASM::bl(fn_801FF72C);
/*8021C4E0 002192E0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021C4E4 002192E4*/ PPC::Runtime::ASM::beq(.L_8021C4F0);
/*8021C4E8 002192E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8021C4EC 002192EC*/ PPC::Runtime::ASM::bl(fn_801FBF2C);
RUNTIME_PPC_JUMP_LABEL(.L_8021C4F0, 0x8021C4F0) //this is a jump label
/*8021C4F0 002192F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021C4F4 002192F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8021C4F8 002192F8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8021C4FC 002192FC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021C500 00219300*/ PPC::Runtime::ASM::blr();
}
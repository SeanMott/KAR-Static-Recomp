//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801566B4(PPC::Runtime::GCContext* context)
{
/*801566B4 001534B4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801566B8 001534B8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801566BC 001534BC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801566C0 001534C0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801566C4 001534C4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801566C8 001534C8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801566CC 001534CC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801566D0 001534D0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801566D4 001534D4*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*801566D8 001534D8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801566DC 001534DC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801566E0 001534E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6ac, context->r3));
/*801566E4 001534E4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801566E8 001534E8*/ PPC::Runtime::ASM::beq(.L_801566F4);
/*801566EC 001534EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801566F0 001534F0*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_801566F4, 0x801566F4) //this is a jump label
/*801566F4 001534F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801566F8 001534F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801566FC 001534FC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80156700 00153500*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80156704 00153504*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80156708 00153508*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80208008.hpp"
#include "fn_80210140.hpp"



void fn_802100F4(PPC::Runtime::GCContext* context)
{
/*802100F4 0020CEF4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802100F8 0020CEF8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802100FC 0020CEFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210100 0020CF00*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80210104 0020CF04*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80210108 0020CF08*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*8021010C 0020CF0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80210110 0020CF10*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*80210114 0020CF14*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80210118 0020CF18*/ PPC::Runtime::ASM::bl(fn_80208008);
/*8021011C 0020CF1C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80210120 0020CF20*/ PPC::Runtime::ASM::beq(.L_8021012C);
/*80210124 0020CF24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80210128 0020CF28*/ PPC::Runtime::ASM::bl(fn_80210140);
RUNTIME_PPC_JUMP_LABEL(.L_8021012C, 0x8021012C) //this is a jump label
/*8021012C 0020CF2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80210130 0020CF30*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80210134 0020CF34*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80210138 0020CF38*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8021013C 0020CF3C*/ PPC::Runtime::ASM::blr();
}
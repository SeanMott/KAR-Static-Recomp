//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FF754.hpp"
#include "fn_801FED74.hpp"
#include "fn_80208008.hpp"
#include "fn_802162BC.hpp"



void fn_80216270(PPC::Runtime::GCContext* context)
{
/*80216270 00213070*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80216274 00213074*/ PPC::Runtime::ASM::mflr(context->r0);
/*80216278 00213078*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021627C 0021307C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80216280 00213080*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80216284 00213084*/ PPC::Runtime::ASM::bl(fn_801FF754);
/*80216288 00213088*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8021628C 0021308C*/ PPC::Runtime::ASM::bl(fn_801FED74);
/*80216290 00213090*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80216294 00213094*/ PPC::Runtime::ASM::bl(fn_80208008);
/*80216298 00213098*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8021629C 0021309C*/ PPC::Runtime::ASM::beq(.L_802162A8);
/*802162A0 002130A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802162A4 002130A4*/ PPC::Runtime::ASM::bl(fn_802162BC);
RUNTIME_PPC_JUMP_LABEL(.L_802162A8, 0x802162A8) //this is a jump label
/*802162A8 002130A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802162AC 002130AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802162B0 002130B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802162B4 002130B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802162B8 002130B8*/ PPC::Runtime::ASM::blr();
}
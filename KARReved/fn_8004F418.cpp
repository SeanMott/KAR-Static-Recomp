//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8005E5D0.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_menuGetNextMenuID.hpp"
#include "fn_80008220.hpp"



void fn_8004F418(PPC::Runtime::GCContext* context)
{
/*8004F418 0004C218*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004F41C 0004C21C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004F420 0004C220*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004F424 0004C224*/ PPC::Runtime::ASM::bl(fn_8005E5D0);
/*8004F428 0004C228*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*8004F42C 0004C22C*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8004F430 0004C230*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xc);
/*8004F434 0004C234*/ PPC::Runtime::ASM::bne(.L_8004F444);
/*8004F438 0004C238*/ PPC::Runtime::ASM::li(context->r3, 0x10);
/*8004F43C 0004C23C*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*8004F440 0004C240*/ PPC::Runtime::ASM::bl(fn_80008220);
RUNTIME_PPC_JUMP_LABEL(.L_8004F444, 0x8004F444) //this is a jump label
/*8004F444 0004C244*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004F448 0004C248*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004F44C 0004C24C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004F450 0004C250*/ PPC::Runtime::ASM::blr();
}
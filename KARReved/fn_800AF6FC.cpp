//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_menuGetNextMenuID.hpp"
#include "fn_80049168.hpp"
#include "fn_800064F0.hpp"
#include "fn_80008220.hpp"



void fn_800AF6FC(PPC::Runtime::GCContext* context)
{
/*800AF6FC 000AC4FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800AF700 000AC500*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF704 000AC504*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AF708 000AC508*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF70C 000AC50C*/ PPC::Runtime::ASM::bne(.L_800AF728);
/*800AF710 000AC510*/ PPC::Runtime::ASM::li(context->r3, 0x9);
/*800AF714 000AC514*/ PPC::Runtime::ASM::bl(fn_menuGetNextMenuID);
/*800AF718 000AC518*/ PPC::Runtime::ASM::li(context->r3, 0x4);
/*800AF71C 000AC51C*/ PPC::Runtime::ASM::bl(fn_80049168);
/*800AF720 000AC520*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*800AF724 000AC524*/ PPC::Runtime::ASM::bl(fn_80008220);
RUNTIME_PPC_JUMP_LABEL(.L_800AF728, 0x800AF728) //this is a jump label
/*800AF728 000AC528*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF72C 000AC52C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF730 000AC530*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF734 000AC534*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800AF738 000AC538*/ PPC::Runtime::ASM::blr();
}
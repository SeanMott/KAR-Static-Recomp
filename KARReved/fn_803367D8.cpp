//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80337848.hpp"
#include "fn_8033A40C.hpp"
#include "fn_80338DEC.hpp"



void fn_803367D8(PPC::Runtime::GCContext* context)
{
/*803367D8 003335D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803367DC 003335DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803367E0 003335E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803367E4 003335E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803367E8 003335E8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*803367EC 003335EC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803367F0 003335F0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803367F4 003335F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*803367F8 003335F8*/ PPC::Runtime::ASM::bl(fn_80337848);
/*803367FC 003335FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r30));
/*80336800 00333600*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80336804 00333604*/ PPC::Runtime::ASM::bl(fn_8033A40C);
/*80336808 00333608*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r30));
/*8033680C 0033360C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80336810 00333610*/ PPC::Runtime::ASM::bl(fn_80338DEC);
/*80336814 00333614*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80336818 00333618*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8033681C 0033361C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80336820 00333620*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80336824 00333624*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80336828 00333628*/ PPC::Runtime::ASM::blr();
}
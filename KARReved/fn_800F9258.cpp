//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F4B20.hpp"
#include "fn_800F91C8.hpp"
#include "fn_800F92A0.hpp"



void fn_800F9258(PPC::Runtime::GCContext* context)
{
/*800F9258 000F6058*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F925C 000F605C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F9260 000F6060*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*800F9264 000F6064*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800F9268 000F6068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F926C 000F606C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F9270 000F6070*/ PPC::Runtime::ASM::bl(fn_800F4B20);
/*800F9274 000F6074*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800F9278 000F6078*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F927C 000F607C*/ PPC::Runtime::ASM::bl(fn_800F91C8);
/*800F9280 000F6080*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F9284 000F6084*/ PPC::Runtime::ASM::bl(fn_800F92A0);
/*800F9288 000F6088*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F928C 000F608C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F9290 000F6090*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F9294 000F6094*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F9298 000F6098*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F929C 000F609C*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028BFB0(PPC::Runtime::GCContext* context)
{
/*8028BFB0 00288DB0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028BFB4 00288DB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028BFB8 00288DB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028BFBC 00288DBC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028BFC0 00288DC0*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028BFC4 00288DC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028BFC8 00288DC8  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028BFCC 00288DCC*/ PPC::Runtime::ASM::beq(.L_8028BFF4);
/*8028BFD0 00288DD0*/ PPC::Runtime::ASM::beq(.L_8028BFE4);
/*8028BFD4 00288DD4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8028BFD8 00288DD8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8028BFDC 00288DDC*/ PPC::Runtime::ASM::beq(.L_8028BFE4);
/*8028BFE0 00288DE0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028BFE4, 0x8028BFE4) //this is a jump label
/*8028BFE4 00288DE4*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028BFE8 00288DE8*/ PPC::Runtime::ASM::ble(.L_8028BFF4);
/*8028BFEC 00288DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028BFF0 00288DF0*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028BFF4, 0x8028BFF4) //this is a jump label
/*8028BFF4 00288DF4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028BFF8 00288DF8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028BFFC 00288DFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028C000 00288E00*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028C004 00288E04*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028C008 00288E08*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028C00C 00288E0C*/ PPC::Runtime::ASM::blr();
}
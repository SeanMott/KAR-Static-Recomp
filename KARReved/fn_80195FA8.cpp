//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019BFB4.hpp"



void fn_80195FA8(PPC::Runtime::GCContext* context)
{
/*80195FA8 00192DA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80195FAC 00192DAC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80195FB0 00192DB0*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*80195FB4 00192DB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80195FB8 00192DB8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x390, context->r3));
/*80195FBC 00192DBC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r5));
/*80195FC0 00192DC0*/ PPC::Runtime::ASM::beq(.L_80195FE8);
/*80195FC4 00192DC4*/ PPC::Runtime::ASM::bge(.L_80195FD4);
/*80195FC8 00192DC8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80195FCC 00192DCC*/ PPC::Runtime::ASM::bge(.L_80195FE0);
/*80195FD0 00192DD0*/ PPC::Runtime::ASM::b(.L_80195FF4);
RUNTIME_PPC_JUMP_LABEL(.L_80195FD4, 0x80195FD4) //this is a jump label
/*80195FD4 00192DD4*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x3);
/*80195FD8 00192DD8*/ PPC::Runtime::ASM::bge(.L_80195FF4);
/*80195FDC 00192DDC*/ PPC::Runtime::ASM::b(.L_80195FF0);
RUNTIME_PPC_JUMP_LABEL(.L_80195FE0, 0x80195FE0) //this is a jump label
/*80195FE0 00192DE0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80195FE4 00192DE4*/ PPC::Runtime::ASM::b(.L_80195FF4);
RUNTIME_PPC_JUMP_LABEL(.L_80195FE8, 0x80195FE8) //this is a jump label
/*80195FE8 00192DE8*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80195FEC 00192DEC*/ PPC::Runtime::ASM::b(.L_80195FF4);
RUNTIME_PPC_JUMP_LABEL(.L_80195FF0, 0x80195FF0) //this is a jump label
/*80195FF0 00192DF0*/ PPC::Runtime::ASM::li(context->r4, 0x2);
RUNTIME_PPC_JUMP_LABEL(.L_80195FF4, 0x80195FF4) //this is a jump label
/*80195FF4 00192DF4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80195FF8 00192DF8*/ PPC::Runtime::ASM::bl(fn_8019BFB4);
/*80195FFC 00192DFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80196000 00192E00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80196004 00192E04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80196008 00192E08*/ PPC::Runtime::ASM::blr();
}
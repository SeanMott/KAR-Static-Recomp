//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E230.hpp"



void fn_8004BF84(PPC::Runtime::GCContext* context)
{
/*8004BF84 00048D84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004BF88 00048D88*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004BF8C 00048D8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BF90 00048D90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BF94 00048D94*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BF98, 0x8004BF98) //this is a jump label
/*8004BF98 00048D98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BF9C 00048D9C*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BFA0 00048DA0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BFA4 00048DA4*/ PPC::Runtime::ASM::bne(.L_8004BFC0);
/*8004BFA8 00048DA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BFAC 00048DAC*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004BFB0 00048DB0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BFB4 00048DB4*/ PPC::Runtime::ASM::beq(.L_8004BFC0);
/*8004BFB8 00048DB8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004BFBC 00048DBC*/ PPC::Runtime::ASM::b(.L_8004BFD0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BFC0, 0x8004BFC0) //this is a jump label
/*8004BFC0 00048DC0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BFC4 00048DC4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BFC8 00048DC8*/ PPC::Runtime::ASM::blt(.L_8004BF98);
/*8004BFCC 00048DCC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BFD0, 0x8004BFD0) //this is a jump label
/*8004BFD0 00048DD0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004BFD4 00048DD4*/ PPC::Runtime::ASM::beq(.L_8004C020);
/*8004BFD8 00048DD8*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BFDC, 0x8004BFDC) //this is a jump label
/*8004BFDC 00048DDC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BFE0 00048DE0*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BFE4 00048DE4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BFE8 00048DE8*/ PPC::Runtime::ASM::bne(.L_8004C014);
/*8004BFEC 00048DEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BFF0 00048DF0*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004BFF4 00048DF4*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BFF8 00048DF8*/ PPC::Runtime::ASM::bne(.L_8004C014);
/*8004BFFC 00048DFC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004C000 00048E00*/ PPC::Runtime::ASM::bl(fn_8022E230);
/*8004C004 00048E04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004C008 00048E08*/ PPC::Runtime::ASM::beq(.L_8004C014);
/*8004C00C 00048E0C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004C010 00048E10*/ PPC::Runtime::ASM::b(.L_8004C024);
RUNTIME_PPC_JUMP_LABEL(.L_8004C014, 0x8004C014) //this is a jump label
/*8004C014 00048E14*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004C018 00048E18*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004C01C 00048E1C*/ PPC::Runtime::ASM::blt(.L_8004BFDC);
RUNTIME_PPC_JUMP_LABEL(.L_8004C020, 0x8004C020) //this is a jump label
/*8004C020 00048E20*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004C024, 0x8004C024) //this is a jump label
/*8004C024 00048E24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004C028 00048E28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004C02C 00048E2C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004C030 00048E30*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004C034 00048E34*/ PPC::Runtime::ASM::blr();
}
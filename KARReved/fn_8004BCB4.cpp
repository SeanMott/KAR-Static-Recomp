//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_plGetPlayerKind.hpp"
#include "fn_8000979C.hpp"
#include "fn_plGetPlayerKind.hpp"
#include "fn_80009534.hpp"
#include "fn_8022E48C.hpp"



void fn_8004BCB4(PPC::Runtime::GCContext* context)
{
/*8004BCB4 00048AB4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8004BCB8 00048AB8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8004BCBC 00048ABC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BCC0 00048AC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BCC4 00048AC4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BCC8, 0x8004BCC8) //this is a jump label
/*8004BCC8 00048AC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BCCC 00048ACC*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BCD0 00048AD0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BCD4 00048AD4*/ PPC::Runtime::ASM::bne(.L_8004BCF0);
/*8004BCD8 00048AD8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BCDC 00048ADC*/ PPC::Runtime::ASM::bl(fn_8000979C);
/*8004BCE0 00048AE0*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BCE4 00048AE4*/ PPC::Runtime::ASM::beq(.L_8004BCF0);
/*8004BCE8 00048AE8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8004BCEC 00048AEC*/ PPC::Runtime::ASM::b(.L_8004BD00);
RUNTIME_PPC_JUMP_LABEL(.L_8004BCF0, 0x8004BCF0) //this is a jump label
/*8004BCF0 00048AF0*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BCF4 00048AF4*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BCF8 00048AF8*/ PPC::Runtime::ASM::blt(.L_8004BCC8);
/*8004BCFC 00048AFC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BD00, 0x8004BD00) //this is a jump label
/*8004BD00 00048B00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8004BD04 00048B04*/ PPC::Runtime::ASM::beq(.L_8004BD50);
/*8004BD08 00048B08*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BD0C, 0x8004BD0C) //this is a jump label
/*8004BD0C 00048B0C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BD10 00048B10*/ PPC::Runtime::ASM::bl(fn_plGetPlayerKind);
/*8004BD14 00048B14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8004BD18 00048B18*/ PPC::Runtime::ASM::bne(.L_8004BD44);
/*8004BD1C 00048B1C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BD20 00048B20*/ PPC::Runtime::ASM::bl(fn_80009534);
/*8004BD24 00048B24*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*8004BD28 00048B28*/ PPC::Runtime::ASM::bne(.L_8004BD44);
/*8004BD2C 00048B2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8004BD30 00048B30*/ PPC::Runtime::ASM::bl(fn_8022E48C);
/*8004BD34 00048B34*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x3);
/*8004BD38 00048B38*/ PPC::Runtime::ASM::blt(.L_8004BD44);
/*8004BD3C 00048B3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*8004BD40 00048B40*/ PPC::Runtime::ASM::b(.L_8004BD54);
RUNTIME_PPC_JUMP_LABEL(.L_8004BD44, 0x8004BD44) //this is a jump label
/*8004BD44 00048B44*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8004BD48 00048B48*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*8004BD4C 00048B4C*/ PPC::Runtime::ASM::blt(.L_8004BD0C);
RUNTIME_PPC_JUMP_LABEL(.L_8004BD50, 0x8004BD50) //this is a jump label
/*8004BD50 00048B50*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8004BD54, 0x8004BD54) //this is a jump label
/*8004BD54 00048B54*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8004BD58 00048B58*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8004BD5C 00048B5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8004BD60 00048B60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8004BD64 00048B64*/ PPC::Runtime::ASM::blr();
}
//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112B20.hpp"



void fn_8011586C(PPC::Runtime::GCContext* context)
{
/*8011586C 0011266C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80115870 00112670*/ PPC::Runtime::ASM::mflr(context->r0);
/*80115874 00112674*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80115878 00112678*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8011587C 0011267C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80115880 00112680*/ PPC::Runtime::ASM::bl(fn_80112B20);
/*80115884 00112684*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115888 00112688*/ PPC::Runtime::ASM::beq(.L_801158AC);
/*8011588C 0011268C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80115890 00112690*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*80115894 00112694*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115898 00112698*/ PPC::Runtime::ASM::beq(.L_801158AC);
/*8011589C 0011269C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801158A0 001126A0*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*801158A4 001126A4*/ PPC::Runtime::ASM::bl(fn_8042A0B4);
/*801158A8 001126A8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_801158AC, 0x801158AC) //this is a jump label
/*801158AC 001126AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801158B0 001126B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801158B4 001126B4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801158B8 001126B8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801158BC 001126BC*/ PPC::Runtime::ASM::blr();
}